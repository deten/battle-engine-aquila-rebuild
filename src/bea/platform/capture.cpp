// Call capture for the offline tester (BEA_CAPTURE=<dir>, 2026-10-30).
//
// Why: a level replay says that a port changes the game and needs many runs to
// say which one; tools/offline_check.py instead runs the original and the port
// of one function side by side in an x86 emulator, from the very state a real
// call started in.  This file records those states.  A capture run plays the
// unmodified game (every listed function's hook goes to a thunk that calls the
// original); at the chosen calls of each function (BEA_CAPTURE_AT, counted
// from the start of play) it records:
//   - the registers and the x87 state (fnsave) at entry and at return;
//   - the stack pages of the thread, from 32 KB below the entry esp to the
//     stack's top, before and after (the leftovers below esp included: an
//     original that reads them behaves as it did in the game);
//   - every other page the call touched, before and after.  Every writable
//     page of BEA.exe and of the heap gets PAGE_GUARD for the call; the first
//     touch of each page faults once, and the handler copies the page before
//     the access proceeds.
// Pages are stored once by content (pages.bin) and the calls refer to them
// (captures.bin); the format is read by tools/offline_check.py.
//
// Only the main thread captures, one call at a time: calls made by a captured
// call, and calls on other threads, go straight to the original.  The guard
// leaves out the thread's own stack, every allocation that holds a guard page
// (the stacks of other threads), this DLL and the capture's own buffers.
#include "bea/hooks.h"
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <tlhelp32.h>
#include <initializer_list>

extern "C" {
volatile uint32_t g_cap_busy __asm__("g_cap_busy") = 0;
uint32_t g_cap_cur __asm__("g_cap_cur") = 0;
uint32_t g_cap_main_tid __asm__("g_cap_main_tid") = 0;
uint32_t g_cap_regs_in[8] __asm__("g_cap_regs_in");     // eax ecx edx ebx esp ebp esi edi
uint32_t g_cap_regs_out[8] __asm__("g_cap_regs_out");
uint8_t g_cap_fpu_in[108] __asm__("g_cap_fpu_in");
uint8_t g_cap_fpu_out[108] __asm__("g_cap_fpu_out");
uint32_t g_cap_ret __asm__("g_cap_ret") = 0;
uint32_t g_cap_tramp_cur __asm__("g_cap_tramp_cur") = 0;
uint32_t g_cap_stacktop __asm__("g_cap_stacktop") = 0;
uint32_t g_cap_sp __asm__("g_cap_sp") = 0;
uint32_t g_cap_tib_base __asm__("g_cap_tib_base") = 0, g_cap_tib_limit __asm__("g_cap_tib_limit") = 0;
uint32_t cap_decide() __asm__("cap_decide");
void cap_end() __asm__("cap_end");
void cap_stub() __asm__("cap_stub");
}

