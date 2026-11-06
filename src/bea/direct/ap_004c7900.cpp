// auto-ported from 004c7900_FUN_004c7900.c (FUN_004c7900, 75 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
// @hand-fixed 2026-10-28: float sums in the asm's order (bug class 19, tools/check_fp_order.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_004c7900(void * this_)
{
  float fVar1;
  
  fVar1 = *(float *)this_ * *(float *)this_ +
          *(float *)((int)this_ + 4) * *(float *)((int)this_ + 4) + *(float *)((int)this_ + 8) * *(float *)((int)this_ + 8);
  if (0.0f < fVar1) {
    fVar1 = 1.0f / SQRT(fVar1);
    *(float *)this_ = fVar1 * *(float *)this_;
    *(float *)((int)this_ + 4) = fVar1 * *(float *)((int)this_ + 4);
    *(float *)((int)this_ + 8) = fVar1 * *(float *)((int)this_ + 8);
    return;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c7900, ap_004c7900));
