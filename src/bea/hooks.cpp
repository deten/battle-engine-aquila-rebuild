// Hook registry and loader implementation.
#include "bea/hooks.h"

#include <windows.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <intrin.h>

#include "MinHook.h"

// ---------------------------------------------------------------------------
// logging: bea_hook.log next to BEA.exe
static FILE* g_log = nullptr;
static char g_game_dir[MAX_PATH];

static void game_dir()
{
    GetModuleFileNameA(nullptr, g_game_dir, MAX_PATH);
    char* slash = strrchr(g_game_dir, '\\');
    if (slash) slash[1] = '\0';
}

// BEA_INSTANCE=<n> (set by tools/smoke_test.ps1 -Instance n) lets several
// game instances run at once with their own log and disable files:
// bea_hook<n>.log and bea_hook_disable<n>.txt.
static std::string instance_suffix()
{
    char buf[16] = "";
    GetEnvironmentVariableA("BEA_INSTANCE", buf, sizeof buf);
    return std::string(buf);
}

void bea_log_open()
{
    game_dir();
    std::string path = std::string(g_game_dir) + "bea_hook" + instance_suffix() + ".log";
    g_log = fopen(path.c_str(), "w");
}

void bea_log_close()
{
    if (g_log) fclose(g_log);
    g_log = nullptr;
}

void bea_log(const char* fmt, ...)
{
    char buf[1024];
    va_list ap;
    va_start(ap, fmt);
    vsnprintf(buf, sizeof buf, fmt, ap);
    va_end(ap);
    if (g_log) {
        fprintf(g_log, "[%08lu] %s\n", GetTickCount(), buf);
        fflush(g_log);
    }
    OutputDebugStringA(buf);
}

// ---------------------------------------------------------------------------
// crash logger: first-chance access violations are logged with EIP, the
// faulting address and code-looking stack dwords so a crash can be mapped to
// a function (exe addresses directly, DLL addresses via addr2line on
// build/zlib.dll with the logged DLL base subtracted).
extern "C" IMAGE_DOS_HEADER __ImageBase;
extern volatile uint32_t g_bea_shadow_current;
// NaN trap (test runs with BEA_FPTRAP=1, test_harness.cpp unmasks the x87
// invalid-operation exception every frame): the first instruction that makes
// or uses a NaN raises an FP exception at the next x87 instruction; the
// faulting instruction's address is in FloatSave.ErrorOffset.  Log it (up to
// 20 distinct addresses), mask the exception in the saved context and carry
// on, so one run lists the NaN sources instead of crashing far downstream
// (2026-10-20: autopilot hangs in angle-wrap and grid loops on NaN).
volatile bool g_bea_fptrap = false;
static LONG fp_trap(EXCEPTION_POINTERS* ep)
{
    static uint32_t seen[20];
    static int nseen = 0;
    CONTEXT* c = ep->ContextRecord;
    uint32_t at = c->FloatSave.ErrorOffset;
    bool known = false;
    for (int i = 0; i < nseen; ++i) known = known || seen[i] == at;
    if (!known && nseen < 20) {
        seen[nseen++] = at;
        uintptr_t dll = reinterpret_cast<uintptr_t>(&__ImageBase);
        char line[256] = "";
        const DWORD* fp = reinterpret_cast<const DWORD*>(c->Ebp);
        for (int i = 0; i < 6; ++i) {
            MEMORY_BASIC_INFORMATION mbi;
            if (VirtualQuery(fp, &mbi, sizeof mbi) == 0 || mbi.State != MEM_COMMIT ||
                reinterpret_cast<uintptr_t>(fp) & 3 || reinterpret_cast<uintptr_t>(fp) < c->Esp) break;
            DWORD v = fp[1];
            bool in_dll = v >= dll && v < dll + 0x800000;
            size_t len = strlen(line);
            snprintf(line + len, sizeof line - len, " %s%08lx", in_dll ? "dll+" : "", in_dll ? v - dll : v);
            const DWORD* next = reinterpret_cast<const DWORD*>(fp[0]);
            if (next <= fp) break;
            fp = next;
        }
        bea_log("FPTRAP code=%08lx at=%08lx (dll+%08lx) eip=%08lx sw=%04lx frames:%s", ep->ExceptionRecord->ExceptionCode,
                (unsigned long)at, at >= dll ? (unsigned long)(at - dll) : 0UL, c->Eip,
                (unsigned long)(c->FloatSave.StatusWord & 0xffff), line);
    }
    c->FloatSave.ControlWord |= 0x3f;            // mask everything for the rest of this frame
    c->FloatSave.StatusWord &= ~0x80ffUL;        // clear the exception flags and ES
    c->ContextFlags |= CONTEXT_FLOATING_POINT;   // or the FPU state is not restored and the trap repeats
    // under WoW64 the x87 state is restored from the FXSAVE image (FCW at
    // byte 0, FSW at byte 2), not from FloatSave
    if (c->ContextFlags & CONTEXT_EXTENDED_REGISTERS) {
        uint16_t* fx = reinterpret_cast<uint16_t*>(c->ExtendedRegisters);
        fx[0] |= 0x3f;
        fx[1] &= ~0x80ff;
    }
    return EXCEPTION_CONTINUE_EXECUTION;
}

