// CActor small virtuals (thing.cpp / Actor): time stamps and position delta.
//
// Fields used (CActor, offsets from this):
//   +0x1c..+0x24  float[3] position
//   +0x7c..+0x88  float[4] velocity-like quad, cleared by vslot64
//   +0x8c..+0x94  float[3] previous position
//   +0xcc, +0xd0, +0xd4  float time stamps of the last three events
//                        (set from g_gameTime by vslot68/69/70, tested by
//                         vslot67 / 0x401fa0 / 0x401fd0)
#include "bea/common.h"
#include "bea/hooks.h"

BEA_GLOBAL(float, g_gameTime, 0x00672fd0);

// Returns (g_gameTime - stamp) < threshold with the 80-bit intermediate the
// original keeps on the x87 stack (no rounding of the difference to float).
static inline int stamp_within(const void* self, size_t off, float threshold)
{
    return ((f80)g_gameTime - (f80)at<float>(self, off)) < (f80)threshold ? 1 : 0;
}

// 0x00401f70  CActor::vslot67(): stamp at +0xcc is less than 0.15 s old
static int BEA_THISCALL CActor_StampCC_Within015(void* self)
{
    BEA_TRACE_ONCE();
    return stamp_within(self, 0xcc, 0.15f);
}

// 0x00401fa0  stamp at +0xd0 is less than 0.25 s old
static int BEA_THISCALL CActor_StampD0_Within025(void* self)
{
    BEA_TRACE_ONCE();
    return stamp_within(self, 0xd0, 0.25f);
}

// 0x00401fd0  stamp at +0xd4 is less than 0.15 s old
static int BEA_THISCALL CActor_StampD4_Within015(void* self)
{
    BEA_TRACE_ONCE();
    return stamp_within(self, 0xd4, 0.15f);
}

// 0x00402000  CActor::vslot68(): +0xcc = g_gameTime
static void BEA_THISCALL CActor_StampCC(void* self)
{
    BEA_TRACE_ONCE();
    at<float>(self, 0xcc) = g_gameTime;
}

// 0x00402010  CActor::vslot69(): +0xd0 = g_gameTime
static void BEA_THISCALL CActor_StampD0(void* self)
{
    BEA_TRACE_ONCE();
    at<float>(self, 0xd0) = g_gameTime;
}

// 0x00402020  CActor::vslot70(unused): +0xd4 = g_gameTime.  Takes (and pops)
// one argument it never reads — keep the signature so the stack stays balanced.
static void BEA_THISCALL CActor_StampD4(void* self, uint32_t unused)
{
    BEA_TRACE_ONCE();
    at<float>(self, 0xd4) = g_gameTime;
}

// 0x00401550  CActor::vslot25(out): out = position - previousPosition
static float* BEA_THISCALL CActor_GetPositionDelta(void* self, float* out)
{
    BEA_TRACE_ONCE();
    float z = at<float>(self, 0x24) - at<float>(self, 0x94);
    float y = at<float>(self, 0x20) - at<float>(self, 0x90);
    float x = at<float>(self, 0x1c) - at<float>(self, 0x8c);
    out[0] = x;
    out[1] = y;
    out[2] = z;
    return out;
}

// 0x00401580  CActor::vslot64(): clears the quad at +0x7c.
// The original copies an uninitialised stack dword into +0x88 (only three of
// the four temporaries are written); we store 0 — see NOTES A1-4.
static void BEA_THISCALL CActor_ClearQuad7C(void* self)
{
    BEA_TRACE_ONCE();
    at<uint32_t>(self, 0x7c) = 0;
    at<uint32_t>(self, 0x80) = 0;
    at<uint32_t>(self, 0x84) = 0;
    at<uint32_t>(self, 0x88) = 0;
}

// 0x00403650  Quad_SetAndStamp(src): copies four dwords from src into
// this+0..+0xc (so `this` is a plain data block, not a polymorphic object)
// and, unless the stamp at +0xac is -1.0f, stamps it with g_gameTime.
static void BEA_THISCALL Quad_SetAndStamp(void* self, const uint32_t* src)
{
    BEA_TRACE_ONCE();
    at<uint32_t>(self, 0x0) = src[0];
    at<uint32_t>(self, 0x4) = src[1];
    at<uint32_t>(self, 0x8) = src[2];
    at<uint32_t>(self, 0xc) = src[3];
    if (at<uint32_t>(self, 0xac) != 0xbf800000u) at<float>(self, 0xac) = g_gameTime;
}

BEA_HOOKS(
    BEA_HOOK(0x00403650, Quad_SetAndStamp),
    BEA_HOOK(0x00401f70, CActor_StampCC_Within015),
    BEA_HOOK(0x00401fa0, CActor_StampD0_Within025),
    BEA_HOOK(0x00401fd0, CActor_StampD4_Within015),
    BEA_HOOK(0x00402000, CActor_StampCC),
    BEA_HOOK(0x00402010, CActor_StampD0),
    BEA_HOOK(0x00402020, CActor_StampD4),
    BEA_HOOK(0x00401550, CActor_GetPositionDelta),
    BEA_HOOK(0x00401580, CActor_ClearQuad7C));
