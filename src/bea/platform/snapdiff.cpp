// In-game snapshot differ (BEA_SNAP=<addr>[,<from>[,<to>]]): at calls from..to
// of the hooked function at <addr> (default the first 200), the original and
// the port run one after the other on the same memory and their effects are
// compared byte for byte.
//
// Why: the outcome gate says *that* a port changes a level, the frame oracle
// says *that* it changes a frame; neither says *where*.  Reading the asm by
// hand is slow.  Here, at the chosen call, every committed writable page of
// the process (minus this DLL's own and the stack below the call) is copied
// (the entry image), the original runs through its MinHook trampoline, the
// memory is copied again (its effect), the entry image is restored and the
// port runs on the very same state, the memory is copied once more and the
// two effects are compared: the first differing bytes name the wrong store
// (a `this` field, a global, a caller's stack slot).  The original's effect
// is then restored and its result returned, so the game goes on as if only
// the original had run.  Calls outside the range, and nested calls while a
// comparison runs, go to the original.
//
// Limits: the port and the original both perform external side effects
// (Direct3D calls, sounds, file writes) - fine for a diagnostic; other
// threads' heap use between the copies shows up as noise (the diff reports
// runs, look at the first ones); a function that allocates differently in
// the two runs shows heap-structure differences (reported as such).
// Log lines start with "snap:".  See tools/snapdiff.py for the driver.
#include "bea/hooks.h"
#include "bea/common.h"
#include <windows.h>
#include <tlhelp32.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <setjmp.h>
#include <vector>

extern "C" {
volatile uint8_t g_snap_failed = 0;  // an image could not be allocated: no more comparisons
volatile uint8_t g_snap_busy = 0;   // a comparison runs (read by the entry thunks)
volatile uint32_t g_snap_cur = 0;   // the target whose thunk entered snap_stub
uint32_t g_snap_ret = 0;        // the caller's return address
uint32_t g_snap_args = 0;       // ESP at the arguments (entry ESP + 4)
uint32_t g_snap_ecx = 0, g_snap_edx = 0;
uint32_t g_snap_eax1 = 0, g_snap_edx1 = 0, g_snap_esp_after = 0;
uint32_t g_snap_eax2 = 0;
void* g_snap_tramp = nullptr;   // the original (MinHook trampoline)
void* g_snap_port = nullptr;    // the port
int snap_before();
void snap_after_orig();
void snap_after_port();
}