static LONG WINAPI crash_logger(EXCEPTION_POINTERS* ep)
{
    DWORD code = ep->ExceptionRecord->ExceptionCode;
    if (g_bea_fptrap && ((code >= 0xC000008D && code <= 0xC0000093) || code == 0xC00002B4 || code == 0xC00002B5))
        return fp_trap(ep);
    if (code != EXCEPTION_ACCESS_VIOLATION && code != EXCEPTION_ILLEGAL_INSTRUCTION &&
        code != EXCEPTION_INT_DIVIDE_BY_ZERO && code != EXCEPTION_STACK_OVERFLOW && code != EXCEPTION_PRIV_INSTRUCTION &&
        code != STATUS_GUARD_PAGE_VIOLATION)
        return EXCEPTION_CONTINUE_SEARCH;
    CONTEXT* c = ep->ContextRecord;
    uintptr_t dll = reinterpret_cast<uintptr_t>(&__ImageBase);
    bea_log("CRASH code=%08lx eip=%08lx (dll+%08lx) addr=%08lx eax=%08lx ecx=%08lx edx=%08lx esp=%08lx ebp=%08lx",
            code, c->Eip, c->Eip >= dll ? c->Eip - dll : 0,
            ep->ExceptionRecord->NumberParameters > 1 ? (DWORD)ep->ExceptionRecord->ExceptionInformation[1] : 0,
            c->Eax, c->Ecx, c->Edx, c->Esp, c->Ebp);
    const DWORD* sp = reinterpret_cast<const DWORD*>(c->Esp);
    char line[1024];
    int n = 0;
    line[0] = 0;
    for (int i = 0; i < 64 && n < 12; ++i) {
        MEMORY_BASIC_INFORMATION mbi;
        if (VirtualQuery(sp + i, &mbi, sizeof mbi) == 0 || mbi.State != MEM_COMMIT) break;
        DWORD v = sp[i];
        bool in_exe = v >= 0x401000 && v < 0x5d8000;
        bool in_dll = v >= dll && v < dll + 0x800000;
        if (in_exe || in_dll) {
            size_t len = strlen(line);
            snprintf(line + len, sizeof line - len, " %s%08lx", in_dll ? "dll+" : "", in_dll ? v - dll : v);
            ++n;
        }
    }
    bea_log("CRASH stack:%s", line);
    // EBP chain: the dword scan above stops at 64 dwords, which a frame with
    // a big local buffer hides entirely (the CRT's _output has 0x24c bytes:
    // the 2026-10-19 level 221 sprintf crash showed no caller)
    line[0] = 0;
    const DWORD* fp = reinterpret_cast<const DWORD*>(c->Ebp);
    for (int i = 0; i < 16; ++i) {
        MEMORY_BASIC_INFORMATION mbi;
        if (VirtualQuery(fp, &mbi, sizeof mbi) == 0 || mbi.State != MEM_COMMIT ||
            reinterpret_cast<uintptr_t>(fp) & 3 || reinterpret_cast<uintptr_t>(fp) < c->Esp) break;
        DWORD v = fp[1];
        bool in_dll = v >= dll && v < dll + 0x800000;
        size_t len = strlen(line);
        snprintf(line + len, sizeof line - len, " %s%08lx", in_dll ? "dll+" : "", in_dll ? v - dll : v);
        const DWORD* next = reinterpret_cast<const DWORD*>(fp[0]);
        if (next <= fp) break;
        fp = next;
    }
    bea_log("CRASH frames:%s", line);
    bea_log("CRASH shadow current=%08lx", (unsigned long)g_bea_shadow_current);
    return EXCEPTION_CONTINUE_SEARCH;
}

void bea_install_crash_logger()
{
    AddVectoredExceptionHandler(1, crash_logger);
}

// ---------------------------------------------------------------------------
// shadow-mode statistics
struct ShadowStat {
    uint32_t calls = 0;
    uint32_t mismatches = 0;
    std::string first_detail;
};
static std::map<uint32_t, ShadowStat>& shadow_stats()
{
    static std::map<uint32_t, ShadowStat> s;
    return s;
}
static CRITICAL_SECTION g_shadow_cs;
static bool g_shadow_cs_init = false;

