// auto-ported from 00410c50_FUN_00410c50.c (FUN_00410c50, 2171 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x90: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char fStack_48;
typedef char fStack_4c;
typedef char fStack_50;
typedef char fStack_64;
typedef char fStack_70;
typedef char fStack_74;
typedef char fStack_78;
typedef char fStack_88;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
typedef uint32_t (BEA_THISCALL* FUN_0040a580_t)(uint32_t);
static const bea_guard<FUN_0040a580_t> FUN_0040a580 = {(FUN_0040a580_t)0x0040a580};
typedef uint32_t (BEA_THISCALL* FUN_0040ef20_t)(uint32_t);
static const bea_guard<FUN_0040ef20_t> FUN_0040ef20 = {(FUN_0040ef20_t)0x0040ef20};
typedef uint32_t (BEA_THISCALL* FUN_00411500_t)(uint32_t);
static const bea_guard<FUN_00411500_t> FUN_00411500 = {(FUN_00411500_t)0x00411500};
typedef uint32_t (BEA_THISCALL* FUN_00411630_t)(uint32_t);
static const bea_guard<FUN_00411630_t> FUN_00411630 = {(FUN_00411630_t)0x00411630};
typedef float10 (BEA_THISCALL* FUN_00411aa0_t)(uint32_t);
static const bea_guard<FUN_00411aa0_t> FUN_00411aa0 = {(FUN_00411aa0_t)0x00411aa0};
typedef void * (BEA_THISCALL* FUN_0044adb0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044adb0_t> FUN_0044adb0 = {(FUN_0044adb0_t)0x0044adb0};
typedef uint32_t (BEA_THISCALL* FUN_005078f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005078f0_t> FUN_005078f0 = {(FUN_005078f0_t)0x005078f0};

static uint32_t BEA_THISCALL ap_00410c50(void * this_)
{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  void *pvVar6;
  int iVar7;
  float *pfVar8;
  undefined4 *puVar9;
  int iVar10;
  float *pfVar11;
  float10 fVar12;
  float10 fVar13;
  alignas(16) uint8_t bea_frame_[0x90] = {};   // the original stack frame (emulate_frame)
  float &local_8c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x8c);
  float &fStack_88 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x88);
  float &fStack_84 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x84);
  float &fStack_7c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x7c);
  float &fStack_78 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x78);
  float &fStack_74 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x74);
  float &fStack_70 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x70);
  undefined4 &uStack_6c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x6c);
  float &fStack_68 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x68);
  float &fStack_64 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x64);
  float &fStack_60 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x60);
  float &fStack_58 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x58);
  float &fStack_54 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x54);
  float &fStack_50 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x50);
  float &fStack_4c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x4c);
  float &fStack_48 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x48);
  float &fStack_40 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x40);
  float &fStack_3c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x3c);
  float &fStack_38 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x38);
  undefined4 &uStack_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x90 - 0x34);
  float (&afStack_30)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0x90 - 0x30);
  float &fStack_20 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x20);
  float &fStack_1c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x1c);
  float &fStack_18 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x18);
  float &fStack_10 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x10);
  float &fStack_c = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0xc);
  float &fStack_8 = *reinterpret_cast<float *>(bea_frame_ + 0x90 - 0x8);
  iVar7 = *(int *)(*(int *)((int)this_ + 0x18) + 0x574);
  if (iVar7 != 0) {
    piVar1 = (int *)(iVar7 + 0x40);
    *piVar1 = *piVar1 + 1;
  }
  puVar9 = *(undefined4 **)this_;
  *(undefined4 **)((int)this_ + 8) = puVar9;
  if (puVar9 == (undefined4 *)0x0) {
    pvVar6 = (void *)0x0;
  }
  else {
    pvVar6 = (void *)*puVar9;
  }
  while (BEA_LOOP_GUARD((pvVar6 != (void *)0x0))) {
    FUN_005078f0(bea_arg(pvVar6), bea_arg(1));
    puVar9 = *(undefined4 **)(*(int *)((int)this_ + 8) + 4);
    *(undefined4 **)((int)this_ + 8) = puVar9;
    if (puVar9 == (undefined4 *)0x0) {
      pvVar6 = (void *)0x0;
    }
    else {
      pvVar6 = (void *)*puVar9;
    }
  }
  iVar7 = *(int *)((int)this_ + 0x18);
  if ((*(int *)(iVar7 + 0x160) == 0) && (*(float *)(iVar7 + 0xfc) != 0.0f)) {
    fVar2 = *(float *)(*(int *)(iVar7 + 0x4b0) + 0xc);
    *(float *)(iVar7 + 0xfc) =
         *(float *)(iVar7 + 0xfc) -
         ((*(float *)(*(int *)(iVar7 + 0x4b0) + 8) - fVar2) * *(float *)((int)this_ + 0x20) + fVar2);
    if (*(float *)(*(int *)((int)this_ + 0x18) + 0xfc) < 0.0f) {
      *(undefined4 *)(*(int *)((int)this_ + 0x18) + 0xfc) = 0;
    }
  }
  iVar7 = *(int *)((int)this_ + 0x18);
  if (*(float *)(iVar7 + 0xfc) == 0.0f) {
    *(undefined4 *)(iVar7 + 0x630) = 2;
  }
  else if (*(float *)((int)this_ + 0x20) <= 0.75f) {
    *(undefined4 *)(iVar7 + 0x630) = 1;
  }
  else {
    *(undefined4 *)(iVar7 + 0x630) = 0;
  }
  if ((bea_fcast<float>((*(int **)((int)this_ + 0x18))[0x3f]) == 0.0f) ||
     (iVar7 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x18), 0x10c), iVar7 != 0)) {
    pfVar8 = (float *)bea_vcall<uint32_t>(*(int **)((int)this_ + 0x18), 0x6c, &local_8c);
    fStack_48 = pfVar8[2] * 0.95f;
    fStack_4c = pfVar8[1] * 0.95f;
    fStack_50 = *pfVar8 * 0.95f;
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x18), 0x70, &fStack_50);
    piVar1 = *(int **)((int)this_ + 0x18);
    fVar2 = SQRT(fStack_4c * fStack_4c + fStack_50 * fStack_50 + fStack_48 * fStack_48);
    local_8c = fVar2 * bea_fcast<float>(piVar1[0x10]);
    fStack_88 = fVar2 * bea_fcast<float>(piVar1[0x14]);
    fStack_68 = local_8c * 0.05f;
    fStack_64 = fStack_88 * 0.05f;
    fStack_60 = fVar2 * bea_fcast<float>(piVar1[0x18]) * 0.05f;
    bea_vcall<uint32_t>(piVar1, 0x74, &fStack_68);
    goto LAB_0041114e;
  }
  pvVar6 = *(void **)((int)this_ + 0x18);
  if (DAT_00672fd0 <= *(float *)((int)pvVar6 + 0x520) + 2.5f) {
LAB_00410e00:
    *(undefined4 *)((int)pvVar6 + 0x304) = 0;
  }
  else {
    bVar5 = 0.0225f <= *(float *)((int)pvVar6 + 0x84) * *(float *)((int)pvVar6 + 0x84) +
                      *(float *)((int)pvVar6 + 0x80) * *(float *)((int)pvVar6 + 0x80) +
                      *(float *)((int)pvVar6 + 0x7c) * *(float *)((int)pvVar6 + 0x7c);
    if (*(int *)((int)pvVar6 + 0x304) == 0) {
      if (!bVar5) {
        *(undefined4 *)((int)pvVar6 + 0x304) = 1;
        *(float *)(*(int *)((int)this_ + 0x18) + 0x308) = DAT_00672fd0;
      }
    }
    else {
      if (bVar5) goto LAB_00410e00;
      if (*(float *)((int)pvVar6 + 0x308) + 2.5f < DAT_00672fd0) {
        FUN_0040a580(bea_arg(pvVar6));
      }
    }
  }
  FUN_00411630(bea_arg(this_));
  if ((*(int *)((int)this_ + 0x2c) == 0) && (*(float *)((int)this_ + 0x48) == 0.0f)) {
    pfVar8 = (float *)(*(int **)((int)this_ + 0x18))[300];
    fVar2 = pfVar8[1];
    fVar3 = *pfVar8;
    fVar4 = *(float *)((int)this_ + 0x20);
    pfVar8 = (float *)bea_vcall<uint32_t>(*(int **)((int)this_ + 0x18), 0x6c, &local_8c);
    piVar1 = *(int **)((int)this_ + 0x18);
    fStack_64 = (((fVar3 - fVar2) * fVar4 + fVar2) -
                SQRT(pfVar8[2] * pfVar8[2] + pfVar8[1] * pfVar8[1] + *pfVar8 * *pfVar8)) * 0.04f;
    fStack_38 = fStack_64 * bea_fcast<float>(piVar1[0x18]);
    fStack_3c = fStack_64 * bea_fcast<float>(piVar1[0x14]);
    fStack_40 = fStack_64 * bea_fcast<float>(piVar1[0x10]);
    bea_vcall<uint32_t>(piVar1, 0x74, &fStack_40);
  }
  *(undefined4 *)((int)this_ + 0x20) = 0x3f000000;
  if (*(float *)((int)this_ + 0x48) == 0.0f) {
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x18), 0x6c, &fStack_50);
    iVar7 = *(int *)((int)this_ + 0x18);
    fStack_70 = SQRT(fStack_48 * fStack_48 + fStack_4c * fStack_4c + fStack_50 * fStack_50);
    fStack_78 = fStack_70 * *(float *)(iVar7 + 0x40);
    fStack_74 = fStack_70 * *(float *)(iVar7 + 0x50);
    fStack_70 = fStack_70 * *(float *)(iVar7 + 0x60);
    if (*(float *)(iVar7 + 0x520) + 2.5f <= DAT_00672fd0) {
      if (DAT_00672fd0 < *(float *)((int)this_ + 0x50) + 4.0f) {
        fVar2 = (DAT_00672fd0 - *(float *)((int)this_ + 0x50)) * 0.25f;
        fStack_68 = fStack_78 * fVar2;
        fStack_64 = fStack_74 * fVar2;
        fStack_60 = fStack_70 * fVar2;
        fVar2 = 1.0f - fVar2;
        local_8c = fVar2 * fStack_50;
        fStack_88 = fStack_4c * fVar2;
        fStack_78 = local_8c + fStack_68;
        fStack_74 = fStack_88 + fStack_64;
        uStack_6c = uStack_34;
        fStack_70 = fVar2 * fStack_48 + fStack_60;
        fStack_40 = fStack_78;
        fStack_3c = fStack_74;
        fStack_38 = fStack_70;
      }
    }
    else {
      fVar2 = (DAT_00672fd0 - *(float *)(iVar7 + 0x520)) * 0.4f;
      fStack_68 = fStack_78 * fVar2;
      fStack_64 = fStack_74 * fVar2;
      fStack_60 = fStack_70 * fVar2;
      fVar2 = 1.0f - fVar2;
      local_8c = fVar2 * fStack_50;
      fStack_88 = fStack_4c * fVar2;
      fStack_78 = local_8c + fStack_68;
      fStack_74 = fStack_88 + fStack_64;
      uStack_6c = uStack_34;
      fStack_70 = fVar2 * fStack_48 + fStack_60;
      fStack_40 = fStack_78;
      fStack_3c = fStack_74;
      fStack_38 = fStack_70;
    }
    fVar12 = bea_fcast<float10>(FUN_00411aa0(bea_arg(this_)));
    local_8c = bea_fcast<float>((fVar12 * bea_fcast<float10>(fStack_78)));
    fStack_88 = bea_fcast<float>((bea_fcast<float10>(fStack_74) * fVar12));
    fStack_84 = bea_fcast<float>((bea_fcast<float10>(fStack_70) * fVar12));
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x18), 0x70, &local_8c);
  }
  *(undefined4 *)((int)this_ + 0x14) = 0;
