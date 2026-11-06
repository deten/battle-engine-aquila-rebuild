// auto-ported from 00480080_vslot110.c (CHiveBoss::vslot110, 401 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char CHiveBoss;
#define DAT_006fbdfc GLOBAL_AT(int, 0x006fbdfc)
#define DAT_008a9d3c GLOBAL_AT(int, 0x008a9d3c)
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};

static float * BEA_THISCALL ap_00480080(CHiveBoss * this_, float *param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float10 fVar10;

  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)
  float &local_30 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x30);
  float &local_2c = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x2c);
  float &local_28 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x28);
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x1c);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x18);
  undefined4 &local_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x14);
  float &local_10 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x10);
  float &local_c = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0xc);
  float &local_8 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x8);
  float &local_4 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x4);
  fVar4 = bea_fcast<float>(DAT_006fbdfc);
  iVar5 = 0;
  if (DAT_008a9d3c != 0) {
    iVar5 = *(int *)(DAT_008a9d3c + 0x1c);
  }
  fVar8 = *(float *)(this_ + 0x1c);
  fVar9 = *(float *)(this_ + 0x20);
  fVar6 = *(float *)(this_ + 0x24);
  fVar7 = *(float *)(this_ + 0x28);
  if (iVar5 != 0) {
    local_20 = *(float *)(iVar5 + 0x1c);
    local_30 = *(float *)(this_ + 0x1c) - local_20;
    local_1c = *(float *)(iVar5 + 0x20);
    local_2c = *(float *)(this_ + 0x20) - local_1c;
    local_18 = *(float *)(iVar5 + 0x24);
    local_8 = *(float *)(this_ + 0x24) - local_18;
    local_14 = *(undefined4 *)(iVar5 + 0x28);
    fVar1 = SQRT(local_30 * local_30 + local_2c * local_2c);
    if (fVar1 != 0.0f) {
      fVar1 = 1.0f / fVar1;
      local_30 = local_30 * fVar1;
      local_2c = local_2c * fVar1;
    }
    fVar1 = *(float *)(this_ + 0x2a0);
    local_10 = fVar1 * local_30;
    local_c = local_2c * fVar1;
    fVar2 = local_10 + local_20;
    fVar3 = local_c + local_1c;
    fVar1 = fVar1 * 0.0f + local_18;
    local_30 = fVar2;
    local_2c = fVar3;
    local_28 = fVar1;
    fVar10 = bea_fcast<float10>(FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(&local_30)));
    if (fVar10 < bea_fcast<float10>(fVar4)) {
      fVar6 = fVar1;
      fVar7 = local_4;
      fVar8 = fVar2;
      fVar9 = fVar3;
    }
  }
  *param_1 = fVar8;
  param_1[1] = fVar9;
  param_1[2] = fVar6;
  param_1[3] = fVar7;
  return (float *)(param_1);
  return (float *)(param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00480080, ap_00480080));
