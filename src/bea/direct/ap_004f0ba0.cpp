// auto-ported from 004f0ba0_FUN_004f0ba0.c (FUN_004f0ba0, 170 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit local_14: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax ok
// @hand-fixed 2026-10-28: float sums in the asm's order (bug class 19, tools/check_fp_order.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static float * BEA_THISCALL ap_004f0ba0(void * this_, float *param_1)
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
  float local_14 = 0;
  
  fVar1 = *(float *)((int)this_ + 0x4c);
  fVar2 = *(float *)((int)this_ + 0x2d4);
  fVar3 = *(float *)((int)this_ + 0x54);
  fVar4 = *(float *)((int)this_ + 0x2dc);
  fVar5 = *(float *)((int)this_ + 0x50);
  fVar6 = *(float *)((int)this_ + 0x2d8);
  fVar7 = *(float *)((int)this_ + 0x5c);
  fVar8 = *(float *)((int)this_ + 0x2d4);
  fVar9 = *(float *)((int)this_ + 100);
  fVar10 = *(float *)((int)this_ + 0x2dc);
  fVar11 = *(float *)((int)this_ + 0x60);
  fVar12 = *(float *)((int)this_ + 0x2d8);
  fVar13 = *(float *)((int)this_ + 0x20);
  fVar14 = *(float *)((int)this_ + 0x24);
  *param_1 = *(float *)((int)this_ + 0x40) * *(float *)((int)this_ + 0x2d8) +
             *(float *)((int)this_ + 0x44) * *(float *)((int)this_ + 0x2dc) +
             *(float *)((int)this_ + 0x2d4) * *(float *)((int)this_ + 0x3c) +
             *(float *)((int)this_ + 0x1c);
  param_1[1] = fVar1 * fVar2 + fVar3 * fVar4 + fVar5 * fVar6 + fVar13;
  param_1[2] = fVar7 * fVar8 + fVar9 * fVar10 + fVar11 * fVar12 + fVar14;
  param_1[3] = local_14;
  return (float *)(param_1);
  return (float *)(param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f0ba0, ap_004f0ba0));
