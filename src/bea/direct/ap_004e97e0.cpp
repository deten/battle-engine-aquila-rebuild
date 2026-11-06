// auto-ported from 004e97e0_FUN_004e97e0.c (FUN_004e97e0, 600 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x70: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char Vec3;
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef Vec3* (BEA_THISCALL* FUN_00401ee0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ee0_t> FUN_00401ee0 = {(FUN_00401ee0_t)0x00401ee0};
typedef Vec3* (BEA_THISCALL* FUN_0040d2c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d2c0_t> FUN_0040d2c0 = {(FUN_0040d2c0_t)0x0040d2c0};

static undefined4 BEA_THISCALL ap_004e97e0(void * this_, int *param_1)
{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;

  alignas(16) uint8_t bea_frame_[0x70] = {};   // the original stack frame (emulate_frame)
  float &local_70 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x70);
  float &local_6c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x6c);
  float &local_68 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x68);
  float &local_60 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x60);
  float &local_5c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x5c);
  float &local_50 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x50);
  float &local_4c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x4c);
  float &local_40 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x40);
  float &local_3c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x3c);
  float &local_30 = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x30);
  float &local_2c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x2c);
  undefined1 (&local_20)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x70 - 0x20);
  undefined1 (&local_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x70 - 0x10);
  iVar1 = *(int *)((int)this_ + 0x10);
  iVar2 = *(int *)this_;
  uVar7 = FUN_00401ec0(bea_arg(local_20), bea_arg(*(undefined4 *)((int)this_ + 4)), bea_arg(*(undefined4 *)((int)this_ + 8)), bea_arg(0));
  uVar7 = FUN_0040d2c0(bea_arg((void *)(*(int *)((int)this_ + 0x10) + 0x3c)), bea_arg(local_10), bea_arg(uVar7));
  FUN_00401ee0(bea_arg((void *)(iVar1 + 0x1c)), bea_arg(&local_70), bea_arg(uVar7));
  FUN_00401ec0(bea_arg(&local_60), bea_arg(local_70 - *(float *)(iVar2 + 0x1c)), bea_arg(local_6c - *(float *)(iVar2 + 0x20)), bea_arg(local_68 - *(float *)(iVar2 + 0x24)));
  iVar1 = param_1[4];
  iVar2 = *param_1;
  uVar7 = FUN_00401ec0(bea_arg(local_10), bea_arg(param_1[1]), bea_arg(param_1[2]), bea_arg(0));
  uVar7 = FUN_0040d2c0(bea_arg((void *)(param_1[4] + 0x3c)), bea_arg(local_20), bea_arg(uVar7));
  FUN_00401ee0(bea_arg((void *)(iVar1 + 0x1c)), bea_arg(&local_70), bea_arg(uVar7));
  FUN_00401ec0(bea_arg(&local_50), bea_arg(local_70 - *(float *)(iVar2 + 0x1c)), bea_arg(local_6c - *(float *)(iVar2 + 0x20)), bea_arg(local_68 - *(float *)(iVar2 + 0x24)));
  iVar1 = *(int *)((int)this_ + 0x10);
  iVar2 = *param_1;
  uVar7 = FUN_00401ec0(bea_arg(local_10), bea_arg(*(undefined4 *)((int)this_ + 4)), bea_arg(*(undefined4 *)((int)this_ + 8)), bea_arg(0));
  uVar7 = FUN_0040d2c0(bea_arg((void *)(*(int *)((int)this_ + 0x10) + 0x3c)), bea_arg(local_20), bea_arg(uVar7));
  FUN_00401ee0(bea_arg((void *)(iVar1 + 0x1c)), bea_arg(&local_70), bea_arg(uVar7));
  FUN_00401ec0(bea_arg(&local_40), bea_arg(local_70 - *(float *)(iVar2 + 0x1c)), bea_arg(local_6c - *(float *)(iVar2 + 0x20)), bea_arg(local_68 - *(float *)(iVar2 + 0x24)));
  iVar1 = param_1[4];
  iVar2 = *(int *)this_;
  uVar7 = FUN_00401ec0(bea_arg(local_10), bea_arg(param_1[1]), bea_arg(param_1[2]), bea_arg(0));
  uVar7 = FUN_0040d2c0(bea_arg((void *)(param_1[4] + 0x3c)), bea_arg(local_20), bea_arg(uVar7));
  FUN_00401ee0(bea_arg((void *)(iVar1 + 0x1c)), bea_arg(&local_70), bea_arg(uVar7));
  FUN_00401ec0(bea_arg(&local_30), bea_arg(local_70 - *(float *)(iVar2 + 0x1c)), bea_arg(local_6c - *(float *)(iVar2 + 0x20)), bea_arg(local_68 - *(float *)(iVar2 + 0x24)));
  fVar3 = SQRT(local_60 * local_60 + local_5c * local_5c) + 1.0f;
  fVar6 = SQRT(local_50 * local_50 + local_4c * local_4c) + 1.0f;
  fVar5 = SQRT(local_40 * local_40 + local_3c * local_3c) + 1.0f;
  fVar4 = SQRT(local_30 * local_30 + local_2c * local_2c) + 1.0f;
  if (fVar5 * fVar5 + fVar4 * fVar4 < fVar3 * fVar3 + fVar6 * fVar6) {
    uVar7 = *(undefined4 *)this_;
    FUN_00401000(bea_arg(this_), bea_arg(*param_1));
    FUN_00401000(bea_arg(param_1), bea_arg(uVar7));
    return 1;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e97e0, ap_004e97e0));
