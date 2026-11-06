// auto-ported from 00479200_FUN_00479200.c (FUN_00479200, 1071 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x60: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char Vec3;
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef Vec3* (BEA_THISCALL* FUN_00401ee0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ee0_t> FUN_00401ee0 = {(FUN_00401ee0_t)0x00401ee0};
typedef uint32_t (BEA_THISCALL* FUN_00406d50_t)(uint32_t);
static const bea_guard<FUN_00406d50_t> FUN_00406d50 = {(FUN_00406d50_t)0x00406d50};
typedef Vec3* (BEA_THISCALL* FUN_0040d120_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d120_t> FUN_0040d120 = {(FUN_0040d120_t)0x0040d120};
typedef Vec3* (BEA_THISCALL* FUN_0040d150_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d150_t> FUN_0040d150 = {(FUN_0040d150_t)0x0040d150};
typedef float10 (BEA_THISCALL* FUN_0040d180_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0040d180_t> FUN_0040d180 = {(FUN_0040d180_t)0x0040d180};
typedef uint32_t (BEA_THISCALL* FUN_00477ba0_t)(uint32_t);
static const bea_guard<FUN_00477ba0_t> FUN_00477ba0 = {(FUN_00477ba0_t)0x00477ba0};

static float * BEA_CDECL ap_00479200(float *param_1, float *param_2, float *param_3, float *param_4, float *param_5)
{
  float fVar1;
  float *pfVar2;
  float10 fVar3;
  float10 fVar4;

  alignas(16) uint8_t bea_frame_[0x60] = {};   // the original stack frame (emulate_frame)
  float &local_60 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x60);
  float &local_5c = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x5c);
  float &local_58 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x58);
  float &local_54 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x54);
  float &local_50 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x50);
  float &local_4c = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x4c);
  float &local_48 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x48);
  float &local_44 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x44);
  float &local_40 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x40);
  float &local_3c = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x3c);
  float &local_38 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x38);
  float &local_34 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x34);
  float &local_30 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x30);
  float &local_2c = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x2c);
  float &local_28 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x28);
  float &local_24 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x24);
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x1c);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x18);
  undefined1 (&local_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x60 - 0x10);
  FUN_00401ec0(bea_arg(&local_20), bea_arg(*param_5 - *param_3), bea_arg(param_5[1] - param_3[1]), bea_arg(param_5[2] - param_3[2]));
  FUN_0040d120(bea_arg(param_2), bea_arg(&local_30), bea_arg(param_3));
  fVar3 = bea_fcast<float10>(FUN_00477ba0(bea_arg(&local_30)));
  FUN_00406d50(bea_arg(&local_30));
  fVar4 = bea_fcast<float10>(FUN_0040d180(bea_arg(&local_30), bea_arg(&local_20)));
  fVar1 = bea_fcast<float>(fVar4);
  if (bea_fcast<float10>(0.0f) <= fVar4) {
    if (fVar1 * fVar1 <= bea_fcast<float>(fVar3)) {
      pfVar2 = (float *)FUN_0040d150(bea_arg(&local_30), bea_arg(local_10), bea_arg(fVar1));
      local_30 = *pfVar2;
      local_2c = pfVar2[1];
      local_28 = pfVar2[2];
      local_24 = pfVar2[3];
      FUN_00401ee0(bea_arg(param_3), bea_arg(&local_60), bea_arg(&local_30));
    }
    else {
      local_60 = *param_2;
      local_5c = param_2[1];
      local_58 = param_2[2];
      local_54 = param_2[3];
    }
  }
  else {
    local_60 = *param_3;
    local_5c = param_3[1];
    local_58 = param_3[2];
    local_54 = param_3[3];
  }
  FUN_00401ec0(bea_arg(&local_20), bea_arg(*param_5 - *param_2), bea_arg(param_5[1] - param_2[1]), bea_arg(param_5[2] - param_2[2]));
  FUN_0040d120(bea_arg(param_4), bea_arg(&local_30), bea_arg(param_2));
  fVar3 = bea_fcast<float10>(FUN_00477ba0(bea_arg(&local_30)));
  FUN_00406d50(bea_arg(&local_30));
  fVar4 = bea_fcast<float10>(FUN_0040d180(bea_arg(&local_30), bea_arg(&local_20)));
  fVar1 = bea_fcast<float>(fVar4);
  if (bea_fcast<float10>(0.0f) <= fVar4) {
    if (fVar1 * fVar1 <= bea_fcast<float>(fVar3)) {
      pfVar2 = (float *)FUN_0040d150(bea_arg(&local_30), bea_arg(local_10), bea_arg(fVar1));
      local_30 = *pfVar2;
      local_2c = pfVar2[1];
      local_28 = pfVar2[2];
      local_24 = pfVar2[3];
      FUN_00401ee0(bea_arg(param_2), bea_arg(&local_50), bea_arg(&local_30));
    }
    else {
      local_50 = *param_4;
      local_4c = param_4[1];
      local_48 = param_4[2];
      local_44 = param_4[3];
    }
  }
  else {
    local_50 = *param_2;
    local_4c = param_2[1];
    local_48 = param_2[2];
    local_44 = param_2[3];
  }
  FUN_0040d120(bea_arg(param_5), bea_arg(&local_20), bea_arg(param_4));
  FUN_0040d120(bea_arg(param_3), bea_arg(&local_30), bea_arg(param_4));
  fVar3 = bea_fcast<float10>(FUN_00477ba0(bea_arg(&local_30)));
  FUN_00406d50(bea_arg(&local_30));
  fVar4 = bea_fcast<float10>(FUN_0040d180(bea_arg(&local_30), bea_arg(&local_20)));
  fVar1 = bea_fcast<float>(fVar4);
  if (bea_fcast<float10>(0.0f) <= fVar4) {
    if (fVar1 * fVar1 <= bea_fcast<float>(fVar3)) {
      pfVar2 = (float *)FUN_0040d150(bea_arg(&local_30), bea_arg(local_10), bea_arg(fVar1));
      local_30 = *pfVar2;
      local_2c = pfVar2[1];
      local_28 = pfVar2[2];
      local_24 = pfVar2[3];
      FUN_00401ee0(bea_arg(param_4), bea_arg(&local_40), bea_arg(&local_30));
    }
    else {
      local_40 = *param_3;
      local_3c = param_3[1];
      local_38 = param_3[2];
      local_34 = param_3[3];
    }
  }
  else {
    local_40 = *param_4;
    local_3c = param_4[1];
    local_38 = param_4[2];
    local_34 = param_4[3];
  }
  local_30 = *param_5 - local_60;
  local_2c = param_5[1] - local_5c;
  local_28 = param_5[2] - local_58;
  FUN_00401ec0(bea_arg(&local_20), bea_arg(*param_5 - local_50), bea_arg(param_5[1] - local_4c), bea_arg(param_5[2] - local_48));
  fVar1 = local_20 * local_20 + local_1c * local_1c + local_18 * local_18;
  FUN_00401ec0(bea_arg(&local_20), bea_arg(*param_5 - local_40), bea_arg(param_5[1] - local_3c), bea_arg(param_5[2] - local_38));
  fVar3 = bea_fcast<float10>(FUN_00477ba0(bea_arg(&local_20)));
  fVar4 = bea_fcast<float10>(local_30) * bea_fcast<float10>(local_30) +
          bea_fcast<float10>(local_2c) * bea_fcast<float10>(local_2c) + bea_fcast<float10>(local_28) * bea_fcast<float10>(local_28);
  if (bea_fcast<float10>(fVar1) < fVar4) {
    fVar4 = bea_fcast<float10>(fVar1);
    local_60 = local_50;
    local_5c = local_4c;
    local_58 = local_48;
    local_54 = local_44;
  }
  if (fVar3 < fVar4) {
    local_60 = local_40;
    local_5c = local_3c;
    local_58 = local_38;
    local_54 = local_34;
  }
  *param_1 = local_60;
  param_1[1] = local_5c;
  param_1[2] = local_58;
  param_1[3] = local_54;
  return (float *)(param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00479200, ap_00479200));
