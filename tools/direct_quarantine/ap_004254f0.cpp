// auto-ported from 004254f0_vslot1_t8.c (CCockpit::vslot1_t8, 621 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x180: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CCockpit;
typedef char Mat34;
typedef char Vec3;
#define DAT_008a9e44 GLOBAL_AT(int, 0x008a9e44)
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef Vec3* (BEA_THISCALL* FUN_00401ee0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ee0_t> FUN_00401ee0 = {(FUN_00401ee0_t)0x00401ee0};
typedef Mat34* (BEA_THISCALL* FUN_00401f10_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401f10_t> FUN_00401f10 = {(FUN_00401f10_t)0x00401f10};
typedef Vec3* (BEA_THISCALL* FUN_0040d120_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d120_t> FUN_0040d120 = {(FUN_0040d120_t)0x0040d120};
typedef Vec3* (BEA_THISCALL* FUN_0040d150_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d150_t> FUN_0040d150 = {(FUN_0040d150_t)0x0040d150};
typedef uint32_t (BEA_THISCALL* FUN_0040d320_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d320_t> FUN_0040d320 = {(FUN_0040d320_t)0x0040d320};
typedef uint32_t (BEA_THISCALL* FUN_00425760_t)(uint32_t);
static const bea_guard<FUN_00425760_t> FUN_00425760 = {(FUN_00425760_t)0x00425760};

static undefined4 * BEA_THISCALL ap_004254f0(CCockpit * this_, undefined4 *param_1)
{
  undefined4 uVar1;
  undefined4 uVar2;
  void *this_00;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  CCockpit *pCVar6;
  undefined4 *puVar7;
  float *pfVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  float *pfVar11;

  alignas(16) uint8_t bea_frame_[0x180] = {};   // the original stack frame (emulate_frame)
  float &local_180 = *reinterpret_cast<float *>(bea_frame_ + 0x180 - 0x180);
  float &local_17c = *reinterpret_cast<float *>(bea_frame_ + 0x180 - 0x17c);
  float &local_178 = *reinterpret_cast<float *>(bea_frame_ + 0x180 - 0x178);
  undefined1 (&local_170)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x180 - 0x170);
  undefined1 (&auStack_160)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x180 - 0x160);
  undefined1 (&auStack_150)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x180 - 0x150);
  undefined1 (&local_140)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x180 - 0x140);
  undefined1 (&local_130)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x180 - 0x130);
  undefined1 (&local_120)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x180 - 0x120);
  undefined1 (&auStack_110)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x180 - 0x110);
  undefined1 (&auStack_100)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x180 - 0x100);
  undefined1 (&local_f0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x180 - 0xf0);
  undefined1 (&auStack_e0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x180 - 0xe0);
  undefined1 (&auStack_d0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x180 - 0xd0);
  undefined1 (&auStack_c0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x180 - 0xc0);
  undefined1 (&auStack_b0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x180 - 0xb0);
  undefined1 (&auStack_a0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x180 - 0xa0);
  undefined1 (&auStack_90)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x180 - 0x90);
  undefined1 (&auStack_80)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x180 - 0x80);
  undefined1 (&auStack_70)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x180 - 0x70);
  undefined1 (&auStack_60)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x180 - 0x60);
  undefined1 (&auStack_50)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x180 - 0x50);
  undefined1 (&auStack_40)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x180 - 0x40);
  undefined4 (&auStack_30)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0x180 - 0x30);
  pfVar11 = &local_180;
  iVar5 = *(int *)(this_ + 0x108);
  pfVar8 = (float *)(iVar5 + 0x3c);
  local_180 = *(float *)(this_ + 0x44) * *(float *)(iVar5 + 100) +
              *(float *)(this_ + 0x24) * *(float *)(iVar5 + 0x5c) +
              *(float *)(this_ + 0x34) * *(float *)(iVar5 + 0x60);
  local_17c = *(float *)(iVar5 + 0x60) * *(float *)(this_ + 0x38) +
              *(float *)(this_ + 0x48) * *(float *)(iVar5 + 100) +
              *(float *)(this_ + 0x28) * *(float *)(iVar5 + 0x5c);
  local_178 = *(float *)(iVar5 + 0x5c) * *(float *)(this_ + 0x2c) +
              *(float *)(this_ + 0x3c) * *(float *)(iVar5 + 0x60) +
              *(float *)(this_ + 0x4c) * *(float *)(iVar5 + 100);
  uVar1 = FUN_00401ec0(bea_arg(local_130), bea_arg(*(float *)(iVar5 + 0x4c) * *(float *)(this_ + 0x24) +
                       *(float *)(iVar5 + 0x54) * *(float *)(this_ + 0x44) +
                       *(float *)(this_ + 0x34) * *(float *)(iVar5 + 0x50)), bea_arg(*(float *)(iVar5 + 0x4c) * *(float *)(this_ + 0x28) +
                       *(float *)(iVar5 + 0x50) * *(float *)(this_ + 0x38) +
                       *(float *)(iVar5 + 0x54) * *(float *)(this_ + 0x48)), bea_arg(*(float *)(iVar5 + 0x4c) * *(float *)(this_ + 0x2c) +
                       *(float *)(this_ + 0x3c) * *(float *)(iVar5 + 0x50) +
                       *(float *)(this_ + 0x4c) * *(float *)(iVar5 + 0x54)));
  uVar2 = FUN_00401ec0(bea_arg(local_140), bea_arg(*(float *)(iVar5 + 0x44) * *(float *)(this_ + 0x44) +
                       *(float *)(this_ + 0x24) * *pfVar8 +
                       *(float *)(this_ + 0x34) * *(float *)(iVar5 + 0x40)), bea_arg(*pfVar8 * *(float *)(this_ + 0x28) +
                       *(float *)(iVar5 + 0x40) * *(float *)(this_ + 0x38) +
                       *(float *)(iVar5 + 0x44) * *(float *)(this_ + 0x48)), bea_arg(*pfVar8 * *(float *)(this_ + 0x2c) +
                       *(float *)(this_ + 0x3c) * *(float *)(iVar5 + 0x40) +
                       *(float *)(this_ + 0x4c) * *(float *)(iVar5 + 0x44)));
  FUN_00401f10(bea_arg(local_f0), bea_arg(uVar2), bea_arg(uVar1), bea_arg(pfVar11));
  pCVar6 = this_ + 0x54;
  puVar10 = local_170;
  this_00 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x108), 0x7c, local_120);
  FUN_0040d320(bea_arg(this_00), bea_arg(puVar10), bea_arg(pCVar6));
  uVar1 = DAT_008a9e44;
  uVar2 = FUN_0040d120(bea_arg(auStack_d0), bea_arg(local_140), bea_arg(auStack_150));
  uVar3 = FUN_0040d120(bea_arg(auStack_e0), bea_arg(local_130), bea_arg(auStack_160));
  uVar4 = FUN_0040d120(bea_arg(local_f0), bea_arg(&local_180), bea_arg(local_170));
  FUN_00401f10(bea_arg(auStack_c0), bea_arg(uVar4), bea_arg(uVar3), bea_arg(uVar2));
  uVar2 = FUN_0040d150(bea_arg(auStack_a0), bea_arg(auStack_70), bea_arg(uVar1));
  uVar3 = FUN_0040d150(bea_arg(auStack_b0), bea_arg(auStack_60), bea_arg(uVar1));
  uVar1 = FUN_0040d150(bea_arg(auStack_c0), bea_arg(auStack_80), bea_arg(uVar1));
  FUN_00401f10(bea_arg(local_120), bea_arg(uVar1), bea_arg(uVar3), bea_arg(uVar2));
  uVar1 = FUN_00401ee0(bea_arg(auStack_150), bea_arg(auStack_90), bea_arg(auStack_100));
  uVar2 = FUN_00401ee0(bea_arg(auStack_160), bea_arg(auStack_50), bea_arg(auStack_110));
  uVar3 = FUN_00401ee0(bea_arg(local_170), bea_arg(auStack_40), bea_arg(local_120));
  FUN_00401f10(bea_arg(auStack_30), bea_arg(uVar3), bea_arg(uVar2), bea_arg(uVar1));
  FUN_00425760(bea_arg(auStack_30));
  puVar7 = auStack_30;
  puVar9 = param_1;
  for (iVar5 = 0xc; BEA_LOOP_GUARD((iVar5 != 0)); iVar5 = iVar5 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  return (undefined4 *)(param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004254f0, ap_004254f0));
