// Frame-rate statistics timer (three methods at 0x423650..0x4237c7).
//
// Layout recovered from the disassembly:
//   +0x00 float    freqF      (float)QueryPerformanceFrequency
//   +0x04 float    fps        smoothed frames per second (EMA 0.75/0.25, min 1)
//   +0x08 float    invFps     1 / fps
//   +0x0c uint32   (unused / padding)
//   +0x10 int64    last       counter value at the previous Update
//   +0x18 int64    freq       QueryPerformanceFrequency (1000 if unavailable)
//   +0x20 int64    delta      counter ticks between the last two Updates
#include "bea/common.h"
#include "bea/hooks.h"
#include <windows.h>
#include <mmsystem.h>

// test_harness.cpp: the real clock, or the fixed-step one under BEA_FIXEDSTEP
extern "C" BOOL WINAPI bea_qpc(LARGE_INTEGER* out);
extern "C" DWORD WINAPI bea_timeGetTime();

struct FpsTimer {
    float freqF;
    float fps;
    float invFps;
    uint32_t pad;
    LARGE_INTEGER last;
    LARGE_INTEGER freq;
    LARGE_INTEGER delta;
};

// Reads the counter the way the original does: QueryPerformanceCounter, spin
// while it reports zero, fall back to bea_timeGetTime() (high dword = 0).
static LARGE_INTEGER read_counter()
{
    LARGE_INTEGER now;
    if (!bea_qpc(&now)) {
        now.LowPart = bea_timeGetTime();
        now.HighPart = 0;
        return now;
    }
    while (now.QuadPart == 0) bea_qpc(&now);
    return now;
}

// 0x00423650  FpsTimer::Init(): queries the frequency, returns this.
static FpsTimer* BEA_THISCALL FpsTimer_Init(FpsTimer* self)
{
    BEA_TRACE_ONCE();
    if (!QueryPerformanceFrequency(&self->freq)) {
        self->freq.LowPart = 1000;
        self->freq.HighPart = 0;
    }
    self->freqF = (float)self->freq.QuadPart;
    return self;
}

// 0x00423680  FpsTimer::SetTarget(targetFps): seeds fps/invFps and the delta
// with freq / (int64)targetFps, then latches the current counter.
static void BEA_THISCALL FpsTimer_SetTarget(FpsTimer* self, float targetFps)
{
    BEA_TRACE_ONCE();
    f80 inv = (f80)1.0f / (f80)targetFps;          // fld 1.0; fdiv dword
    self->fps = targetFps;
    self->invFps = (float)inv;
    int64_t t = (int64_t)targetFps;                 // __ftol: truncate
    self->delta.QuadPart = (int64_t)((uint64_t)self->freq.QuadPart / (uint64_t)t); // __aulldiv
    self->last = read_counter();
}

// 0x00423720  FpsTimer::Update(): fps = 0.75*fps + 0.25*(freqF/delta), min 1.
// The clamp compares the 80-bit intermediate, not the stored float.
static void BEA_THISCALL FpsTimer_Update(FpsTimer* self)
{
    BEA_TRACE_ONCE();
    ++g_bea_frames;
    LARGE_INTEGER now = read_counter();
    if (now.QuadPart == self->last.QuadPart) return;
    self->delta.QuadPart = now.QuadPart - self->last.QuadPart;
    self->last = now;
    f80 inst = (f80)self->freqF / (f80)self->delta.QuadPart;
    f80 smoothed = inst * (f80)0.25f + (f80)self->fps * (f80)0.75f;
    self->fps = (float)smoothed;
    if (smoothed < (f80)1.0f) self->fps = 1.0f;
    self->invFps = (float)((f80)1.0f / (f80)self->fps);
}

BEA_HOOKS(
    BEA_HOOK(0x00423650, FpsTimer_Init),
    BEA_HOOK(0x00423680, FpsTimer_SetTarget),
    BEA_HOOK(0x00423720, FpsTimer_Update));
