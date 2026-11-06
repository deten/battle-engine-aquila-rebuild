// auto-ported from 00428800_vslot50.c (CComponent::vslot50, 422 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x60: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComponent;
typedef char CUnit;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef undefined4 (BEA_THISCALL* CUnit__vslot50_t)(uint32_t);
static const bea_guard<CUnit__vslot50_t> CUnit__vslot50 = {(CUnit__vslot50_t)0x004fd140};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef uint32_t (BEA_THISCALL* FUN_004fcfe0_t)(uint32_t);
static const bea_guard<FUN_004fcfe0_t> FUN_004fcfe0 = {(FUN_004fcfe0_t)0x004fcfe0};
typedef uint32_t (BEA_THISCALL* FUN_004fd040_t)(uint32_t);
static const bea_guard<FUN_004fd040_t> FUN_004fd040 = {(FUN_004fd040_t)0x004fd040};

static undefined4 BEA_THISCALL ap_00428800(CComponent * this_)
{
  int *piVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;

  alignas(16) uint8_t bea_frame_[0x60] = {};   // the original stack frame (emulate_frame)
  float &local_54 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x54);
  float &fStack_50 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x50);
  float &local_4c = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x4c);
  undefined4 &local_48 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x48);
  float &fStack_44 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x44);
  float &local_40 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x40);
  float &local_3c = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x3c);
  float &local_38 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x38);
  float &fStack_34 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x34);
  float &local_30 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x30);
  float &local_2c = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x2c);
  float &local_28 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x28);
  float &fStack_24 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x24);
  float &fStack_20 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x20);
  float &fStack_1c = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x1c);
  float &fStack_18 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x18);
  undefined1 (&local_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x60 - 0x10);
  if ((*(int *)(*(int *)(this_ + 0x164) + 0x124) == 0) &&
     (*(int *)(*(int *)(this_ + 0x164) + 0x198) == 0)) {
    iVar3 = CUnit__vslot50(bea_arg((CUnit *)this_));
    if (iVar3 != 0) {
      FUN_004fd040(bea_arg(this_));
      return 1;
    }
  }
  else {
    iVar3 = CUnit__vslot50(bea_arg((CUnit *)this_));
    if (iVar3 != 0) {
      FUN_004fcfe0(bea_arg(this_));
      if (*(int *)(*(int *)(this_ + 0x164) + 0x198) == 0) {
        local_54 = DAT_00672fd0 + 7.0f;
        FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0xfa4), bea_arg(this_), bea_arg(&local_54), bea_arg(0), bea_arg(0), bea_arg(0));
        return 1;
      }
      // Hand-fixed 2026-10-27 from the asm (0x428869-0x428964).  Ghidra lost
      // the `push eax` before the 0x6c call, so its stack offsets after it
      // were one slot off and the target it printed took x from two unset
      // slots, y and z from the wrong components; a level-742 replay lost
      // differently (bisected to here).  Direction to the target in the
      // ground plane, normalised, scaled 0.4, plus the 0x6c vector, plus the
      // target's 0.4-scaled 0x40/0x50/0x60 terms, each sum in the asm's order.
      piVar1 = *(int **)(this_ + 0x26c);
      local_48 = 0;
      fStack_44 = *(float *)(this_ + 0x1c) - bea_fcast<float>(piVar1[7]);   // dx stays on the x87 stack
      local_4c = *(float *)(this_ + 0x20) - bea_fcast<float>(piVar1[8]);
      fVar2 = SQRT(local_4c * local_4c + fStack_44 * fStack_44);
      if (fVar2 != 0.0f) {
        fVar2 = 1.0f / fVar2;
        fStack_44 = fStack_44 * fVar2;
        local_4c = local_4c * fVar2;
      }
      local_30 = bea_fcast<float>(piVar1[0x10]) * 0.4f;
      local_2c = bea_fcast<float>(piVar1[0x14]) * 0.4f;
      local_28 = bea_fcast<float>(piVar1[0x18]) * 0.4f;
      local_40 = fStack_44 * 0.4f;
      local_3c = local_4c * 0.4f;
      local_38 = 0.0f * 0.4f;
      pfVar4 = (float *)bea_vcall<uint32_t>(piVar1, 0x6c, local_10);
      fVar2 = local_40 + *pfVar4;
      local_4c = local_3c + pfVar4[1];
      fStack_50 = local_38 + pfVar4[2];
      fStack_20 = fVar2 + local_30;
      fStack_1c = local_4c + local_2c;
      fStack_18 = fStack_50 + local_28;
      bea_vcall<uint32_t>(this_, 0x70, &fStack_20);
      return 1;
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00428800, ap_00428800));