namespace {

// The functions under comparison (BEA_SNAP lists one or more).  Each gets an
// entry thunk: while a comparison runs (g_snap_busy) it jumps straight to its
// original, so one screened function calling another neither nests a
// comparison nor overwrites the stub's globals; otherwise it stores its index
// in g_snap_cur and enters snap_stub.
struct Target { uint32_t addr, from, to, calls; void* tramp; void* port; int reported; };
const int kMaxTargets = 64;
Target g_t[kMaxTargets];
int g_nt = 0, g_last_wanted = -1, g_active = 0;
DWORD g_main_tid = 0;           // the thread that installs the hooks (the game's main thread)

struct Region { uint8_t* base; size_t size; };
struct Image { std::vector<Region> regions; uint8_t* buf = nullptr; size_t size = 0; };
Image g_entry, g_after1, g_after2;
uint8_t* g_dll_lo = nullptr; uint8_t* g_dll_hi = nullptr;
std::vector<uint8_t*> g_own;    // our image buffers: never part of a snapshot

void own_add(uint8_t* p) { g_own.push_back(p); }
bool is_own(uint8_t* p)
{
    for (uint8_t* q : g_own) if (p == q) return true;
    return false;
}

// the committed, writable, non-executable regions of the process, minus this
// DLL, minus our buffers, minus the stack below the arguments
void collect(Image& im, uint32_t stack_floor)
{
    im.regions.clear();
    MEMORY_BASIC_INFORMATION mbi;
    uint8_t* p = reinterpret_cast<uint8_t*>(0x10000);
    size_t total = 0;
    while (p < reinterpret_cast<uint8_t*>(0x7ff00000) && VirtualQuery(p, &mbi, sizeof mbi) == sizeof mbi) {
        uint8_t* base = static_cast<uint8_t*>(mbi.BaseAddress);
        size_t size = mbi.RegionSize;
        p = base + size;
        if (mbi.State != MEM_COMMIT) continue;
        DWORD pr = mbi.Protect & 0xff;
        if (pr != PAGE_READWRITE && pr != PAGE_WRITECOPY) continue;
        if (mbi.Protect & PAGE_GUARD) continue;
        if (base >= g_dll_lo && base < g_dll_hi) continue;
        if (is_own(base)) continue;
        // only what the game owns: its image's writable sections and private
        // memory (heaps, VirtualAlloc'd buffers).  File mappings (writing a
        // view writes the file) and other modules' data (ntdll's heap manager
        // keeps its lists and locks there: restoring them crashed the third
        // try) stay out.
        if (mbi.Type == MEM_MAPPED) continue;
        if (mbi.Type == MEM_IMAGE && !(base >= reinterpret_cast<uint8_t*>(0x400000) && base < reinterpret_cast<uint8_t*>(0xa00000))) continue;
        // another thread's stack (a guard page right below it): it is being
        // used while we copy; only this thread's stack above the floor counts
        bool ours = stack_floor && base <= reinterpret_cast<uint8_t*>(stack_floor) && reinterpret_cast<uint8_t*>(stack_floor) < base + size;
        if (!ours && mbi.Type == MEM_PRIVATE) {
            MEMORY_BASIC_INFORMATION below;
            if (base > reinterpret_cast<uint8_t*>(0x10000) && VirtualQuery(base - 1, &below, sizeof below) == sizeof below
                && (below.Protect & PAGE_GUARD)) continue;
        }
        uint8_t* lo = base;
        if (stack_floor && base <= reinterpret_cast<uint8_t*>(stack_floor) && reinterpret_cast<uint8_t*>(stack_floor) < base + size) {
            lo = reinterpret_cast<uint8_t*>(stack_floor);     // the current stack: only what the callee can see
            size = base + size - lo;
        } else if (stack_floor && base + size <= reinterpret_cast<uint8_t*>(stack_floor)
                   && reinterpret_cast<uint8_t*>(stack_floor) - (base + size) < 0x100000) {
            // the committed part of our stack below the floor (guard pages separate it: skip)
            continue;
        }
        im.regions.push_back({lo, size});
        total += size;
    }
    if (im.size < total) {
        if (im.buf) VirtualFree(im.buf, 0, MEM_RELEASE);
        im.size = total + total / 4 + 0x100000;
        im.buf = static_cast<uint8_t*>(VirtualAlloc(nullptr, im.size, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE));
        if (!im.buf) {
            // the address space is full (BEA.exe is not large-address-aware): no comparison
            im.size = 0;
            im.regions.clear();
            g_snap_failed = 1;
            return;
        }
        own_add(im.buf);
    }
}

// A page that faults anyway (four tries faulted in memcpy on pages
// VirtualQuery called committed and writable, 2026-10-22/23): a vectored
// handler records the fault and jumps out of the copy; the rest of that
// chunk is skipped and the record is logged with the comparison.
jmp_buf g_jb;
volatile bool g_in_copy = false;
// BEA_SNAP_SYNTH (below): a trial runs; a fault in it jumps back to the driver
volatile bool g_synth_now = false;
void* g_synth_recover = nullptr;    // synth_recover (below): where a faulted or timed-out trial resumes
DWORD g_synth_fault_code = 0;
uint32_t g_synth_fault_eip = 0;
DWORD g_synth_watch_tid = 0;        // the watchdog: never suspended by a comparison
volatile DWORD g_synth_start = 0;   // GetTickCount() when the running phase began
volatile int g_synth_phase = 0;     // 1 while the original or the port runs (not while memory is copied)
DWORD g_synth_t0 = 0, g_synth_t1 = 0, g_synth_t2 = 0;   // tick counts of the phases, for the log
struct Fault { uint32_t addr, write, p, n, type, protect, state; bool dir; };
Fault g_faults[8];
int g_nfaults = 0;
uint8_t* g_cur_p = nullptr; size_t g_cur_n = 0; bool g_cur_dir = false; DWORD g_cur_type = 0, g_cur_prot = 0, g_cur_state = 0;

LONG CALLBACK snap_veh(EXCEPTION_POINTERS* ep)
{
    if (g_in_copy && ep->ExceptionRecord->ExceptionCode == EXCEPTION_ACCESS_VIOLATION) {
        if (g_nfaults < 8) {
            g_faults[g_nfaults++] = { (uint32_t)ep->ExceptionRecord->ExceptionInformation[1], (uint32_t)ep->ExceptionRecord->ExceptionInformation[0],
                                      (uint32_t)(uintptr_t)g_cur_p, (uint32_t)g_cur_n, g_cur_type, g_cur_prot, g_cur_state, g_cur_dir };
        }
        g_in_copy = false;
        longjmp(g_jb, 1);
    }
    DWORD code = ep->ExceptionRecord->ExceptionCode;
    if (g_synth_now && GetCurrentThreadId() == g_main_tid
        && (code == EXCEPTION_ACCESS_VIOLATION || code == EXCEPTION_ILLEGAL_INSTRUCTION || code == EXCEPTION_PRIV_INSTRUCTION
            || code == EXCEPTION_INT_DIVIDE_BY_ZERO || code == EXCEPTION_INT_OVERFLOW || code == EXCEPTION_ARRAY_BOUNDS_EXCEEDED)) {
        g_synth_fault_code = code;
        g_synth_fault_eip = (uint32_t)(uintptr_t)ep->ExceptionRecord->ExceptionAddress;
        g_synth_now = false;
        ep->ContextRecord->Eip = (DWORD)(uintptr_t)g_synth_recover;
        return EXCEPTION_CONTINUE_EXECUTION;
    }
    return EXCEPTION_CONTINUE_SEARCH;
}

// copy `size` bytes between a region and the image page range by page range,
// re-committing (restore) or skipping (capture) pages whose state changed
// since the region list was made: a heap shrink between the entry image and
// its restore decommitted a page and the plain memcpy faulted (first try,
// 2026-10-22)
void copy_pages(uint8_t* base, size_t size, uint8_t* img, bool to_memory)
{
    MEMORY_BASIC_INFORMATION mbi;
    uint8_t* p = base;
    while (p < base + size) {
        if (VirtualQuery(p, &mbi, sizeof mbi) != sizeof mbi) return;
        uint8_t* end = static_cast<uint8_t*>(mbi.BaseAddress) + mbi.RegionSize;
        if (end > base + size) end = base + size;
        size_t n = end - p;
        bool ok = mbi.State == MEM_COMMIT && !(mbi.Protect & PAGE_GUARD) && (mbi.Protect & 0xff) != PAGE_NOACCESS;
        if (to_memory) {
            if (mbi.State != MEM_COMMIT) ok = VirtualAlloc(p, n, MEM_COMMIT, PAGE_READWRITE) != nullptr;
            else if (!ok || ((mbi.Protect & 0xff) != PAGE_READWRITE && (mbi.Protect & 0xff) != PAGE_WRITECOPY
                             && (mbi.Protect & 0xff) != PAGE_EXECUTE_READWRITE)) {
                DWORD old;
                ok = VirtualProtect(p, n, PAGE_READWRITE, &old) != 0;
            }
        }
        if (ok) {
            g_cur_p = p; g_cur_n = n; g_cur_dir = to_memory; g_cur_type = mbi.Type; g_cur_prot = mbi.Protect; g_cur_state = mbi.State;
            if (setjmp(g_jb) == 0) {
                g_in_copy = true;
                if (to_memory) memcpy(p, img, n); else memcpy(img, p, n);
                g_in_copy = false;
            }
        } else if (!to_memory) {
            memset(img, 0, n);
        }
        img += n;
        p = end;
    }
}

void capture(Image& im, uint32_t stack_floor)
{
    collect(im, stack_floor);
    uint8_t* q = im.buf;
    for (const Region& r : im.regions) { copy_pages(r.base, r.size, q, false); q += r.size; }
}

void restore(const Image& im)
{
    uint8_t* q = im.buf;
    for (const Region& r : im.regions) {
        copy_pages(r.base, r.size, q, true);
        q += r.size;
    }
}

const char* where(uint8_t* a, uint32_t stack_floor, char* buf)
{
    uintptr_t v = reinterpret_cast<uintptr_t>(a);
    if (v >= 0x5d8000 && v < 0x9d0000) sprintf(buf, "global DAT_%08x", (unsigned)v);
    else if (stack_floor && v >= stack_floor && v < stack_floor + 0x10000) sprintf(buf, "stack args+0x%x", (unsigned)(v - stack_floor));
    else if (g_snap_ecx && v >= g_snap_ecx && v < g_snap_ecx + 0x2000) sprintf(buf, "this+0x%x", (unsigned)(v - g_snap_ecx));
    else sprintf(buf, "heap %08x", (unsigned)v);
    return buf;
}

// The port's effect is compared with the original's (a) in live memory, a
// page at a time through copy_pages (a page the port's run decommitted reads
// as the fault path leaves it), before a's restore: a third full image did
// not fit beside the game in its 2 GB (the differ died at its first
// comparison, 2026-10-30).  The differences are kept in static storage and
// logged after the other threads resume.
struct Diff { uint8_t* addr; uint32_t len; uint8_t a[8], b[8]; };
Diff g_diffs[30];
int g_ndiffs = 0;
long g_druns = 0, g_dbytes = 0;
uint8_t g_page[4096];

void compare_live(const Image& a)
{
    g_ndiffs = 0; g_druns = 0; g_dbytes = 0;
    const uint8_t* pa = a.buf;
    for (size_t k = 0; k < a.regions.size(); ++k) {
        const Region& r = a.regions[k];
        for (size_t off = 0; off < r.size; off += sizeof g_page) {
            size_t n = r.size - off < sizeof g_page ? r.size - off : sizeof g_page;
            copy_pages(r.base + off, n, g_page, false);
            const uint8_t* x = pa + off;
            const uint8_t* y = g_page;
            for (size_t i = 0; i < n; ) {
                if (x[i] == y[i]) { ++i; continue; }
                size_t j = i;
                while (j < n && j - i < 64 && x[j] != y[j]) ++j;
                size_t e = j;
                while (e < n && e - j < 4 && x[e] == y[e]) ++e;
                if (e < n && e - j < 4 && x[e] != y[e]) { j = e; while (j < n && x[j] != y[j]) ++j; }
                ++g_druns; g_dbytes += j - i;
                if (g_ndiffs < 30) {
                    Diff& d = g_diffs[g_ndiffs++];
                    d.addr = r.base + off + i;
                    d.len = (uint32_t)(j - i);
                    size_t m = j - i < 8 ? j - i : 8;
                    memcpy(d.a, x + i, m);
                    memcpy(d.b, y + i, m);
                }
                i = j;
            }
        }
        pa += r.size;
    }
}

void report_live(size_t nregions, uint32_t stack_floor)
{
    char loc[64];
    for (int k = 0; k < g_ndiffs; ++k) {
        const Diff& d = g_diffs[k];
        if (g_t[g_active].reported >= 30) break;
        ++g_t[g_active].reported;
        char ha[40], hb[40];
        size_t n = d.len < 8 ? d.len : 8;
        for (size_t t = 0; t < n; ++t) { sprintf(ha + 2 * t, "%02x", d.a[t]); sprintf(hb + 2 * t, "%02x", d.b[t]); }
        bea_log("snap:   %s: %u byte(s) orig %s port %s", where(d.addr, stack_floor, loc), (unsigned)d.len, ha, hb);
    }
    bea_log("snap: %08x call %lu clock %.3f: %ld differing run(s), %ld byte(s); eax orig %08x port %08x; %d region(s) copied",
            g_t[g_active].addr, (unsigned long)g_t[g_active].calls, (double)*reinterpret_cast<volatile float*>(0x00672fd0), g_druns, g_dbytes,
            g_snap_eax1, g_snap_eax2, (int)nregions);
    for (int k = 0; k < g_nfaults; ++k) {
        const Fault& f = g_faults[k];
        bea_log("snap:   fault %s %08x while copying %s chunk %08x+%x (type %lx protect %lx state %lx)",
                f.write ? "writing" : "reading", f.addr, f.dir ? "to memory" : "to the image", f.p, f.n,
                (unsigned long)f.type, (unsigned long)f.protect, (unsigned long)f.state);
    }
    g_nfaults = 0;
}

// differences between the original's effect (a) and the port's (b), both
// captured with the same region list (the port's capture reuses a's list)
[[maybe_unused]] void report(const Image& a, const Image& b, uint32_t stack_floor)
{
    char loc[64];
    const uint8_t* pa = a.buf;
    const uint8_t* pb = b.buf;
    long runs = 0, bytes = 0;
    for (size_t k = 0; k < a.regions.size(); ++k) {
        const Region& r = a.regions[k];
        for (size_t i = 0; i < r.size; ) {
            if (pa[i] == pb[i]) { ++i; continue; }
            size_t j = i;
            while (j < r.size && j - i < 64 && pa[j] != pb[j]) ++j;
            // extend over short equal gaps so one store shows as one run
            size_t e = j;
            while (e < r.size && e - j < 4 && pa[e] == pb[e]) ++e;
            if (e < r.size && e - j < 4 && pa[e] != pb[e]) { j = e; while (j < r.size && pa[j] != pb[j]) ++j; }
            ++runs; bytes += j - i;
            if (g_t[g_active].reported < 30) {
                ++g_t[g_active].reported;
                uint8_t* addr = r.base + i;
                char ha[40], hb[40];
                size_t n = j - i < 8 ? j - i : 8;
                for (size_t t = 0; t < n; ++t) { sprintf(ha + 2 * t, "%02x", pa[i + t]); sprintf(hb + 2 * t, "%02x", pb[i + t]); }
                bea_log("snap:   %s: %u byte(s) orig %s port %s", where(addr, stack_floor, loc), (unsigned)(j - i), ha, hb);
            }
            i = j;
        }
        pa += r.size; pb += r.size;
    }
    bea_log("snap: %08x call %lu clock %.3f: %ld differing run(s), %ld byte(s); eax orig %08x port %08x; %d region(s) copied",
            g_t[g_active].addr, (unsigned long)g_t[g_active].calls, (double)*reinterpret_cast<volatile float*>(0x00672fd0), runs, bytes, g_snap_eax1, g_snap_eax2,
            (int)a.regions.size());
    for (int k = 0; k < g_nfaults; ++k) {
        const Fault& f = g_faults[k];
        bea_log("snap:   fault %s %08x while copying %s chunk %08x+%x (type %lx protect %lx state %lx)",
                f.write ? "writing" : "reading", f.addr, f.dir ? "to memory" : "to the image", f.p, f.n,
                (unsigned long)f.type, (unsigned long)f.protect, (unsigned long)f.state);
    }
    g_nfaults = 0;
}

}  // namespace

