// auto-ported from 004956a0_FUN_004956a0.c (FUN_004956a0, 196 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit local_4: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit local_14: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit local_24: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static float * BEA_THISCALL ap_004956a0(void * this_, float *param_1, float *param_2)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_24 = 0;
  float local_14;
  float local_4;
  
  fVar1 = *(float *)((int)this_ + 0x20);
  fVar2 = param_2[8];
  fVar3 = param_2[9];
  fVar4 = *(float *)((int)this_ + 0x24);
  fVar5 = param_2[10];
  fVar6 = *(float *)((int)this_ + 0x28);
  fVar7 = param_2[4];
  fVar8 = *(float *)((int)this_ + 0x10);
  fVar9 = param_2[5];
  fVar10 = *(float *)((int)this_ + 0x14);
  fVar11 = param_2[6];
  fVar12 = *(float *)((int)this_ + 0x18);
  fVar13 = param_2[1];
  fVar14 = *(float *)((int)this_ + 4);
  fVar15 = param_2[2];
  fVar16 = *(float *)((int)this_ + 8);
  *param_1 = *param_2 + *(float *)this_;
  param_1[1] = fVar13 + fVar14;
  param_1[2] = fVar15 + fVar16;
  param_1[3] = local_24;
  param_1[4] = fVar7 + fVar8;
  param_1[5] = fVar9 + fVar10;
  param_1[6] = fVar11 + fVar12;
  param_1[7] = local_14;
  param_1[8] = fVar1 + fVar2;
  param_1[9] = fVar3 + fVar4;
  param_1[10] = fVar5 + fVar6;
  param_1[0xb] = local_4;
  return (float *)(param_1);
  return (float *)(param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004956a0, ap_004956a0));
