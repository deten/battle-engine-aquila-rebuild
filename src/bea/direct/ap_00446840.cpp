// auto-ported from 00446840_vslot3.c (CDiveBomberGuide::vslot3, 1087 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x50: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CDiveBomberGuide;
typedef char Vec3;
typedef char extraout_ST0;
typedef char extraout_ST0_00;
typedef char fStack_4;
typedef char fStack_8;
typedef char fStack_c;
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef f80 (BEA_THISCALL* FUN_004026b0_t)(uint32_t);
static const bea_guard<FUN_004026b0_t> FUN_004026b0 = {(FUN_004026b0_t)0x004026b0};

static void BEA_THISCALL ap_00446840(CDiveBomberGuide * this_)
{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  float *pfVar6;
  void *this_00;
  float10 extraout_ST0;
  float10 fVar7;
  float10 extraout_ST0_00;

  alignas(16) uint8_t bea_frame_[0x50] = {};   // the original stack frame (emulate_frame)
  float &fStack_48 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x48);
  undefined1 (&auStack_3c)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x50 - 0x3c);
  float &fStack_2c = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x2c);
  float &fStack_28 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x28);
  float &fStack_24 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x24);
  undefined4 &uStack_20 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x20);
  undefined4 &uStack_1c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x1c);
  undefined4 &uStack_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x18);
  undefined4 &uStack_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x14);
  undefined4 &uStack_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x10);
  float &fStack_c = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0xc);
  float &fStack_8 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x8);
  float &fStack_4 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x4);
  piVar3 = *(int **)(this_ + 0x18);
  if ((*(byte *)(piVar3 + 0xb) & 4) == 0) {
    extraout_ST0 = bea_fcast<float10>(bea_vcall<float10>(piVar3, 0x3c));
    iVar4 = *(int *)(this_ + 0x18);
    fVar7 = extraout_ST0 * bea_fcast<float10>(0.05f) * bea_fcast<float10>(4.0f);
    FUN_00401ec0(bea_arg(&uStack_1c), bea_arg(bea_fcast<float>((fVar7 * bea_fcast<float10>(*(float *)(iVar4 + 0x40))))), bea_arg(bea_fcast<float>((fVar7 * bea_fcast<float10>(*(float *)(iVar4 + 0x50))))), bea_arg(bea_fcast<float>((fVar7 * bea_fcast<float10>(*(float *)(iVar4 + 0x60))))));
    iVar4 = *(int *)(this_ + 0x18);
    FUN_00401ec0(bea_arg(&fStack_2c), bea_arg(*(float *)(this_ + 8) - *(float *)(iVar4 + 0x1c)), bea_arg(*(float *)(this_ + 0xc) - *(float *)(iVar4 + 0x20)), bea_arg(*(float *)(this_ + 0x10) - *(float *)(iVar4 + 0x24)));
    fVar7 = bea_fcast<float10>(fpatan(bea_fcast<float10>(fStack_2c),bea_fcast<float10>(fStack_28)));
    fVar1 = bea_fcast<float>(-fVar7);
    fVar7 = bea_fcast<float10>(fpatan(bea_fcast<float10>(fStack_24),
                            SQRT(bea_fcast<float10>(fStack_2c) * bea_fcast<float10>(fStack_2c) +
                                 bea_fcast<float10>(fStack_28) * bea_fcast<float10>(fStack_28))));
    fStack_48 = bea_fcast<float>(fVar7);
    pfVar6 = (float *)bea_vcall<uint32_t>(*(int **)(this_ + 0x18), 0x6c, auStack_3c);
    fVar7 = bea_fcast<float10>(fpatan(bea_fcast<float10>(*pfVar6),bea_fcast<float10>(pfVar6[1])));
    fVar2 = bea_fcast<float>(-fVar7);
    this_00 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x18), 0x6c, auStack_3c);
    FUN_004026b0(bea_arg(this_00));
    iVar4 = *(int *)(this_ + 0x18);
    FUN_00401ec0(bea_arg(&fStack_c), bea_arg(*(undefined4 *)(iVar4 + 0x3c)), bea_arg(*(undefined4 *)(iVar4 + 0x4c)), bea_arg(*(undefined4 *)(iVar4 + 0x5c)));
    if (*(int *)(this_ + 0x1c) == 0) {
      fVar1 = fVar2 + 0.3926991f;
      fStack_48 = 0.0f;
    }
    else if (*(int *)(this_ + 0x1c) == 2) {
      fVar1 = fVar1 - 3.1415927f;
    }
    if (3.1415927f < fVar1) {
      fVar1 = fVar1 - 6.2831855f;
    }
    if (fVar1 < -3.1415927f) {
      fVar1 = fVar1 + 6.2831855f;
    }
    if (3.1415927f < fStack_48) {
      fStack_48 = fStack_48 - 6.2831855f;
    }
    if (fStack_48 < -3.1415927f) {
      fStack_48 = fStack_48 + 6.2831855f;
    }
    iVar4 = *(int *)(this_ + 0x18);
    if (*(int *)(*(int *)(iVar4 + 0x13c) + 0x20) != 2) {
      if ((*(int *)(this_ + 0x2c) != 0) &&
         (fStack_48 = -0.5235988,
         *(float *)(*(int *)(this_ + 0x2c) + 0x24) - *(float *)(iVar4 + 0x24) <= 0.0f)) {
        fStack_48 = 0.5235988;
      }
      if (*(float *)(*(int *)(iVar4 + 0x164) + 0x15c) <= *(float *)(this_ + 0x20)) {
        if (((*(float *)(this_ + 0x20) < *(float *)(*(int *)(iVar4 + 0x164) + 0x15c) * 3.0f) &&
            (0.0f < fStack_48)) || ((50.0f < *(float *)(this_ + 0x20) && (fStack_48 < 0.0f)))) {
          fStack_48 = 0.0f;
        }
      }
      else {
        fStack_48 = -0.7853982;
      }
      if ((*(int *)(iVar4 + 0x244) != 1) && (*(int *)(iVar4 + 0x244) != 2)) {
        if (10.0f <= *(float *)(iVar4 + 0x1c)) {
          if (*(float *)(iVar4 + 0x1c) <= 502.0f) {
            if (10.0f <= *(float *)(iVar4 + 0x20)) {
              if (502.0f < *(float *)(iVar4 + 0x20)) {
                fVar1 = 3.1415927f;
              }
            }
            else {
              fVar1 = 0.0f;
            }
          }
          else {
            fVar1 = 1.5707964f;
          }
        }
        else {
          fVar1 = -1.5707964f;
        }
      }
    }
    if ((-1.5707964f <= fVar2) || (fVar1 <= 1.5707964f)) {
      fVar5 = fVar1;
      if ((1.5707964f < fVar2) && (fVar1 < -1.5707964f)) {
        fVar5 = fVar1 + 6.2831855f;
      }
    }
    else {
      fVar5 = fVar1 - 6.2831855f;
    }
    fVar2 = ABS(fVar2 - fVar5);
    if (1.5707964f < fVar2) {
      fVar2 = 1.5707964f;
    }
    if (0.0f <= fStack_4 * fStack_24 + fStack_8 * fStack_28 + fStack_c * fStack_2c) {   // class 19: the asm's order
      fVar2 = -fVar2;
    }
    if (ABS(fVar2) <= 0.1f) {
      *(undefined4 *)(iVar4 + 0x174) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + 0x174) = 0x3f800000;
    }
    iVar4 = *(int *)(this_ + 0x18);
    *(float *)(iVar4 + 0x120) = fVar1;
    *(float *)(iVar4 + 0x124) = fStack_48;
    *(float *)(iVar4 + 0x128) = fVar2;
    iVar4 = *(int *)(this_ + 0x18);
    *(undefined4 *)(iVar4 + 0x14c) = uStack_1c;
    *(undefined4 *)(iVar4 + 0x150) = uStack_18;
    *(undefined4 *)(iVar4 + 0x154) = uStack_14;
    *(undefined4 *)(iVar4 + 0x158) = uStack_10;
    return;
  }
  piVar3[0x5d] = 0;
  extraout_ST0_00 = bea_fcast<float10>(bea_vcall<float10>(*(int **)(this_ + 0x18), 0x3c));
  iVar4 = *(int *)(this_ + 0x18);
  fVar7 = extraout_ST0_00 * bea_fcast<float10>(0.05f) * bea_fcast<float10>(4.0f);
  *(float *)(iVar4 + 0x14c) = bea_fcast<float>((fVar7 * bea_fcast<float10>(*(float *)(iVar4 + 0x40))));
  *(float *)(iVar4 + 0x150) = bea_fcast<float>((fVar7 * bea_fcast<float10>(*(float *)(iVar4 + 0x50))));
  *(float *)(iVar4 + 0x154) = bea_fcast<float>((fVar7 * bea_fcast<float10>(*(float *)(iVar4 + 0x60))));
  *(undefined4 *)(iVar4 + 0x158) = uStack_20;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00446840, ap_00446840));