void bea_shadow_record(uint32_t address, bool mismatch, const char* detail)
{
    if (!g_shadow_cs_init) { InitializeCriticalSection(&g_shadow_cs); g_shadow_cs_init = true; }
    EnterCriticalSection(&g_shadow_cs);
    ShadowStat& s = shadow_stats()[address];
    s.calls++;
    if (mismatch) {
        s.mismatches++;
        if (s.first_detail.empty() && detail) s.first_detail = detail;
        if (s.mismatches <= 3) bea_log("SHADOW MISMATCH %08x #%u: %s", address, s.mismatches, detail ? detail : "");
    }
    LeaveCriticalSection(&g_shadow_cs);
}

char* bea_shadow_buffer()
{
    static char* buf = nullptr;
    if (!buf) {
        const size_t size = 0x100000;
        char* b = static_cast<char*>(VirtualAlloc(nullptr, size + 0x1000, MEM_RESERVE, PAGE_NOACCESS));
        if (b) VirtualAlloc(b, size, MEM_COMMIT, PAGE_READWRITE);
        buf = b;
    }
    return buf;
}

// Rewritten every watchdog tick (the smoke test kills the process, so there
// is no orderly unload): bea_shadow_report_<pid>.txt holds this run's totals.
void bea_shadow_report()
{
    if (!g_shadow_cs_init || shadow_stats().empty()) return;
    char path[MAX_PATH + 64];
    snprintf(path, sizeof path, "%sbea_shadow_report_%lu.txt", g_game_dir, GetCurrentProcessId());
    FILE* f = fopen(path, "w");
    if (!f) return;
    EnterCriticalSection(&g_shadow_cs);
    for (auto& kv : shadow_stats()) {
        fprintf(f, "%08x %u %u %s\n", kv.first, kv.second.calls, kv.second.mismatches, kv.second.first_detail.c_str());
    }
    LeaveCriticalSection(&g_shadow_cs);
    fclose(f);
}

// ---------------------------------------------------------------------------
// watchdog heartbeat (after the shadow statistics it reports on)
volatile long g_bea_frames = 0;
volatile uint32_t g_bea_shadow_current = 0;
volatile long g_bea_shadow_budget = 0;

// Hang sampler: when no frame was presented for 5 s the main thread is most
// likely spinning inside a replacement; sample its EIP (and code-looking
// stack dwords) so tools/crashmap.py can name the port, the same way the
// crash logger does.
static HANDLE g_main_thread = nullptr;
static void log_hang_sample()
{
    if (!g_main_thread) return;
    if (SuspendThread(g_main_thread) == (DWORD)-1) return;
    CONTEXT c;
    c.ContextFlags = CONTEXT_CONTROL | CONTEXT_INTEGER;
    if (GetThreadContext(g_main_thread, &c)) {
        uintptr_t dll = reinterpret_cast<uintptr_t>(&__ImageBase);
        char line[1024];
        line[0] = 0;
        const DWORD* sp = reinterpret_cast<const DWORD*>(c.Esp);
        int n = 0;
        for (int i = 0; i < 64 && n < 12; ++i) {
            MEMORY_BASIC_INFORMATION mbi;
            if (VirtualQuery(sp + i, &mbi, sizeof mbi) == 0 || mbi.State != MEM_COMMIT) break;
            DWORD v = sp[i];
            bool in_exe = v >= 0x401000 && v < 0x5d8000;
            bool in_dll = v >= dll && v < dll + 0x800000;
            if (in_exe || in_dll) {
                size_t len = strlen(line);
                snprintf(line + len, sizeof line - len, " %s%08lx", in_dll ? "dll+" : "", in_dll ? v - dll : v);
                ++n;
            }
        }
        // EBP chain, system modules named (a wait inside d3d9/user32/ntdll
        // leaves no exe or DLL dwords near ESP)
        DWORD rets[10];
        int nrets = 0;
        const DWORD* fp = reinterpret_cast<const DWORD*>(c.Ebp);
        while (nrets < 10) {
            MEMORY_BASIC_INFORMATION mbi;
            if (VirtualQuery(fp, &mbi, sizeof mbi) == 0 || mbi.State != MEM_COMMIT ||
                reinterpret_cast<uintptr_t>(fp) & 3 || reinterpret_cast<uintptr_t>(fp) < c.Esp) break;
            rets[nrets++] = fp[1];
            const DWORD* next = reinterpret_cast<const DWORD*>(fp[0]);
            if (next <= fp) break;
            fp = next;
        }
        ResumeThread(g_main_thread);
        // name the modules only after resuming (the loader lock may be held
        // by the suspended thread)
        char frames[512];
        frames[0] = 0;
        for (int i = -1; i < nrets; ++i) {            // -1: EIP itself
            DWORD v = i < 0 ? c.Eip : rets[i];
            char mod[MAX_PATH] = "?";
            HMODULE hm = nullptr;
            if (GetModuleHandleExA(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                                   reinterpret_cast<LPCSTR>(static_cast<uintptr_t>(v)), &hm))
                GetModuleFileNameA(hm, mod, sizeof mod);
            const char* base = strrchr(mod, '\\') ? strrchr(mod, '\\') + 1 : mod;
            size_t len = strlen(frames);
            snprintf(frames + len, sizeof frames - len, " %s+%lx", base,
                     (unsigned long)(v - reinterpret_cast<uintptr_t>(hm)));
        }
        bea_log("HANG eip=%08lx (dll+%08lx) esp=%08lx stack:%s", c.Eip, c.Eip >= dll ? c.Eip - dll : 0, c.Esp, line);
        bea_log("HANG frames:%s", frames);
    } else {
        ResumeThread(g_main_thread);
    }
}

