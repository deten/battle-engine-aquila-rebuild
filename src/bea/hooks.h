// Hook registry: every re-implemented function announces itself with
// BEA_HOOKS(...) and the loader (hook/dllmain.cpp) patches the original entry
// points at startup.
#pragma once

#include <stdint.h>
#include <stddef.h>

struct BeaHook {
    uint32_t    address;      // entry point in BEA.exe
    const char* name;         // replacement function name (for logs / PROGRESS.md)
    void*       replacement;  // our implementation
    const char* source;       // __FILE__ of the registration
    void**      original;     // optional: receives the trampoline to the original (shadow mode)
};

// Shadow-mode statistics (see tools/autoport.py): a shadow stub runs the port
// beside the original and reports agreement here.  The report is written to
// bea_shadow_report.txt next to BEA.exe when the DLL unloads.
void bea_shadow_record(uint32_t address, bool mismatch, const char* detail);
void bea_shadow_report();
char* bea_shadow_buffer();   // shared 1 MB scratch copy with a trailing guard page
extern volatile uint32_t g_bea_shadow_current;   // address of the port currently executing (0 = none)
extern volatile long g_bea_shadow_budget;        // loop iterations a shadow port may still spend

struct BeaHookRegistrar {
    BeaHookRegistrar(const BeaHook* hooks, size_t count);
};

// Usage, at file scope:
//   BEA_HOOKS(
//       BEA_HOOK(0x00401ec0, Vector3_Set),
//       BEA_HOOK(0x00401ee0, Vector3_Add));
#define BEA_HOOK(addr, fn) { (addr), #fn, reinterpret_cast<void*>(&(fn)), __FILE__, nullptr }
// Same, for template instantiations whose argument lists contain commas.
#define BEA_HOOK_T(addr, ...) { (addr), #__VA_ARGS__, reinterpret_cast<void*>(&(__VA_ARGS__)), __FILE__, nullptr }
// Shadow hook: `stub` is installed and receives the trampoline in `slot`.
#define BEA_SHADOW_HOOK(addr, stub, slot) { (addr), "shadow:" #stub, reinterpret_cast<void*>(&(stub)), __FILE__, reinterpret_cast<void**>(&(slot)) }
#define BEA_HOOKS(...) \
    static const BeaHook bea_hook_table_[] = { __VA_ARGS__ }; \
    static BeaHookRegistrar bea_hook_registrar_(bea_hook_table_, \
        sizeof(bea_hook_table_) / sizeof(bea_hook_table_[0]))

// Loader API (implemented in src/bea/hooks.cpp).
void bea_log_open();
void bea_log_close();
void bea_log(const char* fmt, ...);
void bea_install_hooks();
void bea_start_watchdog();
void bea_install_crash_logger();
void bea_install_exit_logger();   // call after bea_install_hooks (shares MinHook)
void bea_install_harness();       // test-run window behaviour (platform/test_harness.cpp)
// BEA_SNAP snapshot differ (platform/snapdiff.cpp): hooks.cpp asks per hook whether the
// differ's stub takes it; the stub runs the original and the port on the same memory
// The test harness may wrap a hooked function in both its states (port on or
// off): bea_harness_wrap(addr, port_or_null) returns the wrapper to install
// (nullptr: no wrapping) and bea_harness_wrap_tramp(addr) the slot for the
// original's trampoline (platform/test_harness.cpp: BEA_SYNCJOBS)
void* bea_harness_wrap(uint32_t addr, void* port);
void** bea_harness_wrap_tramp(uint32_t addr);
void bea_harness_own_hooks();     // the harness's hooks no registered port's wrap installed (ParseArgs)
bool bea_snap_wanted(uint32_t addr);
// BEA_SNAP_SYNTH: synthetic calls of never-reached methods (platform/snapdiff.cpp), once per frame
void bea_snap_synth_frame();
void* bea_snap_hook(void* port, void** unused);
void** bea_snap_tramp_slot();

// Heartbeat counters bumped by replaced functions; the watchdog thread logs
// them every few seconds so a run can be judged without seeing the screen.
extern volatile long g_bea_frames;   // FpsTimer_Update calls (one per presented frame)

// Logs the first call of a replacement so bea_hook.log proves it is exercised.
#ifndef BEA_TRACE
#define BEA_TRACE 1
#endif
#if BEA_TRACE
#define BEA_TRACE_ONCE() \
    do { static bool bea_traced_ = false; \
         if (!bea_traced_) { bea_traced_ = true; bea_log("first call: %s", __func__); } } while (0)
#else
#define BEA_TRACE_ONCE() do {} while (0)
#endif
