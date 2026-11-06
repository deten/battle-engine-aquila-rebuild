// Stale-stack hunt (BEA_POISON=<addr>,<lo>,<hi>,<pattern>, all hex): at every
// entry to the original function at <addr> the stack below the caller's
// return address, [esp-hi, esp-lo), is filled with the dword <pattern> before
// the original runs.  Original code reads stack slots it never writes (the w
// of a 4-vector, 0x4f3ac0); what it reads is whatever ran at that depth
// before, and ports change that (NOTES A1-24).  If a level plays out
// differently with the fill, a read of leftovers below <addr> matters;
// halving [lo, hi) finds the slot.  hi == lo installs the hook without
// filling (the control run).  The stub uses no stack of its own, so the hook
// alone changes nothing.  The port at <addr> must be off
// (bea_hook_disable<n>.txt).  Dev tool, 2026-10-30.
//
// BEA_WATCH=<addr>,<off> (hex): who touches the stack dword at [entry esp -
// off] while the original at <addr> runs?  Two debug registers watch it (one
// for any access, one for writes); the exception handler tables the
// instructions, and for each call the first access: a read there is a read of
// leftovers.  The registers are set from the outcome watcher's thread once the
// first call has shown the thread (and the entry esp, unless BEA_WATCH's
// third field names it; calls entered at another esp are not watched).  The log's "watch:" lines
// give the instruction after the access (a data breakpoint traps after it).
#include "bea/hooks.h"
#include "MinHook.h"
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

extern "C" {
uint32_t g_ph_tramp __asm__("g_ph_tramp") = 0;
uint32_t g_ph_lo __asm__("g_ph_lo") = 0;
uint32_t g_ph_count __asm__("g_ph_count") = 0;
uint32_t g_ph_pat __asm__("g_ph_pat") = 0;
uint32_t g_ph_eax __asm__("g_ph_eax"), g_ph_ecx __asm__("g_ph_ecx"), g_ph_edi __asm__("g_ph_edi");
uint32_t g_ph_calls __asm__("g_ph_calls") = 0;
uint32_t g_ph_esp0 __asm__("g_ph_esp0") = 0;       // the entry esp of the first call
uint32_t g_ph_espdiff __asm__("g_ph_espdiff") = 0; // calls entered at another esp
uint32_t g_ph_esplast __asm__("g_ph_esplast") = 0; // the last such esp
}

extern "C" {
uint32_t g_w_tramp __asm__("g_w_tramp") = 0;
uint32_t g_w_eax __asm__("g_w_eax"), g_w_jmp __asm__("g_w_jmp");
uint32_t g_w_calls __asm__("g_w_calls") = 0;
uint32_t g_w_esp0 __asm__("g_w_esp0") = 0;
uint32_t g_w_tid __asm__("g_w_tid") = 0;
uint32_t g_w_espdiff __asm__("g_w_espdiff") = 0;
volatile uint32_t g_w_depth __asm__("g_w_depth") = 0;
uint32_t g_w_ret[16] __asm__("g_w_ret");
uint32_t g_w_entry[16] __asm__("g_w_entry");
volatile uint32_t g_w_fresh __asm__("g_w_fresh") = 0;
uint32_t g_w_ecx __asm__("g_w_ecx"), g_w_edx __asm__("g_w_edx"), g_w_sp __asm__("g_w_sp");
uint32_t g_w_stacktop __asm__("g_w_stacktop") = 0;
}

