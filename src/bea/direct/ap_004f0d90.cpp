// auto-ported from 004f0d90_vslot90.c (CTentacle::vslot90, 170 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit local_14: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax ok
// @hand-fixed 2026-10-28: float sums in the asm's order (bug class 19, tools/check_fp_order.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CTentacle;

static float * BEA_THISCALL ap_004f0d90(CTentacle * this_, float *param_1)
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
  
  fVar1 = *(float *)(this_ + 0x54);
  fVar2 = *(float *)(this_ + 0x2dc);
  fVar3 = *(float *)(this_ + 0x50);
  fVar4 = *(float *)(this_ + 0x2d8);
  fVar5 = *(float *)(this_ + 0x4c);
  fVar6 = *(float *)(this_ + 0x2d4);
  fVar7 = *(float *)(this_ + 100);
  fVar8 = *(float *)(this_ + 0x2dc);
  fVar9 = *(float *)(this_ + 0x60);
  fVar10 = *(float *)(this_ + 0x2d8);
  fVar11 = *(float *)(this_ + 0x5c);
  fVar12 = *(float *)(this_ + 0x2d4);
  fVar13 = *(float *)(this_ + 0x20);
  fVar14 = *(float *)(this_ + 0x24);
  *param_1 = *(float *)(this_ + 0x40) * *(float *)(this_ + 0x2d8) +
             *(float *)(this_ + 0x44) * *(float *)(this_ + 0x2dc) +
             *(float *)(this_ + 0x3c) * *(float *)(this_ + 0x2d4) + *(float *)(this_ + 0x1c);
  param_1[1] = fVar3 * fVar4 + fVar1 * fVar2 + fVar5 * fVar6 + fVar13;
  param_1[2] = fVar9 * fVar10 + fVar7 * fVar8 + fVar11 * fVar12 + fVar14;
  param_1[3] = local_14;
  return (float *)(param_1);
  return (float *)(param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f0d90, ap_004f0d90));
