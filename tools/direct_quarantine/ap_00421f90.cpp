// auto-ported from 00421f90_vslot3.c (CCarrierGuide::vslot3, 959 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x80: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CCarrierGuide;
typedef char Vec3;
typedef char extraout_ST0;
typedef char fStack_18;
typedef char fStack_28;
typedef char fStack_44;
typedef char fStack_8;
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef uint32_t (BEA_THISCALL* FUN_004062d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004062d0_t> FUN_004062d0 = {(FUN_004062d0_t)0x004062d0};
#define _CIasin(a0) bea_x87call1(0x0055dcb0, (float10)(a0))

static void BEA_THISCALL ap_00421f90(CCarrierGuide * this_)
{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 extraout_ST0;
  float10 fVar5;

  alignas(16) uint8_t bea_frame_[0x80] = {};   // the original stack frame (emulate_frame)
  float &local_74 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x74);
  float &local_70 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x70);
  float &fStack_64 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x64);
  undefined4 &local_5c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x5c);
  float &local_58 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x58);
  undefined4 &local_54 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x54);
  float &local_50 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x50);
  float &local_4c = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x4c);
  float &local_48 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x48);
  float &fStack_44 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x44);
  float &local_40 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x40);
  float &local_3c = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x3c);
  float &local_38 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x38);
  undefined1 (&auStack_2c)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x80 - 0x2c);
  float &fStack_28 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x28);
  float &fStack_18 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x18);
  float &fStack_8 = *reinterpret_cast<float *>(bea_frame_ + 0x80 - 0x8);
  iVar1 = *(int *)(this_ + 0x18);
  if ((*(byte *)(iVar1 + 0x2c) & 4) == 0) {
    local_5c = 0;
    local_58 = 0.0f;
    *(undefined4 *)(iVar1 + 0x14c) = 0;
    *(undefined4 *)(iVar1 + 0x150) = 0;
    *(undefined4 *)(iVar1 + 0x154) = 0;
    *(undefined4 *)(iVar1 + 0x158) = local_54;
    if (*(int *)(this_ + 0x1c) != 0) {
      iVar1 = *(int *)(this_ + 0x18);
      FUN_00401ec0(bea_arg(&local_50), bea_arg(*(float *)(this_ + 8) - *(float *)(iVar1 + 0x1c)), bea_arg(*(float *)(this_ + 0xc) - *(float *)(iVar1 + 0x20)), bea_arg(*(float *)(this_ + 0x10) - *(float *)(iVar1 + 0x24)));
      iVar1 = *(int *)(this_ + 0x18);
      local_74 = *(float *)(iVar1 + 0x114);
      fVar3 = SQRT(local_50 * local_50 + local_4c * local_4c);
      if (2.0f < fVar3) {
        fVar5 = bea_fcast<float10>(fpatan(bea_fcast<float10>(local_50),bea_fcast<float10>(local_4c)));
        local_74 = bea_fcast<float>(-fVar5);
      }
      fVar5 = bea_fcast<float10>(fpatan(bea_fcast<float10>(local_48),bea_fcast<float10>(fVar3)));
      fVar2 = *(float *)(iVar1 + 0x114);
      local_70 = bea_fcast<float>(fVar5);
      FUN_00401ec0(bea_arg(&local_40), bea_arg(*(undefined4 *)(iVar1 + 0x3c)), bea_arg(*(undefined4 *)(iVar1 + 0x4c)), bea_arg(*(undefined4 *)(iVar1 + 0x5c)));
      if (*(int *)(this_ + 0x1c) == 2) {
        local_74 = local_74 - 6.2831855f;
        local_70 = local_70 - 6.2831855f;
      }
      if (3.1415927f < local_74) {
        local_74 = local_74 - 6.2831855f;
      }
      if (local_74 < -3.1415927f) {
        local_74 = local_74 + 6.2831855f;
      }
      if (3.1415927f < local_70) {
        local_70 = local_70 - 6.2831855f;
      }
      if (local_70 < -3.1415927f) {
        local_70 = local_70 + 6.2831855f;
      }
      if ((-1.5707964f <= fVar2) || (local_74 <= 1.5707964f)) {
        if ((1.5707964f < fVar2) && (local_74 < -1.5707964f)) {
          local_74 = local_74 + 6.2831855f;
        }
      }
      else {
        local_74 = local_74 - 6.2831855f;
      }
      fVar2 = ABS(fVar2 - local_74);
      if (0.3926991f < fVar2) {
        fVar2 = 0.3926991f;
      }
      if (0.0f <= local_40 * local_50 + local_3c * local_4c + local_38 * local_48) {
        fVar2 = -fVar2;
      }
      if (local_70 <= 0.19634955f) {
        if (local_70 < -0.19634955f) {
          local_70 = -0.19634955f;
        }
      }
      else {
        local_70 = 0.19634955f;
      }
      if (ABS(fVar2) <= 0.1f) {
        *(undefined4 *)(*(int *)(this_ + 0x18) + 0x174) = 0;
      }
      else {
        *(undefined4 *)(*(int *)(this_ + 0x18) + 0x174) = 0x3f800000;
      }
      extraout_ST0 = bea_fcast<float10>(bea_vcall<float10>(*(int **)(this_ + 0x18), 0x3c));
      local_58 = bea_fcast<float>((extraout_ST0 * bea_fcast<float10>(0.05f) * bea_fcast<float10>(4.0f)));
      fVar4 = SQRT(local_4c * local_4c + fStack_44 * fStack_44 + local_48 * local_48);
      if (fVar4 <= 0.0f) {
        fStack_64 = 0.0f;
      }
      else {
        fVar5 = _CIasin(bea_fcast<float10>(fStack_44) / bea_fcast<float10>(fVar4));
        fStack_64 = bea_fcast<float>(fVar5);
      }
      fVar5 = bea_fcast<float10>(fpatan(bea_fcast<float10>(local_4c),bea_fcast<float10>(local_48)));
      FUN_004062d0(bea_arg(auStack_2c), bea_arg(bea_fcast<float>(-fVar5)), bea_arg(fStack_64), bea_arg(0));
      FUN_00401ec0(bea_arg(&local_5c), bea_arg(fStack_28 * local_58), bea_arg(fStack_18 * local_58), bea_arg(fStack_8 * local_58));
      iVar1 = *(int *)(this_ + 0x18);
      *(undefined4 *)(iVar1 + 0x14c) = local_5c;
      *(float *)(iVar1 + 0x150) = local_58;
      *(undefined4 *)(iVar1 + 0x154) = local_54;
      *(float *)(iVar1 + 0x158) = local_50;
      iVar1 = *(int *)(this_ + 0x18);
      *(float *)(iVar1 + 0x120) = local_70;
      *(float *)(iVar1 + 0x124) = fVar2;
      *(float *)(iVar1 + 0x128) = fVar3;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00421f90, ap_00421f90));
