// auto-ported from 004b5330_FUN_004b5330.c (FUN_004b5330, 1942 bytes) by tools/autoport.py
// @hand-fixed 2026-10-28 check_fild: fStack_15c = (float)uStack_14c is a bit copy of an undefined4 slot (bea_fcast), not an int->float conversion
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x180: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char Mat34;
typedef char Vec3;
typedef char fStack_11c;
typedef char fStack_120;
typedef char fStack_124;
typedef char fStack_12c;
typedef char fStack_130;
typedef char fStack_134;
typedef char fStack_160;
typedef char fStack_164;
typedef char fStack_168;
typedef char fStack_a8;
typedef char fStack_ac;
typedef char fStack_b0;
typedef char fStack_b8;
typedef char fStack_bc;
typedef char fStack_c0;
typedef char uStack_158;
#define DAT_00704e5c GLOBAL_AT(int, 0x00704e5c)
#define DAT_00704e58 GLOBAL_AT(int, 0x00704e58)
#define s_Warning___got_null_animmode_in_m_00630138 ((char*)0x00630138)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
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
typedef uint32_t (BEA_THISCALL* FUN_0041ad10_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0041ad10_t> FUN_0041ad10 = {(FUN_0041ad10_t)0x0041ad10};
typedef float10 (BEA_THISCALL* FUN_004b0fb0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004b0fb0_t> FUN_004b0fb0 = {(FUN_004b0fb0_t)0x004b0fb0};
typedef float10 (BEA_CDECL* FUN_0055dfe7_t)(double);
static const bea_guard<FUN_0055dfe7_t> FUN_0055dfe7 = {(FUN_0055dfe7_t)0x0055dfe7};

static void BEA_CDECL ap_004b5330(int *param_1, float *param_2, float *param_3, int param_4, int *param_5, undefined4 *param_6)
{
  byte bVar1;
  int *piVar2;
  int iVar3;
  float *pfVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  void *pvVar11;
  float10 extraout_ST0;
  float10 fVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;

  alignas(16) uint8_t bea_frame_[0x180] = {};   // the original stack frame (emulate_frame)
  float &local_174 = *reinterpret_cast<float *>(bea_frame_ + 0x180 - 0x174);
  float &fStack_170 = *reinterpret_cast<float *>(bea_frame_ + 0x180 - 0x170);
  int &iStack_16c = *reinterpret_cast<int *>(bea_frame_ + 0x180 - 0x16c);
  float &fStack_168 = *reinterpret_cast<float *>(bea_frame_ + 0x180 - 0x168);
  float &fStack_164 = *reinterpret_cast<float *>(bea_frame_ + 0x180 - 0x164);
  float &fStack_160 = *reinterpret_cast<float *>(bea_frame_ + 0x180 - 0x160);
  float &fStack_15c = *reinterpret_cast<float *>(bea_frame_ + 0x180 - 0x15c);
  undefined8 &uStack_158 = *reinterpret_cast<undefined8 *>(bea_frame_ + 0x180 - 0x158);
  float &fStack_150 = *reinterpret_cast<float *>(bea_frame_ + 0x180 - 0x150);
  undefined4 &uStack_14c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x180 - 0x14c);
  int * &local_148 = *reinterpret_cast<int * *>(bea_frame_ + 0x180 - 0x148);
  float (&afStack_144)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0x180 - 0x144);
  float &fStack_134 = *reinterpret_cast<float *>(bea_frame_ + 0x180 - 0x134);
  float &fStack_130 = *reinterpret_cast<float *>(bea_frame_ + 0x180 - 0x130);
  float &fStack_12c = *reinterpret_cast<float *>(bea_frame_ + 0x180 - 0x12c);
  float &fStack_124 = *reinterpret_cast<float *>(bea_frame_ + 0x180 - 0x124);
  float &fStack_120 = *reinterpret_cast<float *>(bea_frame_ + 0x180 - 0x120);
  float &fStack_11c = *reinterpret_cast<float *>(bea_frame_ + 0x180 - 0x11c);
  undefined1 (&auStack_114)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x180 - 0x114);
  float &fStack_110 = *reinterpret_cast<float *>(bea_frame_ + 0x180 - 0x110);
  float &fStack_10c = *reinterpret_cast<float *>(bea_frame_ + 0x180 - 0x10c);
  byte &bStack_104 = *reinterpret_cast<byte *>(bea_frame_ + 0x180 - 0x104);
  undefined3 &uStack_103 = *reinterpret_cast<undefined3 *>(bea_frame_ + 0x180 - 0x103);
  undefined1 (&auStack_100)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x180 - 0x100);
  float &fStack_f0 = *reinterpret_cast<float *>(bea_frame_ + 0x180 - 0xf0);
  float &fStack_ec = *reinterpret_cast<float *>(bea_frame_ + 0x180 - 0xec);
  float &fStack_e8 = *reinterpret_cast<float *>(bea_frame_ + 0x180 - 0xe8);
  float &fStack_e0 = *reinterpret_cast<float *>(bea_frame_ + 0x180 - 0xe0);
  float &fStack_dc = *reinterpret_cast<float *>(bea_frame_ + 0x180 - 0xdc);
  float &fStack_d8 = *reinterpret_cast<float *>(bea_frame_ + 0x180 - 0xd8);
  undefined1 (&auStack_d0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x180 - 0xd0);
  float &fStack_c0 = *reinterpret_cast<float *>(bea_frame_ + 0x180 - 0xc0);
  float &fStack_bc = *reinterpret_cast<float *>(bea_frame_ + 0x180 - 0xbc);
  float &fStack_b8 = *reinterpret_cast<float *>(bea_frame_ + 0x180 - 0xb8);
  float &fStack_b0 = *reinterpret_cast<float *>(bea_frame_ + 0x180 - 0xb0);
  float &fStack_ac = *reinterpret_cast<float *>(bea_frame_ + 0x180 - 0xac);
  float &fStack_a8 = *reinterpret_cast<float *>(bea_frame_ + 0x180 - 0xa8);
  undefined1 (&auStack_a0)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x180 - 0xa0);
  undefined1 (&auStack_90)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x180 - 0x90);
  undefined1 (&auStack_80)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x180 - 0x80);
  undefined1 (&auStack_70)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x180 - 0x70);
  undefined1 (&auStack_60)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x180 - 0x60);
  undefined1 (&auStack_50)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x180 - 0x50);
  undefined1 (&auStack_40)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x180 - 0x40);
  float (&afStack_30)[12] = *reinterpret_cast<float (*)[12]>(bea_frame_ + 0x180 - 0x30);
  local_148 = (int *)0x0;
  if (param_1 != (int *)0x0) {
    local_148 = (int *)bea_vcall<uint32_t>(param_1, 0x70);
  }
  piVar2 = local_148;
  iVar3 = -1;
  local_174 = 0.0;
  if (param_1 != (int *)0x0) {
    iVar3 = bea_vcall<uint32_t>(param_1, 0x1c);
  }
  if (((byte)*param_6 & 8) == 8) {
    iVar3 = DAT_00704e5c;
  }
  if (((*(int *)(param_4 + 0xb8) < 2) || (*(int *)(*(int *)(param_4 + 0x128) + 0x14) == 0)) ||
     (iVar3 < 0)) {
    if (piVar2 != (int *)0x0) {
      bea_vcall<uint32_t>(piVar2, 0x14, param_4,&local_174);
    }
    fVar12 = (float10)FUN_0055dfe7((double)local_174);
    uStack_158 = (longlong)ROUND(fVar12);
  }
  else {
    iVar3 = *(int *)(*(int *)(param_4 + 0x128) + 0x18) + iVar3 * 0x24;
    if (iVar3 == 0) {
      CRenderThing__vslot3(s_Warning___got_null_animmode_in_m_00630138);
      if (piVar2 != (int *)0x0) {
        bea_vcall<uint32_t>(piVar2, 0x14, param_4,&local_174);
      }
      fVar12 = (float10)FUN_0055dfe7((double)local_174);
      uStack_158 = (longlong)ROUND(fVar12);
    }
    else {
      if (param_1 != (int *)0x0) {
        extraout_ST0 = (float10)bea_vcall<float10>(param_1, 0x18);
        fStack_170 = (float)extraout_ST0;
      }
      if (((byte)*param_6 & 8) == 8) {
        local_174 = bea_fcast<float>(DAT_00704e58);
      }
      local_174 = (float)*(int *)(iVar3 + 0x14) + (float)*(int *)(iVar3 + 0x1c) * local_174;
      if (piVar2 != (int *)0x0) {
        bea_vcall<uint32_t>(piVar2, 0x14, param_4,&local_174);
      }
      fVar12 = (float10)FUN_0055dfe7((double)local_174);
      uStack_158 = (longlong)ROUND(fVar12);
    }
  }
  iStack_16c = (uint)uStack_158;
  fVar12 = (float10)FUN_0055dfe7((double)local_174);
  fStack_170 = (float)((float10)local_174 - fVar12);
  if (*(int *)(param_4 + 0xb8) <= iStack_16c) {
    iStack_16c = *(int *)(param_4 + 0xb8) + -1;
  }
  if (piVar2 != (int *)0x0) {
    bea_vcall<uint32_t>(piVar2, 0xc, param_4,param_2,param_3,1);
  }
  iVar3 = 1;
  if (piVar2 != (int *)0x0) {
    iVar3 = bea_vcall<uint32_t>(piVar2, 0x24);
  }
  iVar8 = iStack_16c + 1;
  if (*(int *)(param_4 + 0xb8) <= iVar8) {
    if (iVar3 == 0) {
      iVar8 = *(int *)(param_4 + 0xb8) + -1;
    }
    else {
      iVar8 = 0;
    }
  }
  bVar1 = *(byte *)(*(int *)(param_4 + 0xc4) + iVar8);
  (*(uint32_t*)((char*)&uStack_158 + 0)) = (uint)*(byte *)(*(int *)(param_4 + 0xc4) + iStack_16c);
  *reinterpret_cast<uint *>(&bStack_104) = CONCAT31(uStack_103,bVar1);
  iVar3 = *(int *)(param_4 + 200);
  pfVar4 = (float *)((uint)bVar1 * 0x10 + iVar3);
  iVar8 = (uint)uStack_158 * 0x10;
  pfVar9 = (float *)(iVar3 + iVar8);
  iVar10 = (uint)uStack_158 * 0x30;
  fStack_110 = (pfVar4[1] - *(float *)(iVar3 + 4 + iVar8)) * fStack_170;
  fStack_10c = (pfVar4[2] - pfVar9[2]) * fStack_170;
  fStack_168 = (*pfVar4 - *(float *)(iVar3 + iVar8)) * fStack_170 + *pfVar9;
  fStack_164 = fStack_110 + pfVar9[1];
  uStack_158 = CONCAT44(fStack_164,fStack_168);
  fStack_160 = fStack_10c + pfVar9[2];
  fStack_15c = bea_fcast<float>(uStack_14c);
  pvVar11 = (void *)((uint)bVar1 * 0x30 + *(int *)(param_4 + 0x10c));
  iVar3 = iVar10 + *(int *)(param_4 + 0x10c);
  fStack_150 = fStack_160;
  FUN_00401ec0(bea_arg(auStack_114), bea_arg(*(float *)((int)pvVar11 + 0x20) - *(float *)(iVar3 + 0x20)), bea_arg(*(float *)((int)pvVar11 + 0x24) - *(float *)(iVar3 + 0x24)), bea_arg(*(float *)((int)pvVar11 + 0x28) - *(float *)(iVar3 + 0x28)));
  FUN_00401ec0(bea_arg(&uStack_158), bea_arg(*(float *)((int)pvVar11 + 0x10) - *(float *)(iVar3 + 0x10)), bea_arg(*(float *)((int)pvVar11 + 0x14) - *(float *)(iVar3 + 0x14)), bea_arg(*(float *)((int)pvVar11 + 0x18) - *(float *)(iVar3 + 0x18)));
  puVar15 = auStack_114;
  puVar13 = &uStack_158;
  uVar5 = FUN_0040d120(bea_arg(pvVar11), bea_arg(auStack_80), bea_arg(iVar3));
  FUN_00401f10(bea_arg(auStack_d0), bea_arg(uVar5), bea_arg(puVar13), bea_arg(puVar15));
  FUN_00401ec0(bea_arg(auStack_90), bea_arg(fStack_b0 * fStack_170), bea_arg(fStack_ac * fStack_170), bea_arg(fStack_a8 * fStack_170));
  FUN_00401ec0(bea_arg(auStack_a0), bea_arg(fStack_c0 * fStack_170), bea_arg(fStack_bc * fStack_170), bea_arg(fStack_b8 * fStack_170));
  puVar15 = auStack_90;
  puVar14 = auStack_a0;
  uVar5 = FUN_0040d150(bea_arg(auStack_d0), bea_arg(auStack_40), bea_arg(fStack_170));
  FUN_00401f10(bea_arg(auStack_100), bea_arg(uVar5), bea_arg(puVar14), bea_arg(puVar15));
  pvVar11 = (void *)(iVar10 + *(int *)(param_4 + 0x10c));
  FUN_00401ec0(bea_arg(auStack_70), bea_arg(fStack_e0 + *(float *)((int)pvVar11 + 0x20)), bea_arg(fStack_dc + *(float *)((int)pvVar11 + 0x24)), bea_arg(fStack_d8 + *(float *)((int)pvVar11 + 0x28)));
  FUN_00401ec0(bea_arg(auStack_50), bea_arg(fStack_f0 + *(float *)((int)pvVar11 + 0x10)), bea_arg(fStack_ec + *(float *)((int)pvVar11 + 0x14)), bea_arg(fStack_e8 + *(float *)((int)pvVar11 + 0x18)));
  puVar15 = auStack_70;
  puVar14 = auStack_50;
  uVar5 = FUN_00401ee0(bea_arg(pvVar11), bea_arg(auStack_60), bea_arg(auStack_100));
  FUN_00401f10(bea_arg(afStack_30), bea_arg(uVar5), bea_arg(puVar14), bea_arg(puVar15));
  pfVar4 = afStack_30;
  pfVar9 = afStack_144;
  for (iVar3 = 0xc; ((iVar3 != 0)); iVar3 = iVar3 + -1) {
    *pfVar9 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar9 = pfVar9 + 1;
  }
  if ((param_1 == (int *)0x0) ||
     (iVar3 = bea_vcall<uint32_t>(param_1, 0x38, *(undefined4 *)(param_4 + 0x88)), iVar3 != 0)) {
    fStack_110 = fStack_168 * param_3[4] + fStack_160 * param_3[6] + fStack_164 * param_3[5];
    fStack_10c = fStack_160 * param_3[10] + fStack_164 * param_3[9] + fStack_168 * param_3[8];
    *param_2 = fStack_164 * param_3[1] + fStack_160 * param_3[2] + fStack_168 * *param_3 + *param_2;
    param_2[1] = fStack_110 + param_2[1];
    param_2[2] = fStack_10c + param_2[2];
    uVar5 = FUN_00401ec0(bea_arg(auStack_60), bea_arg(fStack_124 * param_3[10] +
                         fStack_134 * param_3[9] + afStack_144[0] * param_3[8]), bea_arg(fStack_120 * param_3[10] +
                         fStack_130 * param_3[9] + afStack_144[1] * param_3[8]), bea_arg(fStack_11c * param_3[10] +
                         fStack_12c * param_3[9] + afStack_144[2] * param_3[8]));
    uVar6 = FUN_00401ec0(bea_arg(auStack_40), bea_arg(afStack_144[0] * param_3[4] +
                         fStack_124 * param_3[6] + fStack_134 * param_3[5]), bea_arg(fStack_120 * param_3[6] +
                         afStack_144[1] * param_3[4] + fStack_130 * param_3[5]), bea_arg(fStack_11c * param_3[6] +
                         afStack_144[2] * param_3[4] + fStack_12c * param_3[5]));
    uVar7 = FUN_00401ec0(bea_arg(auStack_80), bea_arg(fStack_134 * param_3[1] +
                         fStack_124 * param_3[2] + afStack_144[0] * *param_3), bea_arg(afStack_144[1] * *param_3 +
                         fStack_130 * param_3[1] + fStack_120 * param_3[2]), bea_arg(afStack_144[2] * *param_3 +
                         fStack_12c * param_3[1] + fStack_11c * param_3[2]));
    FUN_00401f10(bea_arg(afStack_30), bea_arg(uVar7), bea_arg(uVar6), bea_arg(uVar5));
    pfVar4 = afStack_30;
  }
  else {
    FUN_0041ad10(bea_arg(param_2), bea_arg(&fStack_168));
    pfVar4 = afStack_144;
  }
  piVar2 = local_148;
  pfVar9 = param_3;
  for (iVar3 = 0xc; ((iVar3 != 0)); iVar3 = iVar3 + -1) {
    *pfVar9 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar9 = pfVar9 + 1;
  }
  if (local_148 != (int *)0x0) {
    bea_vcall<uint32_t>(local_148, 0x10, param_4,param_2,param_3,1);
    bea_vcall<uint32_t>(piVar2, 0x18, param_4,param_6);
  }
  *param_5 = param_4;
  fStack_168 = *param_2;
  fStack_164 = param_2[1];
  fStack_160 = param_2[2];
  fStack_15c = param_2[3];
  pfVar4 = param_3;
  pfVar9 = afStack_144;
  for (iVar3 = 0xc; ((iVar3 != 0)); iVar3 = iVar3 + -1) {
    *pfVar9 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar9 = pfVar9 + 1;
  }
  if ((piVar2 != (int *)0x0) && (iVar3 = bea_vcall<uint32_t>(piVar2, 0x1c, param_4), iVar3 != 0)) {
    if (0 < iVar3) {
      do {
        iVar3 = iVar3 + -1;
        *param_5 = *(int *)(*param_5 + 0x9c);
      } while (((iVar3 != 0)));
    }
    iVar3 = iStack_16c + 1;
    iVar8 = *(int *)(*param_5 + 0xb8);
    if (iVar8 <= iVar3) {
      iVar3 = iVar8 + -1;
    }
    FUN_004b0fb0(bea_arg((void *)*param_5), bea_arg(iStack_16c), bea_arg(iVar3), bea_arg(fStack_170), bea_arg(param_1), bea_arg(afStack_144), bea_arg(&fStack_168), bea_arg(1), bea_arg(1), bea_arg(0))
    ;
  }
  *param_2 = fStack_168;
  param_2[1] = fStack_164;
  param_2[2] = fStack_160;
  param_2[3] = fStack_15c;
  pfVar4 = afStack_144;
  for (iVar3 = 0xc; ((iVar3 != 0)); iVar3 = iVar3 + -1) {
    *param_3 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    param_3 = param_3 + 1;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b5330, ap_004b5330));