// Every other thread of the process stands still while a comparison runs:
// the restores roll back the whole process's memory, and a thread running
// meanwhile (the watchdog logging, the loader allocating) came back to
// rolled-back locks and buffers and the game froze (six leaf ports on level
// 100, 2026-10-29).  The handles are opened before the entry capture; the
// list lives in static storage (no heap use between capture and restore).
HANDLE g_suspended[256];
int g_nsuspended = 0;

static void suspend_others()
{
    g_nsuspended = 0;
    HANDLE snap = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0);
    if (snap == INVALID_HANDLE_VALUE) return;
    THREADENTRY32 te;
    te.dwSize = sizeof te;
    DWORD pid = GetCurrentProcessId(), me = GetCurrentThreadId();
    for (BOOL ok = Thread32First(snap, &te); ok && g_nsuspended < 256; ok = Thread32Next(snap, &te)) {
        if (te.th32OwnerProcessID != pid || te.th32ThreadID == me || te.th32ThreadID == g_synth_watch_tid) continue;
        HANDLE h = OpenThread(THREAD_SUSPEND_RESUME, FALSE, te.th32ThreadID);
        if (!h) continue;
        if (SuspendThread(h) == (DWORD)-1) { CloseHandle(h); continue; }
        g_suspended[g_nsuspended++] = h;
    }
    CloseHandle(snap);
}

