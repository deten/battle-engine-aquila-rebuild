// auto-ported from 0043fe20_vslot2.c (CCylinder::vslot2, 1731 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x70: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CCylinder;
typedef char Vec3;
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef Vec3* (BEA_THISCALL* FUN_0040d150_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d150_t> FUN_0040d150 = {(FUN_0040d150_t)0x0040d150};
typedef uint32_t (BEA_THISCALL* FUN_0041ad10_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0041ad10_t> FUN_0041ad10 = {(FUN_0041ad10_t)0x0041ad10};
typedef uint32_t (BEA_THISCALL* FUN_004404f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004404f0_t> FUN_004404f0 = {(FUN_004404f0_t)0x004404f0};

static int BEA_THISCALL ap_0043fe20(CCylinder * this_, float *param_1, float *param_2, int param_3, int param_4)
{
  float *this_00;
  float *this_01;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *this_02;
  int iVar8;
  bool bVar9;
  float *pfVar10;

  alignas(16) uint8_t bea_frame_[0x70] = {};   // the original stack frame (emulate_frame)
  float &local_68 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x68);
  float &local_64 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x64);
  float &local_60 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x60);
  float &local_50 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x50);
  float &local_4c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x4c);
  float &local_48 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x48);
  undefined4 &local_44 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x70 - 0x44);
  float &local_40 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x40);
  float &local_3c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x3c);
  float &local_38 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x38);
  float &local_34 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x34);
  float &local_30 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x30);
  float &local_2c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x2c);
  float &local_28 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x28);
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x1c);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x18);
  undefined1 (&local_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x70 - 0x10);
  this_00 = param_2 + 4;
  this_01 = param_1 + 4;
  fVar1 = *(float *)(param_3 + 0x14) + *(float *)(this_ + 0x14);
  fVar2 = *(float *)(param_3 + 0x1c) + *(float *)(this_ + 0x1c);
  iVar8 = 0;
  if ((SQRT((param_2[4] - param_1[4]) * (param_2[4] - param_1[4]) +
            (param_2[5] - param_1[5]) * (param_2[5] - param_1[5])) - fVar1 <= 0.0f) &&
     (ABS(param_2[6] - param_1[6]) <= fVar2)) {
    iVar8 = 1;
  }
  if (((param_4 != 0) && (*(int *)(param_4 + 0xcc) != 0)) && (iVar8 != 0)) {
    local_2c = param_1[5] - param_1[1];
    local_28 = param_1[6] - param_1[2];
    local_3c = param_2[5] - param_2[1];
    local_38 = param_2[6] - param_2[2];
    local_50 = (*this_00 - *param_2) - (*this_01 - *param_1);
    local_4c = local_3c - local_2c;
    local_48 = local_38 - local_28;
    fVar3 = local_48 - fVar2;
    fVar4 = local_4c * local_4c;
    fVar5 = local_50 * local_50;
    fVar6 = SQRT(fVar5 + fVar4);
    local_68 = fVar6 - fVar1;
    bVar9 = fVar3 <= local_68;
    if (bVar9) {
      local_60 = *param_2 - *param_1;
      local_64 = param_2[1] - param_1[1];
      fVar7 = local_64 * local_4c + local_60 * local_50;
    }
    else {
      local_60 = *param_2 - *param_1;
      local_64 = param_2[1] - param_1[1];
      fVar7 = (param_2[2] - param_1[2]) * local_48;
      local_68 = fVar3;
      local_20 = local_60;
      local_1c = local_64;
    }
    bVar9 = !bVar9;
    if (fVar7 <= 0.0f) {
      FUN_00401ec0(bea_arg(&local_30), bea_arg(local_60), bea_arg(local_64), bea_arg(param_2[2] - param_1[2]));
      if (local_68 < -0.0001f) {
        local_40 = local_50;
        local_3c = local_4c;
        local_34 = bea_fcast<float>(local_44);
        local_38 = local_48;
        fVar1 = SQRT(local_48 * local_48 + fVar5 + fVar4);
        if (fVar1 != 0.0f) {
          fVar1 = 1.0f / fVar1;
          local_40 = fVar1 * local_50;
          local_3c = local_4c * fVar1;
          local_38 = local_48 * fVar1;
        }
        pfVar10 = &local_20;
        this_02 = (void *)FUN_0040d150(bea_arg(&local_40), bea_arg(local_10), bea_arg(local_68 * 0.5f));
        FUN_004404f0(bea_arg(this_02), bea_arg(pfVar10));
        FUN_0040d150(bea_arg(&local_40), bea_arg(&local_50), bea_arg(local_68 * 0.5f));
        local_18 = 0.0f;
        local_48 = 0.0f;
        FUN_0041ad10(bea_arg(this_00), bea_arg(&local_20));
        FUN_0041ad10(bea_arg(this_01), bea_arg(&local_50));
        param_1[8] = 1.4013e-45;
        param_2[8] = 1.4013e-45;
        return 1;
      }
      if (bVar9) {
        fVar6 = -local_48;
        fVar3 = fVar6 * fVar6;
        fVar1 = fVar2 * fVar2;
      }
      else {
        fVar6 = -fVar6;
        fVar3 = fVar6 * fVar6;
        fVar1 = fVar1 * fVar1;
      }
      fVar2 = SQRT(local_2c * local_2c + local_30 * local_30);
      fVar4 = fVar2 * fVar2;
      fVar2 = fVar2 * fVar6 + fVar2 * fVar6;
      if (fVar4 == 0.0f) {
        fVar1 = 0.0f;
      }
      else {
        fVar1 = (-fVar2 - SQRT(fVar2 * fVar2 - fVar4 * (fVar3 - fVar1) * 4.0f)) / (fVar4 + fVar4);
      }
      if (fVar1 < 0.0f) {
        fVar1 = 0.0f;
      }
      fVar1 = 1.0f - fVar1;
      local_40 = fVar1 * *param_2;
      local_3c = fVar1 * param_2[1];
      *this_00 = *this_00 - local_40;
      param_2[5] = param_2[5] - local_3c;
      param_2[6] = param_2[6] - fVar1 * param_2[2];
      FUN_00401ec0(bea_arg(&local_40), bea_arg(fVar1 * *param_1), bea_arg(fVar1 * param_1[1]), bea_arg(fVar1 * param_1[2]));
      *this_01 = *this_01 - local_40;
      param_1[5] = param_1[5] - local_3c;
      param_1[6] = param_1[6] - local_38;
      if (bVar9) {
        FUN_00401ec0(bea_arg(&local_40), bea_arg(*this_00 - *this_01), bea_arg(param_2[5] - param_1[5]), bea_arg(param_2[6] - param_1[6]));
        local_50 = 0.0f;
        local_4c = 0.0f;
      }
      else {
        local_40 = *this_00;
        local_3c = param_2[5];
        local_38 = param_2[6];
        local_34 = param_2[7];
        FUN_00401ec0(bea_arg(&local_40), bea_arg(*this_01 - local_40), bea_arg(param_1[5] - local_3c), bea_arg(param_1[6] - param_1[6]));
        local_4c = local_3c;
        local_50 = local_40;
      }
      fVar1 = SQRT(local_4c * local_4c + local_50 * local_50 + local_38 * local_38);
      local_48 = local_38;
      if (fVar1 != 0.0f) {
        fVar1 = 1.0f / fVar1;
        local_50 = fVar1 * local_50;
        local_4c = fVar1 * local_4c;
        local_48 = local_38 * fVar1;
      }
      fVar1 = local_48 * param_2[2] + local_50 * *param_2 + local_4c * param_2[1];
      *(float *)(param_4 + 8) = local_50;
      *(float *)(param_4 + 0xc) = local_4c;
      *(float *)(param_4 + 0x10) = local_48;
      *(float *)(param_4 + 0x14) = local_34;
      if (0.0f < fVar1) {
        fVar1 = -fVar1;
        FUN_00401ec0(bea_arg(&local_20), bea_arg(fVar1 * local_50), bea_arg(fVar1 * local_4c), bea_arg(local_48 * fVar1));
        FUN_00401ec0(bea_arg(&local_40), bea_arg(local_20 + *param_2), bea_arg(local_1c + param_2[1]), bea_arg(local_18 + param_2[2]));
        *param_2 = local_40;
        param_2[1] = local_3c;
        param_2[2] = local_38;
        param_2[3] = local_34;
      }
      *this_00 = *param_2 + *this_00;
      param_2[5] = param_2[1] + param_2[5];
      param_2[6] = param_2[2] + param_2[6];
      fVar1 = local_4c * param_1[1] + local_48 * param_1[2] + local_50 * *param_1;
      if (fVar1 < 0.0f) {
        fVar1 = -fVar1;
        FUN_00401ec0(bea_arg(&local_20), bea_arg(fVar1 * local_50), bea_arg(fVar1 * local_4c), bea_arg(local_48 * fVar1));
        FUN_00401ec0(bea_arg(&local_40), bea_arg(local_20 + *param_1), bea_arg(local_1c + param_1[1]), bea_arg(local_18 + param_1[2]));
        *param_1 = local_40;
        param_1[1] = local_3c;
        param_1[2] = local_38;
        param_1[3] = local_34;
      }
      *this_01 = *param_1 + *this_01;
      param_1[5] = param_1[5] + param_1[1];
      param_1[6] = param_1[6] + param_1[2];
      param_1[8] = 1.4013e-45;
      param_2[8] = 1.4013e-45;
      return 1;
    }
    return 0;
  }
  return iVar8;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0043fe20, ap_0043fe20));
