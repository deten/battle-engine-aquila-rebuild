// auto-ported from 00440510_vslot4.c (CCylinder::vslot4, 1442 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xa0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CCylinder;
typedef char Vec3;
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef Vec3* (BEA_THISCALL* FUN_00401ee0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ee0_t> FUN_00401ee0 = {(FUN_00401ee0_t)0x00401ee0};
typedef Vec3* (BEA_THISCALL* FUN_0040d120_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d120_t> FUN_0040d120 = {(FUN_0040d120_t)0x0040d120};

static undefined4 BEA_THISCALL ap_00440510(CCylinder * this_, int param_1, int param_2, int param_3, int param_4)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 *puVar8;

  alignas(16) uint8_t bea_frame_[0xa0] = {};   // the original stack frame (emulate_frame)
  float &local_98 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x98);
  float &local_94 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x94);
  float &local_80 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x80);
  float &local_7c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x7c);
  float &local_78 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x78);
  float &local_70 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x70);
  float &local_6c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x6c);
  float &local_68 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x68);
  float &local_60 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x60);
  float &local_5c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x5c);
  float &local_58 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x58);
  float &local_50 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x50);
  float &local_4c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x4c);
  float &local_48 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x48);
  float &local_40 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x40);
  float &local_3c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x3c);
  float &local_38 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x38);
  float &local_30 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x30);
  float &local_2c = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x2c);
  float &local_28 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x28);
  undefined1 (&local_20)[8] = *reinterpret_cast<undefined1 (*)[8]>(bea_frame_ + 0xa0 - 0x20);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x18);
  undefined1 (&local_10)[8] = *reinterpret_cast<undefined1 (*)[8]>(bea_frame_ + 0xa0 - 0x10);
  float &local_8 = *reinterpret_cast<float *>(bea_frame_ + 0xa0 - 0x8);
  local_30 = *(float *)(param_2 + 0x10) - *(float *)(param_1 + 0x10);
  local_2c = *(float *)(param_2 + 0x14) - *(float *)(param_1 + 0x14);
  local_28 = *(float *)(param_2 + 0x18) - *(float *)(param_1 + 0x18);
  fVar1 = local_30 + *(float *)(param_3 + 0x14);
  fVar2 = local_2c + *(float *)(param_3 + 0x18);
  fVar3 = local_28 + *(float *)(param_3 + 0x1c);
  FUN_00401ec0(bea_arg(&local_80), bea_arg(local_30 + *(float *)(param_3 + 0x24)), bea_arg(local_2c + *(float *)(param_3 + 0x28)), bea_arg(local_28 + *(float *)(param_3 + 0x2c)));
  if (((*(float *)(this_ + 0x1c) < fVar3) && (*(float *)(this_ + 0x1c) < local_78)) ||
     ((fVar3 < -*(float *)(this_ + 0x1c) && (local_78 < -*(float *)(this_ + 0x1c))))) {
    return 0;
  }
  FUN_00401ec0(bea_arg(&local_70), bea_arg(fVar1 - local_80), bea_arg(fVar2 - local_7c), bea_arg(fVar3 - local_78));
  if ((*(float *)(this_ + 0x18) < fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) &&
     // hand fix (bug class 19, NOTES A1-25): the sums in the asm's order
     (*(float *)(this_ + 0x18) < local_7c * local_7c + local_80 * local_80 + local_78 * local_78)) {
    fVar4 = (local_6c * fVar2 + fVar1 * local_70 + local_68 * fVar3) /
            (local_68 * local_68 + local_6c * local_6c + local_70 * local_70);
    if (fVar4 < 0.0f) {
      return 0;
    }
    if (1.0f < fVar4) {
      return 0;
    }
    FUN_00401ec0(bea_arg(&local_40), bea_arg(local_80 - fVar1), bea_arg(local_7c - fVar2), bea_arg(local_78 - fVar3));
    FUN_00401ec0(bea_arg(&local_50), bea_arg(local_40 * fVar4), bea_arg(local_3c * fVar4), bea_arg(local_38 * fVar4));
    FUN_00401ec0(bea_arg(&local_60), bea_arg(local_50 + fVar1), bea_arg(local_4c + fVar2), bea_arg(local_48 + fVar3));
    if (*(float *)(this_ + 0x18) < local_5c * local_5c + local_60 * local_60) {
      return 0;
    }
  }
  if (((*(float *)(this_ + 0x1c) < ABS(fVar3)) || (*(float *)(this_ + 0x1c) < ABS(local_78))) ||
     (*(int *)(param_4 + 0xcc) != 0)) {
    FUN_00401ec0(bea_arg(&local_40), bea_arg(local_80 - fVar1), bea_arg(local_7c - fVar2), bea_arg(local_78 - fVar3));
    fVar4 = SQRT(local_38 * local_38 + local_3c * local_3c + local_40 * local_40);   // class 19: the asm's order
    fVar6 = -SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
    fVar5 = fVar4 * fVar4;
    fVar4 = fVar4 * fVar6 + fVar4 * fVar6;
    fVar6 = SQRT(fVar4 * fVar4 - (fVar6 * fVar6 - *(float *)(this_ + 0x18)) * fVar5 * 4.0f);
    local_94 = (-fVar4 - fVar6) / (fVar5 + fVar5);
    local_98 = (fVar6 - fVar4) / (fVar5 + fVar5);
    if (0.0f <= local_94) {
      if (1.0f < local_94) {
        local_94 = 1.0f;
      }
    }
    else {
      local_94 = 0.0f;
    }
    if (0.0f <= local_98) {
      if (1.0f < local_98) {
        local_98 = 1.0f;
      }
    }
    else {
      local_98 = 0.0f;
    }
    FUN_00401ec0(bea_arg(&local_60), bea_arg(-local_70), bea_arg(-local_6c), bea_arg(-local_68));
    FUN_00401ec0(bea_arg(&local_50), bea_arg(local_60 * local_94), bea_arg(local_5c * local_94), bea_arg(local_58 * local_94));
    FUN_00401ec0(bea_arg(local_20), bea_arg(local_50 + fVar1), bea_arg(local_4c + fVar2), bea_arg(local_48 + fVar3));
    FUN_00401ec0(bea_arg(&local_60), bea_arg(-local_70), bea_arg(-local_6c), bea_arg(-local_68));
    FUN_00401ec0(bea_arg(&local_50), bea_arg(local_60 * local_98), bea_arg(local_5c * local_98), bea_arg(local_58 * local_98));
    FUN_00401ec0(bea_arg(local_10), bea_arg(local_50 + fVar1), bea_arg(local_4c + fVar2), bea_arg(local_48 + fVar3));
    if (((*(float *)(this_ + 0x1c) < local_18) && (*(float *)(this_ + 0x1c) < local_8)) ||
       ((local_18 < -*(float *)(this_ + 0x1c) && (local_8 < -*(float *)(this_ + 0x1c))))) {
      return 0;
    }
    if (*(int *)(param_4 + 0xcc) != 0) {
      uVar7 = FUN_0040d120(bea_arg(local_20), bea_arg(&local_60), bea_arg(&local_30));
      puVar8 = (undefined4 *)FUN_00401ee0(bea_arg((undefined4 *)(param_2 + 0x10)), bea_arg(&local_50), bea_arg(uVar7));
      *(undefined4 *)(param_2 + 0x10) = *puVar8;
      *(undefined4 *)(param_2 + 0x14) = puVar8[1];
      *(undefined4 *)(param_2 + 0x18) = puVar8[2];
      uVar7 = puVar8[3];
      *(undefined4 *)(param_2 + 0x20) = 1;
      *(undefined4 *)(param_2 + 0x1c) = uVar7;
    }
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00440510, ap_00440510));
