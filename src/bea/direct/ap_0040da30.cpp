// auto-ported from 0040da30_FUN_0040da30.c (FUN_0040da30, 509 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x140: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char Mat34;
typedef char Vec3;
#define DAT_008a9e44 GLOBAL_AT(float, 0x008a9e44)
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef Vec3* (BEA_THISCALL* FUN_00401ee0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ee0_t> FUN_00401ee0 = {(FUN_00401ee0_t)0x00401ee0};
typedef Mat34* (BEA_THISCALL* FUN_00401f10_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401f10_t> FUN_00401f10 = {(FUN_00401f10_t)0x00401f10};
typedef uint32_t (BEA_THISCALL* FUN_004062d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004062d0_t> FUN_004062d0 = {(FUN_004062d0_t)0x004062d0};
typedef Vec3* (BEA_THISCALL* FUN_0040d120_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d120_t> FUN_0040d120 = {(FUN_0040d120_t)0x0040d120};
typedef Vec3* (BEA_THISCALL* FUN_0040d150_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d150_t> FUN_0040d150 = {(FUN_0040d150_t)0x0040d150};
typedef uint32_t (BEA_THISCALL* FUN_0040d320_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d320_t> FUN_0040d320 = {(FUN_0040d320_t)0x0040d320};

static undefined4 BEA_THISCALL ap_0040da30(void * this_, undefined4 param_1)
{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;

  alignas(16) uint8_t bea_frame_[0x140] = {};   // the original stack frame (emulate_frame)
  float &local_134 = *reinterpret_cast<float *>(bea_frame_ + 0x140 - 0x134);
  float &local_130 = *reinterpret_cast<float *>(bea_frame_ + 0x140 - 0x130);
  float &local_12c = *reinterpret_cast<float *>(bea_frame_ + 0x140 - 0x12c);
  float &local_124 = *reinterpret_cast<float *>(bea_frame_ + 0x140 - 0x124);
  float &local_120 = *reinterpret_cast<float *>(bea_frame_ + 0x140 - 0x120);
  float &local_11c = *reinterpret_cast<float *>(bea_frame_ + 0x140 - 0x11c);
  undefined1 (&local_110)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x140 - 0x110);
  undefined1 (&local_100)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x140 - 0x100);
  undefined1 (&local_f0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x140 - 0xf0);
  undefined1 (&local_e0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x140 - 0xe0);
  undefined1 (&local_d0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x140 - 0xd0);
  undefined1 (&local_c0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x140 - 0xc0);
  undefined1 (&local_b0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x140 - 0xb0);
  undefined1 (&local_a0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x140 - 0xa0);
  undefined1 (&local_90)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x140 - 0x90);
  undefined1 (&local_80)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x140 - 0x80);
  undefined1 (&local_70)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x140 - 0x70);
  undefined1 (&local_60)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x140 - 0x60);
  undefined1 (&local_50)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x140 - 0x50);
  undefined1 (&local_40)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x140 - 0x40);
  undefined1 (&local_30)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0x140 - 0x30);
  fVar1 = DAT_008a9e44;
  local_120 = (*(float *)((int)this_ + 0x1c) - *(float *)((int)this_ + 0x8c)) * DAT_008a9e44;
  local_11c = (*(float *)((int)this_ + 0x20) - *(float *)((int)this_ + 0x90)) * DAT_008a9e44;
  local_134 = local_120 + *(float *)((int)this_ + 0x8c);
  local_130 = local_11c + *(float *)((int)this_ + 0x90);
  local_12c = DAT_008a9e44 * (*(float *)((int)this_ + 0x24) - *(float *)((int)this_ + 0x94)) +
              *(float *)((int)this_ + 0x94);
  uVar2 = FUN_0040d120(bea_arg((void *)((int)this_ + 0x5c)), bea_arg(&local_120), bea_arg((int)this_ + 0xbc));
  uVar3 = FUN_0040d120(bea_arg((void *)((int)this_ + 0x4c)), bea_arg(local_60), bea_arg((int)this_ + 0xac));
  uVar4 = FUN_0040d120(bea_arg((void *)((int)this_ + 0x3c)), bea_arg(local_70), bea_arg((int)this_ + 0x9c));
  FUN_00401f10(bea_arg(local_e0), bea_arg(uVar4), bea_arg(uVar3), bea_arg(uVar2));
  uVar2 = FUN_0040d150(bea_arg(local_c0), bea_arg(local_50), bea_arg(fVar1));
  uVar3 = FUN_0040d150(bea_arg(local_d0), bea_arg(local_b0), bea_arg(fVar1));
  uVar4 = FUN_0040d150(bea_arg(local_e0), bea_arg(local_80), bea_arg(fVar1));
  FUN_00401f10(bea_arg(local_110), bea_arg(uVar4), bea_arg(uVar3), bea_arg(uVar2));
  uVar2 = FUN_00401ee0(bea_arg(local_f0), bea_arg(local_40), bea_arg((int)this_ + 0xbc));
  uVar3 = FUN_00401ee0(bea_arg(local_100), bea_arg(local_a0), bea_arg((int)this_ + 0xac));
  uVar4 = FUN_00401ee0(bea_arg(local_110), bea_arg(local_90), bea_arg((int)this_ + 0x9c));
  FUN_00401f10(bea_arg(local_30), bea_arg(uVar4), bea_arg(uVar3), bea_arg(uVar2));
  local_124 = (*(float *)((int)this_ + 0x500) - *(float *)((int)this_ + 0x508)) * DAT_008a9e44 +
              *(float *)((int)this_ + 0x508);
  FUN_004062d0(bea_arg(local_110), bea_arg(local_124), bea_arg((*(float *)((int)this_ + 0x504) - *(float *)((int)this_ + 0x50c)) * DAT_008a9e44 +
               *(float *)((int)this_ + 0x50c)), bea_arg(0));
  iVar5 = FUN_0040d320(bea_arg(local_30), bea_arg(local_e0), bea_arg(local_110));
  FUN_00401ec0(bea_arg(&local_120), bea_arg(*(undefined4 *)(iVar5 + 4)), bea_arg(*(undefined4 *)(iVar5 + 0x14)), bea_arg(*(undefined4 *)(iVar5 + 0x24)));
  FUN_00401ee0(bea_arg(&local_134), bea_arg(param_1), bea_arg(&local_120));
  return param_1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040da30, ap_0040da30));