namespace {

struct Target { uint32_t addr, calls, taken; void* tramp; };
const int kMaxTargets = 8192;
Target* g_t = nullptr;
int g_nt = 0, g_last = -1;
bool g_on = false;
bool g_image_only = false;
bool g_freeze = false;          // the other threads stay suspended while pages are guarded
HANDLE g_frozen[256];
int g_nfrozen = 0;
uint32_t g_teb_lo = 0, g_teb_hi = 0, g_peb = 0;
uint32_t g_veh_page = 0;
volatile uint32_t g_late_faults = 0, g_unguard_split = 0;
bool g_guard_process_heap = false;
// BEA_CAPTURE_PHEAP=copy: every committed page of the process heap is copied at
// the start of each capture (and read again at its end) without a guard.  The
// heap cannot be guarded: the first fault hung the game (2026-10-30, twice),
// something on the way to the handler uses it.  Direct3D's objects live there,
// so a function that calls Direct3D needs it; it costs ~50 MB per capture, for
// a few chosen functions (BEA_CAPTURE_SET)
bool g_copy_process_heap = false;      // BEA_CAPTURE_GUARD=image: BEA.exe's data only (a test)
uint32_t g_ordinals[32];
int g_nord = 0;
uint32_t g_every = 0, g_every_max = 64;
// BEA_CAPTURE_LOAD=1: count and capture calls in every game state, not only in
// play: functions that run only while a level loads (2026-11-01)
bool g_any_state = false;

// pages touched by the call under capture
int kMaxPages = 4096;                   // 20480 with BEA_CAPTURE_PHEAP=copy
struct Page { uint32_t addr; };
Page* g_pages = nullptr;
uint8_t* g_before = nullptr;            // kMaxPages * 4096
volatile long g_npages = 0;
volatile int g_active = 0;
volatile int g_overflow = 0;

// the stack window
const uint32_t kStackBelow = 0x8000;
uint8_t* g_stack_before = nullptr;      // up to 1 MB
uint32_t g_stack_lo = 0, g_stack_hi = 0;

// regions under guard
struct Region { uint32_t base, size, prot; };
const int kMaxRegions = 32768;
Region* g_regions = nullptr;
int g_nregions = 0;

// own allocations (left out of the guard)
struct Span { uint32_t lo, hi; };
Span g_own[16];
int g_nown = 0;
uint32_t g_dll_lo = 0, g_dll_hi = 0;

// the page store: content hash -> offset in pages.bin
struct Slot { uint64_t h1, h2; uint64_t off; };
const uint32_t kSlots = 1u << 21;
Slot* g_slots = nullptr;
uint64_t g_pages_end = 0;
HANDLE g_fcap = INVALID_HANDLE_VALUE, g_fpages = INVALID_HANDLE_VALUE;
uint32_t g_ncaptures = 0, g_unique = 0, g_failed_guard = 0;
HANDLE g_fdiag = INVALID_HANDLE_VALUE;
int g_ndiag = 0;

// "<tag> <hex> <hex>\n" by WriteFile alone: safe on any stack and in the handler
void diag(const char* tag, uint32_t a, uint32_t b)
{
    if (g_fdiag == INVALID_HANDLE_VALUE || g_ndiag > 4000) return;
    ++g_ndiag;
    char line[64];
    int n = 0;
    for (const char* t = tag; *t && n < 32; ++t) line[n++] = *t;
    for (uint32_t v : { a, b }) {
        line[n++] = ' ';
        for (int sh = 28; sh >= 0; sh -= 4) line[n++] = "0123456789abcdef"[(v >> sh) & 15];
    }
    line[n++] = '\n';
    DWORD w = 0;
    WriteFile(g_fdiag, line, n, &w, nullptr);
}

void* own_alloc(size_t n)
{
    void* p = VirtualAlloc(nullptr, n, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
    if (p && g_nown < 16) g_own[g_nown++] = Span{ (uint32_t)(uintptr_t)p, (uint32_t)((uintptr_t)p + n) };
    return p;
}

bool is_own(uint32_t lo, uint32_t hi)
{
    if (lo < g_dll_hi && hi > g_dll_lo) return true;
    for (int i = 0; i < g_nown; ++i)
        if (lo < g_own[i].hi && hi > g_own[i].lo) return true;
    return false;
}

void put(HANDLE f, const void* p, DWORD n)
{
    DWORD w = 0;
    WriteFile(f, p, n, &w, nullptr);
}

uint64_t store_page(const uint8_t* p)
{
    uint64_t h1 = 1469598103934665603ull, h2 = 0x9e3779b97f4a7c15ull;
    const uint64_t* q = reinterpret_cast<const uint64_t*>(p);
    for (int i = 0; i < 512; ++i) {
        h1 = (h1 ^ q[i]) * 1099511628211ull;
        h2 = (h2 + q[i] * 0xbf58476d1ce4e5b9ull) ^ (h2 >> 29);
    }
    uint32_t s = (uint32_t)(h1 ^ (h1 >> 32)) & (kSlots - 1);
    while (g_slots[s].off) {
        if (g_slots[s].h1 == h1 && g_slots[s].h2 == h2) return g_slots[s].off - 1;
        s = (s + 1) & (kSlots - 1);
    }
    uint64_t off = g_pages_end;
    put(g_fpages, p, 4096);
    g_pages_end += 4096;
    g_slots[s] = Slot{ h1, h2, off + 1 };
    ++g_unique;
    return off;
}

LONG WINAPI cap_veh(EXCEPTION_POINTERS* ep)
{
    if (ep->ExceptionRecord->ExceptionCode != STATUS_GUARD_PAGE_VIOLATION || !g_on) return EXCEPTION_CONTINUE_SEARCH;
    uint32_t a = (uint32_t)ep->ExceptionRecord->ExceptionInformation[1] & ~0xfffu;
    if (!g_active) {
        // a guard left over from a capture (a page the restore missed): the
        // fault has removed it; nothing else in the game sets guards
        ++g_late_faults;
        return EXCEPTION_CONTINUE_EXECUTION;
    }
    // (another thread may touch a guarded page too: its pages are kept as well)
    long n = InterlockedIncrement(&g_npages) - 1;
    if (n < 40) diag("fault", a, (uint32_t)ep->ContextRecord->Eip);
    if (n < kMaxPages) {
        g_pages[n].addr = a;
        memcpy(g_before + (size_t)n * 4096, reinterpret_cast<const void*>(a), 4096);   // the guard is gone: the page as it was
    } else
        g_overflow = 1;
    return EXCEPTION_CONTINUE_EXECUTION;
}

bool writable(DWORD p)
{
    p &= 0xff;
    return p == PAGE_READWRITE || p == PAGE_WRITECOPY || p == PAGE_EXECUTE_READWRITE || p == PAGE_EXECUTE_WRITECOPY;
}

// The allocations of the heaps the 32-bit side knows (GetProcessHeaps: the
// CRT's and the game's): the heap is whitelisted, not "every private
// region".  Private memory also holds each thread's 64-bit WOW64 stack and
// TEB, where the kernel writes the exception record of a guard fault; one
// guarded, the first fault could not be delivered and the game hung
// (2026-10-30, five tries to find it)
uint32_t g_heapbases[8192];
int g_nheapbases = 0;

void heap_bases()
{
    g_nheapbases = 0;
    HANDLE heaps[64];
    DWORD nh = GetProcessHeaps(64, heaps);
    MEMORY_BASIC_INFORMATION mbi;
    uint32_t last = 0;
    HANDLE ph = GetProcessHeap();
    for (DWORD i = 0; i < nh && i < 64; ++i) {
        if (heaps[i] == ph && !g_guard_process_heap) continue;
        if (!HeapLock(heaps[i])) continue;
        PROCESS_HEAP_ENTRY e;
        e.lpData = nullptr;
        while (HeapWalk(heaps[i], &e)) {
            uint32_t a = (uint32_t)(uintptr_t)e.lpData;
            if (!a || !VirtualQuery(e.lpData, &mbi, sizeof mbi)) continue;
            uint32_t ab = (uint32_t)(uintptr_t)mbi.AllocationBase;
            if (ab == last) continue;
            last = ab;
            bool seen = false;
            for (int k = 0; k < g_nheapbases && !seen; ++k) seen = g_heapbases[k] == ab;
            if (!seen && g_nheapbases < 8192) g_heapbases[g_nheapbases++] = ab;
        }
        HeapUnlock(heaps[i]);
    }
}

bool is_heap(uint32_t ab)
{
    for (int k = 0; k < g_nheapbases; ++k)
        if (g_heapbases[k] == ab) return true;
    return false;
}

void guard_all(uint32_t stack_alloc)
{
    heap_bases();
    // thread stacks are left out: the allocations holding a guard page, and
    // the allocation each thread's esp is in (a stack committed in full has
    // no guard page).  A guarded page of a stack is fatal: the kernel writes
    // the exception record there, cannot, and ends the process
    static uint32_t stacks[256];
    int nstacks = 0;
    MEMORY_BASIC_INFORMATION mbi;
    uint32_t teb = (uint32_t)(uintptr_t)NtCurrentTeb();
    g_teb_lo = teb - 0x3000; g_teb_hi = teb + 0x1000;
    g_peb = *reinterpret_cast<uint32_t*>(teb + 0x30) & ~0xfffu;
    for (uintptr_t a = 0x10000; a < 0x7ffe0000 && VirtualQuery(reinterpret_cast<void*>(a), &mbi, sizeof mbi); a = (uintptr_t)mbi.BaseAddress + mbi.RegionSize)
        if (mbi.State == MEM_COMMIT && (mbi.Protect & PAGE_GUARD) && nstacks < 256)
            stacks[nstacks++] = (uint32_t)(uintptr_t)mbi.AllocationBase;
    HANDLE snap = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0);
    if (snap != INVALID_HANDLE_VALUE) {
        THREADENTRY32 te;
        te.dwSize = sizeof te;
        DWORD pid = GetCurrentProcessId(), self = GetCurrentThreadId();
        for (BOOL ok = Thread32First(snap, &te); ok; ok = Thread32Next(snap, &te)) {
            if (te.th32OwnerProcessID != pid || te.th32ThreadID == self || nstacks >= 256) continue;
            HANDLE th = OpenThread(THREAD_GET_CONTEXT | THREAD_SUSPEND_RESUME, FALSE, te.th32ThreadID);
            if (!th) continue;
            CONTEXT c = {};
            c.ContextFlags = CONTEXT_CONTROL;
            if (SuspendThread(th) != (DWORD)-1) {
                if (GetThreadContext(th, &c) && VirtualQuery(reinterpret_cast<void*>((uintptr_t)c.Esp), &mbi, sizeof mbi))
                    stacks[nstacks++] = (uint32_t)(uintptr_t)mbi.AllocationBase;
                if (g_freeze && g_nfrozen < 256) g_frozen[g_nfrozen++] = th;     // resumed by unguard_all
                else { ResumeThread(th); CloseHandle(th); }
            } else
                CloseHandle(th);
        }
        CloseHandle(snap);
    }
    g_nregions = 0;
    for (uintptr_t a = 0x10000; a < 0x7ffe0000 && VirtualQuery(reinterpret_cast<void*>(a), &mbi, sizeof mbi); a = (uintptr_t)mbi.BaseAddress + mbi.RegionSize) {
        uint32_t lo = (uint32_t)(uintptr_t)mbi.BaseAddress, hi = lo + (uint32_t)mbi.RegionSize;
        uint32_t ab = (uint32_t)(uintptr_t)mbi.AllocationBase;
        if (mbi.State != MEM_COMMIT || !writable(mbi.Protect) || (mbi.Protect & (PAGE_GUARD | PAGE_NOCACHE | PAGE_WRITECOMBINE))) continue;
        if (!((mbi.Type == MEM_PRIVATE && !g_image_only && is_heap(ab)) || (mbi.Type == MEM_IMAGE && ab == 0x00400000))) continue;
        if (ab == stack_alloc || is_own(lo, hi)) continue;
        // the TEB (32- and 64-bit halves) and the PEB: exception dispatch reads them
        if (lo < g_teb_hi && hi > g_teb_lo) continue;
        if (lo < g_peb + 0x1000 && hi > g_peb) continue;
        bool stack = false;
        for (int i = 0; i < nstacks; ++i) stack |= stacks[i] == ab;
        if (stack || g_nregions == kMaxRegions) continue;
        // the page of this handler's entry in the vectored-handler list (on
        // the process heap) stays unguarded: the dispatcher reads it before
        // the handler runs, and a fault there could not be delivered
        uint32_t vp = g_veh_page;
        Span parts[2] = { { lo, hi }, { 0, 0 } };
        if (vp >= lo && vp < hi) { parts[0] = Span{ lo, vp }; parts[1] = Span{ vp + 0x1000, hi }; }
        for (const Span& sp : parts) {
            if (sp.hi <= sp.lo || g_nregions == kMaxRegions) continue;
            DWORD old = 0;
            if (VirtualProtect(reinterpret_cast<void*>((uintptr_t)sp.lo), sp.hi - sp.lo, mbi.Protect | PAGE_GUARD, &old))
                g_regions[g_nregions++] = Region{ sp.lo, sp.hi - sp.lo, mbi.Protect };
            else
                ++g_failed_guard;
        }
    }
}

void unguard_all()
{
    for (int i = 0; i < g_nregions; ++i) {
        DWORD old = 0;
        if (VirtualProtect(reinterpret_cast<void*>((uintptr_t)g_regions[i].base), g_regions[i].size, g_regions[i].prot, &old))
            continue;
        // another thread's heap decommitted part of the range meanwhile, and the
        // range call failed as a whole: page by page, or the rest keeps its guard
        ++g_unguard_split;
        for (uint32_t a = g_regions[i].base; a < g_regions[i].base + g_regions[i].size; a += 0x1000) {
            MEMORY_BASIC_INFORMATION mbi;
            if (VirtualQuery(reinterpret_cast<void*>((uintptr_t)a), &mbi, sizeof mbi) && mbi.State == MEM_COMMIT && (mbi.Protect & PAGE_GUARD))
                VirtualProtect(reinterpret_cast<void*>((uintptr_t)a), 0x1000, mbi.Protect & ~PAGE_GUARD, &old);
        }
    }
    g_nregions = 0;
    for (int i = 0; i < g_nfrozen; ++i) { ResumeThread(g_frozen[i]); CloseHandle(g_frozen[i]); }
    g_nfrozen = 0;
}

// the process heap's committed writable pages, copied (BEA_CAPTURE_PHEAP=copy)
void copy_process_heap()
{
    static uint32_t bases[4096];
    int nb = 0;
    HANDLE ph = GetProcessHeap();
    MEMORY_BASIC_INFORMATION mbi;
    if (HeapLock(ph)) {
        PROCESS_HEAP_ENTRY e;
        e.lpData = nullptr;
        uint32_t last = 0;
        while (HeapWalk(ph, &e)) {
            if (!e.lpData || !VirtualQuery(e.lpData, &mbi, sizeof mbi)) continue;
            uint32_t ab = (uint32_t)(uintptr_t)mbi.AllocationBase;
            if (ab == last) continue;
            last = ab;
            bool seen = false;
            for (int k = 0; k < nb && !seen; ++k) seen = bases[k] == ab;
            if (!seen && nb < 4096) bases[nb++] = ab;
        }
        HeapUnlock(ph);
    }
    for (int k = 0; k < nb; ++k) {
        for (uintptr_t a = bases[k]; VirtualQuery(reinterpret_cast<void*>(a), &mbi, sizeof mbi) && (uint32_t)(uintptr_t)mbi.AllocationBase == bases[k];
             a = (uintptr_t)mbi.BaseAddress + mbi.RegionSize) {
            if (mbi.State != MEM_COMMIT || !writable(mbi.Protect) || (mbi.Protect & PAGE_GUARD)) continue;
            uint32_t lo = (uint32_t)(uintptr_t)mbi.BaseAddress, hi = lo + (uint32_t)mbi.RegionSize;
            if (is_own(lo, hi)) continue;
            for (uint32_t pg = lo; pg < hi; pg += 0x1000) {
                long n = InterlockedIncrement(&g_npages) - 1;
                if (n >= kMaxPages) { g_overflow = 1; return; }
                g_pages[n].addr = pg;
                memcpy(g_before + (size_t)n * 4096, reinterpret_cast<const void*>((uintptr_t)pg), 4096);
            }
        }
    }
}

uint32_t g_cur_ordinal = 0;
int g_max_regions = 0;
HANDLE g_fmap = INVALID_HANDLE_VALUE;

// regions.txt, once, at the first capture: every committed region with its type,
// protection, allocation base, the heap it belongs to (index in GetProcessHeaps,
// P = the process heap) and the module of an image.  tools/offline_check.py
// names with it the memory a call touched that no capture holds
void dump_regions()
{
    if (g_fmap == INVALID_HANDLE_VALUE) return;
    static uint32_t abase[4096];
    static char aheap[4096];
    int na = 0;
    HANDLE heaps[64];
    DWORD nh = GetProcessHeaps(64, heaps);
    HANDLE ph = GetProcessHeap();
    MEMORY_BASIC_INFORMATION mbi;
    for (DWORD i = 0; i < nh && i < 64; ++i) {
        if (!HeapLock(heaps[i])) continue;
        PROCESS_HEAP_ENTRY e;
        e.lpData = nullptr;
        uint32_t last = 0;
        while (HeapWalk(heaps[i], &e)) {
            if (!e.lpData || !VirtualQuery(e.lpData, &mbi, sizeof mbi)) continue;
            uint32_t ab = (uint32_t)(uintptr_t)mbi.AllocationBase;
            if (ab == last) continue;
            last = ab;
            bool seen = false;
            for (int k = 0; k < na && !seen; ++k) seen = abase[k] == ab;
            if (!seen && na < 4096) { abase[na] = ab; aheap[na] = heaps[i] == ph ? 'P' : (char)('0' + (i < 40 ? i : 40)); ++na; }
        }
        HeapUnlock(heaps[i]);
    }
    char line[400];
    for (uintptr_t a = 0x10000; a < 0x7ffe0000 && VirtualQuery(reinterpret_cast<void*>(a), &mbi, sizeof mbi); a = (uintptr_t)mbi.BaseAddress + mbi.RegionSize) {
        if (mbi.State != MEM_COMMIT) continue;
        uint32_t ab = (uint32_t)(uintptr_t)mbi.AllocationBase;
        char heap = '-';
        for (int k = 0; k < na; ++k) if (abase[k] == ab) heap = aheap[k];
        char mod[MAX_PATH] = "";
        if (mbi.Type == MEM_IMAGE) GetModuleFileNameA(reinterpret_cast<HMODULE>((uintptr_t)ab), mod, sizeof mod);
        int n = snprintf(line, sizeof line, "%08x %08x %s %03lx %08x %c %s\n", (uint32_t)(uintptr_t)mbi.BaseAddress, (uint32_t)mbi.RegionSize,
                         mbi.Type == MEM_IMAGE ? "img" : mbi.Type == MEM_MAPPED ? "map" : "prv", mbi.Protect, ab, heap, mod);
        put(g_fmap, line, (DWORD)n);
    }
    CloseHandle(g_fmap);
    g_fmap = INVALID_HANDLE_VALUE;
}

void ilog_patch();
extern uint32_t g_ilog_n;
extern bool g_ilog_full;
uint32_t begin()
{
    ilog_patch();
    g_ilog_n = 0;
    g_ilog_full = false;
    // the game stack's bounds (the TIB holds the private stack's while this runs)
    uint32_t esp = g_cap_regs_in[4];
    uint32_t top = g_cap_tib_base, limit = g_cap_tib_limit;
    uint32_t lo = (esp - kStackBelow) & ~0xfffu;
    if (lo < limit) lo = limit;
    if (top - lo > 0x100000) return 0;
    g_stack_lo = lo; g_stack_hi = top;
    memcpy(g_stack_before, reinterpret_cast<const void*>((uintptr_t)lo), top - lo);
    MEMORY_BASIC_INFORMATION mbi;
    VirtualQuery(reinterpret_cast<void*>((uintptr_t)esp), &mbi, sizeof mbi);
    dump_regions();
    g_npages = 0; g_overflow = 0;
    // active before the first guard and until the last is gone: a guard
    // fault nobody handles ends the process (any thread may touch a page)
    g_active = 1;
    diag("begin", g_t[g_cap_cur].addr, esp);
    guard_all((uint32_t)(uintptr_t)mbi.AllocationBase);
    diag("guarded", g_nregions, g_nheapbases);
    if (g_copy_process_heap) copy_process_heap();
    return 1;
}


// The import log (2026-11-01).  While a call is captured, BEA.exe's calls of a
// few Windows functions go through the wrappers below: each calls the real
// function and logs its result and what it wrote (file data, a size), in
// order, after the record's pages.  tools/offline_check.py answers the same
// imports from the log for both the emulated original and the port, so a call
// that reads a file, allocates or asks for a handle can be judged.  ReadFile
// reads into a buffer of ours and copies from there: the kernel cannot write
// into a guarded page (the read failed and the game ended), our copy faults
// once like any other access and the page is recorded first.
// Entry: u32 function id, u32 eax, u32 number of outputs, then per output
// u32 address, u32 length, the bytes.  The ids are the order of kIlogNames.
const char* const kIlogNames[] = { "ReadFile", "CreateFileA", "CloseHandle", "GetFileSize", "SetFilePointer",
                                   "HeapAlloc", "HeapFree", "HeapReAlloc", "HeapSize", "TlsGetValue",
                                   "CreateEventA", "GetKeyNameTextA", "timeGetTime", "GetFileType", "#63", "WriteFile",
                                   "Platform_GetTime" };   // the last: the harness's clock (time.cpp), not an import
const int kIlogN = sizeof kIlogNames / sizeof kIlogNames[0];
void* g_ilog_real[kIlogN];
uint32_t* g_ilog_slot[kIlogN];
uint8_t* g_ilog = nullptr;               // the log of the call being captured
uint32_t g_ilog_n = 0, g_ilog_cap = 0;
bool g_ilog_full = false;
uint8_t* g_ilog_buf = nullptr;           // ReadFile's own buffer
const uint32_t kIlogBuf = 1 << 20;
bool g_ilog_patched = false;

bool ilog_on()
{
    return g_active && g_ilog && GetCurrentThreadId() == g_cap_main_tid;
}

void ilog_put(const void* p, uint32_t n)
{
    if (g_ilog_full || g_ilog_n + n > g_ilog_cap) { g_ilog_full = true; return; }
    memcpy(g_ilog + g_ilog_n, p, n);
    g_ilog_n += n;
}

// one entry: id, eax, then up to two outputs (address, length; the bytes are read now)
void ilog_entry(int id, uint32_t eax, const void* a1 = nullptr, uint32_t n1 = 0, const void* a2 = nullptr, uint32_t n2 = 0)
{
    uint32_t nout = (a1 ? 1 : 0) + (a2 ? 1 : 0);
    uint32_t h[3] = { (uint32_t)id, eax, nout };
    ilog_put(h, sizeof h);
    const void* as[2] = { a1, a2 };
    uint32_t ns[2] = { n1, n2 };
    for (int i = 0; i < 2; ++i) {
        if (!as[i]) continue;
        uint32_t o[2] = { (uint32_t)(uintptr_t)as[i], ns[i] };
        ilog_put(o, sizeof o);
        ilog_put(as[i], ns[i]);
    }
}

template <class F> F real(int id) { return reinterpret_cast<F>(g_ilog_real[id]); }

BOOL WINAPI w_ReadFile(HANDLE h, void* buf, DWORD n, DWORD* got, OVERLAPPED* ov)
{
    typedef BOOL (WINAPI *F)(HANDLE, void*, DWORD, DWORD*, OVERLAPPED*);
    if (!ilog_on() || ov) return real<F>(0)(h, buf, n, got, ov);
    DWORD total = 0, k = 0;
    BOOL ok = TRUE;
    while (total < n) {
        DWORD want = n - total < kIlogBuf ? n - total : kIlogBuf;
        ok = real<F>(0)(h, g_ilog_buf, want, &k, nullptr);
        if (!ok) break;
        memcpy(static_cast<uint8_t*>(buf) + total, g_ilog_buf, k);
        total += k;
        if (k < want) break;
    }
    if (got) *got = total;
    ilog_entry(0, (uint32_t)ok, buf, total, got, got ? 4 : 0);
    return ok;
}

HANDLE WINAPI w_CreateFileA(const char* name, DWORD acc, DWORD share, SECURITY_ATTRIBUTES* sa, DWORD disp, DWORD fl, HANDLE tmpl)
{
    typedef HANDLE (WINAPI *F)(const char*, DWORD, DWORD, SECURITY_ATTRIBUTES*, DWORD, DWORD, HANDLE);
    HANDLE r = real<F>(1)(name, acc, share, sa, disp, fl, tmpl);
    if (ilog_on()) ilog_entry(1, (uint32_t)(uintptr_t)r);
    return r;
}

BOOL WINAPI w_CloseHandle(HANDLE h)
{
    typedef BOOL (WINAPI *F)(HANDLE);
    BOOL r = real<F>(2)(h);
    if (ilog_on()) ilog_entry(2, (uint32_t)r);
    return r;
}

DWORD WINAPI w_GetFileSize(HANDLE h, DWORD* hi)
{
    typedef DWORD (WINAPI *F)(HANDLE, DWORD*);
    DWORD r = real<F>(3)(h, hi);
    if (ilog_on()) ilog_entry(3, r, hi, hi ? 4 : 0);
    return r;
}

DWORD WINAPI w_SetFilePointer(HANDLE h, LONG lo, LONG* hi, DWORD how)
{
    typedef DWORD (WINAPI *F)(HANDLE, LONG, LONG*, DWORD);
    DWORD r = real<F>(4)(h, lo, hi, how);
    if (ilog_on()) ilog_entry(4, r, hi, hi ? 4 : 0);
    return r;
}

void* WINAPI w_HeapAlloc(HANDLE heap, DWORD fl, SIZE_T n)
{
    typedef void* (WINAPI *F)(HANDLE, DWORD, SIZE_T);
    void* r = real<F>(5)(heap, fl, n);
    if (ilog_on()) ilog_entry(5, (uint32_t)(uintptr_t)r);
    return r;
}

BOOL WINAPI w_HeapFree(HANDLE heap, DWORD fl, void* p)
{
    typedef BOOL (WINAPI *F)(HANDLE, DWORD, void*);
    BOOL r = real<F>(6)(heap, fl, p);
    if (ilog_on()) ilog_entry(6, (uint32_t)r);
    return r;
}

void* WINAPI w_HeapReAlloc(HANDLE heap, DWORD fl, void* p, SIZE_T n)
{
    typedef void* (WINAPI *F)(HANDLE, DWORD, void*, SIZE_T);
    void* r = real<F>(7)(heap, fl, p, n);
    if (ilog_on()) ilog_entry(7, (uint32_t)(uintptr_t)r);
    return r;
}

SIZE_T WINAPI w_HeapSize(HANDLE heap, DWORD fl, const void* p)
{
    typedef SIZE_T (WINAPI *F)(HANDLE, DWORD, const void*);
    SIZE_T r = real<F>(8)(heap, fl, p);
    if (ilog_on()) ilog_entry(8, (uint32_t)r);
    return r;
}

void* WINAPI w_TlsGetValue(DWORD i)
{
    typedef void* (WINAPI *F)(DWORD);
    DWORD err = GetLastError();
    void* r = real<F>(9)(i);
    if (ilog_on()) ilog_entry(9, (uint32_t)(uintptr_t)r);
    SetLastError(err);                    // TlsGetValue keeps the last error for its callers (the CRT's _getptd)
    return r;
}

HANDLE WINAPI w_CreateEventA(SECURITY_ATTRIBUTES* sa, BOOL manual, BOOL init, const char* name)
{
    typedef HANDLE (WINAPI *F)(SECURITY_ATTRIBUTES*, BOOL, BOOL, const char*);
    HANDLE r = real<F>(10)(sa, manual, init, name);
    if (ilog_on()) ilog_entry(10, (uint32_t)(uintptr_t)r);
    return r;
}

int WINAPI w_GetKeyNameTextA(LONG l, char* buf, int n)
{
    typedef int (WINAPI *F)(LONG, char*, int);
    int r = real<F>(11)(l, buf, n);
    if (ilog_on()) ilog_entry(11, (uint32_t)r, buf, r >= 0 && r < n ? (uint32_t)r + 1 : (uint32_t)n);
    return r;
}

DWORD WINAPI w_timeGetTime()
{
    typedef DWORD (WINAPI *F)();
    DWORD r = real<F>(12)();
    if (ilog_on()) ilog_entry(12, r);
    return r;
}

DWORD WINAPI w_GetFileType(HANDLE h)
{
    typedef DWORD (WINAPI *F)(HANDLE);
    DWORD r = real<F>(13)(h);
    if (ilog_on()) ilog_entry(13, r);
    return r;
}

// zlib's uncompress (zlib.dll ordinal 63, cdecl): the data and its length
int __cdecl w_uncompress(uint8_t* dest, unsigned long* len, const uint8_t* src, unsigned long n)
{
    typedef int (__cdecl *F)(uint8_t*, unsigned long*, const uint8_t*, unsigned long);
    int r = real<F>(14)(dest, len, src, n);
    if (ilog_on()) ilog_entry(14, (uint32_t)r, dest, len ? (uint32_t)*len : 0, len, len ? 4 : 0);
    return r;
}

BOOL WINAPI w_WriteFile(HANDLE h, const void* buf, DWORD n, DWORD* put_, OVERLAPPED* ov)
{
    typedef BOOL (WINAPI *F)(HANDLE, const void*, DWORD, DWORD*, OVERLAPPED*);
    BOOL r = real<F>(15)(h, buf, n, put_, ov);
    if (ilog_on()) ilog_entry(15, (uint32_t)r, put_, put_ ? 4 : 0);
    return r;
}

void* const kIlogWrap[] = { (void*)&w_ReadFile, (void*)&w_CreateFileA, (void*)&w_CloseHandle, (void*)&w_GetFileSize,
                            (void*)&w_SetFilePointer, (void*)&w_HeapAlloc, (void*)&w_HeapFree, (void*)&w_HeapReAlloc,
                            (void*)&w_HeapSize, (void*)&w_TlsGetValue, (void*)&w_CreateEventA, (void*)&w_GetKeyNameTextA,
                            (void*)&w_timeGetTime, (void*)&w_GetFileType, (void*)&w_uncompress, (void*)&w_WriteFile,
                            nullptr };

// BEA.exe's import slots of the logged functions point at the wrappers (once,
// at the first capture: the harness patches its own imports at startup, and
// the wrappers call whatever the slot held then)
void ilog_patch()
{
    if (g_ilog_patched) {
        for (int i = 0; i < kIlogN; ++i) {
            uint32_t* slot = g_ilog_slot[i];
            if (!slot || *slot == (uint32_t)(uintptr_t)kIlogWrap[i]) continue;
            DWORD old;
            if (!VirtualProtect(slot, 4, PAGE_READWRITE, &old)) continue;
            g_ilog_real[i] = reinterpret_cast<void*>((uintptr_t)*slot);
            *slot = (uint32_t)(uintptr_t)kIlogWrap[i];
            VirtualProtect(slot, 4, old, &old);
        }
        return;
    }
    g_ilog_patched = true;
    uint8_t* base = reinterpret_cast<uint8_t*>(0x400000);
    auto dos = reinterpret_cast<IMAGE_DOS_HEADER*>(base);
    auto nt = reinterpret_cast<IMAGE_NT_HEADERS*>(base + dos->e_lfanew);
    const IMAGE_DATA_DIRECTORY& dir = nt->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT];
    for (auto d = reinterpret_cast<IMAGE_IMPORT_DESCRIPTOR*>(base + dir.VirtualAddress); d->Name; ++d) {
        auto names = reinterpret_cast<uint32_t*>(base + (d->OriginalFirstThunk ? d->OriginalFirstThunk : d->FirstThunk));
        auto slots = reinterpret_cast<uint32_t*>(base + d->FirstThunk);
        for (int k = 0; names[k]; ++k) {
            char ord[8];
            const char* nm;
            if (names[k] & 0x80000000u) {            // by ordinal: "#63"
                sprintf(ord, "#%u", (unsigned)(names[k] & 0xffff));
                nm = ord;
            } else {
                nm = reinterpret_cast<const char*>(base + names[k] + 2);
            }
            for (int i = 0; i < kIlogN; ++i) {
                if (!kIlogWrap[i] || strcmp(nm, kIlogNames[i]) || g_ilog_slot[i]) continue;
                DWORD old;
                if (!VirtualProtect(&slots[k], 4, PAGE_READWRITE, &old)) continue;
                g_ilog_slot[i] = &slots[k];
                g_ilog_real[i] = reinterpret_cast<void*>((uintptr_t)slots[k]);
                slots[k] = (uint32_t)(uintptr_t)kIlogWrap[i];
                VirtualProtect(&slots[k], 4, old, &old);
            }
        }
    }
    g_ilog_cap = 8 << 20;
    g_ilog = static_cast<uint8_t*>(own_alloc(g_ilog_cap));
    g_ilog_buf = static_cast<uint8_t*>(own_alloc(kIlogBuf));
    if (!g_ilog || !g_ilog_buf) g_ilog = nullptr;
}

}  // namespace

