// auto-ported from 004d4aa0_FUN_004d4aa0.c (FUN_004d4aa0, 142 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void * BEA_THISCALL ap_004d4aa0(void * this_, float *param_1, float *param_2)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined2 local_20;
  
  fVar1 = param_1[1];
  fVar2 = param_2[1];
  fVar3 = param_1[2];
  fVar4 = param_2[2];
  fVar5 = param_2[4];
  local_20 = (undefined2)(longlong)ROUND(((*param_1 - *param_2) / fVar5) * 32767.0f);
  *(undefined2 *)this_ = local_20;
  local_20 = (undefined2)(longlong)ROUND(((fVar1 - fVar2) / fVar5) * 32767.0f);
  *(undefined2 *)((int)this_ + 2) = local_20;
  local_20 = (undefined2)(longlong)ROUND(((fVar3 - fVar4) / fVar5) * 32767.0f);
  *(undefined2 *)((int)this_ + 4) = local_20;
  return (void *)(this_);
  return (void *)(this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d4aa0, ap_004d4aa0));
