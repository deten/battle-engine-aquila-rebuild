// auto-ported from 004d4b30_FUN_004d4b30.c (FUN_004d4b30, 91 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static float * BEA_THISCALL ap_004d4b30(void * this_, float *param_1, float *param_2)
{
  *param_1 = (float)(int)*(short *)this_ * param_2[4] * 3.051851e-05f + *param_2;
  param_1[1] = (float)(int)*(short *)((int)this_ + 2) * param_2[4] * 3.051851e-05f + param_2[1];
  param_1[2] = (float)(int)*(short *)((int)this_ + 4) * param_2[4] * 3.051851e-05f + param_2[2];
  return (float *)(param_2);
  return (float *)(param_2);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d4b30, ap_004d4b30));
