// auto-ported from 00428110_vslot66.c (CComponent::vslot66, 988 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x3e0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CComponent;
typedef char CUnit;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_008553f8 GLOBAL_AT(undefined4*, 0x008553f8)
#define DAT_006fbdfc GLOBAL_AT(float, 0x006fbdfc)
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
#define s_Deactivated_006248c8 ((char*)0x006248c8)
#define s_Gill_M_Claw_Hit_006248b8 ((char*)0x006248b8)
#define s_Activate_00623e14 ((char*)0x00623e14)
typedef uint32_t (BEA_THISCALL* CUnit__vslot66_t)(uint32_t);
static const bea_guard<CUnit__vslot66_t> CUnit__vslot66 = {(CUnit__vslot66_t)0x004fa8d0};
typedef uint32_t (BEA_THISCALL* CUnit__vslot88_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<CUnit__vslot88_t> CUnit__vslot88 = {(CUnit__vslot88_t)0x004fc4e0};
typedef int (BEA_THISCALL* FUN_00401fa0_t)(uint32_t);
static const bea_guard<FUN_00401fa0_t> FUN_00401fa0 = {(FUN_00401fa0_t)0x00401fa0};
typedef uint32_t (BEA_THISCALL* FUN_00428500_t)(uint32_t);
static const bea_guard<FUN_00428500_t> FUN_00428500 = {(FUN_00428500_t)0x00428500};
typedef uint32_t (BEA_THISCALL* FUN_0048dcf0_t)(uint32_t);
static const bea_guard<FUN_0048dcf0_t> FUN_0048dcf0 = {(FUN_0048dcf0_t)0x0048dcf0};
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};
typedef uint32_t (BEA_THISCALL* FUN_004fd230_t)(uint32_t);
static const bea_guard<FUN_004fd230_t> FUN_004fd230 = {(FUN_004fd230_t)0x004fd230};
typedef undefined4 * (BEA_CDECL* FUN_0050ff10_t)(uint32_t);
static const bea_guard<FUN_0050ff10_t> FUN_0050ff10 = {(FUN_0050ff10_t)0x0050ff10};