static void resume_others()
{
    for (int i = 0; i < g_nsuspended; ++i) { ResumeThread(g_suspended[i]); CloseHandle(g_suspended[i]); }
    g_nsuspended = 0;
}

extern "C" int snap_before()
{
    Target& t = g_t[g_snap_cur];
    g_snap_tramp = t.tramp;           // the stub's paths both use these
    g_snap_port = t.port;
    // only the main thread's calls: a comparison restores the whole process's
    // memory, and one on the loading thread rolled back the main thread's
    // state under it (twelve ports on level 110 hung in loading, 2026-10-29)
    if (GetCurrentThreadId() != g_main_tid) return 0;
    ++t.calls;
    if (g_snap_busy || g_snap_failed || t.calls < t.from || t.calls > t.to) return 0;
    g_snap_busy = 1;
    g_active = g_snap_cur;
    suspend_others();
    capture(g_entry, g_snap_args);
    // the original's image is sized now too: an allocation failing between the
    // two runs would leave no way back
    if (!g_snap_failed && g_after1.size < g_entry.size) {
        if (g_after1.buf) VirtualFree(g_after1.buf, 0, MEM_RELEASE);
        g_after1.size = g_entry.size;
        g_after1.buf = static_cast<uint8_t*>(VirtualAlloc(nullptr, g_after1.size, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE));
        if (g_after1.buf) own_add(g_after1.buf);
        else { g_after1.size = 0; g_snap_failed = 1; }
    }
    if (g_snap_failed) {
        resume_others();
        g_snap_busy = 0;
        bea_log("snap: no memory for the images (BEA.exe has 2 GB): comparisons off");
        return 0;
    }
    g_synth_t0 = GetTickCount();
    g_synth_start = g_synth_t0;
    g_synth_phase = 1;
    return 1;
}

