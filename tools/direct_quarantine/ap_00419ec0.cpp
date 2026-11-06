// auto-ported from 00419ec0_vslot0.c (CViewPointCamera::vslot0, 316 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x50: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CViewPointCamera;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
typedef uint32_t (BEA_THISCALL* FUN_004062d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004062d0_t> FUN_004062d0 = {(FUN_004062d0_t)0x004062d0};

static float * BEA_THISCALL ap_00419ec0(CViewPointCamera * this_, float *param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  alignas(16) uint8_t bea_frame_[0x50] = {};   // the original stack frame (emulate_frame)
  float &local_44 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x44);
  float (&local_30)[2] = *reinterpret_cast<float (*)[2]>(bea_frame_ + 0x50 - 0x30);
  float &local_28 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x28);
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x20);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x18);
  float &local_10 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x10);
  float &local_8 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x8);
  if (*(float *)(this_ + 0x28) == DAT_00672fd0) {
    *param_1 = *(float *)(this_ + 0x2c);
    param_1[1] = *(float *)(this_ + 0x30);
    param_1[2] = *(float *)(this_ + 0x34);
    param_1[3] = *(float *)(this_ + 0x38);
    return (float *)(param_1);
  }
  *(float *)(this_ + 0xa0) = *(float *)(this_ + 0x2c);
  *(undefined4 *)(this_ + 0xa4) = *(undefined4 *)(this_ + 0x30);
  *(undefined4 *)(this_ + 0xa8) = *(undefined4 *)(this_ + 0x34);
  *(undefined4 *)(this_ + 0xac) = *(undefined4 *)(this_ + 0x38);
  FUN_004062d0(bea_arg(local_30), bea_arg((DAT_00672fd0 - *(float *)(this_ + 0x24)) * *(float *)(this_ + 0x14)), bea_arg(0), bea_arg(0));
  fVar1 = *(float *)(this_ + 0x1c);
  if (DAT_00672fd0 < *(float *)(this_ + 0x20) + *(float *)(this_ + 0x24)) {
    fVar1 = (DAT_00672fd0 - *(float *)(this_ + 0x24)) *
            ((fVar1 - *(float *)(this_ + 0x18)) / *(float *)(this_ + 0x20));
  }
  fVar4 = -fVar1;
  *(float *)(this_ + 0x28) = DAT_00672fd0;
  fVar2 = local_30[0] * fVar1 + local_28 * fVar4 + *(float *)(this_ + 4);
  fVar3 = local_20 * fVar1 + local_18 * fVar4 + *(float *)(this_ + 8);
  fVar1 = local_10 * fVar1 + local_8 * fVar4 + *(float *)(this_ + 0xc);
  *(float *)(this_ + 0x2c) = fVar2;
  *(float *)(this_ + 0x30) = fVar3;
  *(float *)(this_ + 0x34) = fVar1;
  *(float *)(this_ + 0x38) = local_44;
  *param_1 = fVar2;
  param_1[1] = fVar3;
  param_1[2] = fVar1;
  param_1[3] = local_44;
  return (float *)(param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00419ec0, ap_00419ec0));
