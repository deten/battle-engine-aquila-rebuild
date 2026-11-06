// auto-ported from 00478c20_FUN_00478c20.c (FUN_00478c20, 1014 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef float10 (BEA_THISCALL* FUN_0040d180_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0040d180_t> FUN_0040d180 = {(FUN_0040d180_t)0x0040d180};

static undefined4 BEA_CDECL ap_00478c20(float *param_1, float *param_2, float *param_3, float *param_4, float *param_5, int param_6)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float10 fVar8;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  float &local_40 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x40);
  float &local_3c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x3c);
  float &local_38 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x38);
  undefined4 &local_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x34);
  float &local_30 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x30);
  float &local_2c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x2c);
  float &local_28 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x28);
  undefined4 &local_24 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x24);
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x1c);
  float &local_10 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x10);
  float &local_c = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0xc);
  float &local_8 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x8);
  fVar1 = param_2[1] - param_1[1];
  fVar2 = param_2[2] - param_1[2];
  local_40 = (param_3[2] - param_1[2]) * fVar1 - (param_3[1] - param_1[1]) * fVar2;
  fVar3 = *param_2 - *param_1;
  local_3c = (*param_3 - *param_1) * fVar2 - fVar3 * (param_3[2] - param_1[2]);
  local_38 = fVar3 * (param_3[1] - param_1[1]) - (*param_3 - *param_1) * fVar1;
  fVar4 = SQRT(local_40 * local_40 + local_3c * local_3c + local_38 * local_38);
  if (fVar4 != 0.0f) {
    fVar4 = 1.0f / fVar4;
    local_40 = fVar4 * local_40;
    local_3c = fVar4 * local_3c;
    local_38 = fVar4 * local_38;
  }
  fVar4 = *param_5 - *param_4;
  fVar5 = param_5[1] - param_4[1];
  fVar6 = param_5[2] - param_4[2];
  if (((((fVar4 * local_40 + fVar6 * local_38 + fVar5 * local_3c <= 0.0f) &&
        (fVar7 = fVar6 * local_38 + fVar5 * local_3c + fVar4 * local_40, 0.005f <= ABS(fVar7))) &&
       (fVar7 = -((((-(local_40 * *param_1) - local_3c * param_1[1]) - local_38 * param_1[2]) +
                  local_40 * *param_4 +
                  local_38 * param_4[2] +
                  local_3c * param_4[1]) /
                 fVar7), 0.0f <= fVar7)) && (fVar7 <= 1.0f)) &&
     (((param_6 == 0 || (*(int *)(param_6 + 0xa8) == 0)) || (fVar7 <= *(float *)(param_6 + 0xc4)))))
  {
    local_30 = fVar4 * fVar7 + *param_4;
    local_2c = fVar5 * fVar7 + param_4[1];
    local_28 = fVar6 * fVar7 + param_4[2];
    if ((0.0f <= (fVar1 * (*param_1 - local_30) - (param_1[1] - local_2c) * fVar3) * local_38 +
                ((param_1[2] - local_28) * fVar3 - fVar2 * (*param_1 - local_30)) * local_3c +
                (fVar2 * (param_1[1] - local_2c) - fVar1 * (param_1[2] - local_28)) * local_40) &&
       (0.0f <= ((param_3[1] - param_2[1]) * (*param_2 - local_30) -
               (param_2[1] - local_2c) * (*param_3 - *param_2)) * local_38 +
               ((param_2[2] - local_28) * (*param_3 - *param_2) -
               (param_3[2] - param_2[2]) * (*param_2 - local_30)) * local_3c +
               ((param_3[2] - param_2[2]) * (param_2[1] - local_2c) -
               (param_3[1] - param_2[1]) * (param_2[2] - local_28)) * local_40)) {
      local_20 = *param_1 - *param_3;
      local_1c = param_1[1] - param_3[1];
      local_10 = (param_1[2] - param_3[2]) * (param_3[1] - local_2c) -
                 local_1c * (param_3[2] - local_28);
      local_c = (param_3[2] - local_28) * local_20 -
                (param_1[2] - param_3[2]) * (*param_3 - local_30);
      local_8 = local_1c * (*param_3 - local_30) - (param_3[1] - local_2c) * local_20;
      fVar8 = (float10)FUN_0040d180(bea_arg(&local_40), bea_arg(&local_10));
      if ((float10)0.0f <= fVar8) {
        if (param_6 == 0) {
          return 1;
        }
        *(float *)(param_6 + 0xc4) = fVar7;
        *(float *)(param_6 + 0x84) = local_30;
        *(undefined4 *)(param_6 + 0xa8) = 1;
        *(undefined4 *)(param_6 + 0x94) = 1;
        *(float *)(param_6 + 0x88) = local_2c;
        *(float *)(param_6 + 0x8c) = local_28;
        *(undefined4 *)(param_6 + 0x90) = local_24;
        *(float *)(param_6 + 0xd4) = local_40;
        *(float *)(param_6 + 0xd8) = local_3c;
        *(float *)(param_6 + 0xdc) = local_38;
        *(undefined4 *)(param_6 + 0xe0) = local_34;
        return 1;
      }
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00478c20, ap_00478c20));
