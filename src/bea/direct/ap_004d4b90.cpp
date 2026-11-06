// auto-ported from 004d4b90_FUN_004d4b90.c (FUN_004d4b90, 35 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static float * BEA_THISCALL ap_004d4b90(void * this_, float *param_1, float param_2)
{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)((int)this_ + 8);
  fVar2 = *(float *)((int)this_ + 4);
  *param_1 = *(float *)this_ / param_2;
  param_1[1] = fVar2 / param_2;
  param_1[2] = fVar1 / param_2;
  return (float *)(param_1);
  return (float *)(param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d4b90, ap_004d4b90));
