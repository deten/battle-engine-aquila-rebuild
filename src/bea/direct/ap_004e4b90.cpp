// auto-ported from 004e4b90_vslot4.c (CSphere::vslot4, 479 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
// @hand-fixed 2026-10-28: float sums in the asm's order (bug class 19, tools/check_fp_order.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CSphere;
typedef char Vec3;
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};

static undefined4 BEA_THISCALL ap_004e4b90(CSphere * this_, int param_1, int param_2, int param_3, undefined4 param_4)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x1c);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x18);
  float &local_10 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x10);
  float &local_c = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0xc);
  float &local_8 = *reinterpret_cast<float *>(bea_frame_ + 0x20 - 0x8);
  uVar7 = 0;
  local_20 = *(float *)(param_2 + 0x10) - *(float *)(param_1 + 0x10);
  local_c = *(float *)(param_2 + 0x14) - *(float *)(param_1 + 0x14);
  local_8 = *(float *)(param_2 + 0x18) - *(float *)(param_1 + 0x18);
  fVar1 = local_20 + *(float *)(param_3 + 0x14);
  fVar2 = local_c + *(float *)(param_3 + 0x18);
  fVar3 = local_8 + *(float *)(param_3 + 0x1c);
  local_20 = local_20 + *(float *)(param_3 + 0x24);
  local_1c = local_c + *(float *)(param_3 + 0x28);
  local_18 = local_8 + *(float *)(param_3 + 0x2c);
  if ((*(float *)(this_ + 0x18) <= fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1) &&
     (*(float *)(this_ + 0x18) <= local_1c * local_1c + local_18 * local_18 + local_20 * local_20)) {
    fVar4 = fVar1 - local_20;
    fVar6 = fVar2 - local_1c;
    fVar5 = fVar3 - local_18;
    fVar4 = (fVar6 * fVar2 + fVar5 * fVar3 + fVar4 * fVar1) /
            (fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
    if ((0.0 <= fVar4) && (fVar4 <= 1.0)) {
      FUN_00401ec0(bea_arg(&local_20), bea_arg((local_20 - fVar1) * fVar4), bea_arg((local_1c - fVar2) * fVar4), bea_arg((local_18 - fVar3) * fVar4));
      FUN_00401ec0(bea_arg(&local_10), bea_arg(local_20 + fVar1), bea_arg(local_1c + fVar2), bea_arg(local_18 + fVar3));
      if (local_8 * local_8 + local_c * local_c + local_10 * local_10 <= *(float *)(this_ + 0x18)) {   // class 19: the asm's order
        uVar7 = 1;
      }
    }
    return uVar7;
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e4b90, ap_004e4b90));
