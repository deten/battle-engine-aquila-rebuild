// Vertex / index buffer descriptors (vbuffer.cpp, ibuffer.cpp, texture.cpp).
#include "bea/common.h"
#include "bea/hooks.h"

// Non-zero when the device can process vertices in hardware; when it cannot,
// the usage flags 0x8 (D3DUSAGE_WRITEONLY) and 0x200 (D3DUSAGE_DYNAMIC-ish)
// are stripped and the pool is forced to 1 (D3DPOOL_MANAGED).
BEA_GLOBAL(int, g_hardwareVertexProcessing, 0x00854dec);

enum { USAGE_MASK_SOFTWARE = 0xfffffdf7u, POOL_FORCED = 1 };

// 0x00500540  VBufferDesc::Set(fvfOrSize, usage, a, b, pool)
//   +0x04 = p1, +0x08 = usage, +0x0c = pool, +0x50 = b, +0x54 = a
static void BEA_THISCALL VBufferDesc_Set(void* self, uint32_t p1, uint32_t usage, uint32_t a, uint32_t b, uint32_t pool)
{
    BEA_TRACE_ONCE();
    at<uint32_t>(self, 0x04) = p1;
    if (g_hardwareVertexProcessing == 0) {
        usage &= USAGE_MASK_SOFTWARE;
        pool = POOL_FORCED;
    }
    at<uint32_t>(self, 0x0c) = pool;
    at<uint32_t>(self, 0x08) = usage;
    at<uint32_t>(self, 0x54) = a;
    at<uint32_t>(self, 0x50) = b;
}

// 0x00500590  IBufferDesc::Set(p1, usage, unused, pool)
//   +0x20 = p1, +0x24 = usage, +0x28 = pool
static void BEA_THISCALL IBufferDesc_Set(void* self, uint32_t p1, uint32_t usage, uint32_t unused, uint32_t pool)
{
    BEA_TRACE_ONCE();
    at<uint32_t>(self, 0x20) = p1;
    if (g_hardwareVertexProcessing == 0) {
        at<uint32_t>(self, 0x28) = POOL_FORCED;
        at<uint32_t>(self, 0x24) = usage & USAGE_MASK_SOFTWARE;
        return;
    }
    at<uint32_t>(self, 0x24) = usage;
    at<uint32_t>(self, 0x28) = pool;
}

// 0x004fd3d0  Resource::IsStateCompatible(mode)
//   +0x138 = state, +0x164 = owner (whose +0x128 flag short-circuits mode 2)
static int BEA_THISCALL Resource_IsStateCompatible(void* self, int mode)
{
    BEA_TRACE_ONCE();
    void* owner = at<void*>(self, 0x164);
    if (owner && at<int>(owner, 0x128) != 0 && mode == 2) return 1;
    int state = at<int>(self, 0x138);
    switch (mode) {
    case 0: return (state == 1 || state == 6) ? 1 : 0;
    case 1: return (state == 0 || state == 6) ? 1 : 0;
    case 6: return (state == 1 || state == 0) ? 1 : 0;
    default: return 0;
    }
}

BEA_HOOKS(
    BEA_HOOK(0x00500540, VBufferDesc_Set),
    BEA_HOOK(0x00500590, IBufferDesc_Set),
    BEA_HOOK(0x004fd3d0, Resource_IsStateCompatible));
