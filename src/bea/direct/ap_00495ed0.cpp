// auto-ported from 00495ed0_FUN_00495ed0.c (FUN_00495ed0, 202 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit local_4: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit local_14: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit local_24: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static float * BEA_THISCALL ap_00495ed0(void * this_, float *param_1, float param_2)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_24 = 0;
  float local_14;
  float local_4;
  
  fVar1 = *(float *)((int)this_ + 0x20);
  fVar2 = *(float *)((int)this_ + 0x24);
  fVar3 = *(float *)((int)this_ + 0x28);
  fVar4 = *(float *)((int)this_ + 0x10);
  fVar5 = *(float *)((int)this_ + 0x14);
  fVar6 = *(float *)((int)this_ + 0x18);
  fVar7 = *(float *)((int)this_ + 4);
  fVar8 = *(float *)((int)this_ + 8);
  *param_1 = param_2 * *(float *)this_;
  param_1[1] = param_2 * fVar7;
  param_1[2] = param_2 * fVar8;
  param_1[3] = local_24;
  param_1[4] = param_2 * fVar4;
  param_1[5] = param_2 * fVar5;
  param_1[6] = param_2 * fVar6;
  param_1[7] = local_14;
  param_1[8] = param_2 * fVar1;
  param_1[9] = param_2 * fVar2;
  param_1[10] = param_2 * fVar3;
  param_1[0xb] = local_4;
  return (float *)(param_1);
  return (float *)(param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00495ed0, ap_00495ed0));
