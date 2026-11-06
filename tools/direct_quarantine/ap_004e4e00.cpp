// auto-ported from 004e4e00_vslot3.c (CSphere::vslot3, 1537 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x70: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CSphere;
typedef char Vec3;
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef Vec3* (BEA_THISCALL* FUN_0040d150_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d150_t> FUN_0040d150 = {(FUN_0040d150_t)0x0040d150};
typedef uint32_t (BEA_THISCALL* FUN_0041ad10_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0041ad10_t> FUN_0041ad10 = {(FUN_0041ad10_t)0x0041ad10};
typedef uint32_t (BEA_THISCALL* FUN_004404f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004404f0_t> FUN_004404f0 = {(FUN_004404f0_t)0x004404f0};
typedef uint32_t (BEA_THISCALL* FUN_00490900_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00490900_t> FUN_00490900 = {(FUN_00490900_t)0x00490900};

static uint32_t BEA_THISCALL ap_004e4e00(CSphere * this_, float *param_1, float *param_2, int param_3, int param_4)
{
  float *this_00;
  float *this_01;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  void *this_02;
  float *pfVar8;

  alignas(16) uint8_t bea_frame_[0x70] = {};   // the original stack frame (emulate_frame)
  float &local_70 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x70);
  float &local_6c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x6c);
  float &local_68 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x68);
  undefined4 &local_64 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x70 - 0x64);
  float &local_60 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x60);
  float &local_5c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x5c);
  float &local_58 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x58);
  undefined4 &local_54 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x70 - 0x54);
  float &local_50 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x50);
  float &local_4c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x4c);
  float &local_48 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x48);
  float &local_40 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x40);
  float &local_3c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x3c);
  float &local_38 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x38);
  float &local_30 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x30);
  float &local_2c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x2c);
  float &local_28 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x28);
  float &local_24 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x24);
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x1c);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x18);
  undefined1 (&local_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x70 - 0x10);
  this_00 = param_2 + 4;
  this_01 = param_1 + 4;
  FUN_00401ec0(bea_arg(&local_50), bea_arg(*this_00 - *this_01), bea_arg(param_2[5] - param_1[5]), bea_arg(param_2[6] - param_1[6]));
  fVar3 = *(float *)(this_ + 0x14) + *(float *)(param_3 + 0x14);
  bVar7 = SQRT(local_4c * local_4c + local_48 * local_48 + local_50 * local_50) - fVar3 <= 0.0f;
  if ((*(int *)(param_4 + 0xcc) != 0) && (bVar7)) {
    FUN_00401ec0(bea_arg(&local_70), bea_arg(*this_01 - *param_1), bea_arg(param_1[5] - param_1[1]), bea_arg(param_1[6] - param_1[2]));
    FUN_00401ec0(bea_arg(&local_30), bea_arg(*this_00 - *param_2), bea_arg(param_2[5] - param_2[1]), bea_arg(param_2[6] - param_2[2]));
    FUN_00401ec0(bea_arg(&local_60), bea_arg(local_30 - local_70), bea_arg(local_2c - local_6c), bea_arg(local_28 - local_68));
    fVar4 = local_60 * local_60;
    fVar6 = local_5c * local_5c;
    fVar5 = local_58 * local_58;
    fVar1 = *(float *)(this_ + 0x14);
    fVar2 = *(float *)(param_3 + 0x14);
    FUN_00401ec0(bea_arg(&local_40), bea_arg(*param_2 - *param_1), bea_arg(param_2[1] - param_1[1]), bea_arg(param_2[2] - param_1[2]));
    if (SQRT(fVar5 + fVar6 + fVar4) - (fVar1 + fVar2) < -0.0001f) {
      local_6c = local_5c;
      local_70 = local_60;
      local_68 = local_58;
      local_64 = local_54;
      fVar3 = SQRT(local_58 * local_58 + local_5c * local_5c + local_60 * local_60);
      if (fVar3 != 0.0f) {
        local_68 = 1.0f / fVar3;
        local_70 = local_68 * local_60;
        local_6c = local_5c * local_68;
        local_68 = local_58 * local_68;
      }
      fVar3 = (*(float *)(this_ + 0x14) + *(float *)(param_3 + 0x14)) - fVar3;
      if (fVar3 < 0.0f) {
        return false;
      }
      fVar3 = fVar3 * 0.5f;
      FUN_0040d150(bea_arg(&local_70), bea_arg(&local_20), bea_arg(fVar3));
      pfVar8 = &local_30;
      this_02 = (void *)(uintptr_t)bea_piece32(FUN_0040d150(bea_arg(&local_70), bea_arg(local_10), bea_arg(fVar3)));
      FUN_004404f0(bea_arg(this_02), bea_arg(pfVar8));
      local_18 = 0.0f;
      local_28 = 0.0f;
      FUN_00490900(bea_arg(this_00), bea_arg(param_2));
      FUN_0041ad10(bea_arg(this_00), bea_arg(&local_20));
      FUN_00490900(bea_arg(this_01), bea_arg(param_1));
      FUN_0041ad10(bea_arg(this_01), bea_arg(&local_30));
    }
    else {
      fVar1 = SQRT(local_3c * local_3c + local_38 * local_38 + local_40 * local_40);
      fVar4 = -SQRT(local_60 * local_60 + local_5c * local_5c + local_58 * local_58);
      fVar2 = fVar1 * fVar1;
      fVar1 = fVar1 * fVar4 + fVar1 * fVar4;
      if (fVar2 == 0.0f) {
        fVar3 = 0.0f;
      }
      else {
        fVar3 = (-fVar1 - SQRT(fVar1 * fVar1 - (fVar4 * fVar4 - fVar3 * fVar3) * fVar2 * 4.0f)) /
                (fVar2 + fVar2);
      }
      if (fVar3 < 0.0f) {
        fVar3 = 0.0f;
      }
      fVar3 = 1.0f - fVar3;
      FUN_00401ec0(bea_arg(&local_30), bea_arg(fVar3 * *param_2), bea_arg(fVar3 * param_2[1]), bea_arg(fVar3 * param_2[2]));
      *this_00 = *this_00 - local_30;
      param_2[5] = param_2[5] - local_2c;
      param_2[6] = param_2[6] - local_28;
      FUN_00401ec0(bea_arg(&local_30), bea_arg(fVar3 * *param_1), bea_arg(fVar3 * param_1[1]), bea_arg(fVar3 * param_1[2]));
      *this_01 = *this_01 - local_30;
      param_1[5] = param_1[5] - local_2c;
      param_1[6] = param_1[6] - local_28;
      FUN_00401ec0(bea_arg(&local_70), bea_arg(*this_00 - *this_01), bea_arg(param_2[5] - param_1[5]), bea_arg(param_2[6] - param_1[6]));
      fVar3 = SQRT(local_70 * local_70 + local_6c * local_6c);
      if (fVar3 != 0.0f) {
        fVar3 = 1.0f / fVar3;
        local_70 = local_70 * fVar3;
        local_6c = local_6c * fVar3;
      }
      local_68 = 0.0f;
      fVar3 = local_6c * param_2[1] + param_2[2] * 0.0f + local_70 * *param_2;
      if (fVar3 < 0.0f) {
        fVar3 = -fVar3;
        FUN_00401ec0(bea_arg(&local_20), bea_arg(local_70 * fVar3), bea_arg(local_6c * fVar3), bea_arg(fVar3 * 0.0f));
        FUN_00401ec0(bea_arg(&local_30), bea_arg(local_20 + *param_2), bea_arg(local_1c + param_2[1]), bea_arg(local_18 + param_2[2]));
        *param_2 = local_30;
        param_2[1] = local_2c;
        param_2[2] = local_28;
        param_2[3] = local_24;
      }
      *this_00 = *this_00 + *param_2;
      param_2[5] = param_2[5] + param_2[1];
      param_2[6] = param_2[2] + param_2[6];
      fVar3 = local_70 * *param_1 + local_68 * param_1[2] + local_6c * param_1[1];
      if (0.0f < fVar3) {
        fVar3 = -fVar3;
        FUN_00401ec0(bea_arg(&local_20), bea_arg(fVar3 * local_70), bea_arg(local_6c * fVar3), bea_arg(fVar3 * local_68));
        FUN_00401ec0(bea_arg(&local_30), bea_arg(local_20 + *param_1), bea_arg(local_1c + param_1[1]), bea_arg(local_18 + param_1[2]));
        *param_1 = local_30;
        param_1[1] = local_2c;
        param_1[2] = local_28;
        param_1[3] = local_24;
      }
      *this_01 = *this_01 + *param_1;
      param_1[5] = param_1[5] + param_1[1];
      param_1[6] = param_1[2] + param_1[6];
    }
    bVar7 = true;
    param_1[8] = 1.4013e-45;
    param_2[8] = 1.4013e-45;
  }
  return bVar7;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e4e00, ap_004e4e00));
