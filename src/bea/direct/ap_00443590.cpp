// auto-ported from 00443590_vslot11.c (CDestroyableCoreSegment::vslot11, 43 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CDestroyableCoreSegment;

static void BEA_THISCALL ap_00443590(CDestroyableCoreSegment * this_, float param_1, float param_2)
{
  float fVar1;
  
  if (*(int *)(this_ + 0x40) == 1) {
    *(undefined4 *)(this_ + 0xc) = 0;
    *(undefined4 *)(this_ + 0x10) = 0;
    return;
  }
  fVar1 = (*(float *)(this_ + 0x34) / param_2) * param_1 * 5.0f;
  *(float *)(this_ + 0xc) = fVar1;
  *(float *)(this_ + 0x10) = fVar1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00443590, ap_00443590));