extern "C" void snap_after_orig()
{
    g_synth_phase = 0;
    g_synth_t1 = GetTickCount();
    capture(g_after1, g_snap_args);
    restore(g_entry);
    g_synth_start = GetTickCount();
    g_synth_phase = 1;
}

extern "C" void snap_after_port()
{
    g_synth_phase = 0;
    g_synth_t2 = GetTickCount();
    // the port's effect against the original's, in live memory (compare_live)
    compare_live(g_after1);
    restore(g_synth_now ? g_entry : g_after1);
    resume_others();                  // before the log: bea_log may need a lock another thread had
    report_live(g_after1.regions.size(), g_snap_args);
    g_snap_busy = 0;
}

// The hook itself.  The caller's return address is popped so both calls see
// the arguments where the original expects them; afterwards ESP is what the
// original left (it pops its arguments) and the original's EAX/EDX return.
__attribute__((naked)) static void snap_stub()
{
    __asm__ volatile(
        "popl _g_snap_ret\n\t"
        "movl %esp, _g_snap_args\n\t"
        "movl %ecx, _g_snap_ecx\n\t"
        "movl %edx, _g_snap_edx\n\t"
        "pushal\n\t"
        "call _snap_before\n\t"
        "testl %eax, %eax\n\t"
        "popal\n\t"
        "jnz 1f\n\t"
        "pushl _g_snap_ret\n\t"
        "jmp *_g_snap_tramp\n"
        "1:\n\t"
        "movl _g_snap_ecx, %ecx\n\t"
        "movl _g_snap_edx, %edx\n\t"
        "call *_g_snap_tramp\n\t"
        "movl %eax, _g_snap_eax1\n\t"
        "movl %edx, _g_snap_edx1\n\t"
        "movl %esp, _g_snap_esp_after\n\t"
        "movl _g_snap_args, %esp\n\t"
        "pushal\n\t"
        "call _snap_after_orig\n\t"
        "popal\n\t"
        "movl _g_snap_ecx, %ecx\n\t"
        "movl _g_snap_edx, %edx\n\t"
        "call *_g_snap_port\n\t"
        "movl %eax, _g_snap_eax2\n\t"
        "movl _g_snap_args, %esp\n\t"
        "pushal\n\t"
        "call _snap_after_port\n\t"
        "popal\n\t"
        "movl _g_snap_esp_after, %esp\n\t"
        "movl _g_snap_eax1, %eax\n\t"
        "movl _g_snap_edx1, %edx\n\t"
        "jmp *_g_snap_ret\n\t");
}

void synth_parse();
extern int g_nsynth;

