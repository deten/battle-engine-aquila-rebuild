// auto-ported from 0040d7c0_FUN_0040d7c0.c (FUN_0040d7c0, 612 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x1b0: a stack local's address escapes; locals keep the original frame layout
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
typedef uint32_t (BEA_THISCALL* FUN_004d2a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004d2a70_t> FUN_004d2a70 = {(FUN_004d2a70_t)0x004d2a70};
typedef undefined4 * (BEA_THISCALL* FUN_004d2ae0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004d2ae0_t> FUN_004d2ae0 = {(FUN_004d2ae0_t)0x004d2ae0};
typedef uint32_t (BEA_THISCALL* FUN_004d2b40_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004d2b40_t> FUN_004d2b40 = {(FUN_004d2b40_t)0x004d2b40};
typedef uint32_t (BEA_THISCALL* FUN_004d2bb0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004d2bb0_t> FUN_004d2bb0 = {(FUN_004d2bb0_t)0x004d2bb0};

static undefined4 BEA_THISCALL ap_0040d7c0(void * this_, undefined4 param_1)
{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;

  alignas(16) uint8_t bea_frame_[0x1b0] = {};   // the original stack frame (emulate_frame)
  float &local_1b0 = *reinterpret_cast<float *>(bea_frame_ + 0x1b0 - 0x1b0);
  float &local_1ac = *reinterpret_cast<float *>(bea_frame_ + 0x1b0 - 0x1ac);
  float &local_1a0 = *reinterpret_cast<float *>(bea_frame_ + 0x1b0 - 0x1a0);
  float &local_19c = *reinterpret_cast<float *>(bea_frame_ + 0x1b0 - 0x19c);
  float &local_198 = *reinterpret_cast<float *>(bea_frame_ + 0x1b0 - 0x198);
  undefined1 (&local_190)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x1b0 - 0x190);
  float &local_18c = *reinterpret_cast<float *>(bea_frame_ + 0x1b0 - 0x18c);
  float &local_188 = *reinterpret_cast<float *>(bea_frame_ + 0x1b0 - 0x188);
  float &local_180 = *reinterpret_cast<float *>(bea_frame_ + 0x1b0 - 0x180);
  float &local_17c = *reinterpret_cast<float *>(bea_frame_ + 0x1b0 - 0x17c);
  float &local_178 = *reinterpret_cast<float *>(bea_frame_ + 0x1b0 - 0x178);
  float &local_170 = *reinterpret_cast<float *>(bea_frame_ + 0x1b0 - 0x170);
  float &local_16c = *reinterpret_cast<float *>(bea_frame_ + 0x1b0 - 0x16c);
  float &local_168 = *reinterpret_cast<float *>(bea_frame_ + 0x1b0 - 0x168);
  undefined1 (&local_160)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x160);
  undefined1 (&local_150)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x150);
  undefined1 (&local_140)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x140);
  undefined1 (&local_130)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x130);
  undefined1 (&local_120)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x120);
  undefined1 (&local_110)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x110);
  undefined1 (&local_100)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x100);
  undefined1 (&local_f0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0xf0);
  undefined1 (&local_e0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0xe0);
  undefined1 (&local_d0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0xd0);
  undefined1 (&local_c0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0xc0);
  undefined1 (&local_b0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0xb0);
  undefined1 (&local_a0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0xa0);
  undefined1 (&local_90)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x90);
  undefined1 (&local_80)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x80);
  undefined1 (&local_70)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x70);
  undefined1 (&local_60)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x60);
  undefined1 (&local_50)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x50);
  undefined1 (&local_40)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x1b0 - 0x40);
  undefined1 (&local_30)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0x1b0 - 0x30);
  FUN_004d2a70(bea_arg(*(void **)((int)this_ + 0x574)), bea_arg(&local_170));
  FUN_004d2ae0(bea_arg(*(void **)((int)this_ + 0x574)), bea_arg(local_d0));
  FUN_004d2b40(bea_arg(*(void **)((int)this_ + 0x574)), bea_arg(&local_1a0));
  FUN_004d2bb0(bea_arg(*(void **)((int)this_ + 0x574)), bea_arg(local_160));
  fVar1 = DAT_008a9e44;
  local_18c = local_16c - local_19c;
  local_188 = local_168 - local_198;
  local_1b0 = (local_170 - local_1a0) * DAT_008a9e44;
  local_1ac = local_18c * DAT_008a9e44;
  local_180 = local_1b0 + local_1a0;
  local_17c = local_1ac + local_19c;
  local_178 = DAT_008a9e44 * local_188 + local_198;
  uVar2 = FUN_0040d120(bea_arg(local_b0), bea_arg(&local_1b0), bea_arg(local_140));
  uVar3 = FUN_0040d120(bea_arg(local_c0), bea_arg(local_190), bea_arg(local_150));
  uVar4 = FUN_0040d120(bea_arg(local_d0), bea_arg(local_90), bea_arg(local_160));
  FUN_00401f10(bea_arg(local_100), bea_arg(uVar4), bea_arg(uVar3), bea_arg(uVar2));
  uVar2 = FUN_0040d150(bea_arg(local_e0), bea_arg(local_60), bea_arg(fVar1));
  uVar3 = FUN_0040d150(bea_arg(local_f0), bea_arg(local_a0), bea_arg(fVar1));
  uVar4 = FUN_0040d150(bea_arg(local_100), bea_arg(local_70), bea_arg(fVar1));
  FUN_00401f10(bea_arg(local_130), bea_arg(uVar4), bea_arg(uVar3), bea_arg(uVar2));
  uVar2 = FUN_00401ee0(bea_arg(local_110), bea_arg(local_50), bea_arg(local_140));
  uVar3 = FUN_00401ee0(bea_arg(local_120), bea_arg(local_80), bea_arg(local_150));
  uVar4 = FUN_00401ee0(bea_arg(local_130), bea_arg(local_40), bea_arg(local_160));
  FUN_00401f10(bea_arg(local_30), bea_arg(uVar4), bea_arg(uVar3), bea_arg(uVar2));
  FUN_004062d0(bea_arg(local_130), bea_arg((*(float *)((int)this_ + 0x4e8) - *(float *)((int)this_ + 0x4ec)) * DAT_008a9e44 +
               *(float *)((int)this_ + 0x4ec)), bea_arg((*(float *)((int)this_ + 0x4f4) - *(float *)((int)this_ + 0x4f8)) * DAT_008a9e44 +
               *(float *)((int)this_ + 0x4f8)), bea_arg(0));
  iVar5 = FUN_0040d320(bea_arg(local_30), bea_arg(local_100), bea_arg(local_130));
  FUN_00401ec0(bea_arg(&local_1b0), bea_arg(*(undefined4 *)(iVar5 + 4)), bea_arg(*(undefined4 *)(iVar5 + 0x14)), bea_arg(*(undefined4 *)(iVar5 + 0x24)));
  FUN_00401ee0(bea_arg(&local_180), bea_arg(param_1), bea_arg(&local_1b0));
  return param_1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040d7c0, ap_0040d7c0));