// Call coverage (test runs only): each replacement is entered through a
// 16-byte thunk `inc dword [counter]; jmp replacement`, and the watchdog logs
// "called+: addr ..." for replacements first called since the last
// heartbeat.  tools/called.py collects these from the soak logs to report how
// many replaced functions a soak actually ran.
struct CallCounter { uint32_t address; volatile uint32_t count; bool logged; bool unported = false; void* slot = nullptr; };
static std::vector<CallCounter>* g_counters = nullptr;
static uint8_t* g_thunks = nullptr;

// x87 leak detector (BEA_FPTRAP=1): by the calling convention the x87
// register stack is empty when any function is entered, so a non-zero TOP at
// a replacement's entry means code that ran before leaked a value (a float
// return nobody popped).  Eight leaks fill the stack and every later load is
// a NaN (2026-10-20: STATUS_FLOAT_STACK_CHECK in ports under the autopilot).
// Logs the first entries with a non-empty stack: the replacement entered and
// the return address of its call (the caller ran just after the leaker).
static bool g_x87_check = false;
extern "C" void __cdecl bea_x87_leak(uint32_t address, uint32_t ret)
{
    static uint32_t seen[40];
    static int nseen = 0;
    uint16_t sw;
    __asm__ volatile("fnstsw %0" : "=m"(sw));
    for (int i = 0; i < nseen; ++i) if (seen[i] == address) return;
    if (nseen == 40) return;
    seen[nseen++] = address;
    uintptr_t dll = reinterpret_cast<uintptr_t>(&__ImageBase);
    bool in_dll = ret >= dll && ret < dll + 0x800000;
    bea_log("X87LEAK entry to %08x with TOP=%d (called from %s%08lx)", address, (sw >> 11) & 7,
            in_dll ? "dll+" : "", in_dll ? (unsigned long)(ret - dll) : (unsigned long)ret);
    // start clean so the next leak is reported too (fninit resets the
    // control word, i.e. the precision D3D set: keep it)
    uint16_t cw;
    __asm__ volatile("fnstcw %0\n\tfninit\n\tfldcw %0" : "=m"(cw));
}

static const size_t kThunk = 48;
static void* counting_thunk(uint32_t address, void* replacement)
{
    if (!g_counters || g_counters->size() == g_counters->capacity()) return replacement;
    g_counters->push_back({address, 0, false});
    CallCounter& c = g_counters->back();
    uint8_t* t = g_thunks + kThunk * (g_counters->size() - 1);
    uint32_t p = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&c.count));
    uint8_t* q = t;
    uint8_t* back = nullptr;
    uint8_t* jnz = nullptr;
    if (g_x87_check) {
        static const uint8_t pre[] = {
            0x50,                   // push eax
            0xdf, 0xe0,             // fnstsw ax
            0xf6, 0xc4, 0x38,       // test ah, 0x38   (TOP, status bits 11-13)
            0x58,                   // pop eax         (flags kept)
            0x75, 0x00 };           // jnz report      (patched below)
        memcpy(q, pre, sizeof pre);
        jnz = q + 8;
        q += sizeof pre;
        back = q;
    }
    q[0] = 0xff; q[1] = 0x05;                               // inc dword ptr [&c.count]
    memcpy(q + 2, &p, 4);
    q[6] = 0xe9;                                            // jmp replacement
    int32_t rel = static_cast<int32_t>(reinterpret_cast<uintptr_t>(replacement) - reinterpret_cast<uintptr_t>(q + 11));
    memcpy(q + 7, &rel, 4);
    q += 11;
    if (g_x87_check) {
        *jnz = static_cast<uint8_t>(q - (jnz + 1));
        q[0] = 0x60;                                        // pushad
        q[1] = 0xff; q[2] = 0x74; q[3] = 0x24; q[4] = 0x20; // push dword ptr [esp+32]  (the return address)
        q[5] = 0x68; memcpy(q + 6, &address, 4);            // push address
        q[10] = 0xe8;                                       // call bea_x87_leak
        int32_t r2 = static_cast<int32_t>(reinterpret_cast<uintptr_t>(&bea_x87_leak) - reinterpret_cast<uintptr_t>(q + 15));
        memcpy(q + 11, &r2, 4);
        q[15] = 0x83; q[16] = 0xc4; q[17] = 0x08;           // add esp, 8
        q[18] = 0x61;                                       // popad
        q[19] = 0xe9;                                       // jmp back (count and continue)
        int32_t r3 = static_cast<int32_t>(reinterpret_cast<uintptr_t>(back) - reinterpret_cast<uintptr_t>(q + 24));
        memcpy(q + 20, &r3, 4);
    }
    return t;
}

