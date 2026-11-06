// auto-ported from 004404f0_FUN_004404f0.c (FUN_004404f0, 29 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static float * BEA_THISCALL ap_004404f0(void * this_, float *param_1)
{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)((int)this_ + 8);
  fVar2 = *(float *)((int)this_ + 4);
  *param_1 = -*(float *)this_;
  param_1[1] = -fVar2;
  param_1[2] = -fVar1;
  return param_1;
  return param_1;
}

// @autoport-registration (verified: 110237 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004404f0, ap_004404f0));
