// auto-ported from 004c78d0_FUN_004c78d0.c (FUN_004c78d0, 39 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
// @hand-fixed 2026-10-28: float sums in the asm's order (bug class 19, tools/check_fp_order.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static float10 BEA_THISCALL ap_004c78d0(void * this_)
{
  return bea_fcast<float10>(1.0f) /
         SQRT(bea_fcast<float10>(*(float *)this_) * bea_fcast<float10>(*(float *)this_) +
              bea_fcast<float10>(*(float *)((int)this_ + 4)) * bea_fcast<float10>(*(float *)((int)this_ + 4)) +
              bea_fcast<float10>(*(float *)((int)this_ + 8)) * bea_fcast<float10>(*(float *)((int)this_ + 8)));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c78d0, ap_004c78d0));