// Coverage of the functions not yet replaced (BEA_COVERAGE=<file of hex
// addresses>, test runs only): each listed original gets a thunk `inc dword
// [counter]; jmp dword [slot]` with the slot holding its MinHook trampoline,
// so it still runs unchanged and the watchdog logs "ucalled+: addr ..." the
// first time it is entered.  tools/coverage_unported.py turns the logs into the
// list of unported functions each level needs: the shortest way to a level
// that runs entirely on ported code (2026-10-23).
static void* coverage_thunk(uint32_t address)
{
    if (!g_counters || g_counters->size() == g_counters->capacity()) return nullptr;
    g_counters->push_back({address, 0, false});
    CallCounter& c = g_counters->back();
    c.unported = true;
    uint8_t* t = g_thunks + kThunk * (g_counters->size() - 1);
    uint32_t p = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&c.count));
    uint32_t s = static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&c.slot));
    t[0] = 0xff; t[1] = 0x05; memcpy(t + 2, &p, 4);         // inc dword ptr [&c.count]
    t[6] = 0xff; t[7] = 0x25; memcpy(t + 8, &s, 4);         // jmp dword ptr [&c.slot]
    return t;
}

static void install_coverage(const std::set<uint32_t>& hooked)
{
    char path[MAX_PATH];
    if (!g_counters || !GetEnvironmentVariableA("BEA_COVERAGE", path, sizeof path)) return;
    FILE* f = fopen(path, "r");
    if (!f) { bea_log("coverage: cannot open %s", path); return; }
    int ok = 0, failed = 0;
    char line[64];
    while (fgets(line, sizeof line, f)) {
        unsigned a = 0;
        if (sscanf(line, "%x", &a) != 1 || !a || hooked.count(a)) continue;
        void* t = coverage_thunk(a);
        if (!t) break;
        CallCounter& c = g_counters->back();
        if (MH_CreateHook(reinterpret_cast<void*>(static_cast<uintptr_t>(a)), t, &c.slot) == MH_OK) ++ok;
        else { ++failed; g_counters->pop_back(); }
    }
    fclose(f);
    bea_log("coverage: %d unported functions counted (%d could not be hooked)", ok, failed);
}

static void log_newly_called()
{
    if (!g_counters) return;
    char line[600], uline[600];
    size_t len = 0, ulen = 0;
    line[0] = uline[0] = 0;
    for (CallCounter& c : *g_counters) {
        if (c.logged || c.count == 0) continue;
        c.logged = true;
        if (c.unported) {
            ulen += snprintf(uline + ulen, sizeof uline - ulen, " %08x", c.address);
            if (ulen > sizeof uline - 16) { bea_log("ucalled+:%s", uline); ulen = 0; uline[0] = 0; }
            continue;
        }
        len += snprintf(line + len, sizeof line - len, " %08x", c.address);
        if (len > sizeof line - 16) { bea_log("called+:%s", line); len = 0; line[0] = 0; }
    }
    if (len) bea_log("called+:%s", line);
    if (ulen) bea_log("ucalled+:%s", uline);
}

static DWORD WINAPI watchdog_thread(LPVOID)
{
    long last = 0;
    int stalled = 0;
    for (;;) {
        Sleep(5000);
        long now = g_bea_frames;
        if (now == last && now > 0) {
            if (++stalled <= 3) log_hang_sample();     // three samples, then stay quiet
        } else {
            stalled = 0;
            static const bool sample = GetEnvironmentVariableA("BEA_SAMPLE", nullptr, 0) > 0;
            if (sample) log_hang_sample();             // where a slow frame rate goes
        }
        unsigned long shadow_fns = 0, shadow_calls = 0;
        if (g_shadow_cs_init) {
            EnterCriticalSection(&g_shadow_cs);
            for (auto& kv : shadow_stats()) { shadow_fns++; shadow_calls += kv.second.calls; }
            LeaveCriticalSection(&g_shadow_cs);
        }
        // used address space: the game is 32-bit, and long soaks ended in its
        // fatal error 6 (vertex buffer creation failed) after 5-10 minutes
        MEMORYSTATUSEX ms = {sizeof ms};
        GlobalMemoryStatusEx(&ms);
        bea_log("heartbeat: frames=%ld (+%ld in 5s) shadow=%lu fns/%lu calls current=%08lx vm=%luM", now, now - last, shadow_fns, shadow_calls,
                (unsigned long)g_bea_shadow_current, (unsigned long)((ms.ullTotalVirtual - ms.ullAvailVirtual) >> 20));
        log_newly_called();
        last = now;
        bea_shadow_report();
    }
    return 0;
}

