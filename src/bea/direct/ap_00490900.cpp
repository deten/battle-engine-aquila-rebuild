// auto-ported from 00490900_FUN_00490900.c (FUN_00490900, 31 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static float * BEA_THISCALL ap_00490900(void * this_, float *param_1)
{
  *(float *)this_ = *(float *)this_ - *param_1;
  *(float *)((int)this_ + 4) = *(float *)((int)this_ + 4) - param_1[1];
  *(float *)((int)this_ + 8) = *(float *)((int)this_ + 8) - param_1[2];
  return (float *)(param_1);
  return (float *)(param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00490900, ap_00490900));
