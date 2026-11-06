// auto-ported from 004f4920_vslot66.c (CThunderHead::vslot66, 996 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x410: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CMech;
typedef char CThunderHead;
#define DAT_00704200 GLOBAL_AT(int, 0x00704200)
#define DAT_008553f8 GLOBAL_AT(undefined4*, 0x008553f8)
#define s_Thunderhead_Flamethrower_00633264 ((char*)0x00633264)
typedef uint32_t (BEA_THISCALL* CMech__vslot66_t)(uint32_t);
static const bea_guard<CMech__vslot66_t> CMech__vslot66 = {(CMech__vslot66_t)0x0049fc10};
typedef f80 (BEA_THISCALL* FUN_004026b0_t)(uint32_t);
static const bea_guard<FUN_004026b0_t> FUN_004026b0 = {(FUN_004026b0_t)0x004026b0};
typedef uint32_t (BEA_THISCALL* FUN_0048dcf0_t)(uint32_t);
static const bea_guard<FUN_0048dcf0_t> FUN_0048dcf0 = {(FUN_0048dcf0_t)0x0048dcf0};
typedef int (BEA_THISCALL* FUN_00491ea0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00491ea0_t> FUN_00491ea0 = {(FUN_00491ea0_t)0x00491ea0};
typedef int (BEA_THISCALL* FUN_00492020_t)(uint32_t);
static const bea_guard<FUN_00492020_t> FUN_00492020 = {(FUN_00492020_t)0x00492020};
typedef int (BEA_THISCALL* FUN_00492c90_t)(uint32_t);
static const bea_guard<FUN_00492c90_t> FUN_00492c90 = {(FUN_00492c90_t)0x00492c90};
typedef uint32_t (BEA_THISCALL* FUN_004f3ac0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f3ac0_t> FUN_004f3ac0 = {(FUN_004f3ac0_t)0x004f3ac0};
typedef int (BEA_THISCALL* FUN_004fd3d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fd3d0_t> FUN_004fd3d0 = {(FUN_004fd3d0_t)0x004fd3d0};
typedef undefined4 (BEA_THISCALL* FUN_00506010_t)(uint32_t);
static const bea_guard<FUN_00506010_t> FUN_00506010 = {(FUN_00506010_t)0x00506010};
typedef float10 (BEA_THISCALL* FUN_005099a0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005099a0_t> FUN_005099a0 = {(FUN_005099a0_t)0x005099a0};
typedef undefined4 (BEA_THISCALL* FUN_00509f70_t)(uint32_t);
static const bea_guard<FUN_00509f70_t> FUN_00509f70 = {(FUN_00509f70_t)0x00509f70};
typedef undefined4 * (BEA_CDECL* FUN_0050ff10_t)(uint32_t);
static const bea_guard<FUN_0050ff10_t> FUN_0050ff10 = {(FUN_0050ff10_t)0x0050ff10};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};
#define _CIasin(a0) bea_x87call1(0x0055dcb0, (float10)(a0))

static void BEA_THISCALL ap_004f4920(CThunderHead * this_)
{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  bool bVar5;
  void *pvVar6;
  int iVar7;
  void *this_00;
  CThunderHead *pCVar8;
  int *piVar9;
  int iVar10;
  float10 fVar11;

  alignas(16) uint8_t bea_frame_[0x410] = {};   // the original stack frame (emulate_frame)
  float &fStack_408 = *reinterpret_cast<float *>(bea_frame_ + 0x410 - 0x408);
  float &fStack_404 = *reinterpret_cast<float *>(bea_frame_ + 0x410 - 0x404);
  float &fStack_400 = *reinterpret_cast<float *>(bea_frame_ + 0x410 - 0x400);
  undefined4 &uStack_3fc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x410 - 0x3fc);
  float &fStack_3f8 = *reinterpret_cast<float *>(bea_frame_ + 0x410 - 0x3f8);
  float &fStack_3f4 = *reinterpret_cast<float *>(bea_frame_ + 0x410 - 0x3f4);
  float &fStack_3f0 = *reinterpret_cast<float *>(bea_frame_ + 0x410 - 0x3f0);
  float &fStack_3e8 = *reinterpret_cast<float *>(bea_frame_ + 0x410 - 0x3e8);
  float &fStack_3e4 = *reinterpret_cast<float *>(bea_frame_ + 0x410 - 0x3e4);
  float &fStack_3e0 = *reinterpret_cast<float *>(bea_frame_ + 0x410 - 0x3e0);
  undefined ** &ppuStack_3d8 = *reinterpret_cast<undefined ** *>(bea_frame_ + 0x410 - 0x3d8);
  undefined4 &uStack_3d4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x410 - 0x3d4);
  undefined4 &uStack_3d0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x410 - 0x3d0);
  undefined4 &uStack_3cc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x410 - 0x3cc);
  undefined4 &uStack_3c8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x410 - 0x3c8);
  undefined4 &uStack_338 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x410 - 0x338);
  int &iStack_1c = *reinterpret_cast<int *>(bea_frame_ + 0x410 - 0x1c);
  undefined4 &uStack_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x410 - 0x18);
  // Hand-fixed 2026-10-27: a field of the message at &ppuStack_3d8, as in 0x49fc10
  CThunderHead * &pCStack_14 = *reinterpret_cast<CThunderHead * *>(bea_frame_ + 0x410 - 0x14);
  undefined4 &uStack_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x410 - 0x10);
  undefined4 &uStack_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x410 - 0xc);
  undefined4 &uStack_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x410 - 0x8);
  undefined4 &uStack_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x410 - 0x4);
  CMech__vslot66(bea_arg((CMech *)this_));
  *(undefined4 *)(this_ + 0x270) = 0;
  if (((byte)this_[0x2c] & 4) == 0) {
    puVar1 = *(undefined4 **)(this_ + 0x19c);
    bVar5 = false;
    if (puVar1 == (undefined4 *)0x0) {
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = (int *)*puVar1;
    }
    while (BEA_LOOP_GUARD((piVar9 != (int *)0x0))) {
      if (*piVar9 != 0) {
        bVar5 = true;
      }
      puVar1 = (undefined4 *)puVar1[1];
      if (puVar1 == (undefined4 *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        piVar9 = (int *)*puVar1;
      }
    }
    pvVar6 = (void *)bea_vcall<uint32_t>(this_, 0x144);
    if ((pvVar6 == (void *)0x0) || (!bVar5)) {
      *(undefined4 *)(this_ + 0x270) = 0;
    }
    else {
      FUN_004f3ac0(bea_arg(pvVar6), bea_arg(&fStack_3f8));
      FUN_004f3ac0(bea_arg(this_), bea_arg(&fStack_3e8));
      fStack_408 = fStack_3f8 - fStack_3e8;
      fStack_404 = fStack_3f4 - fStack_3e4;
      fStack_400 = fStack_3f0 - fStack_3e0;
      fVar11 = bea_fcast<float10>(FUN_004026b0(bea_arg(&fStack_408)));
      if (fVar11 <= bea_fcast<float10>(0.0f)) {
        fVar11 = bea_fcast<float10>(0.0f);
      }
      else {
        fVar11 = _CIasin(bea_fcast<float10>(fStack_400) / bea_fcast<float10>(bea_fcast<float>(fVar11)));
      }
      *(float *)(this_ + 0x270) = bea_fcast<float>(fVar11);
      if (fVar11 <= bea_fcast<float10>(0.3926991f)) {
        if (fVar11 < bea_fcast<float10>(-0.3926991f)) {
          *(undefined4 *)(this_ + 0x270) = 0xbec90fdb;
        }
      }
      else {
        *(undefined4 *)(this_ + 0x270) = 0x3ec90fdb;
      }
    }
    if (*(float *)(this_ + 0x26c) - 0.01f <= *(float *)(this_ + 0x270)) {
      if (*(float *)(this_ + 0x270) <= *(float *)(this_ + 0x26c) + 0.01f) {
        *(undefined4 *)(this_ + 0x26c) = *(undefined4 *)(this_ + 0x270);
      }
      else {
        *(float *)(this_ + 0x26c) = *(float *)(this_ + 0x26c) + 0.01f;
      }
    }
    else {
      *(float *)(this_ + 0x26c) = *(float *)(this_ + 0x26c) - 0.01f;
    }
    puVar1 = *(undefined4 **)(this_ + 0x17c);
    if (puVar1 == (undefined4 *)0x0) {
      pvVar6 = (void *)0x0;
    }
    else {
      pvVar6 = (void *)*puVar1;
    }
    while (BEA_LOOP_GUARD((pvVar6 != (void *)0x0))) {
      iVar7 = FUN_00568390(bea_arg(s_Thunderhead_Flamethrower_00633264), bea_arg(**(undefined4 **)((int)pvVar6 + 0xa4)));
      if (iVar7 == 0) {
        iVar7 = FUN_00509f70(bea_arg(pvVar6));
        if (iVar7 != 0) {
          fStack_408 = 0.0f;
          fStack_404 = 0.0f;
          fStack_400 = 0.0f;
          fVar11 = bea_fcast<float10>(FUN_005099a0(bea_arg(pvVar6), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(uStack_3fc)));
          this_00 = (void *)FUN_00491ea0(bea_arg(&DAT_00704200), bea_arg(*(float *)(this_ + 0x1c)), bea_arg(*(undefined4 *)(this_ + 0x20)), bea_arg(*(undefined4 *)(this_ + 0x24)), bea_arg(*(undefined4 *)(this_ + 0x28)), bea_arg(bea_fcast<float>(fVar11)));
          goto joined_r0x004f4b5a;
        }
        break;
      }
      puVar1 = (undefined4 *)puVar1[1];
      if (puVar1 == (undefined4 *)0x0) {
        pvVar6 = (void *)0x0;
      }
      else {
        pvVar6 = (void *)*puVar1;
      }
    }
  }
LAB_004f4bdd:
  iVar7 = *(int *)(this_ + 0x70);
  if (((iVar7 != 0) && (*(int *)(iVar7 + 0xd0) != 0)) &&
     (piVar9 = (int *)FUN_0050ff10(bea_arg(*(undefined4 *)(*(int *)(this_ + 0x164) + 0xf0))),
     piVar9 != (int *)0x0)) {
    FUN_0048dcf0(bea_arg(&ppuStack_3d8));
    ppuStack_3d8 = ((void*)0x005d8c80);
    uStack_3d4 = *(undefined4 *)(iVar7 + 0xd4);
    uStack_10 = 0;
    uStack_3d0 = *(undefined4 *)(iVar7 + 0xd8);
    uStack_c = 0;
    uStack_4 = 0;
    uStack_3cc = *(undefined4 *)(iVar7 + 0xdc);
    uStack_8 = 0;
    uStack_3c8 = *(undefined4 *)(iVar7 + 0xe0);
    uStack_338 = *(undefined4 *)(this_ + 0x138);
    iVar2 = *(int *)(*(int *)(this_ + 0x164) + 0xf0);
    piVar3 = (int *)*DAT_008553f8;
    iVar10 = 0;
    DAT_008553f8[2] = (int)piVar3;
    if (piVar3 == (int *)0x0) {
      iStack_1c = 0;
    }
    else {
      iStack_1c = *piVar3;
    }
    while (BEA_LOOP_GUARD((iStack_1c != 0))) {
      if (iVar10 == iVar2) goto LAB_004f4cd0;
      iVar10 = iVar10 + 1;
      piVar3 = *(int **)(DAT_008553f8[2] + 4);
      DAT_008553f8[2] = (int)piVar3;
      if (piVar3 == (int *)0x0) {
        iStack_1c = 0;
      }
      else {
        iStack_1c = *piVar3;
      }
    }
    iStack_1c = 0;
LAB_004f4cd0:
    uStack_18 = 0;
    pCStack_14 = this_;
    bea_vcall<uint32_t>(piVar9, 0x24, &ppuStack_3d8);
    *(undefined4 *)(iVar7 + 0xd0) = 0;
  }
  return;
joined_r0x004f4b5a:
  if (this_00 == (void *)0x0) goto LAB_004f4bdd;
  pCVar8 = (CThunderHead *)FUN_00492c90(bea_arg(this_00));
  if (((((pCVar8 != (CThunderHead *)0x0) && (pCVar8 != this_)) &&
       ((*(uint *)(pCVar8 + 0x34) & 0x200) != 0)) &&
      ((iVar7 = FUN_004fd3d0(bea_arg(this_), bea_arg(*(int *)(pCVar8 + 0x138))), iVar7 != 0 &&
       (iVar7 = bea_vcall<uint32_t>(pCVar8, 0x10c), iVar7 != 0)))) &&
     (fVar4 = *(float *)(this_ + 0x1c) - *(float *)(pCVar8 + 0x1c),
     SQRT(fVar4 * fVar4 +
          (*(float *)(this_ + 0x20) - *(float *)(pCVar8 + 0x20)) *
          (*(float *)(this_ + 0x20) - *(float *)(pCVar8 + 0x20))) < bea_fcast<float>(fVar11) - 3.0f)) {
    FUN_00506010(bea_arg(pvVar6));
    goto LAB_004f4bdd;
  }
  this_00 = (void *)FUN_00492020(bea_arg(&DAT_00704200));
  goto joined_r0x004f4b5a;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f4920, ap_004f4920));