// BEA_PROFILE=1: a sampling profiler. Every millisecond the main thread's EIP is read
// (suspended for the instant); every 10 s the counts so far go to bea_profile<inst>.txt
// in the working directory, one "address count module" line each, for
// tools/profile_report.py to name. Our version rendered at ~65 frames a second
// fullscreen against the original's ~300 (2026-11-04).
static DWORD WINAPI profile_thread(LPVOID)
{
    timeBeginPeriod(1);
    std::map<uint32_t, uint32_t> hist;
    DWORD last = GetTickCount();
    char inst[16] = "";
    GetEnvironmentVariableA("BEA_INSTANCE", inst, sizeof inst);
    char path[64];
    snprintf(path, sizeof path, "bea_profile%s.txt", inst);
    for (;;) {
        Sleep(1);
        if (!g_main_thread || SuspendThread(g_main_thread) == (DWORD)-1) continue;
        CONTEXT c;
        c.ContextFlags = CONTEXT_CONTROL;
        bool ok = GetThreadContext(g_main_thread, &c);
        ResumeThread(g_main_thread);
        if (ok) ++hist[c.Eip];
        if (GetTickCount() - last < 10000) continue;
        last = GetTickCount();
        FILE* f = fopen(path, "w");
        if (!f) continue;
        for (const auto& kv : hist) {
            HMODULE m = nullptr;
            char mod[MAX_PATH] = "?";
            if (GetModuleHandleExA(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                                   reinterpret_cast<LPCSTR>(static_cast<uintptr_t>(kv.first)), &m) && m) {
                GetModuleFileNameA(m, mod, sizeof mod);
                fprintf(f, "%08x %u %s %08x\n", kv.first, kv.second, strrchr(mod, '\\') ? strrchr(mod, '\\') + 1 : mod,
                        kv.first - static_cast<uint32_t>(reinterpret_cast<uintptr_t>(m)));
            } else {
                fprintf(f, "%08x %u ? 0\n", kv.first, kv.second);
            }
        }
        fclose(f);
    }
    return 0;
}

void bea_start_watchdog()
{
    // DllMain runs on the main thread: keep a handle for the hang sampler
    DuplicateHandle(GetCurrentProcess(), GetCurrentThread(), GetCurrentProcess(), &g_main_thread,
                    THREAD_SUSPEND_RESUME | THREAD_GET_CONTEXT, FALSE, 0);
    HANDLE h = CreateThread(nullptr, 0, watchdog_thread, nullptr, 0, nullptr);
    if (h) CloseHandle(h);
    char pf[8];
    if (GetEnvironmentVariableA("BEA_PROFILE", pf, sizeof pf) && pf[0] == '1') {
        HANDLE p = CreateThread(nullptr, 0, profile_thread, nullptr, 0, nullptr);
        if (p) CloseHandle(p);
        bea_log("profile: sampling the main thread every 1 ms (BEA_PROFILE)");
    }
}


// ---------------------------------------------------------------------------
// exit logger: a clean ExitProcess during a soak test is as interesting as a
// crash; log the code and the code-looking stack dwords of the caller.
typedef void (WINAPI* ExitProcess_t)(UINT);
static ExitProcess_t g_ExitProcess_orig = nullptr;
static void WINAPI exit_logger(UINT code)
{
    uintptr_t dll = reinterpret_cast<uintptr_t>(&__ImageBase);
    const DWORD* sp = reinterpret_cast<const DWORD*>(__builtin_frame_address(0));
    char line[1024];
    line[0] = 0;
    int n = 0;
    // 1024 dwords: the game's fatal-error exit (0x42cfa0) keeps a 2000-byte message buffer above its caller
    for (int i = 0; i < 1024 && n < 24; ++i) {
        MEMORY_BASIC_INFORMATION mbi;
        if (VirtualQuery(sp + i, &mbi, sizeof mbi) == 0 || mbi.State != MEM_COMMIT) break;
        DWORD v = sp[i];
        bool in_exe = v >= 0x401000 && v < 0x5d8000;
        bool in_dll = v >= dll && v < dll + 0x800000;
        if (in_exe || in_dll) {
            size_t len = strlen(line);
            snprintf(line + len, sizeof line - len, " %s%08lx", in_dll ? "dll+" : "", in_dll ? v - dll : v);
            ++n;
        }
    }
    // the replacements called since the last heartbeat: a run shorter than one
    // (a scripted menu replay ends in 1-2 s, tools/menu_test.py) logged none
    log_newly_called();
    bea_log("EXIT code=%u frames=%ld stack:%s", code, g_bea_frames, line);
    bea_shadow_report();
    g_ExitProcess_orig(code);
}

