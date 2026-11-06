// auto-ported from 005094b0_FUN_005094b0.c (FUN_005094b0, 495 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define _CIasin(a0) bea_x87call1(0x0055dcb0, (float10)(a0))

static float10 BEA_THISCALL ap_005094b0(void * this_, float param_1, float param_2, float param_3, undefined4 param_4)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  float &local_3c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x3c);
  float &fStack_30 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x30);
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x1c);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x18);
  int &local_14 = *reinterpret_cast<int *>(bea_frame_ + 0x40 - 0x14);
  float &local_8 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x8);
  piVar1 = *(int **)((int)this_ + 8);
  local_20 = bea_fcast<float>(piVar1[7]);
  local_1c = bea_fcast<float>(piVar1[8]);
  local_18 = bea_fcast<float>(piVar1[9]);
  local_14 = piVar1[10];
  if (*(int *)((int)this_ + 0x98) != 0) {
    bea_vcall<uint32_t>(piVar1, 0x1c4, &local_20);
  }
  fVar4 = param_1 - local_20;
  fVar5 = param_2 - local_1c;
  iVar2 = *(int *)((int)this_ + 0xa0);
  local_3c = -0.7853982;
  local_8 = param_3 - local_18;
  iVar3 = *(int *)(iVar2 + 0x18);
  if (((*(float *)(iVar3 + 0x3c) * 0.025f != 0.0f) && (*(int *)(iVar3 + 0x50) == 0)) &&
     (*(int *)(iVar3 + 0x6c) == 0)) {
    fStack_30 = 99999.0;
    fVar6 = *(float *)(iVar3 + 0x2c) * 0.05f;
    fVar7 = *(float *)(iVar3 + 0x3c) * 0.025f;
    fVar8 = bea_fcast<float10>(*(float *)(iVar2 + 0x80));
    if (*(float *)(iVar2 + 0x80) < *(float *)(iVar2 + 0x7c)) {
      fVar9 = bea_fcast<float10>(fVar7) * bea_fcast<float10>((param_3 - *(float *)(*(int *)((int)this_ + 8) + 0x24)));
      do {
        fVar10 = bea_fcast<float10>(fsin(fVar8));
        fVar10 = fVar10 * bea_fcast<float10>(fVar6);
        fVar11 = fVar10 * fVar10 + (fVar9 + fVar9);   // class 19: the asm's order (B + B is formed before the loop)
        if (bea_fcast<float10>(0.0f) < fVar11) {
          fVar12 = bea_fcast<float10>(fcos(fVar8));
          fVar10 = fVar12 * bea_fcast<float10>(fVar6) * ((SQRT(fVar11) - fVar10) / bea_fcast<float10>(fVar7));
          if ((bea_fcast<float10>(0.0f) < fVar10) &&
             (fVar10 = ABS(fVar10 - bea_fcast<float10>(SQRT(fVar5 * fVar5 + fVar4 * fVar4))),
             fVar10 < bea_fcast<float10>(fStack_30))) {
            fStack_30 = bea_fcast<float>(fVar10);
            local_3c = bea_fcast<float>(fVar8);
          }
        }
        fVar8 = fVar8 + bea_fcast<float10>(0.02f);
      } while (BEA_LOOP_GUARD((fVar8 < bea_fcast<float10>(*(float *)(iVar2 + 0x7c)))));
    }
    return bea_fcast<float10>(local_3c);
  }
  fVar4 = SQRT(fVar4 * fVar4 + local_8 * local_8 + fVar5 * fVar5);   // class 19: the asm's order
  if (fVar4 <= 0.0f) {
    return bea_fcast<float10>(0.0f);
  }
  fVar8 = _CIasin(bea_fcast<float10>(local_8) / bea_fcast<float10>(fVar4));
  return fVar8;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005094b0, ap_005094b0));
