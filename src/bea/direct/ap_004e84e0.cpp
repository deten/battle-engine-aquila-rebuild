// auto-ported from 004e84e0_FUN_004e84e0.c (FUN_004e84e0, 580 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xd0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char Vec3;
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef Vec3* (BEA_THISCALL* FUN_00401ee0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ee0_t> FUN_00401ee0 = {(FUN_00401ee0_t)0x00401ee0};
typedef Vec3* (BEA_THISCALL* FUN_0040d2c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d2c0_t> FUN_0040d2c0 = {(FUN_0040d2c0_t)0x0040d2c0};
typedef undefined4 (BEA_THISCALL* FUN_004e97e0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e97e0_t> FUN_004e97e0 = {(FUN_004e97e0_t)0x004e97e0};

static undefined4 BEA_THISCALL ap_004e84e0(void * this_)
{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int *this_00;

  alignas(16) uint8_t bea_frame_[0xd0] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_cc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0xcc);
  float &local_c8 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0xc8);
  float &local_b0 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0xb0);
  float &local_ac = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0xac);
  float &local_a0 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0xa0);
  float &local_9c = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x9c);
  int &local_90 = *reinterpret_cast<int *>(bea_frame_ + 0xd0 - 0x90);
  int &local_8c = *reinterpret_cast<int *>(bea_frame_ + 0xd0 - 0x8c);
  undefined4 &local_88 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x88);
  float &local_80 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x80);
  float &local_7c = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x7c);
  float &local_78 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x78);
  int &local_70 = *reinterpret_cast<int *>(bea_frame_ + 0xd0 - 0x70);
  int &local_6c = *reinterpret_cast<int *>(bea_frame_ + 0xd0 - 0x6c);
  undefined4 &local_68 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x68);
  int &local_60 = *reinterpret_cast<int *>(bea_frame_ + 0xd0 - 0x60);
  int &local_5c = *reinterpret_cast<int *>(bea_frame_ + 0xd0 - 0x5c);
  undefined4 &local_58 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xd0 - 0x58);
  float &local_50 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x50);
  float &local_4c = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x4c);
  float &local_48 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x48);
  float &local_40 = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x40);
  float &local_3c = *reinterpret_cast<float *>(bea_frame_ + 0xd0 - 0x3c);
  undefined1 (&local_30)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0xd0 - 0x30);
  undefined1 (&local_20)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0xd0 - 0x20);
  undefined1 (&local_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0xd0 - 0x10);
  local_cc = 1;
  puVar1 = *(undefined4 **)((int)this_ + 0xa4);
  if (puVar1 == (undefined4 *)0x0) {
    this_00 = (int *)0x0;
  }
  else {
    this_00 = (int *)*puVar1;
  }
  while (BEA_LOOP_GUARD((this_00 != (int *)0x0))) {
    local_90 = this_00[1];
    iVar7 = this_00[4];
    iVar2 = *this_00;
    local_8c = this_00[2];
    local_88 = 0;
    uVar6 = FUN_0040d2c0(bea_arg((void *)(iVar7 + 0x3c)), bea_arg(local_20), bea_arg(&local_90));
    FUN_00401ee0(bea_arg((void *)(iVar7 + 0x1c)), bea_arg(&local_50), bea_arg(uVar6));
    FUN_00401ec0(bea_arg(&local_b0), bea_arg(local_50 - *(float *)(iVar2 + 0x1c)), bea_arg(local_4c - *(float *)(iVar2 + 0x20)), bea_arg(local_48 - *(float *)(iVar2 + 0x24)));
    puVar3 = *(undefined4 **)((int)this_ + 0xa4);
    local_c8 = SQRT(local_b0 * local_b0 + local_ac * local_ac);
    if (puVar3 == (undefined4 *)0x0) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = (int *)*puVar3;
    }
    while (BEA_LOOP_GUARD((piVar8 != (int *)0x0))) {
      local_60 = this_00[1];
      iVar7 = this_00[4];
      iVar2 = *piVar8;
      local_5c = this_00[2];
      local_58 = 0;
      uVar6 = FUN_0040d2c0(bea_arg((void *)(iVar7 + 0x3c)), bea_arg(local_30), bea_arg(&local_60));
      FUN_00401ee0(bea_arg((void *)(iVar7 + 0x1c)), bea_arg(&local_40), bea_arg(uVar6));
      fVar4 = local_40 - *(float *)(iVar2 + 0x1c);
      fVar5 = local_3c - *(float *)(iVar2 + 0x20);
      if ((SQRT(fVar4 * fVar4 + fVar5 * fVar5) < local_c8) &&
         (iVar7 = FUN_004e97e0(bea_arg(this_00), bea_arg(piVar8)), iVar7 != 0)) {
        local_70 = this_00[1];
        iVar7 = this_00[4];
        iVar2 = *this_00;
        local_6c = this_00[2];
        local_68 = 0;
        uVar6 = FUN_0040d2c0(bea_arg((void *)(iVar7 + 0x3c)), bea_arg(local_10), bea_arg(&local_70));
        FUN_00401ee0(bea_arg((void *)(iVar7 + 0x1c)), bea_arg(&local_80), bea_arg(uVar6));
        FUN_00401ec0(bea_arg(&local_a0), bea_arg(local_80 - *(float *)(iVar2 + 0x1c)), bea_arg(local_7c - *(float *)(iVar2 + 0x20)), bea_arg(local_78 - *(float *)(iVar2 + 0x24)));
        local_cc = 0;
        local_c8 = SQRT(local_a0 * local_a0 + local_9c * local_9c);
      }
      puVar3 = (undefined4 *)puVar3[1];
      if (puVar3 == (undefined4 *)0x0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = (int *)*puVar3;
      }
    }
    puVar1 = (undefined4 *)puVar1[1];
    if (puVar1 == (undefined4 *)0x0) {
      this_00 = (int *)0x0;
    }
    else {
      this_00 = (int *)*puVar1;
    }
  }
  return local_cc;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e84e0, ap_004e84e0));