namespace {
uint32_t g_addr = 0;
uint32_t g_waddr = 0, g_woff = 0, g_wtarget = 0;
bool g_armed = false;
struct Hit { uint32_t eip, first_read, first_write, reads, writes; uint32_t val[4]; };
Hit g_hits[64];
int g_nhits = 0;
uint32_t g_outside = 0, g_arm_failed = 0;

// the debug registers are set for each outermost call and cleared after it,
// from a private stack (a call on the real one would overwrite the leftovers
// under watch).  Left armed all the time (the first version, set from the
// watcher thread), the game died at its next file read: WOW64's 64-bit code
// reads the 32-bit stack and trapped where no handler of ours runs.
uint8_t g_w_stack[0x4000] __attribute__((aligned(16)));

extern "C" void watch_arm() __asm__("watch_arm");
extern "C" void watch_arm()
{
    if (g_w_depth != 1) return;
    if (!g_w_esp0) g_w_esp0 = g_w_entry[0];
    if (g_w_entry[0] != g_w_esp0) { ++g_w_espdiff; return; }
    g_wtarget = g_w_esp0 - g_woff;
    CONTEXT c = {};
    c.ContextFlags = CONTEXT_DEBUG_REGISTERS;
    c.Dr0 = c.Dr1 = g_wtarget;
    // L0 + L1; DR0 read/write (11) 4 bytes (11); DR1 write (01) 4 bytes (11)
    c.Dr7 = 1 | 4 | (3u << 16) | (3u << 18) | (1u << 20) | (3u << 22);
    if (SetThreadContext(GetCurrentThread(), &c)) g_armed = true;
    else ++g_arm_failed;
}

extern "C" void watch_disarm() __asm__("watch_disarm");
extern "C" void watch_disarm()
{
    if (g_w_depth != 1 || !g_armed) return;
    CONTEXT c = {};
    c.ContextFlags = CONTEXT_DEBUG_REGISTERS;
    SetThreadContext(GetCurrentThread(), &c);
    g_armed = false;
}

__attribute__((naked)) void watch_stub()
{
    __asm__ volatile(
        "movl %eax, g_w_eax\n\t"
        "movl %ecx, g_w_ecx\n\t"
        "movl %edx, g_w_edx\n\t"
        "incl g_w_calls\n\t"
        "movl g_w_depth, %eax\n\t"
        "cmpl $15, %eax\n\t"
        "ja 3f\n\t"
        "movl %esp, g_w_entry(,%eax,4)\n\t"
        "popl g_w_ret(,%eax,4)\n\t"
        "incl g_w_depth\n\t"
        "movl $1, g_w_fresh\n\t"
        "movl %esp, g_w_sp\n\t"
        "movl g_w_stacktop, %esp\n\t"
        "call watch_arm\n\t"
        "movl g_w_sp, %esp\n\t"
        "movl g_w_eax, %eax\n\t"
        "movl g_w_ecx, %ecx\n\t"
        "movl g_w_edx, %edx\n\t"
        "call *g_w_tramp\n\t"     // the return address lands where the caller's was
        "movl %eax, g_w_eax\n\t"
        "movl %edx, g_w_edx\n\t"
        "movl %esp, g_w_sp\n\t"
        "movl g_w_stacktop, %esp\n\t"
        "call watch_disarm\n\t"
        "movl g_w_sp, %esp\n\t"
        "decl g_w_depth\n\t"
        "movl g_w_depth, %eax\n\t"
        "movl g_w_ret(,%eax,4), %eax\n\t"
        "movl %eax, g_w_jmp\n\t"
        "movl g_w_eax, %eax\n\t"
        "movl g_w_edx, %edx\n\t"
        "jmp *g_w_jmp\n"
        "3:\n\t"
        "movl g_w_eax, %eax\n\t"
        "jmp *g_w_tramp\n\t");
}

LONG WINAPI watch_veh(EXCEPTION_POINTERS* ep)
{
    if (ep->ExceptionRecord->ExceptionCode != EXCEPTION_SINGLE_STEP) return EXCEPTION_CONTINUE_SEARCH;
    // a 32-bit process under WOW64 sees no Dr6 here (the first version returned
    // CONTINUE_SEARCH and the game died at the first trap): every single step
    // is the watch's, and the log's instruction addresses tell reads from
    // writes (the access is the instruction before the address)
    if (!g_armed) return EXCEPTION_CONTINUE_SEARCH;
    CONTEXT* c = ep->ContextRecord;
    DWORD dr6 = c->Dr6;
    c->Dr6 = 0;
    uint32_t d = g_w_depth;
    if (d == 0 || d > 16 || g_w_entry[0] != g_w_esp0) { ++g_outside; return EXCEPTION_CONTINUE_EXECUTION; }
    bool write = (dr6 & 3) == 3;
    uint32_t eip = c->Eip;
    int i = 0;
    while (i < g_nhits && g_hits[i].eip != eip) ++i;
    if (i == g_nhits) {
        if (g_nhits == 64) return EXCEPTION_CONTINUE_EXECUTION;
        g_hits[g_nhits++] = Hit{eip, 0, 0, 0, 0, {0, 0, 0, 0}};
    }
    Hit& h = g_hits[i];
    if (g_w_fresh) {
        g_w_fresh = 0;
        if (write) ++h.first_write;
        else
            ++h.first_read;     // (reading the slot here would trap again, without end)
    }
    if (write) ++h.writes; else ++h.reads;
    return EXCEPTION_CONTINUE_EXECUTION;
}

__attribute__((naked)) void poison_stub()
{
    __asm__ volatile(
        "movl %eax, g_ph_eax\n\t"
        "movl %ecx, g_ph_ecx\n\t"
        "movl %edi, g_ph_edi\n\t"
        "incl g_ph_calls\n\t"
        "cmpl $0, g_ph_esp0\n\t"
        "jne 1f\n\t"
        "movl %esp, g_ph_esp0\n"
        "1:\n\t"
        "cmpl g_ph_esp0, %esp\n\t"
        "je 2f\n\t"
        "incl g_ph_espdiff\n\t"
        "movl %esp, g_ph_esplast\n"
        "2:\n\t"
        "leal -4(%esp), %edi\n\t"     // the top dword of the region: esp - lo - 4
        "subl g_ph_lo, %edi\n\t"
        "movl g_ph_count, %ecx\n\t"
        "movl g_ph_pat, %eax\n\t"
        "std\n\t"                     // downward: the stack's guard page is met in order
        "rep stosl\n\t"
        "cld\n\t"
        "movl g_ph_edi, %edi\n\t"
        "movl g_ph_ecx, %ecx\n\t"
        "movl g_ph_eax, %eax\n\t"
        "jmp *g_ph_tramp\n\t");
}
}