// the stub asks (on its own stack): capture this call?  Sets the trampoline either way
uint32_t cap_decide()
{
    Target& t = g_t[g_cap_cur];
    g_cap_tramp_cur = (uint32_t)(uintptr_t)t.tramp;
    if (!g_any_state && *reinterpret_cast<volatile int*>(0x008a9ac0) != 3) return 0;     // in play only
    uint32_t n = ++t.calls;
    bool want = false;
    for (int i = 0; i < g_nord; ++i) want |= g_ordinals[i] == n;
    // BEA_CAPTURE_EVERY=k[,max]: also every k-th call, up to max captures per function
    if (g_every && n % g_every == 0 && t.taken < g_every_max) want = true;
    if (!want) return 0;
    g_cur_ordinal = n;
    // (no bea_log on this stack: it hung the game after its first line, twice)
    uint32_t r = begin();
    if (g_nregions > g_max_regions) g_max_regions = g_nregions;
    return r;
}

// after the original returned (registers and x87 state in g_cap_*_out)
void cap_end()
{
    diag("returned", g_cap_regs_out[0], g_cap_regs_out[4]);
    unguard_all();
    g_active = 0;
    diag("unguarded", g_npages, 0);
    Target& t = g_t[g_cap_cur];
    ++t.taken;
    ++g_ncaptures;
    // header
    struct Hdr {
        char magic[4];
        uint32_t addr, ordinal, flags;
        uint32_t regs_in[8], regs_out[8];
        uint8_t fpu_in[108], fpu_out[108];
        uint32_t nstack, npages;
    } h;
    memcpy(h.magic, "CAP1", 4);
    h.addr = t.addr; h.ordinal = g_cur_ordinal; h.flags = (g_overflow ? 1 : 0) | (g_ilog ? 2 : 0) | (g_ilog_full ? 4 : 0);
    memcpy(h.regs_in, g_cap_regs_in, sizeof h.regs_in);
    memcpy(h.regs_out, g_cap_regs_out, sizeof h.regs_out);
    memcpy(h.fpu_in, g_cap_fpu_in, 108);
    memcpy(h.fpu_out, g_cap_fpu_out, 108);
    h.nstack = (g_stack_hi - g_stack_lo) / 4096;
    if (g_npages > kMaxPages) g_npages = kMaxPages;
    h.npages = g_npages;
    put(g_fcap, &h, sizeof h);
    struct Ent { uint32_t addr; uint64_t before, after; } __attribute__((packed));
    for (uint32_t i = 0; i < h.nstack; ++i) {
        uint32_t a = g_stack_lo + i * 4096;
        Ent e{ a, store_page(g_stack_before + (size_t)i * 4096), store_page(reinterpret_cast<const uint8_t*>((uintptr_t)a)) };
        put(g_fcap, &e, sizeof e);
    }
    static uint8_t gone[4096];           // a page the call freed (a file buffer, 2026-11-01) reads as zeros
    for (int i = 0; i < g_npages; ++i) {
        uint32_t a = g_pages[i].addr;
        MEMORY_BASIC_INFORMATION q;
        bool live = VirtualQuery(reinterpret_cast<void*>((uintptr_t)a), &q, sizeof q) == sizeof q && q.State == MEM_COMMIT
                    && !(q.Protect & (PAGE_GUARD | PAGE_NOACCESS));
        Ent e{ a, store_page(g_before + (size_t)i * 4096), store_page(live ? reinterpret_cast<const uint8_t*>((uintptr_t)a) : gone) };
        put(g_fcap, &e, sizeof e);
    }
    if (g_ilog) {
        uint32_t hl[2] = { 0x474f4c49u, g_ilog_n };      // "ILOG", bytes
        put(g_fcap, hl, sizeof hl);
        if (g_ilog_n) put(g_fcap, g_ilog, g_ilog_n);
    }
}