static void BEA_THISCALL ap_00428110(CComponent * this_)
{
  byte bVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  byte *pbVar8;
  bool bVar9;
  float10 fVar10;
  char *pcVar11;

  alignas(16) uint8_t bea_frame_[0x3e0] = {};   // the original stack frame (emulate_frame)
  undefined ** &ppuStack_3d8 = *reinterpret_cast<undefined ** *>(bea_frame_ + 0x3e0 - 0x3d8);
  undefined1 (&auStack_3d4)[8] = *reinterpret_cast<undefined1 (*)[8]>(bea_frame_ + 0x3e0 - 0x3d4);
  float &fStack_3cc = *reinterpret_cast<float *>(bea_frame_ + 0x3e0 - 0x3cc);
  undefined1 (&auStack_3c4)[140] = *reinterpret_cast<undefined1 (*)[140]>(bea_frame_ + 0x3e0 - 0x3c4);
  undefined4 &uStack_338 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x338);
  int &iStack_1c = *reinterpret_cast<int *>(bea_frame_ + 0x3e0 - 0x1c);
  undefined4 &uStack_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x18);
  undefined4 &uStack_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x14);
  undefined4 &uStack_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x10);
  undefined4 &uStack_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0xc);
  undefined4 &uStack_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x8);
  undefined4 &uStack_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x3e0 - 0x4);
  if ((((byte)this_[0x2c] & 4) != 0) && (*(int *)(*(int *)(this_ + 0x164) + 0x198) != 0)) {
    *(undefined4 *)(this_ + 0x130) = 0x3ba3d70a;
    *(float *)(this_ + 0x124) = *(float *)(this_ + 0x118) - 0.8f;
    fVar10 = (float10)bea_vcall<float10>(this_, 0xb4);
    *(float *)(this_ + 0x84) = (float)(fVar10 + (float10)*(float *)(this_ + 0x84));
    fVar10 = (float10)bea_vcall<float10>(this_, 0x124);
    *(float *)(this_ + 0x7c) = (float)(fVar10 * (float10)*(float *)(this_ + 0x7c));
    *(float *)(this_ + 0x80) = (float)(fVar10 * (float10)*(float *)(this_ + 0x80));
    *(float *)(this_ + 0x84) = (float)(fVar10 * (float10)*(float *)(this_ + 0x84));
    iVar3 = FUN_00401fa0(bea_arg(this_));
    if (iVar3 != 0) {
      *(float *)(this_ + 0x7c) = *(float *)(this_ + 0x7c) * 0.98f;
      *(float *)(this_ + 0x80) = *(float *)(this_ + 0x80) * 0.98f;
      *(float *)(this_ + 0x84) = *(float *)(this_ + 0x84) * 0.98f;
      *(undefined4 *)(this_ + 0x130) = 0;
    }
    iVar3 = 2;
    do {
      bea_vcall<uint32_t>(this_, 0x17c);
      iVar3 = iVar3 + -1;
    } while (BEA_LOOP_GUARD((iVar3 != 0)));
    if (*(float *)(this_ + 0xf8) < -*(float *)(*(int *)(this_ + 0x164) + 0xc0)) {
      FUN_004fd230(bea_arg(this_));
      bea_vcall<uint32_t>(this_, 0x38);
    }
  }
  if ((*(int *)(this_ + 0x214) == 0) || (*(int *)(*(int *)(this_ + 0x13c) + 0xc) == 0)) {
    if ((*(float *)(this_ + 0x268) + 2.0f < DAT_00672fd0) &&
       ((*(int *)(this_ + 0x264) != 1 && (*(int *)(this_ + 0x264) != 2)))) {
      pcVar11 = s_Deactivated_006248c8;
      pvVar4 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
      iVar3 = FUN_004aa630(bea_arg(pvVar4), bea_arg(pcVar11));
      if (iVar3 != -1) {
        bea_vcall<uint32_t>(this_, 0xf0, iVar3,1,0);
        *(undefined4 *)(this_ + 0x264) = 2;
      }
    }
  }
  else {
    if ((*(int *)(this_ + 0x264) != 0) && (*(int *)(this_ + 0x264) != 3)) {
      pcVar11 = s_Activate_00623e14;
      pvVar4 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
      iVar3 = FUN_004aa630(bea_arg(pvVar4), bea_arg(pcVar11));
      if (iVar3 != -1) {
        bea_vcall<uint32_t>(this_, 0xf0, iVar3,1,0);
        *(undefined4 *)(this_ + 0x264) = 3;
      }
    }
    if (*(int *)(*(int *)(this_ + 0x13c) + 0xc) != 0) {
      *(float *)(this_ + 0x268) = DAT_00672fd0;
    }
  }
  if (*(int *)(this_ + 700) != 0) {
    FUN_0048dcf0(bea_arg(&ppuStack_3d8));
    ppuStack_3d8 = ((void*)0x005d8c80);
    iStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_c = 0;
    uStack_4 = 0;
    uStack_8 = 0;
    CUnit__vslot88(bea_arg((CUnit *)this_), bea_arg(1), bea_arg(1), bea_arg(auStack_3d4), bea_arg(auStack_3c4));
    uStack_338 = *(undefined4 *)(this_ + 0x138);
    iVar3 = 0;
    piVar6 = (int *)*DAT_008553f8;
    DAT_008553f8[2] = (int)piVar6;
    if (piVar6 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar6;
    }
    while (BEA_LOOP_GUARD((iVar5 != 0))) {
      pbVar8 = *(byte **)(iVar5 + 0x30);
      pcVar11 = s_Gill_M_Claw_Hit_006248b8;
      do {
        bVar1 = *pcVar11;
        bVar9 = bVar1 < *pbVar8;
        if (bVar1 != *pbVar8) {
LAB_0042839a:
          iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_0042839f;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar11[1];
        bVar9 = bVar1 < pbVar8[1];
        if (bVar1 != pbVar8[1]) goto LAB_0042839a;
        pcVar11 = pcVar11 + 2;
        pbVar8 = pbVar8 + 2;
      } while (BEA_LOOP_GUARD((bVar1 != 0)));
      iVar5 = 0;
LAB_0042839f:
      if (iVar5 == 0) goto LAB_004283c4;
      iVar3 = iVar3 + 1;
      piVar6 = *(int **)(DAT_008553f8[2] + 4);
      DAT_008553f8[2] = (int)piVar6;
      if (piVar6 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar6;
      }
    }
    iVar3 = -1;
LAB_004283c4:
    piVar6 = (int *)FUN_0050ff10(bea_arg(iVar3));
    if (piVar6 != (int *)0x0) {
      piVar2 = (int *)*DAT_008553f8;
      DAT_008553f8[2] = (int)piVar2;
      if (piVar2 == (int *)0x0) {
        iStack_1c = 0;
      }
      else {
        iStack_1c = *piVar2;
      }
      while (BEA_LOOP_GUARD((iStack_1c != 0))) {
        pbVar8 = *(byte **)(iStack_1c + 0x30);
        pcVar11 = s_Gill_M_Claw_Hit_006248b8;
        do {
          bVar1 = *pcVar11;
          bVar9 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_0042842f:
            iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_00428434;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar11[1];
          bVar9 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_0042842f;
          pcVar11 = pcVar11 + 2;
          pbVar8 = pbVar8 + 2;
        } while (BEA_LOOP_GUARD((bVar1 != 0)));
        iVar3 = 0;
LAB_00428434:
        if (iVar3 == 0) goto LAB_00428461;
        piVar2 = *(int **)(DAT_008553f8[2] + 4);
        DAT_008553f8[2] = (int)piVar2;
        if (piVar2 == (int *)0x0) {
          iStack_1c = 0;
        }
        else {
          iStack_1c = *piVar2;
        }
      }
      iStack_1c = 0;
LAB_00428461:
      uStack_18 = 0;
      if (DAT_006fbdfc < fStack_3cc) {
        fStack_3cc = DAT_006fbdfc;
      }
      bea_vcall<uint32_t>(piVar6, 0x24, &ppuStack_3d8);
    }
  }
  CUnit__vslot66(bea_arg((CUnit *)this_));
  uVar7 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
  uVar7 = uVar7 & 0x8000ffff;
  if ((int)uVar7 < 0) {
    uVar7 = (uVar7 - 1 | 0xffff0000) + 1;
  }
  if (0.9f < (float)(int)uVar7 * 1.5258789e-05f) {
    FUN_00428500(bea_arg(this_));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00428110, ap_00428110));
