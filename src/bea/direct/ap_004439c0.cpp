// auto-ported from 004439c0_vslot8.c (CDestroyableExtraSegment::vslot8, 36 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CDestroyableExtraSegment;
typedef char CDestroyableSegment;
typedef uint32_t (BEA_THISCALL* CDestroyableSegment__vslot8_t)(uint32_t);
static const bea_guard<CDestroyableSegment__vslot8_t> CDestroyableSegment__vslot8 = {(CDestroyableSegment__vslot8_t)0x00442b20};

static uint32_t BEA_THISCALL ap_004439c0(CDestroyableExtraSegment * this_)
{
  if ((*(int *)(this_ + 0x38) == 0) && (0 < *(int *)(*(int *)(this_ + 0x3c) + 0x20))) {
    bea_vcall<uint32_t>(this_, 0x28);
  }
  return CDestroyableSegment__vslot8(bea_arg((CDestroyableSegment *)this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004439c0, ap_004439c0));
