// auto-ported from 00479020_FUN_00479020.c (FUN_00479020, 469 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
// @hand-fixed 2026-10-28: float sums in the asm's order (bug class 19, tools/check_fp_order.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char Vec3;
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef float10 (BEA_THISCALL* FUN_0040d180_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0040d180_t> FUN_0040d180 = {(FUN_0040d180_t)0x0040d180};
typedef Vec3* (BEA_THISCALL* FUN_00411a60_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00411a60_t> FUN_00411a60 = {(FUN_00411a60_t)0x00411a60};

static undefined4 BEA_CDECL ap_00479020(float *param_1, float *param_2, float *param_3, float *param_4, float *param_5)
{
  float10 fVar1;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  float &local_40 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x40);
  float &local_3c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x3c);
  float &local_38 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x38);
  float &local_30 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x30);
  float &local_2c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x2c);
  float &local_28 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x28);
  undefined1 (&local_20)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x40 - 0x20);
  undefined1 (&local_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x40 - 0x10);
  local_40 = *param_3 - *param_2;
  local_30 = (param_3[2] - param_2[2]) * (param_2[1] - param_1[1]) -
             (param_3[1] - param_2[1]) * (param_2[2] - param_1[2]);
  if (((param_3[1] - param_2[1]) * (*param_2 - *param_1) - local_40 * (param_2[1] - param_1[1])) *
      param_5[2] +
      ((param_2[2] - param_1[2]) * local_40 - (param_3[2] - param_2[2]) * (*param_2 - *param_1)) *
      param_5[1] +
      local_30 * *param_5 < 0.0) {
    return 0;
  }
  local_2c = param_3[1] - param_1[1];
  local_28 = param_3[2] - param_1[2];
  local_3c = param_4[1] - param_3[1];
  local_38 = param_4[2] - param_3[2];
  FUN_00401ec0(bea_arg(&local_30), bea_arg(local_38 * local_2c - local_3c * local_28), bea_arg(local_28 * (*param_4 - *param_3) - local_38 * (*param_3 - *param_1)), bea_arg(local_3c * (*param_3 - *param_1) - local_2c * (*param_4 - *param_3)));
  if (local_2c * param_5[1] + local_28 * param_5[2] + local_30 * *param_5 < 0.0) {   // class 19: the asm's order
    return 0;
  }
  FUN_00401ec0(bea_arg(local_20), bea_arg(*param_4 - *param_1), bea_arg(param_4[1] - param_1[1]), bea_arg(param_4[2] - param_1[2]));
  FUN_00401ec0(bea_arg(&local_40), bea_arg(*param_2 - *param_4), bea_arg(param_2[1] - param_4[1]), bea_arg(param_2[2] - param_4[2]));
  FUN_00411a60(bea_arg(local_20), bea_arg(local_10), bea_arg(&local_40));
  fVar1 = (float10)FUN_0040d180(bea_arg(param_5), bea_arg(local_10));
  if (fVar1 < (float10)0.0) {
    return 0;
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00479020, ap_00479020));
