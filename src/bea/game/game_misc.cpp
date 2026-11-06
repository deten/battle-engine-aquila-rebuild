// Small CGame / platform accessors.
#include "bea/common.h"
#include "bea/hooks.h"

// 0x004725d0  CGame::IsBonusLevel(): true for level numbers 850..899
// (data/MissionScripts/level850..860 are the "goodies" levels).
//   this+0x2a0 = current level number
static int BEA_THISCALL CGame_IsBonusLevel(void* self)
{
    BEA_TRACE_ONCE();
    int level = at<int>(self, 0x2a0);
    return (level > 0x351 && level < 0x384) ? 1 : 0;
}

// 0x00515a70  Platform::GetMetric(which): returns one of four dword fields
// (0 -> +0x18, 1 -> +0x20, 2 -> +0x1c, 3 -> +0x24), 0 otherwise.
// Field meanings not yet recovered (PCPlatform.cpp, 61 call sites).
static uint32_t BEA_THISCALL Platform_GetMetric(void* self, uint32_t which)
{
    BEA_TRACE_ONCE();
    switch (which) {
    case 0: return at<uint32_t>(self, 0x18);
    case 1: return at<uint32_t>(self, 0x20);
    case 2: return at<uint32_t>(self, 0x1c);
    case 3: return at<uint32_t>(self, 0x24);
    default: return 0;
    }
}

// 0x004cb0b0  Handle::Release(mode): marks the referenced object's 16-bit
// state at +0xb4 as 1 (mode == 1) or 2 (any other mode) and drops the
// reference held at this+4.  Owner class not yet identified (28 call sites).
// The asm leaves the object in EAX and 0 in EDX, and CSphereTrigger::vslot23
// (0x4e5680) returns that EAX to its virtual's callers: returned as a 64-bit
// value so both registers match.
static uint64_t BEA_THISCALL Handle_Release(void* self, int mode)
{
    BEA_TRACE_ONCE();
    void* obj = at<void*>(self, 4);
    if (obj) at<uint16_t>(obj, 0xb4) = (mode == 1) ? 1 : 2;
    at<void*>(self, 4) = nullptr;
    return reinterpret_cast<uintptr_t>(obj);
}

BEA_HOOKS(
    BEA_HOOK(0x004725d0, CGame_IsBonusLevel),
    BEA_HOOK(0x00515a70, Platform_GetMetric),
    BEA_HOOK(0x004cb0b0, Handle_Release));