// hooks.cpp asks before installing each hook
bool bea_snap_wanted(uint32_t addr)
{
    static bool parsed = false;
    if (!parsed) {
        parsed = true;
        // BEA_SNAP=addr[,from[,to]][;addr[,from[,to]]...]
        static char buf[4096];
        g_main_tid = GetCurrentThreadId();
        bool snap = GetEnvironmentVariableA("BEA_SNAP", buf, sizeof buf) != 0;
        if (snap) {
            for (char* item = strtok(buf, ";"); item && g_nt < kMaxTargets; item = strtok(nullptr, ";")) {
                unsigned a = 0, f = 1, t = 200;
                if (sscanf(item, "%x,%u,%u", &a, &f, &t) >= 1 && a) g_t[g_nt++] = Target{ a, f, t, 0, nullptr, nullptr, 0 };
            }
        }
        synth_parse();
        if (snap || g_nsynth) {
            // nothing may touch the process heap between the entry capture and
            // the restores (the images include the heap: a block allocated in
            // between is "free" again after a restore while still in use, and
            // the next heap call crashed in ntdll on the first try): every
            // list is sized here, the image buffers come from VirtualAlloc
            g_entry.regions.reserve(16384); g_after1.regions.reserve(16384); g_after2.regions.reserve(16384);
            g_own.reserve(64);
            AddVectoredExceptionHandler(1, snap_veh);
            HMODULE self = nullptr;
            GetModuleHandleExA(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                               reinterpret_cast<LPCSTR>(&bea_snap_wanted), &self);
            g_dll_lo = reinterpret_cast<uint8_t*>(self);
            // the image's real size: a fixed 16 MB left the rest of a larger DLL (56 MB
            // with the lifted functions, 2026-10-30) in the snapshots, and restoring
            // them overwrote this file's own state
            auto dos = reinterpret_cast<IMAGE_DOS_HEADER*>(g_dll_lo);
            auto nt = reinterpret_cast<IMAGE_NT_HEADERS*>(g_dll_lo + dos->e_lfanew);
            g_dll_hi = g_dll_lo + nt->OptionalHeader.SizeOfImage;
            for (int i = 0; i < g_nt; ++i)
                bea_log("snap: comparing calls %u..%u of %08x (original first, then the port on the same memory)", g_t[i].from, g_t[i].to, g_t[i].addr);
        }
    }
    g_last_wanted = -1;
    for (int i = 0; i < g_nt; ++i)
        if (g_t[i].addr == addr) g_last_wanted = i;
    return g_last_wanted >= 0;
}

// the entry thunk of target i (see Target): executable memory, outside the
// snapshots (collect() copies only read-write pages)
static void* make_thunk(int i)
{
    static uint8_t* page = nullptr;
    static int used = 0;
    const int kSize = 64;
    if (!page || used + kSize > 4096) {
        page = static_cast<uint8_t*>(VirtualAlloc(nullptr, 4096, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE));
        used = 0;
    }
    uint8_t* p = page + used;
    used += kSize;
    uint8_t* q = p;
    auto u32 = [&](uint32_t v) { memcpy(q, &v, 4); q += 4; };
    // another thread goes straight to the original: snap_stub keeps the
    // caller's return address in globals, and the loading thread entering
    // it beside the main thread hung level 110 in loading (2026-10-29)
    *q++ = 0x50;                                                                               // push eax
    *q++ = 0x64; *q++ = 0xa1; u32(0x24);                                                       // mov eax, fs:[0x24] (thread id)
    *q++ = 0x3b; *q++ = 0x05; u32((uint32_t)(uintptr_t)&g_main_tid);                            // cmp eax, [g_main_tid]
    *q++ = 0x58;                                                                               // pop eax
    *q++ = 0x75; *q++ = 0x18;                                                                  // jne to_orig (+24)
    *q++ = 0x80; *q++ = 0x3d; u32((uint32_t)(uintptr_t)&g_snap_busy); *q++ = 0x00;            // cmp byte [g_snap_busy], 0
    *q++ = 0x75; *q++ = 0x0f;                                                                  // jne to_orig (+15)
    *q++ = 0xc7; *q++ = 0x05; u32((uint32_t)(uintptr_t)&g_snap_cur); u32((uint32_t)i);         // mov dword [g_snap_cur], i
    *q++ = 0xe9; u32((uint32_t)((uintptr_t)&snap_stub - ((uintptr_t)q + 4)));                  // jmp snap_stub
    *q++ = 0xff; *q++ = 0x25; u32((uint32_t)(uintptr_t)&g_t[i].tramp);                          // to_orig: jmp [tramp_i]
    FlushInstructionCache(GetCurrentProcess(), p, kSize);
    return p;
}

// called right after bea_snap_wanted(addr) returned true, for that target
void* bea_snap_hook(void* port, void** tramp_slot_out)
{
    *tramp_slot_out = nullptr;
    if (g_last_wanted < 0) return reinterpret_cast<void*>(&snap_stub);
    g_t[g_last_wanted].port = port;
    return make_thunk(g_last_wanted);
}

void** bea_snap_tramp_slot() { return g_last_wanted >= 0 ? &g_t[g_last_wanted].tramp : &g_snap_tramp; }


