// auto-ported from 005096a0_FUN_005096a0.c (FUN_005096a0, 768 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_0040d0f0_t)(uint32_t);
static const bea_guard<FUN_0040d0f0_t> FUN_0040d0f0 = {(FUN_0040d0f0_t)0x0040d0f0};
typedef uint32_t (BEA_THISCALL* FUN_0044a850_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044a850_t> FUN_0044a850 = {(FUN_0044a850_t)0x0044a850};

static float10 BEA_THISCALL ap_005096a0(void * this_, float param_1, float param_2, float param_3, undefined4 param_4)
{
  float fVar1;
  float fVar2;
  void *this_00;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x1c);
  undefined1 (&local_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x20 - 0x10);
  if ((*(int *)((int)this_ + 0xa0) == 0) ||
     (this_00 = *(void **)(*(int *)((int)this_ + 0xa0) + 0x18), this_00 == (void *)0x0)) {
    fVar8 = bea_fcast<float10>(0.0f);
  }
  else {
    iVar7 = FUN_0040d0f0(bea_arg(this_00));
    if (iVar7 == 0) {
      return bea_fcast<float10>(*(float *)(*(int *)((int)this_ + 0xa0) + 0x74));
    }
    if (((param_1 == 0.0f) && (param_2 == 0.0f)) && (param_3 == 0.0f)) {
      fVar2 = 0.0f;
    }
    else {
      iVar7 = FUN_0044a850(bea_arg(this_), bea_arg(local_10));
      fVar2 = param_3 - *(float *)(iVar7 + 8);
    }
    iVar7 = *(int *)((int)this_ + 0xa0);
    fVar3 = *(float *)(iVar7 + 0x80);
    fVar5 = *(float *)(*(int *)(iVar7 + 0x18) + 0x2c) * 0.05f;
    fVar6 = *(float *)(*(int *)(iVar7 + 0x18) + 0x3c) * 0.025f;
    fVar4 = *(float *)(iVar7 + 0x7c);
    if (((-0.7853982f < fVar4) && (-0.7853982f < fVar3)) ||
       ((fVar4 < -0.7853982f && (fVar3 < -0.7853982f)))) {
      fVar8 = bea_fcast<float10>(fsin(bea_fcast<float10>(fVar4)));
      fVar1 = bea_fcast<float>(fVar8);
      fVar2 = fVar6 * fVar2 + fVar6 * fVar2;
      fVar8 = bea_fcast<float10>(fcos(bea_fcast<float10>(fVar4)));
      fVar8 = (fVar8 * (SQRT(ABS(bea_fcast<float10>(fVar1) * bea_fcast<float10>(fVar1) * bea_fcast<float10>(fVar5) * bea_fcast<float10>(fVar5) -
                                 bea_fcast<float10>(fVar2))) - bea_fcast<float10>(fVar1) * bea_fcast<float10>(fVar5)) *
              bea_fcast<float10>(fVar5)) / bea_fcast<float10>(fVar6);
      fVar9 = bea_fcast<float10>(fsin(bea_fcast<float10>(fVar3)));
      fVar10 = bea_fcast<float10>(fcos(bea_fcast<float10>(fVar3)));
      fVar2 = bea_fcast<float>(((fVar10 * (SQRT(ABS(fVar9 * fVar9 * bea_fcast<float10>(fVar5) * bea_fcast<float10>(fVar5) -
                                          bea_fcast<float10>(fVar2))) - fVar9 * bea_fcast<float10>(fVar5)) *
                      bea_fcast<float10>(fVar5)) / bea_fcast<float10>(fVar6)));
      if (bea_fcast<float10>(fVar2) < fVar8) {
        return bea_fcast<float10>(fVar2);
      }
    }
    else {
      fVar8 = bea_fcast<float10>(fsin(bea_fcast<float10>(fVar4)));
      fVar1 = bea_fcast<float>((fVar8 * bea_fcast<float10>(fVar5)));
      fVar2 = fVar6 * fVar2 + fVar6 * fVar2;
      fVar8 = bea_fcast<float10>(fcos(bea_fcast<float10>(fVar4)));
      fVar8 = fVar8 * bea_fcast<float10>(fVar5) *
              ((SQRT(bea_fcast<float10>(fVar1) * bea_fcast<float10>(fVar1) + bea_fcast<float10>(fVar2)) - bea_fcast<float10>(fVar1)) /
              bea_fcast<float10>(fVar6));
      if (fVar8 < bea_fcast<float10>(0.0f)) {
        fVar8 = bea_fcast<float10>(0.0f);
      }
      fVar9 = bea_fcast<float10>(fsin(bea_fcast<float10>(fVar3)));
      fVar9 = fVar9 * bea_fcast<float10>(fVar5);
      fVar10 = bea_fcast<float10>(fcos(bea_fcast<float10>(fVar3)));
      fVar9 = fVar10 * bea_fcast<float10>(fVar5) *
              ((SQRT(fVar9 * fVar9 + bea_fcast<float10>(fVar2)) - fVar9) / bea_fcast<float10>(fVar6));
      local_1c = bea_fcast<float>(fVar9);
      if (fVar9 < bea_fcast<float10>(0.0f)) {
        local_1c = 0.0f;
      }
      fVar9 = bea_fcast<float10>(fsin(bea_fcast<float10>(-0.7853981852531433f)));
      fVar9 = fVar9 * bea_fcast<float10>(fVar5);
      fVar10 = bea_fcast<float10>(fcos(bea_fcast<float10>(-0.7853981852531433f)));
      fVar9 = fVar10 * bea_fcast<float10>(fVar5) *
              ((SQRT(fVar9 * fVar9 + bea_fcast<float10>(fVar2)) - fVar9) / bea_fcast<float10>(fVar6));
      param_1 = bea_fcast<float>(fVar9);
      if (fVar9 < bea_fcast<float10>(0.0f)) {
        param_1 = 0.0f;
      }
      if (fVar8 == bea_fcast<float10>(0.0f)) {
        fVar8 = bea_fcast<float10>(param_1);
      }
      if ((bea_fcast<float10>(local_1c) < fVar8) && (local_1c != 0.0f)) {
        fVar8 = bea_fcast<float10>(local_1c);
      }
      if ((bea_fcast<float10>(param_1) < fVar8) && (param_1 != 0.0f)) {
        return bea_fcast<float10>(param_1);
      }
    }
  }
  return fVar8;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005096a0, ap_005096a0));