// The stub every thunk enters (main thread, no capture running): it keeps the
// registers, asks cap_decide on the capture's own stack (a call on the game's
// stack would change the leftovers below esp that the capture records), and
// either jumps to the original or calls it with its own return address in the
// caller's slot (the original runs at the very depth it would have).
__attribute__((naked)) void cap_stub()
{
    __asm__ volatile(
        "movl %eax, g_cap_regs_in\n\t"
        "movl %ecx, g_cap_regs_in+4\n\t"
        "movl %edx, g_cap_regs_in+8\n\t"
        "movl %ebx, g_cap_regs_in+12\n\t"
        "movl %esp, g_cap_regs_in+16\n\t"
        "movl %ebp, g_cap_regs_in+20\n\t"
        "movl %esi, g_cap_regs_in+24\n\t"
        "movl %edi, g_cap_regs_in+28\n\t"
        "movl $1, g_cap_busy\n\t"
        "fnsave g_cap_fpu_in\n\t"
        "frstor g_cap_fpu_in\n\t"
        "movl %esp, g_cap_sp\n\t"
        "movl %fs:4, %ecx\n\t"           // the TIB's stack bounds become the private stack's:
        "movl %ecx, g_cap_tib_base\n\t"   // exception dispatch rejects handler frames outside
        "movl %fs:8, %ecx\n\t"           // them, and an exception raised on the private stack
        "movl %ecx, g_cap_tib_limit\n\t"  // (OutputDebugString in bea_log) ended the process
        "movl g_cap_stacktop, %ecx\n\t"
        "addl $64, %ecx\n\t"
        "movl %ecx, %fs:4\n\t"
        "subl $0x100000, %ecx\n\t"
        "movl %ecx, %fs:8\n\t"
        "movl g_cap_stacktop, %esp\n\t"
        "call cap_decide\n\t"
        "movl g_cap_sp, %esp\n\t"
        "movl g_cap_tib_base, %ecx\n\t"
        "movl %ecx, %fs:4\n\t"
        "movl g_cap_tib_limit, %ecx\n\t"
        "movl %ecx, %fs:8\n\t"
        "testl %eax, %eax\n\t"
        "jz 1f\n\t"
        "movl g_cap_regs_in, %eax\n\t"
        "movl g_cap_regs_in+4, %ecx\n\t"
        "movl g_cap_regs_in+8, %edx\n\t"
        "popl g_cap_ret\n\t"
        "call *g_cap_tramp_cur\n\t"
        "movl %eax, g_cap_regs_out\n\t"
        "movl %ecx, g_cap_regs_out+4\n\t"
        "movl %edx, g_cap_regs_out+8\n\t"
        "movl %ebx, g_cap_regs_out+12\n\t"
        "movl %esp, g_cap_regs_out+16\n\t"
        "movl %ebp, g_cap_regs_out+20\n\t"
        "movl %esi, g_cap_regs_out+24\n\t"
        "movl %edi, g_cap_regs_out+28\n\t"
        "fnsave g_cap_fpu_out\n\t"
        "frstor g_cap_fpu_out\n\t"
        "movl %esp, g_cap_sp\n\t"
        "movl %fs:4, %ecx\n\t"           // the TIB's stack bounds become the private stack's:
        "movl %ecx, g_cap_tib_base\n\t"   // exception dispatch rejects handler frames outside
        "movl %fs:8, %ecx\n\t"           // them, and an exception raised on the private stack
        "movl %ecx, g_cap_tib_limit\n\t"  // (OutputDebugString in bea_log) ended the process
        "movl g_cap_stacktop, %ecx\n\t"
        "addl $64, %ecx\n\t"
        "movl %ecx, %fs:4\n\t"
        "subl $0x100000, %ecx\n\t"
        "movl %ecx, %fs:8\n\t"
        "movl g_cap_stacktop, %esp\n\t"
        "call cap_end\n\t"
        "movl g_cap_sp, %esp\n\t"
        "movl g_cap_tib_base, %ecx\n\t"
        "movl %ecx, %fs:4\n\t"
        "movl g_cap_tib_limit, %ecx\n\t"
        "movl %ecx, %fs:8\n\t"
        "movl g_cap_regs_out, %eax\n\t"
        "movl g_cap_regs_out+4, %ecx\n\t"
        "movl g_cap_regs_out+8, %edx\n\t"
        "movl $0, g_cap_busy\n\t"
        "jmp *g_cap_ret\n"
        "1:\n\t"
        "movl g_cap_regs_in, %eax\n\t"
        "movl g_cap_regs_in+4, %ecx\n\t"
        "movl g_cap_regs_in+8, %edx\n\t"
        "movl $0, g_cap_busy\n\t"
        "jmp *g_cap_tramp_cur\n\t");
}

