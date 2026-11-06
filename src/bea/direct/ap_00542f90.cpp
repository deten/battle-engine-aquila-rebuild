// auto-ported from 00542f90_FUN_00542f90.c (FUN_00542f90, 866 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
// @hand-fixed 2026-10-28: float sums in the asm's order (bug class 19, tools/check_fp_order.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char Vec3;
#define DAT_00704e48 GLOBAL_AT(int, 0x00704e48)
#define DAT_008aa8cc GLOBAL_AT(int, 0x008aa8cc)
#define DAT_008aa8b4 GLOBAL_AT(int, 0x008aa8b4)
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef uint32_t (BEA_THISCALL* FUN_004c7d90_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004c7d90_t> FUN_004c7d90 = {(FUN_004c7d90_t)0x004c7d90};
typedef int (BEA_THISCALL* FUN_00500b40_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00500b40_t> FUN_00500b40 = {(FUN_00500b40_t)0x00500b40};
typedef int (BEA_THISCALL* FUN_00500bb0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500bb0_t> FUN_00500bb0 = {(FUN_00500bb0_t)0x00500bb0};

static void BEA_STDCALL ap_00542f90(float *param_1, float *param_2, float *param_3, float param_4, undefined4 param_5, float param_6, float param_7, float param_8, float param_9, int param_10)
{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  short *psVar5;
  short sVar6;
  void *pvVar7;

  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)
  float &local_30 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x30);
  float &local_2c = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x2c);
  float &local_28 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x28);
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x1c);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x18);
  float &local_10 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x10);
  float &local_c = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0xc);
  float &local_8 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x8);
  iVar4 = param_10;
  pfVar3 = param_3;
  pfVar2 = param_2;
  local_30 = param_3[2] * param_2[1] - param_2[2] * param_3[1];
  local_2c = param_2[2] * *param_3 - param_3[2] * *param_2;
  local_28 = param_3[1] * *param_2 - *param_3 * param_2[1];
  fVar1 = SQRT(local_30 * local_30 + local_2c * local_2c + local_28 * local_28);
  if (fVar1 != 0.0f) {
    fVar1 = 1.0f / fVar1;
    local_30 = local_30 * fVar1;
    local_2c = local_2c * fVar1;
    local_28 = local_28 * fVar1;
  }
  if ((DAT_00704e48 != 4) &&
     ((pvVar7 = DAT_008aa8cc, param_10 != 0 || (pvVar7 = DAT_008aa8b4, DAT_008aa8b4 != (void *)0x0))
     )) {
    param_3 = (float *)FUN_00500bb0(bea_arg(pvVar7), bea_arg(&param_2), bea_arg(4));
    FUN_00401ec0(bea_arg(&local_20), bea_arg((*param_1 - *pfVar2) - *pfVar3), bea_arg((param_1[1] - pfVar2[1]) - pfVar3[1]), bea_arg((param_1[2] - pfVar2[2]) - pfVar3[2]));
    *param_2 = local_20;
    param_2[1] = local_1c;
    param_2[2] = local_18;
    param_2[7] = param_6;
    param_2[8] = param_7;
    FUN_00401ec0(bea_arg(&local_20), bea_arg(*param_1 + *pfVar2), bea_arg(param_1[1] + pfVar2[1]), bea_arg(pfVar2[2] + param_1[2]));
    FUN_00401ec0(bea_arg(&local_10), bea_arg(local_20 - *pfVar3), bea_arg(local_1c - pfVar3[1]), bea_arg(local_18 - pfVar3[2]));
    param_2[9] = local_10;
    param_2[10] = local_c;
    param_2[0xb] = local_8;
    param_2[0x10] = param_8;
    param_2[0x11] = param_7;
    FUN_00401ec0(bea_arg(&local_10), bea_arg(*param_1 + *pfVar2), bea_arg(param_1[1] + pfVar2[1]), bea_arg(pfVar2[2] + param_1[2]));
    FUN_00401ec0(bea_arg(&local_20), bea_arg(local_10 + *pfVar3), bea_arg(local_c + pfVar3[1]), bea_arg(local_8 + pfVar3[2]));
    param_2[0x12] = local_20;
    param_2[0x13] = local_1c;
    param_2[0x14] = local_18;
    param_2[0x19] = param_8;
    param_2[0x1a] = param_9;
    FUN_00401ec0(bea_arg(&local_10), bea_arg(*param_1 - *pfVar2), bea_arg(param_1[1] - pfVar2[1]), bea_arg(param_1[2] - pfVar2[2]));
    FUN_00401ec0(bea_arg(&local_20), bea_arg(local_10 + *pfVar3), bea_arg(local_c + pfVar3[1]), bea_arg(local_8 + pfVar3[2]));
    param_2[0x1b] = local_20;
    param_2[0x1c] = local_1c;
    param_2[0x1d] = local_18;
    param_2[0x22] = param_6;
    param_2[0x23] = param_9;
    param_2[6] = param_4;
    param_2[0xf] = param_4;
    param_2[0x18] = param_4;
    param_2[0x21] = param_4;
    FUN_004c7d90(bea_arg(param_2 + 3), bea_arg(&local_30));
    FUN_004c7d90(bea_arg(param_2 + 0xc), bea_arg(&local_30));
    FUN_004c7d90(bea_arg(param_2 + 0x15), bea_arg(&local_30));
    FUN_004c7d90(bea_arg(param_2 + 0x1e), bea_arg(&local_30));
    pvVar7 = DAT_008aa8cc;
    if (iVar4 == 0) {
      pvVar7 = DAT_008aa8b4;
    }
    psVar5 = (short *)FUN_00500b40(bea_arg(pvVar7), bea_arg(6));
    sVar6 = (short)param_3;
    *psVar5 = sVar6;
    psVar5[5] = sVar6;
    psVar5[1] = sVar6 + 1;
    psVar5[2] = sVar6 + 2;
    psVar5[3] = sVar6 + 2;
    psVar5[4] = sVar6 + 3;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00542f90, ap_00542f90));