// Synthetic calls (BEA_SNAP_SYNTH=<file>, 2026-11-01).  Virtual methods that no
// test reaches cannot be compared on the game's own calls.  At the first frame
// of play from BEA_SNAP_SYNTH_CLOCK (default 30), each listed method is called
// on up to three objects of its classes found in live memory (by the vptr at
// the start of the subobject) with a few argument patterns, through its snap
// thunk: the original and the port run on the same memory and their effects
// are compared as for a real call ("snap: ADDR call N ..." lines), and the
// entry image is restored afterwards, so the game goes on untouched.  A fault
// in either run ends the trial ("snap: synth fault"), with the entry image
// restored.  File lines: "addr nargs vptr [vptr...]" (hex, nargs decimal).
namespace {
const int kSynthVptrs = 8;
struct Synth { int target; unsigned nargs; uint32_t vptr[kSynthVptrs]; int nvptr; };
Synth g_synth[kMaxTargets];
double g_synth_clock = 30;
bool g_synth_done = false;
}  // namespace
int g_nsynth = 0;

void synth_parse()
{
    char path[MAX_PATH];
    if (!GetEnvironmentVariableA("BEA_SNAP_SYNTH", path, sizeof path)) return;
    char c[32];
    if (GetEnvironmentVariableA("BEA_SNAP_SYNTH_CLOCK", c, sizeof c)) g_synth_clock = atof(c);
    FILE* f = fopen(path, "r");
    if (!f) { bea_log("snap: synth: cannot open %s", path); return; }
    char line[512];
    while (fgets(line, sizeof line, f) && g_nt < kMaxTargets) {
        Synth& sy = g_synth[g_nsynth];
        unsigned a = 0;
        int used = 0;
        if (sscanf(line, "%x %u%n", &a, &sy.nargs, &used) < 2 || !a) continue;
        sy.nvptr = 0;
        for (char* q = line + used; sy.nvptr < kSynthVptrs; ) {
            unsigned v;
            int k = 0;
            if (sscanf(q, "%x%n", &v, &k) < 1) break;
            sy.vptr[sy.nvptr++] = v;
            q += k;
        }
        if (!sy.nvptr || sy.nargs > 8) continue;
        sy.target = g_nt;
        g_t[g_nt++] = Target{ a, 1, 0xffffffffu, 0, nullptr, nullptr, 0 };
        ++g_nsynth;
    }
    fclose(f);
    bea_log("snap: synth: %d method(s) to call at game clock %.1f", g_nsynth, g_synth_clock);
}

extern "C" {
uint32_t g_si_fn = 0, g_si_this = 0, g_si_n = 0, g_si_esp = 0, g_si_ret = 0, g_si_seh = 0, g_si_faulted = 0;
uint32_t g_si_args[8];
}

// thiscall g_si_fn(g_si_this, g_si_args[0..n)); registers and ESP as before
__attribute__((naked)) static void synth_invoke()
{
    __asm__ volatile(
        "pushal\n\t"
        "movl %esp, _g_si_esp\n\t"
        "movl %fs:0, %eax\n\t"
        "movl %eax, _g_si_seh\n\t"
        "movl $0, _g_si_faulted\n\t"
        "movl _g_si_n, %eax\n"
        "1:\n\t"
        "testl %eax, %eax\n\t"
        "jz 2f\n\t"
        "decl %eax\n\t"
        "pushl _g_si_args(,%eax,4)\n\t"
        "jmp 1b\n"
        "2:\n\t"
        "movl _g_si_this, %ecx\n\t"
        "call *_g_si_fn\n\t"
        "movl %eax, _g_si_ret\n\t"
        "movl _g_si_esp, %esp\n\t"
        "popal\n\t"
        "ret\n\t");
}

__attribute__((naked)) static void synth_recover()
{
    __asm__ volatile(
        "movl _g_si_esp, %esp\n\t"
        "movl _g_si_seh, %eax\n\t"
        "movl %eax, %fs:0\n\t"
        "movl $1, _g_si_faulted\n\t"
        "cld\n\t"
        "popal\n\t"
        "ret\n\t");
}

// A trial that runs on (an original looping over a stale list) is ended by
// the watchdog: it stops the main thread, points it at synth_bail and lets it
// go, and the trial unwinds as after a fault ("code 0000dead").
static HANDLE g_synth_main = nullptr;

static volatile bool g_synth_in_trial = false;
static DWORD WINAPI synth_watch(void*)
{
    for (;;) {
        Sleep(100);
        if (!g_synth_in_trial || !g_synth_now || g_synth_phase != 1) continue;
        if (GetTickCount() - g_synth_start < 5000) continue;
        // first the frozen threads go: the main thread may wait in the kernel for
        // a lock one of them holds (the heap's), and no redirection reaches it there
        resume_others();
        if (SuspendThread(g_synth_main) == (DWORD)-1) continue;
        CONTEXT c;
        c.ContextFlags = CONTEXT_CONTROL;
        if (g_synth_now && GetThreadContext(g_synth_main, &c)) {
            g_synth_fault_eip = c.Eip;
            g_synth_fault_code = 0xdead;
            c.Eip = (DWORD)(uintptr_t)g_synth_recover;
            g_synth_now = false;           // once
            g_synth_phase = 0;
            SetThreadContext(g_synth_main, &c);
        }
        ResumeThread(g_synth_main);
        bea_log("snap: synth watchdog: a run over 5 s, main thread at %08x: sent to recovery", g_synth_fault_eip);
    }
}