void bea_install_exit_logger()
{
    MH_CreateHookApi(L"kernel32", "ExitProcess", reinterpret_cast<void*>(&exit_logger),
                     reinterpret_cast<void**>(&g_ExitProcess_orig));
    MH_EnableHook(MH_ALL_HOOKS);
}

// ---------------------------------------------------------------------------
// registry
static std::vector<BeaHook>& registry()
{
    static std::vector<BeaHook> hooks;
    return hooks;
}

BeaHookRegistrar::BeaHookRegistrar(const BeaHook* hooks, size_t count)
{
    for (size_t i = 0; i < count; ++i) registry().push_back(hooks[i]);
}

// bea_hook_disable.txt (optional, next to BEA.exe): one hex address per line.
// Lets a bad replacement be bisected without rebuilding.
static std::set<uint32_t> disabled_hooks()
{
    std::set<uint32_t> out;
    std::string path = std::string(g_game_dir) + "bea_hook_disable" + instance_suffix() + ".txt";
    FILE* f = fopen(path.c_str(), "r");
    if (!f) {
        path = std::string(g_game_dir) + "bea_hook_disable.txt";   // shared fallback
        f = fopen(path.c_str(), "r");
    }
    if (!f) return out;
    char line[128];
    while (fgets(line, sizeof line, f)) {
        unsigned v = 0;
        if (sscanf(line, "%x", &v) == 1 && v) out.insert(v);
    }
    fclose(f);
    return out;
}

void bea_stalehunt_install();   // platform/stalehunt.cpp
void lift_init();               // lifted/lift_rt.cpp
void bea_par_init();            // platform/parity.cpp
bool bea_capture_wanted(uint32_t addr);   // platform/capture.cpp
void* bea_capture_hook();
void** bea_capture_tramp_slot();