// hooks.cpp asks before installing each hook: with BEA_CAPTURE set, every
// registered function (or those in BEA_CAPTURE_SET, a file of hex addresses)
// gets a capture thunk to its original instead of its port
bool bea_capture_wanted(uint32_t addr)
{
    static bool parsed = false;
    static char only[1 << 16];
    static bool have_only = false;
    if (!parsed) {
        parsed = true;
        char dir[MAX_PATH];
        if (!GetEnvironmentVariableA("BEA_CAPTURE", dir, sizeof dir)) return false;
        g_cap_main_tid = GetCurrentThreadId();
        char gm[16] = "";
        GetEnvironmentVariableA("BEA_CAPTURE_GUARD", gm, sizeof gm);
        g_image_only = !strcmp(gm, "image");
        char fz[8] = "0";
        GetEnvironmentVariableA("BEA_CAPTURE_FREEZE", fz, sizeof fz);
        g_freeze = fz[0] == '1';
        char gp[8] = "0";
        GetEnvironmentVariableA("BEA_CAPTURE_PHEAP", gp, sizeof gp);
        g_guard_process_heap = gp[0] == '1';
        g_copy_process_heap = strcmp(gp, "copy") == 0;
        if (g_copy_process_heap) kMaxPages = 20480;
        char at[256] = "1,6,30,150,750,3750,18750";
        GetEnvironmentVariableA("BEA_CAPTURE_AT", at, sizeof at);
        for (char* s = strtok(at, ","); s && g_nord < 32; s = strtok(nullptr, ","))
            g_ordinals[g_nord++] = (uint32_t)strtoul(s, nullptr, 10);
        char ld[8] = "0";
        GetEnvironmentVariableA("BEA_CAPTURE_LOAD", ld, sizeof ld);
        g_any_state = ld[0] == '1';
        char ev[32];
        if (GetEnvironmentVariableA("BEA_CAPTURE_EVERY", ev, sizeof ev)) {
            unsigned k = 0, m = 64;
            sscanf(ev, "%u,%u", &k, &m);
            g_every = k; g_every_max = m;
        }
        char setf[MAX_PATH];
        if (GetEnvironmentVariableA("BEA_CAPTURE_SET", setf, sizeof setf)) {
            FILE* f = fopen(setf, "r");
            if (f) { size_t n = fread(only, 1, sizeof only - 1, f); only[n] = 0; fclose(f); have_only = true; }
        }
        HMODULE self = nullptr;
        GetModuleHandleExA(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                           reinterpret_cast<LPCSTR>(&bea_capture_wanted), &self);
        MEMORY_BASIC_INFORMATION mbi;
        g_dll_lo = (uint32_t)(uintptr_t)self;
        g_dll_hi = g_dll_lo;
        for (uintptr_t a = g_dll_lo; VirtualQuery(reinterpret_cast<void*>(a), &mbi, sizeof mbi) && mbi.AllocationBase == self;
             a = (uintptr_t)mbi.BaseAddress + mbi.RegionSize)
            g_dll_hi = (uint32_t)((uintptr_t)mbi.BaseAddress + mbi.RegionSize);
        g_t = static_cast<Target*>(own_alloc(sizeof(Target) * kMaxTargets));
        g_pages = static_cast<Page*>(own_alloc(sizeof(Page) * kMaxPages));
        g_before = static_cast<uint8_t*>(own_alloc((size_t)kMaxPages * 4096));
        g_stack_before = static_cast<uint8_t*>(own_alloc(0x100000));
        g_regions = static_cast<Region*>(own_alloc(sizeof(Region) * kMaxRegions));
        g_slots = static_cast<Slot*>(own_alloc(sizeof(Slot) * kSlots));
        uint8_t* stack = static_cast<uint8_t*>(own_alloc(0x100000));
        if (!g_t || !g_pages || !g_before || !g_stack_before || !g_regions || !g_slots || !stack) {
            bea_log("capture: allocation failed");
            return false;
        }
        g_cap_stacktop = (uint32_t)(uintptr_t)(stack + 0x100000 - 64);
        char p[MAX_PATH + 32];
        CreateDirectoryA(dir, nullptr);
        snprintf(p, sizeof p, "%s\\captures.bin", dir);
        g_fcap = CreateFileA(p, GENERIC_WRITE, FILE_SHARE_READ, nullptr, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr);
        snprintf(p, sizeof p, "%s\\diag.txt", dir);
        g_fdiag = CreateFileA(p, GENERIC_WRITE, FILE_SHARE_READ, nullptr, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr);
        snprintf(p, sizeof p, "%s\\regions.txt", dir);
        g_fmap = CreateFileA(p, GENERIC_WRITE, FILE_SHARE_READ, nullptr, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr);
        snprintf(p, sizeof p, "%s\\pages.bin", dir);
        g_fpages = CreateFileA(p, GENERIC_WRITE, FILE_SHARE_READ, nullptr, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr);
        if (g_fcap == INVALID_HANDLE_VALUE || g_fpages == INVALID_HANDLE_VALUE) {
            bea_log("capture: cannot create the files in %s", dir);
            return false;
        }
        g_veh_page = (uint32_t)(uintptr_t)AddVectoredExceptionHandler(1, cap_veh) & ~0xfffu;
        g_on = true;
        bea_log("capture: into %s, calls %s of each function in play", dir, at);
    }
    if (!g_on || g_nt == kMaxTargets) return false;
    if (have_only) {
        char key[16];
        snprintf(key, sizeof key, "%08x", addr);
        if (!strstr(only, key)) return false;
    }
    g_last = g_nt;
    g_t[g_nt++] = Target{ addr, 0, 0, nullptr };
    return true;
}

