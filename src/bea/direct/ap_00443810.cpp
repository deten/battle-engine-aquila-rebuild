// auto-ported from 00443810_vslot8.c (CDestroyableSwapSegment::vslot8, 31 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CDestroyableSegment;
typedef char CDestroyableSwapSegment;
typedef uint32_t (BEA_THISCALL* CDestroyableSegment__vslot8_t)(uint32_t);
static const bea_guard<CDestroyableSegment__vslot8_t> CDestroyableSegment__vslot8 = {(CDestroyableSegment__vslot8_t)0x00442b20};

static uint32_t BEA_THISCALL ap_00443810(CDestroyableSwapSegment * this_)
{
  if (*(int *)(this_ + 0x44) == 0) {
    bea_vcall<uint32_t>(this_, 0x28);
    *(undefined4 *)(this_ + 0x44) = 1;
  }
  return CDestroyableSegment__vslot8(bea_arg((CDestroyableSegment *)this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00443810, ap_00443810));
