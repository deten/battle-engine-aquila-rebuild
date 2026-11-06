// auto-ported from 004c0150_FUN_004c0150.c (FUN_004c0150, 530 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x60: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
// @hand-fixed 2026-10-28: float sums in the asm's order (bug class 19, tools/check_fp_order.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char Mat34;
typedef char Vec3;
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef Mat34* (BEA_THISCALL* FUN_00401f10_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401f10_t> FUN_00401f10 = {(FUN_00401f10_t)0x00401f10};
typedef Vec3* (BEA_THISCALL* FUN_0040d2c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d2c0_t> FUN_0040d2c0 = {(FUN_0040d2c0_t)0x0040d2c0};

static void BEA_STDCALL ap_004c0150(int param_1, float *param_2, int param_3)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  float *this_local;
  float *pfVar11;
  float *pfVar12;

  alignas(16) uint8_t bea_frame_[0x60] = {};   // the original stack frame (emulate_frame)
  float &local_60 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x60);
  float &local_5c = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x5c);
  float &local_58 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x58);
  undefined4 &local_54 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x54);
  undefined1 (&local_50)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x60 - 0x50);
  undefined1 (&local_40)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x60 - 0x40);
  float (&local_30)[12] = *reinterpret_cast<float (*)[12]>(bea_frame_ + 0x60 - 0x30);
  if (param_3 != 0) {
    *(float **)(param_1 + 0x58) = param_2;
    return;
  }
  if (param_2 != (float *)0x0) {
    if (param_2[0x28] != 0.0) {
      this_local = param_2 + 4;
      pfVar12 = (float *)(param_1 + 8);
      local_60 = param_2[5] * *(float *)(param_1 + 0x3c) + param_2[6] * *(float *)(param_1 + 0x40) +
                 *(float *)(param_1 + 0x38) * *this_local;
      local_5c = param_2[8] * *(float *)(param_1 + 0x38) +
                 param_2[10] * *(float *)(param_1 + 0x40) + param_2[9] * *(float *)(param_1 + 0x3c);
      fVar1 = param_2[0xc];
      fVar2 = *(float *)(param_1 + 0x38);
      fVar3 = param_2[0xe];
      fVar4 = param_2[0xd];
      fVar5 = *(float *)(param_1 + 0x3c);
      *(float *)(param_1 + 0x38) = local_60;
      *(float *)(param_1 + 0x3c) = local_5c;
      local_58 = fVar1 * fVar2 + fVar3 * *(float *)(param_1 + 0x40) + fVar4 * fVar5;
      *(float *)(param_1 + 0x40) = local_58;
      *(undefined4 *)(param_1 + 0x44) = local_54;
      uVar6 = FUN_00401ec0(bea_arg(&local_60), bea_arg(param_2[8] * *(float *)(param_1 + 0x2c) +
                           param_2[0xc] * *(float *)(param_1 + 0x30) +
                           *this_local * *(float *)(param_1 + 0x28)), bea_arg(*(float *)(param_1 + 0x2c) * param_2[9] +
                           *(float *)(param_1 + 0x30) * param_2[0xd] +
                           param_2[5] * *(float *)(param_1 + 0x28)), bea_arg(*(float *)(param_1 + 0x2c) * param_2[10] +
                           *(float *)(param_1 + 0x30) * param_2[0xe] +
                           param_2[6] * *(float *)(param_1 + 0x28)));
      uVar7 = FUN_00401ec0(bea_arg(local_50), bea_arg(param_2[8] * *(float *)(param_1 + 0x1c) +
                                    param_2[0xc] * *(float *)(param_1 + 0x20) +
                                    *this_local * *(float *)(param_1 + 0x18)), bea_arg(param_2[9] * *(float *)(param_1 + 0x1c) +
                           param_2[0xd] * *(float *)(param_1 + 0x20) +
                           param_2[5] * *(float *)(param_1 + 0x18)), bea_arg(param_2[10] * *(float *)(param_1 + 0x1c) +
                           param_2[0xe] * *(float *)(param_1 + 0x20) +
                           param_2[6] * *(float *)(param_1 + 0x18)));
      uVar8 = FUN_00401ec0(bea_arg(local_40), bea_arg(param_2[0xc] * *(float *)(param_1 + 0x10) +
                                    param_2[8] * *(float *)(param_1 + 0xc) +
                                    *this_local * *pfVar12), bea_arg(param_2[0xd] * *(float *)(param_1 + 0x10) +
                           param_2[9] * *(float *)(param_1 + 0xc) +
                           param_2[5] * *pfVar12), bea_arg(param_2[0xe] * *(float *)(param_1 + 0x10) +
                           param_2[10] * *(float *)(param_1 + 0xc) +
                           param_2[6] * *pfVar12));
      FUN_00401f10(bea_arg(local_30), bea_arg(uVar8), bea_arg(uVar7), bea_arg(uVar6));
      pfVar11 = local_30;
      for (iVar10 = 0xc; BEA_LOOP_GUARD((iVar10 != 0)); iVar10 = iVar10 + -1) {
        *pfVar12 = *pfVar11;
        pfVar11 = pfVar11 + 1;
        pfVar12 = pfVar12 + 1;
      }
      puVar9 = (undefined4 *)FUN_0040d2c0(bea_arg(this_local), bea_arg(local_40), bea_arg((undefined4 *)(param_1 + 0x48)));
      *(undefined4 *)(param_1 + 0x48) = *puVar9;
      *(undefined4 *)(param_1 + 0x4c) = puVar9[1];
      *(undefined4 *)(param_1 + 0x50) = puVar9[2];
      *(undefined4 *)(param_1 + 0x54) = puVar9[3];
    }
    *(float *)(param_1 + 0x38) = *param_2 + *(float *)(param_1 + 0x38);
    *(float *)(param_1 + 0x3c) = param_2[1] + *(float *)(param_1 + 0x3c);
    *(float *)(param_1 + 0x40) = param_2[2] + *(float *)(param_1 + 0x40);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c0150, ap_004c0150));