// BEA_CONTACTS=1: log what CUnit::vslot39 (0x4fcc30) is given when its contact
// list holds exactly 2 contacts.  Its normal sum always takes 3 (`mov ecx, 2`
// after the first), so the third is whatever the stack held there (the
// stale read of level 800, found with BEA_POISON + BEA_WATCH on 2026-10-30).
// The port at 0x4fcc30 must be off.
extern "C" {
uint32_t g_ct_tramp __asm__("g_ct_tramp") = 0;
uint32_t g_ct_eax __asm__("g_ct_eax"), g_ct_ecx __asm__("g_ct_ecx"), g_ct_edx __asm__("g_ct_edx");
uint32_t g_ct_sp __asm__("g_ct_sp"), g_ct_stacktop __asm__("g_ct_stacktop") = 0;
}
namespace {
uint8_t g_ct_stack[0x4000] __attribute__((aligned(16)));
int g_ct_lines = 0;
struct CtRec { uint32_t clock, ret, list, esp, v[12]; };
CtRec g_ct_rec[400];
uint32_t g_ct_calls = 0, g_ct_two = 0;
}
extern "C" void contacts_log() __asm__("contacts_log");
extern "C" void contacts_log()
{
    ++g_ct_calls;
    const uint32_t* sp = reinterpret_cast<const uint32_t*>(g_ct_sp);   // [0] return address, [1] param_1, [2] param_2
    const uint8_t* unit = reinterpret_cast<const uint8_t*>(sp[1]);
    const float* c = reinterpret_cast<const float*>(sp[2]);
    if (!c || !unit) return;
    int n = *reinterpret_cast<const int*>(c + 0x20);
    if (n != 2 || !(*reinterpret_cast<const uint32_t*>(unit + 0x34) & 0x100000) || c[0] == 0.0f) return;
    ++g_ct_two;
    if (g_ct_lines >= 400) return;
    // kept, and logged at the outcome: a bea_log from here (the game thread,
    // on the private stack) hung the game at its first line
    CtRec& r = g_ct_rec[g_ct_lines++];
    r.clock = *reinterpret_cast<volatile uint32_t*>(0x00672fd0);
    r.ret = sp[0]; r.list = sp[2]; r.esp = g_ct_sp;
    for (int i = 0; i < 12; ++i) r.v[i] = reinterpret_cast<const uint32_t*>(c)[2 + i + i / 3];
}

namespace {
__attribute__((naked)) void contacts_stub()
{
    __asm__ volatile(
        "movl %eax, g_ct_eax\n\t"
        "movl %ecx, g_ct_ecx\n\t"
        "movl %edx, g_ct_edx\n\t"
        "movl %esp, g_ct_sp\n\t"
        "movl g_ct_stacktop, %esp\n\t"
        "call contacts_log\n\t"
        "movl g_ct_sp, %esp\n\t"
        "movl g_ct_eax, %eax\n\t"
        "movl g_ct_ecx, %ecx\n\t"
        "movl g_ct_edx, %edx\n\t"
        "jmp *g_ct_tramp\n\t");
}
}

