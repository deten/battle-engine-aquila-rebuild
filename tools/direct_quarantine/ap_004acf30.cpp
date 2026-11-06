// auto-ported from 004acf30_FUN_004acf30.c (FUN_004acf30, 1739 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char Vec3;
#define DAT_00704cb8 GLOBAL_AT(int, 0x00704cb8)
#define DAT_00704cbc GLOBAL_AT(int, 0x00704cbc)
#define DAT_00704cc0 GLOBAL_AT(int, 0x00704cc0)
#define DAT_00704cc4 GLOBAL_AT(int, 0x00704cc4)
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef uint32_t (BEA_THISCALL* FUN_00406d50_t)(uint32_t);
static const bea_guard<FUN_00406d50_t> FUN_00406d50 = {(FUN_00406d50_t)0x00406d50};
typedef Vec3* (BEA_THISCALL* FUN_0040d150_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d150_t> FUN_0040d150 = {(FUN_0040d150_t)0x0040d150};
typedef float10 (BEA_THISCALL* FUN_0040d180_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0040d180_t> FUN_0040d180 = {(FUN_0040d180_t)0x0040d180};
typedef Vec3* (BEA_THISCALL* FUN_00411a60_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00411a60_t> FUN_00411a60 = {(FUN_00411a60_t)0x00411a60};

static undefined4 BEA_STDCALL ap_004acf30(float *param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float param_9, undefined4 param_10, float *param_11, float *param_12)
{
  float fVar1;
  bool bVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  int iVar9;
  float *pfVar10;
  float10 fVar11;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  float &local_40 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x40);
  float &local_3c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x3c);
  float &local_38 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x38);
  float &local_30 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x30);
  float &local_2c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x2c);
  float &local_28 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x28);
  float &local_24 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x24);
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x1c);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x18);
  float &local_14 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x14);
  float &local_10 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x10);
  float &local_c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0xc);
  float &local_8 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x8);
  float &local_4 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x4);
  fVar3 = local_24;
  fVar8 = param_9;
  local_40 = param_6;
  bVar2 = false;
  fVar1 = SQRT(param_6 * param_6 + param_8 * param_8 + param_7 * param_7);
  local_20 = 0.0f;
  local_1c = 0.0f;
  local_18 = 0.0f;
  local_3c = param_7;
  local_38 = param_8;
  if (fVar1 != 0.0f) {
    fVar1 = 1.0f / fVar1;
    local_40 = param_6 * fVar1;
    local_3c = param_7 * fVar1;
    local_38 = param_8 * fVar1;
  }
  if (param_1[0x32] == 1.4013e-45) {
    local_30 = param_2 - param_1[0x21];
    local_2c = param_3 - param_1[0x22];
    local_28 = param_4 - param_1[0x23];
    fVar1 = SQRT(local_30 * local_30 + local_2c * local_2c + local_28 * local_28);
    local_40 = local_30;
    local_3c = local_2c;
    local_38 = local_28;
    if (fVar1 != 0.0f) {
      fVar1 = 1.0f / fVar1;
      local_40 = local_30 * fVar1;
      local_3c = local_2c * fVar1;
      local_38 = fVar1 * local_28;
    }
    bVar2 = true;
    fVar1 = param_1[bea_piece32(param_1[0x20]) + 0x2b];
    FUN_00401ec0(bea_arg(&local_30), bea_arg(fVar1 * local_40), bea_arg(local_3c * fVar1), bea_arg(fVar1 * local_38));
    local_20 = local_30;
    local_1c = local_2c;
    local_18 = local_28;
    local_14 = local_24;
    fVar8 = fVar3;
  }
  else {
    fVar1 = param_1[bea_piece32(param_1[0x20]) + 0x2b];
    FUN_00401ec0(bea_arg(&local_10), bea_arg(fVar1 * local_40), bea_arg(local_3c * fVar1), bea_arg(local_38 * fVar1));
    local_2c = local_c;
    local_30 = local_10;
    local_28 = local_8;
    local_24 = local_4;
    if (0.01f < param_1[bea_piece32(param_1[0x20]) + 0x2b]) {
      fVar1 = fVar1 * 0.9f;
      FUN_00401ec0(bea_arg(&local_10), bea_arg(fVar1 * local_40), bea_arg(local_3c * fVar1), bea_arg(local_38 * fVar1));
      local_20 = local_10;
      local_1c = local_c;
      local_18 = local_8;
      local_14 = local_4;
    }
  }
  FUN_00401ec0(bea_arg(&local_10), bea_arg(local_20 + param_2), bea_arg(param_3 + local_1c), bea_arg(param_4 + local_18));
  *param_11 = local_10;
  param_11[1] = local_c;
  param_11[2] = local_8;
  param_11[3] = local_4;
  if (param_1[0x33] == 1.4013e-45) {
    *param_12 = bea_fcast<float>(DAT_00704cb8);
    param_12[1] = bea_fcast<float>(DAT_00704cbc);
    param_12[2] = bea_fcast<float>(DAT_00704cc0);
    param_12[3] = bea_fcast<float>(DAT_00704cc4);
    return 1;
  }
  if (!bVar2) {
    FUN_00401ec0(bea_arg(&local_10), bea_arg(local_30 + param_2), bea_arg(param_3 + local_2c), bea_arg(param_4 + local_28));
    FUN_00401ec0(bea_arg(&param_2), bea_arg(local_10 - param_1[0x21]), bea_arg(local_c - param_1[0x22]), bea_arg(local_8 - param_1[0x23]));
    local_40 = param_2;
    local_3c = param_3;
    local_38 = param_4;
    fVar8 = param_5;
  }
  fVar1 = SQRT(local_3c * local_3c + local_38 * local_38 + local_40 * local_40);
  if (fVar1 != 0.0f) {
    fVar1 = 1.0f / fVar1;
    local_40 = fVar1 * local_40;
    local_3c = local_3c * fVar1;
    local_38 = fVar1 * local_38;
  }
  if ((-0.89f < param_1[0x37]) && (param_1[0x37] < -0.01f)) {
    fVar1 = param_8 * local_38 + local_40 * param_6 + local_3c * param_7;
    FUN_00401ec0(bea_arg(&param_2), bea_arg(local_40 * fVar1), bea_arg(local_3c * fVar1), bea_arg(local_38 * fVar1));
    FUN_00401ec0(bea_arg(&local_20), bea_arg(param_6 - param_2), bea_arg(param_7 - param_3), bea_arg(param_8 - param_4));
    param_2 = local_20;
    param_3 = local_1c;
    param_5 = local_14;
    param_4 = local_18;
    if (local_18 <= 0.0f) {
      local_38 = 0.0f;
      fVar1 = SQRT(local_3c * local_3c + local_40 * local_40);
      if (fVar1 != 0.0f) {
        fVar1 = 1.0f / fVar1;
        local_38 = 0.0f;
        local_40 = fVar1 * local_40;
        local_3c = local_3c * fVar1;
      }
    }
  }
  pfVar4 = param_1 + bea_piece32(param_1[0x20]) * 4 + 2;
  *pfVar4 = local_40;
  pfVar4[1] = local_3c;
  pfVar4[2] = local_38;
  pfVar4[3] = fVar8;
  iVar7 = bea_piece32(param_1[0x20]) + 1;
  iVar9 = 0;
  pfVar4 = param_1;
  if (0 < iVar7) {
    do {
      pfVar10 = pfVar4 + 4;
      fVar1 = param_8 * *pfVar10 + param_6 * pfVar4[2] + param_7 * pfVar4[3];
      FUN_00401ec0(bea_arg(&local_10), bea_arg(fVar1 * pfVar4[2]), bea_arg(fVar1 * pfVar4[3]), bea_arg(fVar1 * *pfVar10));
      FUN_00401ec0(bea_arg(&local_20), bea_arg(param_6 - local_10), bea_arg(param_7 - local_c), bea_arg(param_8 - local_8));
      param_2 = local_20;
      param_3 = local_1c;
      param_4 = local_18;
      param_5 = local_14;
      iVar6 = 0;
      pfVar5 = param_1 + 3;
      do {
        if (((iVar6 != iVar9) &&
            (((pfVar4[2] != pfVar5[-1] || (pfVar4[3] != *pfVar5)) || (*pfVar10 != pfVar5[1])))) &&
           (local_20 * pfVar5[-1] + local_1c * *pfVar5 + local_18 * pfVar5[1] < 0.0f)) break;
        iVar6 = iVar6 + 1;
        pfVar5 = pfVar5 + 4;
      } while (((iVar6 < iVar7)));
    } while ((((iVar6 != iVar7) && (iVar9 = iVar9 + 1, pfVar4 = pfVar10, iVar9 < iVar7))));
  }
  if (iVar9 != iVar7) {
    *param_12 = param_2;
    param_12[1] = param_3;
    param_12[2] = param_4;
    param_12[3] = param_5;
    return 1;
  }
  if (iVar7 == 2) {
    FUN_00411a60(bea_arg(param_1 + 2), bea_arg(&param_2), bea_arg(param_1 + 6));
    FUN_00406d50(bea_arg(&param_2));
    fVar11 = bea_fcast<float10>(FUN_0040d180(bea_arg(&param_2), bea_arg(&param_6)));
    pfVar4 = (float *)FUN_0040d150(bea_arg(&param_2), bea_arg(&local_10), bea_arg(bea_fcast<float>(fVar11)));
    *param_12 = *pfVar4;
    param_12[1] = pfVar4[1];
    param_12[2] = pfVar4[2];
    param_12[3] = pfVar4[3];
    return 1;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004acf30, ap_004acf30));
