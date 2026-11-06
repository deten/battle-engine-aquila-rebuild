// auto-ported from 004cba90_FUN_004cba90.c (FUN_004cba90, 460 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define DAT_0089c9a4 GLOBAL_AT(int, 0x0089c9a4)
#define DAT_0089ce4c GLOBAL_AT(int, 0x0089ce4c)
typedef undefined4 (BEA_THISCALL* FUN_0046f2c0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0046f2c0_t> FUN_0046f2c0 = {(FUN_0046f2c0_t)0x0046f2c0};
typedef int (BEA_THISCALL* FUN_004725d0_t)(uint32_t);
static const bea_guard<FUN_004725d0_t> FUN_004725d0 = {(FUN_004725d0_t)0x004725d0};

static float10 BEA_STDCALL ap_004cba90(int param_1)
{
  float *pfVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  float10 fVar5;

  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)
  float &local_24 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x24);
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x1c);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x18);
  float &local_10 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x10);
  float &fStack_c = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0xc);
  float &fStack_8 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x8);
  iVar3 = FUN_004725d0(bea_arg(&DAT_008a9a98));
  if (iVar3 != 0) {
    local_24 = 1e+07;
    pfVar1 = *(float **)(param_1 + 0x58);
    local_20 = *(float *)(param_1 + 0x38);
    local_1c = *(float *)(param_1 + 0x3c);
    local_18 = *(float *)(param_1 + 0x40);
    if (pfVar1 != (float *)0x0) {
      local_20 = local_20 + *pfVar1;
      local_1c = local_1c + pfVar1[1];
      local_18 = local_18 + pfVar1[2];
    }
    puVar4 = (undefined4 *)FUN_0046f2c0(bea_arg(&DAT_008a9a98), bea_arg(0));
    if (puVar4 != (undefined4 *)0x0) {
      bea_vcall<uint32_t>(puVar4, 0x0, &local_10);
      fVar2 = (fStack_8 - local_18) * (fStack_8 - local_18) +            // class 19: z, y, x as the asm
              (fStack_c - local_1c) * (fStack_c - local_1c) +
              (local_10 - local_20) * (local_10 - local_20);
      if (fVar2 < 1e+07) {
        local_24 = fVar2;
      }
    }
    puVar4 = (undefined4 *)FUN_0046f2c0(bea_arg(&DAT_008a9a98), bea_arg(1));
    if (puVar4 != (undefined4 *)0x0) {
      bea_vcall<uint32_t>(puVar4, 0x0, &local_10);
      fVar2 = (fStack_8 - local_18) * (fStack_8 - local_18) +            // class 19: z, y, x as the asm
              (fStack_c - local_1c) * (fStack_c - local_1c) +
              (local_10 - local_20) * (local_10 - local_20);
      if (fVar2 < local_24) {
        return bea_fcast<float10>(fVar2);
      }
    }
    return bea_fcast<float10>(local_24);
  }
  if ((undefined4 *)(&DAT_0089c9a4)[DAT_0089ce4c] == (undefined4 *)0x0) {
    return bea_fcast<float10>(0.0f);
  }
  bea_vcall<uint32_t>((&DAT_0089c9a4)[DAT_0089ce4c], 0x0, &local_10);
  pfVar1 = *(float **)(param_1 + 0x58);
  local_1c = *(float *)(param_1 + 0x3c);
  fVar5 = bea_fcast<float10>(*(float *)(param_1 + 0x38));
  local_18 = *(float *)(param_1 + 0x40);
  if (pfVar1 != (float *)0x0) {
    fVar5 = fVar5 + bea_fcast<float10>(*pfVar1);
    local_1c = local_1c + pfVar1[1];
    local_18 = local_18 + pfVar1[2];
  }
  // class 19: z, y, x as the asm (004cbb17-004cbb25)
  return (bea_fcast<float10>(fStack_8) - bea_fcast<float10>(local_18)) * (bea_fcast<float10>(fStack_8) - bea_fcast<float10>(local_18)) +
         (bea_fcast<float10>(fStack_c) - bea_fcast<float10>(local_1c)) * (bea_fcast<float10>(fStack_c) - bea_fcast<float10>(local_1c)) +
         (bea_fcast<float10>(local_10) - fVar5) * (bea_fcast<float10>(local_10) - fVar5);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cba90, ap_004cba90));
