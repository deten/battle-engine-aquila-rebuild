// auto-ported from 00425430_vslot0_t8.c (CCockpit::vslot0_t8, 184 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CCockpit;
#define DAT_008a9e44 GLOBAL_AT(float, 0x008a9e44)

static float * BEA_THISCALL ap_00425430(CCockpit * this_, float *param_1)
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
  int *piVar11;
  float *pfVar12;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x10 - 0x10);
  piVar11 = *(int **)(this_ + 0x108);
  fVar1 = *(float *)(this_ + 4);
  fVar2 = bea_fcast<float>(piVar11[7]);
  fVar3 = *(float *)(this_ + 8);
  fVar4 = bea_fcast<float>(piVar11[8]);
  fVar5 = *(float *)(this_ + 0xc);
  fVar6 = bea_fcast<float>(piVar11[9]);
  pfVar12 = (float *)bea_vcall<uint32_t>(piVar11, 0x78, local_10);
  fVar7 = *(float *)(this_ + 0x18);
  fVar8 = pfVar12[1];
  fVar9 = *(float *)(this_ + 0x1c);
  fVar10 = pfVar12[2];
  fVar3 = ((fVar3 + fVar4) - (fVar7 + fVar8)) * DAT_008a9e44;
  fVar4 = ((fVar5 + fVar6) - (fVar9 + fVar10)) * DAT_008a9e44;
  // class 19: the asm's order (the end point's sum is formed first, then added)
  *param_1 = ((fVar1 + fVar2) - (*(float *)(this_ + 0x14) + *pfVar12)) * DAT_008a9e44 +
             (*(float *)(this_ + 0x14) + *pfVar12);
  param_1[1] = fVar3 + (fVar7 + fVar8);
  param_1[2] = fVar4 + (fVar9 + fVar10);
  return (float *)(param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00425430, ap_00425430));
