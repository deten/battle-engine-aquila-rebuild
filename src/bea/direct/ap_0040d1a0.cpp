// auto-ported from 0040d1a0_FUN_0040d1a0.c (FUN_0040d1a0, 72 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
// @hand-fixed 2026-10-28: float sums in the asm's order (bug class 19, tools/check_fp_order.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define _CIasin(a0) bea_x87call1(0x0055dcb0, (float10)(a0))

static float10 BEA_THISCALL ap_0040d1a0(void * this_)
{
  float fVar1;
  float10 fVar2;
  
  fVar1 = SQRT(*(float *)this_ * *(float *)this_ +
               *(float *)((int)this_ + 4) * *(float *)((int)this_ + 4) +
               *(float *)((int)this_ + 8) * *(float *)((int)this_ + 8));
  if (0.0f < fVar1) {
    fVar2 = _CIasin(bea_fcast<float10>(*(float *)((int)this_ + 8)) / bea_fcast<float10>(fVar1));
    return fVar2;
  }
  return bea_fcast<float10>(0.0f);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040d1a0, ap_0040d1a0));
