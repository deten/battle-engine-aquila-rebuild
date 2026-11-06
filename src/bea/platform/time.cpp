// Platform clock (PCPlatform.cpp): seconds since the first call, as an x87
// 80-bit value in ST(0) exactly like the original.
//
// Object layout (partial):
//   +0x08 int64  freq    QueryPerformanceFrequency, 0 => use timeGetTime
//   +0x10 float  scale   time-scale multiplier applied to the frequency
#include "bea/common.h"
#include "bea/hooks.h"
#include <windows.h>
#include <mmsystem.h>

// test_harness.cpp: the real clock, or the fixed-step one under BEA_FIXEDSTEP
extern "C" BOOL WINAPI bea_qpc(LARGE_INTEGER* out);
extern "C" DWORD WINAPI bea_timeGetTime();
#include <stdlib.h>

struct PlatformClock {
    uint32_t unknown0;
    uint32_t unknown4;
    LARGE_INTEGER freq;
    float scale;
};

BEA_GLOBAL(LARGE_INTEGER, g_clockStart, 0x00889b20);
BEA_GLOBAL(int, g_clockStarted, 0x0088a0ec);

// Test harness: BEA_TIMESCALE=<n> (tools/smoke_test.ps1 -TimeScale n) makes
// game time run n times faster than wall time, so a soak covers n times as
// many simulation ticks per second. Unset or 1 = the original behaviour.
static f80 harness_timescale()
{
    static f80 scale = 0;
    if (scale == 0) {
        char buf[32] = "";
        GetEnvironmentVariableA("BEA_TIMESCALE", buf, sizeof buf);
        double v = atof(buf);
        scale = (v > 0) ? (f80)v : (f80)1;
        if (scale != 1) bea_log("harness: time scale x%g", (double)scale);
    }
    return scale;
}

void bea_ilog_clock(const void* value10);   // capture.cpp: the import log of a captured call

static f80 platform_gettime(PlatformClock* self);

// 0x005159e0  Platform::GetTime()
static f80 BEA_THISCALL Platform_GetTime(PlatformClock* self)
{
    f80 r = platform_gettime(self);
    bea_ilog_clock(&r);
    return r;
}

static f80 platform_gettime(PlatformClock* self)
{
    BEA_TRACE_ONCE();
    const f80 ts = harness_timescale();
    if (self->freq.QuadPart != 0) {
        LARGE_INTEGER now;
        bea_qpc(&now);
        if (!g_clockStarted) {
            g_clockStart = now;
            g_clockStarted = 1;
        }
        int64_t elapsed = now.QuadPart - g_clockStart.QuadPart;
        return ts * ((f80)elapsed / ((f80)self->freq.QuadPart * (f80)self->scale));
    }
    uint32_t ms = bea_timeGetTime();
    return ts * ((f80)ms * (f80)0.001f);
}

BEA_HOOKS(
    BEA_HOOK(0x005159e0, Platform_GetTime));
