// auto-ported from 004ac140_FUN_004ac140.c (FUN_004ac140, 860 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x50: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
// @hand-fixed 2026-10-28: float sums in the asm's order (bug class 19, tools/check_fp_order.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_00704cc8 GLOBAL_AT(int, 0x00704cc8)
#define DAT_00704bfc GLOBAL_AT(int, 0x00704bfc)
typedef undefined4 (BEA_CDECL* FUN_00478510_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00478510_t> FUN_00478510 = {(FUN_00478510_t)0x00478510};
typedef float10 (BEA_CDECL* FUN_00479770_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00479770_t> FUN_00479770 = {(FUN_00479770_t)0x00479770};
typedef uint32_t (BEA_CDECL* FUN_004ac000_t)(void);
static const bea_guard<FUN_004ac000_t> FUN_004ac000 = {(FUN_004ac000_t)0x004ac000};

static int BEA_STDCALL ap_004ac140(undefined4 param_1, int param_2, float *param_3, float *param_4, float *param_5, int param_6)
{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int *piVar9;
  float10 fVar10;

  alignas(16) uint8_t bea_frame_[0x50] = {};   // the original stack frame (emulate_frame)
  int &local_4c = *reinterpret_cast<int *>(bea_frame_ + 0x50 - 0x4c);
  float &local_40 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x40);
  float &local_3c = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x3c);
  float &local_38 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x38);
  float &local_34 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x34);
  float &local_30 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x30);
  float &local_2c = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x2c);
  float &local_28 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x28);
  float &local_24 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x24);
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x1c);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x18);
  float &local_10 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x10);
  float &local_c = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0xc);
  float &local_8 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x8);
  float &local_4 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x4);
  if (DAT_00704cc8 == 0) {
    FUN_004ac000();
  }
  local_4c = 0;
  fVar6 = (*param_3 + *param_4) - *param_3;
  local_c = (param_4[1] + param_3[1]) - param_3[1];
  local_8 = (param_4[2] + param_3[2]) - param_3[2];
  pfVar2 = *(float **)(param_2 + 0xfc);
  pfVar1 = pfVar2 + 4;
  fVar7 = SQRT(local_c * local_c + local_8 * local_8 + fVar6 * fVar6) * 0.5f + *param_5;
  local_2c = local_c * 0.5f;
  local_28 = local_8 * 0.5f;
  local_20 = (fVar6 * 0.5f + *param_3) - *pfVar2;
  local_1c = (local_2c + param_3[1]) - pfVar2[1];
  local_18 = (local_28 + param_3[2]) - pfVar2[2];
  if ((((local_20 - fVar7 <= *pfVar1) && (-*pfVar1 <= local_20 + fVar7)) &&
      (local_1c - fVar7 <= pfVar2[5])) &&
     (((-pfVar2[5] <= local_1c + fVar7 && (local_18 - fVar7 <= pfVar2[6])) &&
      (-pfVar2[6] <= local_18 + fVar7)))) {
    if (*(int *)(param_6 + 0xcc) != 0) {
      piVar9 = &DAT_00704bfc;
      do {
        pfVar3 = (float *)piVar9[-1];
        pfVar4 = (float *)*piVar9;
        local_4 = pfVar3[3];
        local_24 = pfVar4[3];
        pfVar5 = (float *)piVar9[1];
        local_34 = pfVar5[3];
        local_10 = *pfVar3 * *pfVar1 + *pfVar2;
        local_c = pfVar3[1] * pfVar2[5] + pfVar2[1];
        local_8 = pfVar3[2] * pfVar2[6] + pfVar2[2];
        local_30 = *pfVar4 * *pfVar1 + *pfVar2;
        local_2c = pfVar4[1] * pfVar2[5] + pfVar2[1];
        local_28 = pfVar4[2] * pfVar2[6] + pfVar2[2];
        local_40 = *pfVar5 * *pfVar1 + *pfVar2;
        local_3c = pfVar5[1] * pfVar2[5] + pfVar2[1];
        local_38 = pfVar5[2] * pfVar2[6] + pfVar2[2];
        iVar8 = FUN_00478510(bea_arg(&local_10), bea_arg(&local_30), bea_arg(&local_40), bea_arg(param_3), bea_arg(param_4), bea_arg(*param_5), bea_arg(param_6));
        if (iVar8 != 0) {
          local_4c = 1;
        }
        piVar9 = piVar9 + 3;
      } while (BEA_LOOP_GUARD(((int)piVar9 < 0x704c5c)));
      if (local_4c != 1) {
        return local_4c;
      }
      *(undefined4 *)(param_6 + 0xe4) = param_1;
      return 1;
    }
    fVar10 = (float10)FUN_00479770(bea_arg(&local_20), bea_arg(pfVar1));
    if (fVar10 - (float10)fVar7 <= (float10)0.0f) {
      *(float *)(param_6 + 0xc4) = (float)(fVar10 - (float10)fVar7);
      *(undefined4 *)(param_6 + 0xe4) = param_1;
      *(undefined4 *)(param_6 + 0xa8) = 1;
      *(undefined4 *)(param_6 + 0x94) = 1;
      return 1;
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ac140, ap_004ac140));
