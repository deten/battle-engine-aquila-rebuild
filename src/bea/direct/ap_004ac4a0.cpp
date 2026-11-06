// auto-ported from 004ac4a0_FUN_004ac4a0.c (FUN_004ac4a0, 575 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x60: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
// @hand-fixed 2026-10-28 compile: the B+8/B+0xc slots are float temporaries (A1/A2, 0x4ac4ca/0x4ac4d8) before FUN_004ae110 overwrites them with the 2nd/3rd vertex pointers, so they get float views; distance sum regrouped (D2^2+D1^2)+D0^2 (0x4ac52c-0x4ac53a); radius passed as a float (fstp dword, 0x4ac550)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef undefined4 (BEA_CDECL* FUN_00478510_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00478510_t> FUN_00478510 = {(FUN_00478510_t)0x00478510};
typedef undefined4 (BEA_THISCALL* FUN_004ae110_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004ae110_t> FUN_004ae110 = {(FUN_004ae110_t)0x004ae110};
typedef undefined4 (BEA_THISCALL* FUN_004ae1a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004ae1a0_t> FUN_004ae1a0 = {(FUN_004ae1a0_t)0x004ae1a0};

static undefined4 BEA_STDCALL ap_004ac4a0(undefined4 param_1, void *param_2, float *param_3, float *param_4, float *param_5, int param_6)
{
  int iVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;

  alignas(16) uint8_t bea_frame_[0x60] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_54 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x54);
  short * &local_50 = *reinterpret_cast<short * *>(bea_frame_ + 0x60 - 0x50);
  short * &local_4c = *reinterpret_cast<short * *>(bea_frame_ + 0x60 - 0x4c);
  short * &local_48 = *reinterpret_cast<short * *>(bea_frame_ + 0x60 - 0x48);
  float &local_40 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x40);
  float &local_3c = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x3c);
  float &local_38 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x38);
  float &local_30 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x30);
  float &local_2c = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x2c);
  float &local_28 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x28);
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x1c);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x18);
  float &local_10 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x10);
  float &local_c = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0xc);
  float &local_8 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x8);
  // B+8 / B+0xc hold the float sums A1/A2 first; FUN_004ae110 then fills
  // local_50, local_4c, local_48 with three vertex pointers (0x4ac4c1-0x4ac55a)
  float &fA1 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x4c);
  float &fA2 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x48);
  float fA0 = *param_3 + *param_4;
  fA1 = param_4[1] + param_3[1];
  fA2 = param_4[2] + param_3[2];
  local_54 = 0;
  local_3c = fA1 + param_3[1];
  local_38 = fA2 + param_3[2];
  local_30 = (fA0 + *param_3) * 0.5f;
  local_2c = local_3c * 0.5f;
  local_28 = local_38 * 0.5f;
  {
    float fD0 = fA0 - *param_3;
    float fD1 = fA1 - param_3[1];
    float fD2 = fA2 - param_3[2];
    float fRad = (float)(SQRT((fD2 * fD2 + fD1 * fD1) + fD0 * fD0) * 0.5f + *param_5);
    iVar3 = FUN_004ae110(bea_arg(param_2), bea_arg(&local_30), bea_arg(fRad), bea_arg(&local_50));
  }
  iVar1 = *(int *)((int)param_2 + 0x100);
  pfVar4 = (float *)(iVar1 + 0x40);
  if (iVar3 != 1) {
    return 0;
  }
  do {
    local_10 = (float)(int)*local_50 * *(float *)(iVar1 + 0x50) * 3.051851e-05f + *pfVar4;
    local_c = (float)(int)local_50[1] * *(float *)(iVar1 + 0x50) * 3.051851e-05f +
              *(float *)(iVar1 + 0x44);
    local_8 = (float)(int)local_50[2] * *(float *)(iVar1 + 0x50) * 3.051851e-05f +
              *(float *)(iVar1 + 0x48);
    local_20 = (float)(int)*local_4c * *(float *)(iVar1 + 0x50) * 3.051851e-05f + *pfVar4;
    local_1c = (float)(int)local_4c[1] * *(float *)(iVar1 + 0x50) * 3.051851e-05f +
               *(float *)(iVar1 + 0x44);
    local_18 = (float)(int)local_4c[2] * *(float *)(iVar1 + 0x50) * 3.051851e-05f +
               *(float *)(iVar1 + 0x48);
    local_40 = (float)(int)*local_48 * *(float *)(iVar1 + 0x50) * 3.051851e-05f + *pfVar4;
    local_3c = (float)(int)local_48[1] * *(float *)(iVar1 + 0x50) * 3.051851e-05f +
               *(float *)(iVar1 + 0x44);
    local_38 = (float)(int)local_48[2] * *(float *)(iVar1 + 0x50) * 3.051851e-05f +
               *(float *)(iVar1 + 0x48);
    iVar3 = FUN_00478510(bea_arg(&local_10), bea_arg(&local_20), bea_arg(&local_40), bea_arg(param_3), bea_arg(param_4), bea_arg(*param_5), bea_arg(param_6));
    if (iVar3 != 0) {
      local_54 = 1;
      *(undefined4 *)(param_6 + 0xe4) = param_1;
    }
    iVar3 = FUN_004ae1a0(bea_arg(param_2), bea_arg(&local_50));
  } while (BEA_LOOP_GUARD((iVar3 == 1)));
  return local_54;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ac4a0, ap_004ac4a0));
