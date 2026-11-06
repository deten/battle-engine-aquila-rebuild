// auto-ported from 004f6560_vslot1_t8.c (CTree::vslot1_t8, 894 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x150: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CTree;
typedef char Mat34;
typedef char Vec3;
#define _DAT_0067a680 GLOBAL_AT(float, 0x0067a680)
#define DAT_008a9e44 GLOBAL_AT(int, 0x008a9e44)
#define DAT_008406b8 GLOBAL_AT(undefined4, 0x008406b8)
typedef Vec3* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef Vec3* (BEA_THISCALL* FUN_00401ee0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ee0_t> FUN_00401ee0 = {(FUN_00401ee0_t)0x00401ee0};
typedef Mat34* (BEA_THISCALL* FUN_00401f10_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401f10_t> FUN_00401f10 = {(FUN_00401f10_t)0x00401f10};
typedef uint32_t (BEA_THISCALL* FUN_00406d50_t)(uint32_t);
static const bea_guard<FUN_00406d50_t> FUN_00406d50 = {(FUN_00406d50_t)0x00406d50};
typedef Vec3* (BEA_THISCALL* FUN_00411a60_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00411a60_t> FUN_00411a60 = {(FUN_00411a60_t)0x00411a60};

static undefined4 * BEA_THISCALL ap_004f6560(CTree * this_, undefined4 *param_1)
{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  float *pfVar6;

  alignas(16) uint8_t bea_frame_[0x150] = {};   // the original stack frame (emulate_frame)
  float (&local_150)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0x150 - 0x150);
  undefined4 (&local_140)[4] = *reinterpret_cast<undefined4 (*)[4]>(bea_frame_ + 0x150 - 0x140);
  undefined4 &local_130 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x150 - 0x130);
  undefined4 &local_12c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x150 - 0x12c);
  undefined4 &local_128 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x150 - 0x128);
  undefined4 &local_124 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x150 - 0x124);
  undefined4 &local_120 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x150 - 0x120);
  undefined4 &local_11c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x150 - 0x11c);
  undefined4 &local_118 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x150 - 0x118);
  undefined4 &local_114 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x150 - 0x114);
  float &local_110 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x110);
  float &local_10c = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x10c);
  float &local_108 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x108);
  float &local_100 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x100);
  float &local_fc = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0xfc);
  float &local_f8 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0xf8);
  float &local_f0 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0xf0);
  float &local_ec = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0xec);
  float &local_e8 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0xe8);
  undefined1 (&local_e0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x150 - 0xe0);
  undefined1 (&local_d0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x150 - 0xd0);
  float &local_c0 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0xc0);
  float &local_bc = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0xbc);
  float &local_b8 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0xb8);
  float &local_b0 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0xb0);
  float &local_ac = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0xac);
  float &local_a8 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0xa8);
  undefined1 (&local_a0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x150 - 0xa0);
  undefined1 (&local_90)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x150 - 0x90);
  undefined1 (&local_80)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x150 - 0x80);
  undefined1 (&local_70)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x150 - 0x70);
  undefined1 (&local_60)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x150 - 0x60);
  undefined1 (&local_50)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x150 - 0x50);
  undefined1 (&local_40)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x150 - 0x40);
  undefined4 (&local_30)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0x150 - 0x30);
  if (*(int *)(this_ + 0x34) == 0) {
    local_150[0] = (float)(longlong)
                          ROUND(((float)((uint)(this_ + -8) >> 4 & 3) * 1.5707964f + _DAT_0067a680) *
                                32.0f);
    *(float *)(this_ + 0x38) = local_150[0];
    if ((int)local_150[0] < 0x20) {
      if ((int)local_150[0] < 0) {
        *(int *)(this_ + 0x38) =
             (1 - ((int)((int)local_150[0] + ((int)local_150[0] >> 0x1f & 0x1fU)) >> 5)) * 0x20 +
             (int)local_150[0];
      }
    }
    else {
      *(int *)(this_ + 0x38) =
           (int)local_150[0] +
           ((int)((int)local_150[0] + ((int)local_150[0] >> 0x1f & 0x1fU)) >> 5) * -0x20;
    }
    *(undefined4 *)(this_ + 0x34) = 1;
  }
  else {
    iVar3 = *(int *)(this_ + 0x40);
    if (iVar3 != 0) {
      local_150[0] = (float)DAT_008a9e44;
      FUN_00401ec0(bea_arg(local_80), bea_arg(*(float *)(iVar3 + 0x7c) - *(float *)(iVar3 + 0xac)), bea_arg(*(float *)(iVar3 + 0x80) - *(float *)(iVar3 + 0xb0)), bea_arg(*(float *)(iVar3 + 0x84) - *(float *)(iVar3 + 0xb4)));
      FUN_00401ec0(bea_arg(local_60), bea_arg(*(float *)(iVar3 + 0x6c) - *(float *)(iVar3 + 0x9c)), bea_arg(*(float *)(iVar3 + 0x70) - *(float *)(iVar3 + 0xa0)), bea_arg(*(float *)(iVar3 + 0x74) - *(float *)(iVar3 + 0xa4)));
      FUN_00401ec0(bea_arg(local_90), bea_arg(*(float *)(iVar3 + 0x5c) - *(float *)(iVar3 + 0x8c)), bea_arg(*(float *)(iVar3 + 0x60) - *(float *)(iVar3 + 0x90)), bea_arg(*(float *)(iVar3 + 100) - *(float *)(iVar3 + 0x94)));
      FUN_00401f10(bea_arg(&local_110), bea_arg(local_90), bea_arg(local_60), bea_arg(local_80));
      FUN_00401ec0(bea_arg(local_70), bea_arg(local_f0 * local_150[0]), bea_arg(local_ec * local_150[0]), bea_arg(local_e8 * local_150[0]))
      ;
      FUN_00401ec0(bea_arg(local_50), bea_arg(local_100 * local_150[0]), bea_arg(local_fc * local_150[0]), bea_arg(local_f8 * local_150[0]));
      FUN_00401ec0(bea_arg(local_a0), bea_arg(local_110 * local_150[0]), bea_arg(local_10c * local_150[0]), bea_arg(local_108 * local_150[0]));
      FUN_00401f10(bea_arg(local_d0), bea_arg(local_a0), bea_arg(local_50), bea_arg(local_70));
      iVar3 = *(int *)(this_ + 0x40);
      FUN_00401ec0(bea_arg(local_150), bea_arg(local_b0 + *(float *)(iVar3 + 0xac)), bea_arg(local_ac + *(float *)(iVar3 + 0xb0)), bea_arg(local_a8 + *(float *)(iVar3 + 0xb4)));
      FUN_00401ec0(bea_arg(local_40), bea_arg(local_c0 + *(float *)(iVar3 + 0x9c)), bea_arg(local_bc + *(float *)(iVar3 + 0xa0)), bea_arg(local_b8 + *(float *)(iVar3 + 0xa4)));
      pfVar6 = local_150;
      puVar5 = local_40;
      uVar1 = FUN_00401ee0(bea_arg((void *)(iVar3 + 0x8c)), bea_arg(local_e0), bea_arg(local_d0));
      FUN_00401f10(bea_arg(local_30), bea_arg(uVar1), bea_arg(puVar5), bea_arg(pfVar6));
      puVar2 = local_30;
      puVar4 = local_140;
      for (iVar3 = 0xc; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      FUN_00406d50(bea_arg(local_140));
      FUN_00406d50(bea_arg(&local_130));
      puVar2 = (undefined4 *)FUN_00411a60(bea_arg(local_140), bea_arg(local_e0), bea_arg(&local_130));
      local_120 = *puVar2;
      local_11c = puVar2[1];
      local_118 = puVar2[2];
      local_114 = puVar2[3];
      FUN_00406d50(bea_arg(&local_120));
      puVar2 = (undefined4 *)FUN_00411a60(bea_arg(&local_120), bea_arg(local_e0), bea_arg(local_140));
      local_130 = *puVar2;
      local_12c = puVar2[1];
      local_128 = puVar2[2];
      local_124 = puVar2[3];
      puVar2 = local_140;
      puVar4 = param_1;
      for (iVar3 = 0xc; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      return (undefined4 *)(param_1);
    }
  }
  puVar2 = &DAT_008406b8 + *(int *)(this_ + 0x38) * 0xc;
  puVar4 = param_1;
  for (iVar3 = 0xc; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  return (undefined4 *)(param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f6560, ap_004f6560));