static void synth_trial(int k, uint32_t obj, const uint32_t* args)
{
    const Synth& sy = g_synth[k];
    Target& t = g_t[sy.target];
    char a[96] = "";
    for (unsigned i = 0; i < sy.nargs; ++i) sprintf(a + strlen(a), " %08x", args[i]);
    bea_log("snap: synth %08x this %08x args%s", t.addr, obj, a);
    g_si_fn = t.addr;                       // the hooked entry: MinHook sends it to the snap thunk
    g_si_this = obj;
    g_si_n = sy.nargs;
    for (unsigned i = 0; i < sy.nargs; ++i) g_si_args[i] = args[i];
    static uint8_t fpu[108];
    __asm__ volatile("fnsave %0\n\tfrstor %0" : "+m"(fpu));
    g_synth_recover = reinterpret_cast<void*>(&synth_recover);
    g_synth_start = GetTickCount();
    g_synth_in_trial = true;
    g_synth_now = true;
    DWORD t_start = GetTickCount();
    reinterpret_cast<void (*)()>(&synth_invoke)();
    g_synth_now = false;
    g_synth_in_trial = false;
    g_synth_phase = 0;
    if (!g_si_faulted)
        bea_log("snap: synth timing: entry copy %lu ms, original %lu ms, port %lu ms, total %lu ms",
                (unsigned long)(g_synth_t0 - t_start), (unsigned long)(g_synth_t1 - g_synth_t0),
                (unsigned long)(g_synth_t2 - g_synth_t1), (unsigned long)(GetTickCount() - t_start));
    if (g_si_faulted) {
        if (g_snap_busy) {
            restore(g_entry);
            resume_others();
            g_snap_busy = 0;
        }
        bea_log("snap: synth fault %08lx at %08x in %08x", (unsigned long)g_synth_fault_code, g_synth_fault_eip, t.addr);
    }
    __asm__ volatile("frstor %0" : : "m"(fpu));
}

void bea_snap_synth_frame()
{
    if (!g_nsynth || g_synth_done || GetCurrentThreadId() != g_main_tid) return;
    if (*reinterpret_cast<volatile int*>(0x008a9ac0) != 3) return;            // in play
    if (*reinterpret_cast<volatile float*>(0x00672fd0) < g_synth_clock) return;
    g_synth_done = true;
    DuplicateHandle(GetCurrentProcess(), GetCurrentThread(), GetCurrentProcess(), &g_synth_main, 0, FALSE, DUPLICATE_SAME_ACCESS);
    CreateThread(nullptr, 0, synth_watch, nullptr, 0, &g_synth_watch_tid);
    // objects: the vptrs of every listed class, in the game's private memory
    static uint32_t found[kMaxTargets][3];
    static int nfound[kMaxTargets];
    memset(nfound, 0, sizeof nfound);
    MEMORY_BASIC_INFORMATION mbi;
    uint8_t* p = reinterpret_cast<uint8_t*>(0x10000);
    while (p < reinterpret_cast<uint8_t*>(0x7ff00000) && VirtualQuery(p, &mbi, sizeof mbi) == sizeof mbi) {
        uint8_t* base = static_cast<uint8_t*>(mbi.BaseAddress);
        p = base + mbi.RegionSize;
        if (mbi.State != MEM_COMMIT || mbi.Type != MEM_PRIVATE || (mbi.Protect & 0xff) != PAGE_READWRITE || (mbi.Protect & PAGE_GUARD)) continue;
        if (is_own(base)) continue;
        const uint32_t* w = reinterpret_cast<const uint32_t*>(base);
        size_t n = mbi.RegionSize / 4;
        for (size_t i = 0; i < n; ++i) {
            uint32_t v = w[i];
            if (v < 0x5d0000 || v >= 0x622000) continue;
            for (int k = 0; k < g_nsynth; ++k) {
                const Synth& sy = g_synth[k];
                if (nfound[k] >= 3) continue;
                for (int j = 0; j < sy.nvptr; ++j)
                    if (sy.vptr[j] == v) { found[k][nfound[k]++] = (uint32_t)(uintptr_t)(w + i); break; }
            }
        }
    }
    bea_log("snap: synth: calling at clock %.3f", (double)*reinterpret_cast<volatile float*>(0x00672fd0));
    for (int k = 0; k < g_nsynth; ++k) {
        const Synth& sy = g_synth[k];
        if (!nfound[k]) { bea_log("snap: synth %08x no object", g_t[sy.target].addr); continue; }
        for (int o = 0; o < nfound[k]; ++o) {
            uint32_t obj = found[k][o], other = found[k][(o + 1) % nfound[k]];
            uint32_t pats[4][8];
            for (int i = 0; i < 8; ++i) { pats[0][i] = 0; pats[1][i] = i + 1; pats[2][i] = 0x3f800000; pats[3][i] = other; }
            int npat = sy.nargs ? 4 : 1;
            for (int q = 0; q < npat; ++q) synth_trial(k, obj, pats[q]);
        }
    }
    bea_log("snap: synth: done");
}