LAB_0041114e:
  iVar7 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x18), 0x10c);
  if (((iVar7 != 0) &&
      (pfVar8 = (float *)bea_vcall<uint32_t>(*(int **)((int)this_ + 0x18), 0x6c, &local_8c),
      pfVar8[2] * pfVar8[2] + pfVar8[1] * pfVar8[1] + *pfVar8 * *pfVar8 < 0.010000001f)) &&
     (*(float *)((int)this_ + 0x14) == 0.0f)) {
    *(float *)((int)this_ + 0x14) = DAT_00672fd0 + 2.5f;
  }
  if ((bea_fcast<float>((*(int **)((int)this_ + 0x18))[0x148]) + 1.0f <= DAT_00672fd0) &&
     (((*(float *)((int)this_ + 0x14) < DAT_00672fd0 && (*(float *)((int)this_ + 0x14) != 0.0f)) ||
      (pfVar8 = (float *)bea_vcall<uint32_t>(*(int **)((int)this_ + 0x18), 0x6c, &local_8c),
      pfVar8[2] * pfVar8[2] + pfVar8[1] * pfVar8[1] + *pfVar8 * *pfVar8 < 0.00062500004f)))) {
    FUN_0040a580(bea_arg(*(void **)((int)this_ + 0x18)));
  }
  if (0.0f < *(float *)((int)this_ + 0x48)) {
    if (*(float *)((int)this_ + 0x48) < 10.0f) {
      pfVar8 = (float *)bea_vcall<uint32_t>(*(int **)((int)this_ + 0x18), 0x6c, &fStack_68);
      fStack_84 = pfVar8[2] * 0.9f;
      fStack_88 = pfVar8[1] * 0.9f;
      local_8c = *pfVar8 * 0.9f;
      bea_vcall<uint32_t>(*(int **)((int)this_ + 0x18), 0x70, &local_8c);
    }
    fVar2 = *(float *)(*(int *)((int)this_ + 0x18) + 0x27c);
    if (*(int *)((int)this_ + 0x4c) == 1) {
      fVar2 = fVar2 + 0.05f;
    }
    else {
      fVar2 = fVar2 - 0.05f;
    }
    *(float *)(*(int *)((int)this_ + 0x18) + 0x27c) = fVar2;
    fVar2 = *(float *)((int)this_ + 0x48) - 1.0f;
    *(float *)((int)this_ + 0x48) = fVar2;
    if (fVar2 == 0.0f) {
      if (*(int *)((int)this_ + 0x34) != 0) {
        puVar9 = (undefined4 *)FUN_0044adb0(bea_arg(&fStack_78), bea_arg(*(int *)((int)this_ + 0x18) + 0x3c));
        iVar7 = *(int *)((int)this_ + 0x18);
        *(undefined4 *)(iVar7 + 0x114) = *puVar9;
        *(undefined4 *)(iVar7 + 0x118) = puVar9[1];
        *(undefined4 *)(iVar7 + 0x11c) = puVar9[2];
        iVar7 = *(int *)((int)this_ + 0x18);
        fVar12 = bea_fcast<float10>(fcos(bea_fcast<float10>(*(float *)(iVar7 + 0x4c4))));
        fVar2 = bea_fcast<float>((fVar12 * bea_fcast<float10>(*(float *)(iVar7 + 0x4c0)) +
                       bea_fcast<float10>(*(float *)(iVar7 + 0x11c))));
        fVar3 = bea_fcast<float>((fVar12 * bea_fcast<float10>(*(float *)(iVar7 + 0x4bc)) +
                       bea_fcast<float10>(*(float *)(iVar7 + 0x118))));
        fVar12 = fVar12 * bea_fcast<float10>(*(float *)(iVar7 + 0x4b8)) + bea_fcast<float10>(*(float *)(iVar7 + 0x114));
        fVar13 = bea_fcast<float10>(fcos(fVar12));
        fStack_7c = bea_fcast<float>(fVar13);
        fVar12 = bea_fcast<float10>(fsin(fVar12));
        fVar13 = bea_fcast<float10>(fcos(bea_fcast<float10>(fVar2)));
        fStack_54 = bea_fcast<float>(fVar13);
        fVar13 = bea_fcast<float10>(fsin(bea_fcast<float10>(fVar2)));
        fStack_58 = bea_fcast<float>(fVar13);
        fVar13 = bea_fcast<float10>(fcos(bea_fcast<float10>(fVar3)));
        fVar2 = bea_fcast<float>(fVar13);
        fVar13 = bea_fcast<float10>(fsin(bea_fcast<float10>(fVar3)));
        afStack_30[0] =
             bea_fcast<float>((bea_fcast<float10>(fStack_54) * bea_fcast<float10>(fStack_7c) - fVar13 * bea_fcast<float10>(fStack_58) * fVar12))
        ;
        afStack_30[1] = bea_fcast<float>(-(bea_fcast<float10>(fVar2) * fVar12));
        afStack_30[2] =
             bea_fcast<float>((bea_fcast<float10>(fStack_58) * bea_fcast<float10>(fStack_7c) + fVar13 * bea_fcast<float10>(fStack_54) * fVar12))
        ;
        fStack_20 = bea_fcast<float>((bea_fcast<float10>(fStack_54) * fVar12 +
                           fVar13 * bea_fcast<float10>(fStack_58) * bea_fcast<float10>(fStack_7c)));
        fStack_1c = fVar2 * fStack_7c;
        fStack_18 = bea_fcast<float>((bea_fcast<float10>(fStack_58) * fVar12 -
                           bea_fcast<float10>(bea_fcast<float>((fVar13 * bea_fcast<float10>(fStack_54)))) * bea_fcast<float10>(fStack_7c)));
        fStack_10 = -(fVar2 * fStack_58);
        fStack_c = bea_fcast<float>(fVar13);
        fStack_8 = fVar2 * fStack_54;
        pfVar8 = afStack_30;
        pfVar11 = (float *)(iVar7 + 0x3c);
        for (iVar10 = 0xc; BEA_LOOP_GUARD((iVar10 != 0)); iVar10 = iVar10 + -1) {
          *pfVar11 = *pfVar8;
          pfVar8 = pfVar8 + 1;
          pfVar11 = pfVar11 + 1;
        }
        *(undefined4 *)((int)this_ + 0x34) = 0;
        *(undefined4 *)((int)this_ + 0x2c) = 0;
      }
      *(undefined4 *)((int)this_ + 0x4c) = 0;
    }
  }
  if ((*(int *)((int)this_ + 0x2c) != 0) && (*(float *)((int)this_ + 0x48) == 0.0f)) {
    *(float *)(*(int *)((int)this_ + 0x18) + 0x280) =
         *(float *)(*(int *)((int)this_ + 0x18) + 0x280) - 0.015f;
    fVar2 = *(float *)(*(int *)((int)this_ + 0x18) + 0x118);
    if (*(int *)((int)this_ + 0x30) == 0) {
      if ((fVar2 < -2.7415926f) &&
         (*(undefined4 *)((int)this_ + 0x30) = 1, *(int *)((int)this_ + 0x34) != 0)) {
        *(undefined4 *)((int)this_ + 0x48) = 0x41500000;
      }
    }
    else if ((fVar2 < 0.4f) && (-1.5707964f < *(float *)(*(int *)((int)this_ + 0x18) + 0x118))) {
      *(undefined4 *)((int)this_ + 0x2c) = 0;
    }
  }
  *(undefined4 *)(*(int *)((int)this_ + 0x18) + 0x100) = 0;
  FUN_0040ef20(bea_arg(*(void **)((int)this_ + 0x18)));
  return FUN_00411500(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00410c50, ap_00410c50));
