// auto-ported from 00425e30_vslot7.c (CCollisionSeekingRound::vslot7, 546 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x60: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CCollisionSeekingRound;
typedef char Vec3;
typedef char fStack_44;
typedef char fStack_5c;
typedef char fStack_60;
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};

static int BEA_THISCALL ap_00425e30(CCollisionSeekingRound * this_)
{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;

  alignas(16) uint8_t bea_frame_[0x60] = {};   // the original stack frame (emulate_frame)
  float &fStack_60 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x60);
  float &fStack_5c = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x5c);
  undefined4 &uStack_58 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x58);
  float &local_54 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x54);
  float &fStack_50 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x50);
  float &fStack_4c = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x4c);
  float &fStack_44 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x44);
  float &fStack_40 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x40);
  float &fStack_3c = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x3c);
  undefined4 &uStack_38 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x38);
  undefined4 &uStack_30 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x30);
  undefined4 &uStack_2c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x2c);
  undefined4 &uStack_28 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x28);
  undefined4 &uStack_24 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x24);
  iVar1 = *(int *)(this_ + 0x14);
  bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x78, &local_54);
  iVar2 = *(int *)(this_ + 8);
  fVar3 = *(float *)(iVar2 + 0x1c);
  fVar4 = *(float *)(iVar2 + 0x20);
  fVar5 = *(float *)(iVar2 + 0x24);
  if (0.001f < *(float *)(this_ + 0x38)) {
    fStack_44 = fVar3 - local_54;
    fStack_60 = fVar4 - fStack_50;
    fStack_5c = fVar5 - fStack_4c;
    fVar6 = SQRT(fStack_44 * fStack_44 + fStack_60 * fStack_60 + fStack_5c * fStack_5c);   // class 19: the asm's order
    if (fVar6 != 0.0f) {
      fVar6 = 1.0f / fVar6;
      fStack_44 = fStack_44 * fVar6;
      fStack_60 = fStack_60 * fVar6;
      fStack_5c = fStack_5c * fVar6;
    }
    fStack_3c = *(float *)(this_ + 0x38);
    fStack_44 = fStack_44 * fStack_3c;
    fStack_40 = fStack_60 * fStack_3c;
    fStack_3c = fStack_5c * fStack_3c;
    FUN_00401ec0(bea_arg(&uStack_30), bea_arg(0), bea_arg(0), bea_arg(0));
    *(undefined4 *)(iVar1 + 4) = uStack_30;
    *(undefined4 *)(iVar1 + 8) = uStack_2c;
    *(undefined4 *)(iVar1 + 0xc) = uStack_28;
    *(undefined4 *)(iVar1 + 0x10) = uStack_24;
    *(float *)(iVar1 + 0x14) = local_54 - fVar3;
    *(float *)(iVar1 + 0x18) = fStack_50 - fVar4;
    *(float *)(iVar1 + 0x1c) = fStack_4c - fVar5;
    *(undefined4 *)(iVar1 + 0x20) = uStack_58;
    *(float *)(iVar1 + 0x24) = fStack_44;
    *(float *)(iVar1 + 0x28) = fStack_40;
    *(float *)(iVar1 + 0x2c) = fStack_3c;
    *(undefined4 *)(iVar1 + 0x30) = uStack_38;
    return iVar1;
  }
  fStack_44 = local_54 - fVar3;
  fStack_40 = fStack_50 - fVar4;
  fStack_3c = fStack_4c - fVar5;
  FUN_00401ec0(bea_arg(&uStack_30), bea_arg(0), bea_arg(0), bea_arg(0));
  *(undefined4 *)(iVar1 + 4) = uStack_30;
  *(undefined4 *)(iVar1 + 8) = uStack_2c;
  *(undefined4 *)(iVar1 + 0xc) = uStack_28;
  *(undefined4 *)(iVar1 + 0x10) = uStack_24;
  *(float *)(iVar1 + 0x14) = fStack_44;
  *(float *)(iVar1 + 0x18) = fStack_40;
  *(float *)(iVar1 + 0x1c) = fStack_3c;
  *(undefined4 *)(iVar1 + 0x20) = uStack_38;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = uStack_58;
  return iVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00425e30, ap_00425e30));
