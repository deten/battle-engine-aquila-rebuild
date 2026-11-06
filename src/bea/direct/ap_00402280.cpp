// auto-ported from 00402280_vslot3.c (CAirGuide::vslot3, 1059 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CAirGuide;
typedef char Vec3;
typedef char extraout_ST0;
typedef char extraout_ST0_00;
typedef char fStack_10;
typedef char fStack_8;
typedef char fStack_c;
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef f80 (BEA_THISCALL* FUN_004026b0_t)(uint32_t);
static const bea_guard<FUN_004026b0_t> FUN_004026b0 = {(FUN_004026b0_t)0x004026b0};

static void BEA_THISCALL ap_00402280(CAirGuide * this_)
{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float *pfVar5;
  void *this_00;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar6;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  float &local_3c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x3c);
  float &local_30 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x30);
  float &fStack_2c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x2c);
  float &fStack_28 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x28);
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x1c);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x18);
  float &fStack_10 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x10);
  float &fStack_c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0xc);
  float &fStack_8 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x8);
  // the slots +0x158 is copied from (00402620 [esp+0x1c], 00402689 [esp+0x2c]):
  // the 4th lane of the vector slot 0x6c returned into local_30, and on the other
  // path a slot nothing writes; Ghidra named them local_20 / fStack_10, 4 bytes
  // off (found by tools/offline_check.py, 2026-10-30)
  float &local_24 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x24);
  float &fStack_14 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x14);
  iVar3 = *(int *)(this_ + 0x18);
  if ((*(byte *)(iVar3 + 0x2c) & 4) == 0) {
    FUN_00401ec0(bea_arg(&local_20), bea_arg(*(float *)(this_ + 8) - *(float *)(iVar3 + 0x1c)), bea_arg(*(float *)(this_ + 0xc) - *(float *)(iVar3 + 0x20)), bea_arg(*(float *)(this_ + 0x10) - *(float *)(iVar3 + 0x24)));
    fVar6 = bea_fcast<float10>(fpatan(bea_fcast<float10>(local_20),bea_fcast<float10>(local_1c)));
    fVar1 = bea_fcast<float>(-fVar6);
    fVar6 = bea_fcast<float10>(fpatan(bea_fcast<float10>(local_18),
                            SQRT(bea_fcast<float10>(local_20) * bea_fcast<float10>(local_20) +
                                 bea_fcast<float10>(local_1c) * bea_fcast<float10>(local_1c))));
    local_3c = bea_fcast<float>(fVar6);
    pfVar5 = (float *)bea_vcall<uint32_t>(*(int **)(this_ + 0x18), 0x6c, &local_30);
    fVar6 = bea_fcast<float10>(fpatan(bea_fcast<float10>(*pfVar5),bea_fcast<float10>(pfVar5[1])));
    fVar2 = bea_fcast<float>(-fVar6);
    this_00 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x18), 0x6c, &local_30);
    FUN_004026b0(bea_arg(this_00));
    iVar3 = *(int *)(this_ + 0x18);
    FUN_00401ec0(bea_arg(&fStack_10), bea_arg(*(undefined4 *)(iVar3 + 0x3c)), bea_arg(*(undefined4 *)(iVar3 + 0x4c)), bea_arg(*(undefined4 *)(iVar3 + 0x5c)));
    if (*(int *)(this_ + 0x1c) == 0) {
      fVar1 = fVar2 + 1.5707964f;
      local_3c = 0.0f;
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
    if (3.1415927f < local_3c) {
      local_3c = local_3c - 6.2831855f;
    }
    if (local_3c < -3.1415927f) {
      local_3c = local_3c + 6.2831855f;
    }
    iVar3 = *(int *)(this_ + 0x18);
    if (*(int *)(*(int *)(iVar3 + 0x13c) + 0x20) != 2) {
      if ((*(int *)(this_ + 0x2c) != 0) &&
         (local_3c = -1.0471976,
         *(float *)(*(int *)(this_ + 0x2c) + 0x24) - *(float *)(iVar3 + 0x24) <= 0.0f)) {
        local_3c = 1.0471976;
      }
      if (5.0f <= *(float *)(this_ + 0x20)) {
        if ((15.0f <= *(float *)(this_ + 0x20)) || (local_3c <= 0.0f)) {
          if (50.0f < *(float *)(this_ + 0x20)) {
            local_3c = 0.7853982;
          }
        }
        else {
          local_3c = 0.0f;
        }
      }
      else {
        local_3c = -0.7853982;
      }
      if ((*(int *)(iVar3 + 0x244) != 1) && (*(int *)(iVar3 + 0x244) != 2)) {
        if (10.0f <= *(float *)(iVar3 + 0x1c)) {
          if (*(float *)(iVar3 + 0x1c) <= 502.0f) {
            if (10.0f <= *(float *)(iVar3 + 0x20)) {
              if (502.0f < *(float *)(iVar3 + 0x20)) {
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
      fVar4 = fVar1;
      if ((1.5707964f < fVar2) && (fVar1 < -1.5707964f)) {
        fVar4 = fVar1 + 6.2831855f;
      }
    }
    else {
      fVar4 = fVar1 - 6.2831855f;
    }
    fStack_28 = ABS(fVar2 - fVar4);
    if (1.5707964f < fStack_28) {
      fStack_28 = 1.5707964f;
    }
    if (0.0f <= fStack_8 * local_18 + fStack_c * local_1c + fStack_10 * local_20) {   // class 19: the asm's order
      fStack_28 = -fStack_28;
    }
    if (ABS(fStack_28) <= 0.1f) {
      *(undefined4 *)(iVar3 + 0x174) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x174) = 0x3f800000;
    }
    iVar3 = *(int *)(this_ + 0x18);
    fStack_2c = local_3c;
    *(float *)(iVar3 + 0x120) = fVar1;
    *(float *)(iVar3 + 0x124) = local_3c;
    *(float *)(iVar3 + 0x128) = fStack_28;
    local_30 = fVar1;
    extraout_ST0 = bea_fcast<float10>(bea_vcall<float10>(*(int **)(this_ + 0x18), 0x3c));
    iVar3 = *(int *)(this_ + 0x18);
    fVar6 = extraout_ST0 * bea_fcast<float10>(0.05f) * bea_fcast<float10>(4.0f);
    *(float *)(iVar3 + 0x14c) = bea_fcast<float>((fVar6 * bea_fcast<float10>(*(float *)(iVar3 + 0x40))));
    *(float *)(iVar3 + 0x150) = bea_fcast<float>((fVar6 * bea_fcast<float10>(*(float *)(iVar3 + 0x50))));
    *(float *)(iVar3 + 0x154) = bea_fcast<float>((fVar6 * bea_fcast<float10>(*(float *)(iVar3 + 0x60))));
    *(float *)(iVar3 + 0x158) = local_24;
    return;
  }
  *(undefined4 *)(iVar3 + 0x174) = 0;
  extraout_ST0_00 = bea_fcast<float10>(bea_vcall<float10>(*(int **)(this_ + 0x18), 0x3c));
  iVar3 = *(int *)(this_ + 0x18);
  fVar6 = extraout_ST0_00 * bea_fcast<float10>(0.05f) * bea_fcast<float10>(4.0f);
  *(float *)(iVar3 + 0x14c) = bea_fcast<float>((fVar6 * bea_fcast<float10>(*(float *)(iVar3 + 0x40))));
  *(float *)(iVar3 + 0x150) = bea_fcast<float>((fVar6 * bea_fcast<float10>(*(float *)(iVar3 + 0x50))));
  *(float *)(iVar3 + 0x154) = bea_fcast<float>((fVar6 * bea_fcast<float10>(*(float *)(iVar3 + 0x60))));
  *(float *)(iVar3 + 0x158) = fStack_14;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00402280, ap_00402280));