// the thunk of the target bea_capture_wanted just added (executable memory,
// outside the guard: it is not writable)
void* bea_capture_hook()
{
    static uint8_t* page = nullptr;
    static int used = 0;
    const int kSize = 48;
    if (!page || used + kSize > 4096) {
        page = static_cast<uint8_t*>(VirtualAlloc(nullptr, 4096, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE));
        used = 0;
    }
    uint8_t* p = page + used;
    used += kSize;
    uint8_t* q = p;
    auto u32 = [&](uint32_t v) { memcpy(q, &v, 4); q += 4; };
    *q++ = 0x50;                                                                               // push eax
    *q++ = 0x64; *q++ = 0xa1; u32(0x24);                                                       // mov eax, fs:[0x24]
    *q++ = 0x3b; *q++ = 0x05; u32((uint32_t)(uintptr_t)&g_cap_main_tid);                        // cmp eax, [g_cap_main_tid]
    *q++ = 0x58;                                                                               // pop eax
    *q++ = 0x75; *q++ = 0x18;                                                                  // jne to_orig
    *q++ = 0x83; *q++ = 0x3d; u32((uint32_t)(uintptr_t)&g_cap_busy); *q++ = 0x00;             // cmp dword [g_cap_busy], 0
    *q++ = 0x75; *q++ = 0x0f;                                                                  // jne to_orig
    *q++ = 0xc7; *q++ = 0x05; u32((uint32_t)(uintptr_t)&g_cap_cur); u32((uint32_t)g_last);     // mov dword [g_cap_cur], i
    *q++ = 0xe9; u32((uint32_t)((uintptr_t)&cap_stub - ((uintptr_t)q + 4)));                   // jmp cap_stub
    *q++ = 0xff; *q++ = 0x25; u32((uint32_t)(uintptr_t)&g_t[g_last].tramp);                     // to_orig: jmp [tramp_i]
    FlushInstructionCache(GetCurrentProcess(), p, kSize);
    return p;
}

void** bea_capture_tramp_slot() { return &g_t[g_last].tramp; }

// at the outcome
void bea_capture_report()
{
    if (!g_on) return;
    int called = 0;
    for (int i = 0; i < g_nt; ++i) called += g_t[i].taken > 0;
    bea_log("capture: %u calls captured from %d of %d functions; %u unique pages (%llu MB); up to %d regions guarded, %u refused, %u restores split, %u late faults",
            g_ncaptures, called, g_nt, g_unique, (unsigned long long)(g_pages_end >> 20), g_max_regions, g_failed_guard,
            g_unguard_split, g_late_faults);
    FlushFileBuffers(g_fcap);
    FlushFileBuffers(g_fpages);
}

// the harness's Platform::GetTime (platform/time.cpp) runs instead of the
// original 0x5159e0 and reads the clock without the logged imports: its result
// (the x87 value it returns) goes into the log for the emulator to answer with
void bea_ilog_clock(const void* value10)
{
    if (ilog_on()) ilog_entry(kIlogN - 1, 0, value10, 10);
}