// called by bea_install_hooks before the hooks are enabled
void bea_stalehunt_install()
{
    char v[96];
    if (GetEnvironmentVariableA("BEA_CONTACTS", v, sizeof v) && v[0] == '1') {
        g_ct_stacktop = reinterpret_cast<uint32_t>(g_ct_stack + sizeof g_ct_stack - 16);
        MH_STATUS st = MH_CreateHook(reinterpret_cast<void*>(0x004fcc30), reinterpret_cast<void*>(&contacts_stub),
                                     reinterpret_cast<void**>(&g_ct_tramp));
        bea_log("contacts: 004fcc30 logger: %s", MH_StatusToString(st));
    }
    unsigned wa = 0, wo = 0, we = 0;
    if (GetEnvironmentVariableA("BEA_WATCH", v, sizeof v) && sscanf(v, "%x,%x,%x", &wa, &wo, &we) >= 2) {
        g_waddr = wa; g_woff = wo; g_w_esp0 = we;
        g_w_stacktop = reinterpret_cast<uint32_t>(g_w_stack + sizeof g_w_stack - 16);
        AddVectoredExceptionHandler(1, watch_veh);
        MH_STATUS st = MH_CreateHook(reinterpret_cast<void*>(static_cast<uintptr_t>(wa)), reinterpret_cast<void*>(&watch_stub),
                                     reinterpret_cast<void**>(&g_w_tramp));
        bea_log("watch: %08x [entry esp-%#x]: %s", wa, wo, MH_StatusToString(st));
    }
    if (!GetEnvironmentVariableA("BEA_POISON", v, sizeof v)) return;
    unsigned a = 0, lo = 0, hi = 0, pat = 0;
    if (sscanf(v, "%x,%x,%x,%x", &a, &lo, &hi, &pat) != 4 || hi < lo || (lo | hi) & 3) {
        bea_log("poison: bad BEA_POISON '%s'", v);
        return;
    }
    g_addr = a; g_ph_lo = lo; g_ph_count = (hi - lo) / 4; g_ph_pat = pat;
    MH_STATUS st = MH_CreateHook(reinterpret_cast<void*>(static_cast<uintptr_t>(a)), reinterpret_cast<void*>(&poison_stub),
                                 reinterpret_cast<void**>(&g_ph_tramp));
    bea_log("poison: %08x fill [esp-%#x, esp-%#x) with %08x: %s", a, hi, lo, pat, MH_StatusToString(st));
}

// called every millisecond by the outcome watcher (another thread)
void bea_stalehunt_poll()
{
}

// called at the outcome
void bea_stalehunt_report()
{
    if (g_waddr) {
        bea_log("watch: %08x %u calls (%u outermost at another esp than %08x), %u hits outside, %u arm failures", g_waddr,
                g_w_calls, g_w_espdiff, g_w_esp0, g_outside, g_arm_failed);
        for (int i = 0; i < g_nhits; ++i) {
            const Hit& h = g_hits[i];
            bea_log("watch: after %08x first-read %u first-write %u reads %u writes %u ",
                    h.eip, h.first_read, h.first_write, h.reads, h.writes);
        }
    }
    if (g_ct_tramp) {
        bea_log("contacts: %u calls, %u with 2 contacts", g_ct_calls, g_ct_two);
        for (int i = 0; i < g_ct_lines; ++i) {
            const CtRec& r = g_ct_rec[i];
            bea_log("contacts: clock %08x ret %08x list %08x esp %08x n0 %08x %08x %08x n1 %08x %08x %08x n2 %08x %08x %08x",
                    r.clock, r.ret, r.list, r.esp, r.v[0], r.v[1], r.v[2], r.v[3], r.v[4], r.v[5], r.v[6], r.v[7], r.v[8]);
        }
    }
    if (g_addr)
        bea_log("poison: %08x %u calls, entry esp %08x (%u calls elsewhere, last %08x)", g_addr, g_ph_calls, g_ph_esp0,
                g_ph_espdiff, g_ph_esplast);
}
