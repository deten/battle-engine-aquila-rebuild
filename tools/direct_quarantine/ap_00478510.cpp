// auto-ported from 00478510_FUN_00478510.c (FUN_00478510, 1797 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xd0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char Vec3;
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef Vec3* (BEA_THISCALL* FUN_00401ee0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ee0_t> FUN_00401ee0 = {(FUN_00401ee0_t)0x00401ee0};
typedef f80 (BEA_THISCALL* FUN_004026b0_t)(uint32_t);
static const bea_guard<FUN_004026b0_t> FUN_004026b0 = {(FUN_004026b0_t)0x004026b0};
typedef Vec3* (BEA_THISCALL* FUN_0040d120_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d120_t> FUN_0040d120 = {(FUN_0040d120_t)0x0040d120};
typedef float10 (BEA_THISCALL* FUN_0040d180_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0040d180_t> FUN_0040d180 = {(FUN_0040d180_t)0x0040d180};
typedef uint32_t (BEA_THISCALL* FUN_004404f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004404f0_t> FUN_004404f0 = {(FUN_004404f0_t)0x004404f0};
typedef uint32_t (BEA_THISCALL* FUN_00477ba0_t)(uint32_t);
static const bea_guard<FUN_00477ba0_t> FUN_00477ba0 = {(FUN_00477ba0_t)0x00477ba0};
typedef undefined4 (BEA_CDECL* FUN_00479020_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00479020_t> FUN_00479020 = {(FUN_00479020_t)0x00479020};
typedef float * (BEA_CDECL* FUN_00479200_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00479200_t> FUN_00479200 = {(FUN_00479200_t)0x00479200};
typedef float10 (BEA_CDECL* FUN_00479630_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00479630_t> FUN_00479630 = {(FUN_00479630_t)0x00479630};

static undefined4 BEA_CDECL ap_00478510(float *param_1, float *param_2, float *param_3, float *param_4, float *param_5, float param_6, int param_7)
{
  float fVar1;
  void *pvVar2;
  int iVar3;
  float *pfVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float *pfVar8;

  alignas(16) uint8_t bea_frame_[0xd0] = {};   // the original stack frame (emulate_frame)
  float &local_cc = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0xcc);
  float &local_c8 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0xc8);
  float &local_c4 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0xc4);
  float &local_c0 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0xc0);
  undefined4 &local_bc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0xbc);
  float &local_b8 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0xb8);
  float &local_b4 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0xb4);
  float &local_b0 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0xb0);
  float &local_ac = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0xac);
  float &local_a8 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0xa8);
  float &local_a4 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0xa4);
  float &local_a0 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0xa0);
  float &local_9c = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x9c);
  float &local_98 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x98);
  float &local_94 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x94);
  float &local_90 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x90);
  float &local_8c = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x8c);
  float &local_88 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x88);
  float &local_84 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x84);
  float &local_80 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x80);
  float &local_78 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x78);
  float &local_74 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x74);
  float &local_70 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x70);
  float &local_6c = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x6c);
  int &local_64 = *reinterpret_cast<int *>(bea_frame_ + 0xd0 - 0x64);
  float &local_60 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x60);
  float &local_5c = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x5c);
  float &local_58 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x58);
  float &local_50 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x50);
  float &local_4c = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x4c);
  float &local_48 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x48);
  undefined1 (&local_40)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0xd0 - 0x40);
  float &local_30 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x30);
  float &local_2c = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x2c);
  float &local_28 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x28);
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x1c);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x18);
  undefined1 (&local_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0xd0 - 0x10);
  local_64 = 0;
  FUN_00401ec0(bea_arg(&local_60), bea_arg(*param_2 - *param_1), bea_arg(param_2[1] - param_1[1]), bea_arg(param_2[2] - param_1[2]));
  FUN_00401ec0(bea_arg(&local_50), bea_arg(*param_3 - *param_1), bea_arg(param_3[1] - param_1[1]), bea_arg(param_3[2] - param_1[2]));
  FUN_00401ec0(bea_arg(&local_c8), bea_arg(local_5c * local_48 - local_58 * local_4c), bea_arg(local_58 * local_50 - local_48 * local_60), bea_arg(local_4c * local_60 - local_5c * local_50));
  fVar1 = SQRT(local_c8 * local_c8 + local_c4 * local_c4 + local_c0 * local_c0);
  if (fVar1 != 0.0f) {
    fVar1 = 1.0f / fVar1;
    local_c8 = local_c8 * fVar1;
    local_c4 = local_c4 * fVar1;
    local_c0 = local_c0 * fVar1;
  }
  if (0.01f <= local_c8 * *param_5 + local_c0 * param_5[2] + local_c4 * param_5[1]) {
    return 0;
  }
  FUN_00401ec0(bea_arg(&local_30), bea_arg(*param_1 - *param_4), bea_arg(param_1[1] - param_4[1]), bea_arg(param_1[2] - param_4[2]));
  if (0.01f <= local_30 * local_c8 + local_c0 * local_28 + local_c4 * local_2c) {
    return 0;
  }
  FUN_00401ec0(bea_arg(&local_b8), bea_arg(local_c8 * param_6), bea_arg(local_c4 * param_6), bea_arg(local_c0 * param_6));
  FUN_00401ec0(bea_arg(&local_88), bea_arg(*param_4 - local_b8), bea_arg(param_4[1] - local_b4), bea_arg(param_4[2] - local_b0));
  FUN_00401ec0(bea_arg(&local_20), bea_arg(*param_1 - local_88), bea_arg(param_1[1] - local_84), bea_arg(param_1[2] - local_80));
  if (local_20 * local_c8 + local_c0 * local_18 + local_c4 * local_1c <= 0.0001f) {
    local_b8 = *param_5;
    local_b4 = param_5[1];
    local_b0 = param_5[2];
    local_ac = param_5[3];
    fVar1 = SQRT(local_b4 * local_b4 + local_b0 * local_b0 + local_b8 * local_b8);
    if (fVar1 != 0.0f) {
      fVar1 = 1.0f / fVar1;
      local_b8 = local_b8 * fVar1;
      local_b4 = local_b4 * fVar1;
      local_b0 = local_b0 * fVar1;
    }
    pfVar4 = param_1;
    pvVar2 = (void *)FUN_004404f0(bea_arg(&local_c8), bea_arg(local_40));
    fVar5 = bea_fcast<float10>(FUN_0040d180(bea_arg(pvVar2), bea_arg(pfVar4)));
    fVar6 = bea_fcast<float10>(FUN_0040d180(bea_arg(&local_c8), bea_arg(&local_88)));
    fVar7 = bea_fcast<float10>(FUN_0040d180(bea_arg(&local_c8), bea_arg(&local_b8)));
    if (fVar7 == bea_fcast<float10>(0.0f)) {
      local_cc = -1.0f;
    }
    else {
      local_cc = bea_fcast<float>(-(bea_fcast<float10>(bea_fcast<float>((fVar6 + bea_fcast<float10>(bea_fcast<float>(fVar5))))) / fVar7));
    }
    FUN_00401ec0(bea_arg(&local_74), bea_arg(local_b8 * local_cc), bea_arg(local_b4 * local_cc), bea_arg(local_b0 * local_cc));
    pfVar4 = (float *)FUN_00401ee0(bea_arg(&local_88), bea_arg(local_40), bea_arg(&local_74));
    local_98 = *pfVar4;
    local_78 = local_cc * local_cc;
    local_94 = pfVar4[1];
    local_90 = pfVar4[2];
    local_8c = pfVar4[3];
    fVar5 = bea_fcast<float10>(FUN_00477ba0(bea_arg(param_5)));
    if (fVar5 < bea_fcast<float10>(local_78)) {
      return 0;
    }
  }
  else {
    pfVar4 = param_1;
    pvVar2 = (void *)FUN_004404f0(bea_arg(&local_c8), bea_arg(local_40));
    fVar5 = bea_fcast<float10>(FUN_0040d180(bea_arg(pvVar2), bea_arg(pfVar4)));
    fVar6 = bea_fcast<float10>(FUN_0040d180(bea_arg(&local_c8), bea_arg(&local_88)));
    fVar7 = bea_fcast<float10>(FUN_0040d180(bea_arg(&local_c8), bea_arg(&local_c8)));
    if (fVar7 == bea_fcast<float10>(0.0f)) {
      local_cc = -1.0f;
    }
    else {
      local_cc = bea_fcast<float>(-(bea_fcast<float10>(bea_fcast<float>((fVar6 + bea_fcast<float10>(bea_fcast<float>(fVar5))))) / fVar7));
    }
    FUN_00401ec0(bea_arg(&local_74), bea_arg(local_c8 * local_cc), bea_arg(local_c4 * local_cc), bea_arg(local_c0 * local_cc));
    FUN_00401ec0(bea_arg(&local_b8), bea_arg(local_74 + local_88), bea_arg(local_70 + local_84), bea_arg(local_6c + local_80));
    local_98 = local_b8;
    local_94 = local_b4;
    local_90 = local_b0;
    local_8c = local_ac;
  }
  if (ABS(local_cc) < 0.0001f) {
    local_cc = 0.0f;
  }
  local_a4 = local_94;
  local_a0 = local_90;
  local_a8 = local_98;
  local_9c = local_8c;
  iVar3 = FUN_00479020(bea_arg(&local_98), bea_arg(param_1), bea_arg(param_2), bea_arg(param_3), bea_arg(&local_c8));
  if (iVar3 == 0) {
    pfVar4 = (float *)FUN_00479200(bea_arg(local_10), bea_arg(param_1), bea_arg(param_2), bea_arg(param_3), bea_arg(&local_98));
    local_a8 = *pfVar4;
    local_a4 = pfVar4[1];
    local_a0 = pfVar4[2];
    local_b8 = *param_5;
    local_9c = pfVar4[3];
    local_b4 = param_5[1];
    local_b0 = param_5[2];
    local_ac = param_5[3];
    FUN_0040d120(bea_arg(&local_a8), bea_arg(local_40), bea_arg(param_4));
    pfVar4 = &local_74;
    pfVar8 = param_4;
    pvVar2 = (void *)FUN_0040d120(bea_arg(&local_a8), bea_arg(local_10), bea_arg(&local_b8));
    FUN_0040d120(bea_arg(pvVar2), bea_arg(pfVar4), bea_arg(pfVar8));
    fVar5 = bea_fcast<float10>(FUN_00479630(bea_arg(local_40), bea_arg(&local_74), bea_arg(param_6)));
    local_cc = bea_fcast<float>(fVar5);
  }
  pvVar2 = (void *)FUN_0040d120(bea_arg(&local_a8), bea_arg(local_10), bea_arg(param_4));
  fVar5 = bea_fcast<float10>(FUN_004026b0(bea_arg(pvVar2)));
  if (bea_fcast<float10>(-0.0001f) <= fVar5 - bea_fcast<float10>(param_6)) {
    if (local_cc < -0.0001f) {
      return 0;
    }
    fVar5 = bea_fcast<float10>(FUN_004026b0(bea_arg(param_5)));
    if (fVar5 < bea_fcast<float10>(local_cc)) {
      return 0;
    }
  }
  else {
    *(undefined4 *)(param_7 + 200) = 1;
    local_64 = 1;
  }
  if (((*(int *)(param_7 + 0xa8) != 0) && (*(float *)(param_7 + 0xc4) <= local_cc)) &&
     (local_64 != 1)) {
    return 0;
  }
  *(float *)(param_7 + 0xc4) = local_cc;
  *(undefined4 *)(param_7 + 0xa8) = 1;
  *(float *)(param_7 + 0x84) = local_a8;
  *(undefined4 *)(param_7 + 0x94) = 1;
  *(float *)(param_7 + 0x88) = local_a4;
  *(float *)(param_7 + 0x8c) = local_a0;
  *(float *)(param_7 + 0x90) = local_9c;
  *(float *)(param_7 + 0xd4) = local_c8;
  *(float *)(param_7 + 0xd8) = local_c4;
  *(float *)(param_7 + 0xdc) = local_c0;
  *(undefined4 *)(param_7 + 0xe0) = local_bc;
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00478510, ap_00478510));