void bea_install_hooks()
{
    MH_STATUS st = MH_Initialize();
    if (st != MH_OK) {
        bea_log("MH_Initialize failed: %s", MH_StatusToString(st));
        return;
    }
    std::set<uint32_t> skip = disabled_hooks();
    // BEA_HOOKS_OFF=1: every registered hook is skipped (the harness's own stay, below):
    // record_level.ps1 records against the original whatever the DLL holds.  Its list file
    // (all_hooks_now.txt) once lagged the build and three new lifted functions stayed on
    // while the person recorded (2026-11-03)
    if (char ho[4]; GetEnvironmentVariableA("BEA_HOOKS_OFF", ho, sizeof ho) && ho[0] == '1')
        for (const BeaHook& h : registry()) skip.insert(h.address);
    int ok = 0, failed = 0, skipped = 0;
    if (strstr(GetCommandLineA(), "-forcewindowed")) {
        // call coverage thunks (see counting_thunk); reserve() keeps the
        // counters' addresses fixed, which the thunks embed
        // (+4096: room for BEA_COVERAGE's thunks of unported functions)
        g_counters = new std::vector<CallCounter>();
        g_counters->reserve(registry().size() + 4096);
        char fpt[8];
        g_x87_check = GetEnvironmentVariableA("BEA_FPTRAP", fpt, sizeof fpt) && fpt[0] == '1';
        g_thunks = static_cast<uint8_t*>(VirtualAlloc(nullptr, kThunk * (registry().size() + 4096) + kThunk, MEM_COMMIT | MEM_RESERVE,
                                                      PAGE_EXECUTE_READWRITE));
        if (!g_thunks) { delete g_counters; g_counters = nullptr; }
    }
    // The test harness's own hooks stay on even when listed: BEA_TIMESCALE
    // (Platform_GetTime), and windowed mode (ParseArgs, wrapped below with its
    // port on or off).  An all-hooks-off control run without them went
    // fullscreen at 640x480 and took the display from the other instance (2026-10-20).
    for (uint32_t keep : {0x005159e0u}) skip.erase(keep);
    for (const BeaHook& h : registry()) {
        if (void* wrap = bea_harness_wrap(h.address, skip.count(h.address) ? nullptr : h.replacement)) {
            // the harness wraps this function whether the port is on or off
            st = MH_CreateHook(reinterpret_cast<void*>(static_cast<uintptr_t>(h.address)), wrap, bea_harness_wrap_tramp(h.address));
            // a port that falls back to the original itself (a lifted thunk off the main
            // stack) needs the trampoline too
            if (st == MH_OK && h.original) *h.original = *bea_harness_wrap_tramp(h.address);
            if (st == MH_OK) {
                ++ok;
                bea_log("wrap  %08x %s (test harness, port %s)", h.address, h.name, skip.count(h.address) ? "off" : "on");
            } else {
                bea_log("FAIL  %08x %s: %s", h.address, h.name, MH_StatusToString(st));
                ++failed;
            }
            if (skip.count(h.address)) ++skipped;
            continue;
        }
        // (never the harness's own hooks: without ParseArgs's the game went
        // fullscreen at 640x480 on my display, 2026-10-30)
        if (h.address != 0x00423bc0 && h.address != 0x005159e0 && !(h.source && strstr(h.source, "platform")) && bea_capture_wanted(h.address)) {
            // BEA_CAPTURE: a thunk that records chosen calls of the original (platform/capture.cpp)
            st = MH_CreateHook(reinterpret_cast<void*>(static_cast<uintptr_t>(h.address)), bea_capture_hook(), bea_capture_tramp_slot());
            if (st == MH_OK) ++ok;
            else { bea_log("FAIL  %08x %s: %s", h.address, h.name, MH_StatusToString(st)); ++failed; }
            continue;
        }
        if (skip.count(h.address)) {
            bea_log("skip  %08x %s (bea_hook_disable.txt)", h.address, h.name);
            ++skipped;
            continue;
        }
        void* original = nullptr;
        if (bea_snap_wanted(h.address)) {
            // BEA_SNAP: the snapshot differ's stub takes this hook (platform/snapdiff.cpp)
            void* unused = nullptr;
            void** tramp = bea_snap_tramp_slot();
            st = MH_CreateHook(reinterpret_cast<void*>(static_cast<uintptr_t>(h.address)), bea_snap_hook(h.replacement, &unused),
                               tramp);
            // a port that falls back to the original itself (a lifted thunk off the main
            // stack) needs the trampoline too
            if (st == MH_OK && h.original) *h.original = *tramp;
            if (st == MH_OK) { ++ok; bea_log("snap  %08x %s (snapshot differ)", h.address, h.name); }
            else { bea_log("FAIL  %08x %s: %s", h.address, h.name, MH_StatusToString(st)); ++failed; }
            continue;
        }
        st = MH_CreateHook(reinterpret_cast<void*>(static_cast<uintptr_t>(h.address)), counting_thunk(h.address, h.replacement),
                           h.original ? h.original : &original);
        if (st != MH_OK) {
            bea_log("FAIL  %08x %s: %s", h.address, h.name, MH_StatusToString(st));
            ++failed;
            continue;
        }
        ++ok;
    }
    bea_harness_own_hooks();          // (before the capture and coverage hooks, which skip what is hooked)
    // BEA_CAPTURE_EXTRA=<file of hex addresses>: capture functions that have no
    // port yet too, for the offline tester to check a port written later
    if (char ef[MAX_PATH]; GetEnvironmentVariableA("BEA_CAPTURE_EXTRA", ef, sizeof ef)) {
        std::set<uint32_t> have;
        for (const BeaHook& h : registry()) have.insert(h.address);
        int n = 0;
        if (FILE* f = fopen(ef, "r")) {
            char line[64];
            while (fgets(line, sizeof line, f)) {
                uint32_t a = (uint32_t)strtoul(line, nullptr, 16);
                if (!a || have.count(a) || !bea_capture_wanted(a)) continue;
                st = MH_CreateHook(reinterpret_cast<void*>(static_cast<uintptr_t>(a)), bea_capture_hook(), bea_capture_tramp_slot());
                if (st == MH_OK) ++n;
                else bea_log("FAIL  %08x (capture extra): %s", a, MH_StatusToString(st));
            }
            fclose(f);
        }
        bea_log("capture: %d unported functions added", n);
    }
    {
        std::set<uint32_t> ported;
        for (const BeaHook& h : registry()) ported.insert(h.address);
        install_coverage(ported);
    }
    bea_stalehunt_install();
    // the lifted functions (src/bea/lifted) run unless BEA_LIFT=0: then their
    // thunks go to the original (lift_rt.h).  On by default since 2026-10-31,
    // when the 126 in the tree passed 61 levels and 29 tours (NOTES A1-28)
    if (char lv[8]; !GetEnvironmentVariableA("BEA_LIFT", lv, sizeof lv) || lv[0] != '0') {
        lift_init();
        bea_log("lift: lifted functions on (main thread)");
    } else {
        bea_log("lift: lifted functions off (BEA_LIFT=0)");
    }
    // the ports registered with BEA_PARITY_HOOK keep the original's stack depths (bea/parity.h)
    bea_par_init();
    st = MH_EnableHook(MH_ALL_HOOKS);
    bea_log("hooks: %d installed, %d failed, %d skipped; enable=%s", ok, failed, skipped, MH_StatusToString(st));
    for (const BeaHook& h : registry()) {
        if (!skip.count(h.address)) bea_log("hook  %08x %s", h.address, h.name);
    }
}
