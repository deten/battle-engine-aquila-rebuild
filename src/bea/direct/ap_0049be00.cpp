// auto-ported from 0049be00_vslot4.c (CMCMech::vslot4, 976 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x150: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CMCMech;
typedef char Mat34;
typedef char Vec3;
#define DAT_008a9e44 GLOBAL_AT(float, 0x008a9e44)
typedef Vec3* (BEA_THISCALL* FUN_00401ee0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ee0_t> FUN_00401ee0 = {(FUN_00401ee0_t)0x00401ee0};
typedef Mat34* (BEA_THISCALL* FUN_00401f10_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401f10_t> FUN_00401f10 = {(FUN_00401f10_t)0x00401f10};
typedef uint32_t (BEA_THISCALL* FUN_00406d50_t)(uint32_t);
static const bea_guard<FUN_00406d50_t> FUN_00406d50 = {(FUN_00406d50_t)0x00406d50};
typedef Vec3* (BEA_THISCALL* FUN_0040d120_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d120_t> FUN_0040d120 = {(FUN_0040d120_t)0x0040d120};
typedef Vec3* (BEA_THISCALL* FUN_0040d150_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d150_t> FUN_0040d150 = {(FUN_0040d150_t)0x0040d150};
typedef Vec3* (BEA_THISCALL* FUN_0040d2c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d2c0_t> FUN_0040d2c0 = {(FUN_0040d2c0_t)0x0040d2c0};
typedef uint32_t (BEA_THISCALL* FUN_0040d320_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d320_t> FUN_0040d320 = {(FUN_0040d320_t)0x0040d320};
typedef Vec3* (BEA_THISCALL* FUN_00411a60_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00411a60_t> FUN_00411a60 = {(FUN_00411a60_t)0x00411a60};
typedef uint32_t (BEA_THISCALL* FUN_004988b0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004988b0_t> FUN_004988b0 = {(FUN_004988b0_t)0x004988b0};
typedef uint32_t (BEA_THISCALL* FUN_0049bbb0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0049bbb0_t> FUN_0049bbb0 = {(FUN_0049bbb0_t)0x0049bbb0};
typedef uint32_t (BEA_THISCALL* FUN_0049bc10_t)(uint32_t);
static const bea_guard<FUN_0049bc10_t> FUN_0049bc10 = {(FUN_0049bc10_t)0x0049bc10};
typedef float10 (BEA_THISCALL* FUN_0049bc40_t)(uint32_t);
static const bea_guard<FUN_0049bc40_t> FUN_0049bc40 = {(FUN_0049bc40_t)0x0049bc40};
typedef uint32_t (BEA_THISCALL* FUN_0049bc80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0049bc80_t> FUN_0049bc80 = {(FUN_0049bc80_t)0x0049bc80};

static void BEA_THISCALL ap_0049be00(CMCMech * this_, int param_1, float *param_2, undefined4 *param_3, undefined4 param_4)
{
  float fVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float *pfVar10;
  void *pvVar11;
  float10 fVar12;

  alignas(16) uint8_t bea_frame_[0x150] = {};   // the original stack frame (emulate_frame)
  float &local_150 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x150);
  float &local_14c = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x14c);
  float &local_148 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x148);
  float &local_144 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x144);
  float &local_140 = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x140);
  float &local_13c = *reinterpret_cast<float *>(bea_frame_ + 0x150 - 0x13c);
  undefined1 (&local_130)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x150 - 0x130);
  undefined4 (&local_120)[4] = *reinterpret_cast<undefined4 (*)[4]>(bea_frame_ + 0x150 - 0x120);
  undefined1 (&local_110)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x150 - 0x110);
  undefined1 (&local_100)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x150 - 0x100);
  undefined4 (&local_f0)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0x150 - 0xf0);
  undefined1 (&local_c0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x150 - 0xc0);
  undefined1 (&local_b0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x150 - 0xb0);
  undefined1 (&local_a0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x150 - 0xa0);
  undefined1 (&local_90)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x150 - 0x90);
  undefined1 (&local_80)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x150 - 0x80);
  undefined1 (&local_70)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x150 - 0x70);
  undefined1 (&local_60)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x150 - 0x60);
  undefined1 (&local_50)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x150 - 0x50);
  undefined1 (&local_40)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x150 - 0x40);
  undefined1 (&auStack_30)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0x150 - 0x30);
  if (*(int *)(this_ + 0x54) == 0) {
    FUN_004988b0(bea_arg(this_), bea_arg(1), bea_arg(0));
  }
  *(undefined4 *)(this_ + 0x50) = 1;
  *(undefined4 *)(this_ + 200) = 0;
  if (*(int *)(this_ + 0x44) != 0) {
    iVar3 = *(int *)(param_1 + 0x88);
    if (*(int *)(*(int *)(this_ + 0x44) + iVar3 * 4) == -0x40800000) {
      pfVar2 = (float *)(iVar3 * 0x10 + *(int *)(this_ + 0x34));
      *param_2 = *pfVar2;
      param_2[1] = pfVar2[1];
      param_2[2] = pfVar2[2];
      param_2[3] = pfVar2[3];
      puVar9 = (undefined4 *)(*(int *)(this_ + 0x30) + *(int *)(param_1 + 0x88) * 0x30);
      puVar8 = param_3;
      for (iVar3 = 0xc; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
        *puVar8 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    else {
      pfVar10 = (float *)(*(int *)(this_ + 0x34) + iVar3 * 0x10);
      pfVar2 = (float *)(iVar3 * 0x10 + *(int *)(this_ + 0x40));
      local_140 = (*pfVar10 - *pfVar2) * DAT_008a9e44;
      local_13c = (pfVar10[1] - pfVar2[1]) * DAT_008a9e44;
      local_150 = local_140 + *pfVar2;
      local_14c = local_13c + pfVar2[1];
      local_148 = DAT_008a9e44 * (pfVar10[2] - pfVar2[2]) + pfVar2[2];
      *param_2 = local_150;
      param_2[1] = local_14c;
      param_2[2] = local_148;
      param_2[3] = local_144;
      fVar1 = DAT_008a9e44;
      iVar3 = *(int *)(param_1 + 0x88) * 0x30;
      pvVar11 = (void *)(*(int *)(this_ + 0x30) + iVar3);
      iVar3 = iVar3 + *(int *)(this_ + 0x3c);
      uVar4 = FUN_0040d120(bea_arg((void *)((int)pvVar11 + 0x20)), bea_arg(&local_140), bea_arg(iVar3 + 0x20));
      uVar5 = FUN_0040d120(bea_arg((void *)((int)pvVar11 + 0x10)), bea_arg(&local_150), bea_arg(iVar3 + 0x10));
      uVar6 = FUN_0040d120(bea_arg(pvVar11), bea_arg(local_70), bea_arg(iVar3));
      FUN_00401f10(bea_arg(local_c0), bea_arg(uVar6), bea_arg(uVar5), bea_arg(uVar4));
      uVar4 = FUN_0040d150(bea_arg(local_a0), bea_arg(local_60), bea_arg(fVar1));
      uVar5 = FUN_0040d150(bea_arg(local_b0), bea_arg(local_80), bea_arg(fVar1));
      uVar6 = FUN_0040d150(bea_arg(local_c0), bea_arg(local_90), bea_arg(fVar1));
      FUN_00401f10(bea_arg(local_120), bea_arg(uVar6), bea_arg(uVar5), bea_arg(uVar4));
      pvVar11 = (void *)(*(int *)(param_1 + 0x88) * 0x30 + *(int *)(this_ + 0x3c));
      uVar4 = FUN_00401ee0(bea_arg((void *)((int)pvVar11 + 0x20)), bea_arg(local_50), bea_arg(local_100));
      uVar5 = FUN_00401ee0(bea_arg((void *)((int)pvVar11 + 0x10)), bea_arg(local_40), bea_arg(local_110));
      uVar6 = FUN_00401ee0(bea_arg(pvVar11), bea_arg(local_130), bea_arg(local_120));
      FUN_00401f10(bea_arg(local_f0), bea_arg(uVar6), bea_arg(uVar5), bea_arg(uVar4));
      puVar9 = local_f0;
      puVar8 = param_3;
      for (iVar3 = 0xc; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
        *puVar8 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar8 = puVar8 + 1;
      }
      FUN_00406d50(bea_arg(param_3));
      puVar9 = param_3 + 4;
      FUN_00406d50(bea_arg(puVar9));
      puVar8 = param_3 + 8;
      puVar7 = (undefined4 *)FUN_00411a60(bea_arg(param_3), bea_arg(local_130), bea_arg(puVar9));
      *puVar8 = *puVar7;
      param_3[9] = puVar7[1];
      param_3[10] = puVar7[2];
      param_3[0xb] = puVar7[3];
      FUN_00406d50(bea_arg(puVar8));
      puVar8 = (undefined4 *)FUN_00411a60(bea_arg(puVar8), bea_arg(local_130), bea_arg(param_3));
      *puVar9 = *puVar8;
      param_3[5] = puVar8[1];
      param_3[6] = puVar8[2];
      param_3[7] = puVar8[3];
    }
    if ((char)param_4 != '\0') {
      pfVar2 = (float *)bea_vcall<uint32_t>(*(undefined4 **)(this_ + 8), 0x0, local_130);
      *param_2 = *param_2 - *pfVar2;
      param_2[1] = param_2[1] - pfVar2[1];
      param_2[2] = param_2[2] - pfVar2[2];
      pvVar11 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x4, local_c0);
      FUN_0049bc80(bea_arg(pvVar11), bea_arg(local_120));
      FUN_0049bc10(bea_arg(local_120));
      fVar12 = bea_fcast<float10>(FUN_0049bc40(bea_arg(pvVar11)));
      FUN_0049bbb0(bea_arg(local_120), bea_arg(bea_fcast<float>(fVar12)));
      puVar9 = local_120;
      puVar8 = local_f0;
      for (iVar3 = 0xc; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
        *puVar8 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar8 = puVar8 + 1;
      }
      pfVar2 = (float *)FUN_0040d2c0(bea_arg(local_f0), bea_arg(local_130), bea_arg(param_2));
      *param_2 = *pfVar2;
      param_2[1] = pfVar2[1];
      param_2[2] = pfVar2[2];
      param_2[3] = pfVar2[3];
      pvVar11 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x4, local_c0);
      FUN_0049bc80(bea_arg(pvVar11), bea_arg(local_120));
      FUN_0049bc10(bea_arg(local_120));
      fVar12 = bea_fcast<float10>(FUN_0049bc40(bea_arg(pvVar11)));
      FUN_0049bbb0(bea_arg(local_120), bea_arg(bea_fcast<float>(fVar12)));
      puVar9 = local_120;
      puVar8 = local_f0;
      for (iVar3 = 0xc; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
        *puVar8 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar8 = puVar8 + 1;
      }
      puVar9 = (undefined4 *)FUN_0040d320(bea_arg(local_f0), bea_arg(auStack_30), bea_arg(param_3));
      for (iVar3 = 0xc; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
        *param_3 = *puVar9;
        puVar9 = puVar9 + 1;
        param_3 = param_3 + 1;
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0049be00, ap_0049be00));
