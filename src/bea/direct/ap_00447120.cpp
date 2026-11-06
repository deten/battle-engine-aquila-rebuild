// auto-ported from 00447120_vslot66.c (CDropship::vslot66, 2329 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x430: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
// @hand-fixed 2026-10-28: float sums in the asm's order (bug class 19, tools/check_fp_order.py)
#define BEA_PARITY   // stack parity: see the registration
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_FASTCALL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CAirUnit;
typedef char CDropship;
typedef char fStack_418;
typedef char fStack_41c;
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
#define DAT_009c63e8 GLOBAL_AT(int, 0x009c63e8)
#define DAT_00672868 GLOBAL_AT(int, 0x00672868)
#define DAT_0067286c GLOBAL_AT(int, 0x0067286c)
#define DAT_00672870 GLOBAL_AT(int, 0x00672870)
#define DAT_00672874 GLOBAL_AT(int, 0x00672874)
#define DAT_00704200 GLOBAL_AT(int, 0x00704200)
#define DAT_006fbdfc GLOBAL_AT(float, 0x006fbdfc)
#define DAT_008553f8 GLOBAL_AT(undefined4*, 0x008553f8)
#define s_dooropening_00628a98 ((char*)0x00628a98)
#define s_doorclosing_00628a8c ((char*)0x00628a8c)
typedef uint (BEA_THISCALL* CAirUnit__vslot66_t)(uint32_t);
static const bea_guard<CAirUnit__vslot66_t> CAirUnit__vslot66 = {(CAirUnit__vslot66_t)0x00402fa0};
typedef int (BEA_THISCALL* FUN_00401fa0_t)(uint32_t);
static const bea_guard<FUN_00401fa0_t> FUN_00401fa0 = {(FUN_00401fa0_t)0x00401fa0};
typedef undefined4 (BEA_THISCALL* FUN_00402dd0_t)(uint32_t);
static const bea_guard<FUN_00402dd0_t> FUN_00402dd0 = {(FUN_00402dd0_t)0x00402dd0};
typedef uint32_t (BEA_THISCALL* FUN_004097a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004097a0_t> FUN_004097a0 = {(FUN_004097a0_t)0x004097a0};
typedef uint32_t (BEA_STDCALL* FUN_00448170_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00448170_t> FUN_00448170 = {(FUN_00448170_t)0x00448170};
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};
typedef uint32_t (BEA_THISCALL* FUN_0048dcf0_t)(uint32_t);
static const bea_guard<FUN_0048dcf0_t> FUN_0048dcf0 = {(FUN_0048dcf0_t)0x0048dcf0};
typedef int (BEA_THISCALL* FUN_00491ea0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00491ea0_t> FUN_00491ea0 = {(FUN_00491ea0_t)0x00491ea0};
typedef int (BEA_THISCALL* FUN_00492020_t)(uint32_t);
static const bea_guard<FUN_00492020_t> FUN_00492020 = {(FUN_00492020_t)0x00492020};
typedef int (BEA_THISCALL* FUN_00492c90_t)(uint32_t);
static const bea_guard<FUN_00492c90_t> FUN_00492c90 = {(FUN_00492c90_t)0x00492c90};
typedef uint32_t (BEA_THISCALL* FUN_004cb0b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cb0b0_t> FUN_004cb0b0 = {(FUN_004cb0b0_t)0x004cb0b0};
typedef uint32_t (BEA_THISCALL* FUN_004cb3d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004cb3d0_t> FUN_004cb3d0 = {(FUN_004cb3d0_t)0x004cb3d0};
typedef uint32_t (BEA_THISCALL* FUN_004f69b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f69b0_t> FUN_004f69b0 = {(FUN_004f69b0_t)0x004f69b0};
typedef undefined4 (BEA_THISCALL* FUN_004fd7e0_t)(uint32_t);
static const bea_guard<FUN_004fd7e0_t> FUN_004fd7e0 = {(FUN_004fd7e0_t)0x004fd7e0};
typedef undefined4 * (BEA_CDECL* FUN_0050ff10_t)(uint32_t);
static const bea_guard<FUN_0050ff10_t> FUN_0050ff10 = {(FUN_0050ff10_t)0x0050ff10};
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static void BEA_THISCALL ap_00447120(CDropship * this_)
{
  CDropship *pCVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  float10 fVar12;

  alignas(16) uint8_t bea_frame_[0x430] = {};   // the original stack frame (emulate_frame)
  int &iStack_424 = *reinterpret_cast<int *>(bea_frame_ + 0x430 - 0x424);
  float &fStack_41c = *reinterpret_cast<float *>(bea_frame_ + 0x430 - 0x41c);
  float &fStack_418 = *reinterpret_cast<float *>(bea_frame_ + 0x430 - 0x418);
  float &fStack_414 = *reinterpret_cast<float *>(bea_frame_ + 0x430 - 0x414);
  int &iStack_40c = *reinterpret_cast<int *>(bea_frame_ + 0x430 - 0x40c);
  undefined4 (&auStack_408)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0x430 - 0x408);
  undefined ** &ppuStack_3d8 = *reinterpret_cast<undefined ** *>(bea_frame_ + 0x430 - 0x3d8);
  undefined4 &uStack_3d4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x430 - 0x3d4);
  undefined4 &uStack_3d0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x430 - 0x3d0);
  float &fStack_3cc = *reinterpret_cast<float *>(bea_frame_ + 0x430 - 0x3cc);
  undefined4 &uStack_3c8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x430 - 0x3c8);
  undefined4 &uStack_338 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x430 - 0x338);
  int &iStack_1c = *reinterpret_cast<int *>(bea_frame_ + 0x430 - 0x1c);
  undefined4 &uStack_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x430 - 0x18);
  undefined4 &uStack_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x430 - 0x14);
  undefined4 &uStack_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x430 - 0x10);
  undefined4 &uStack_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x430 - 0xc);
  undefined4 &uStack_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x430 - 0x8);
  undefined4 &uStack_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x430 - 0x4);
  if (*(int *)(this_ + 0x168) == 1) {
    *(undefined4 *)(this_ + 0x168) = 0;
    *(undefined4 *)(this_ + 0x1e8) = 1;
  }
  if (((byte)this_[0x2c] & 4) != 0) {
    iVar5 = FUN_00401fa0(bea_arg(this_));
    if (iVar5 == 0) {
      fVar2 = *(float *)(this_ + 0x11c) + 0.8f;
      *(undefined4 *)(this_ + 0x134) = 0x3e4ccccd;
      if (3.1415927f < fVar2) {
        fVar2 = fVar2 - 6.2831855f;
      }
      *(float *)(this_ + 0x128) = fVar2;
      *(undefined4 *)(this_ + 0x124) = 0x40000000;
    }
    fVar12 = bea_fcast<float10>(FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(this_ + 0x1c)));
    // the compares below follow the original's branches when a value is NaN: `test ah,1` takes
    // "less than" when unordered too, `test ah,0x41` "greater than" only when ordered (2026-11-05,
    // level 3.11 with sound on game time: ours lost at 269.4, the original at 277.2)
    if (!(fVar12 + bea_fcast<float10>(1.0f) >= bea_fcast<float10>(*(float *)(this_ + 0x24)))) {
      bea_vcall<uint32_t>(this_, 0x110);
    }
  }
  CAirUnit__vslot66(bea_arg((CAirUnit *)this_));
  if ((((byte)this_[0x2c] & 4) == 0) &&
     ((((iVar5 = *(int *)(this_ + 0x27c), iVar5 == 5 || (iVar5 == 2)) || (iVar5 == 3)) ||
      ((iVar5 == 6 || (iVar5 == 7)))))) {
    piVar9 = *(int **)(this_ + 0x1d4);
    iStack_424 = 1;
    if (piVar9 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar9;
    }
    while (BEA_LOOP_GUARD((iVar5 != 0))) {
      if (*(int *)(iVar5 + 4) == 0) {
        FUN_004cb3d0(bea_arg(&DAT_009c63e8), bea_arg(*(undefined4 *)(*(int *)(this_ + 0x164) + 0x20)), bea_arg(iVar5), bea_arg(DAT_00672868), bea_arg(DAT_0067286c), bea_arg(DAT_00672870), bea_arg(DAT_00672874), bea_arg(0), bea_arg(0));
      }
      bea_vcall<uint32_t>(this_, 0x160, 0x1a,iStack_424,&fStack_41c,auStack_408);
      if (*(void **)(iVar5 + 4) != (void *)0x0) {
        FUN_004097a0(bea_arg(*(void **)(iVar5 + 4)), bea_arg(&fStack_41c));
      }
      iVar5 = *(int *)(iVar5 + 4);
      if (iVar5 != 0) {
        puVar8 = auStack_408;
        puVar11 = (undefined4 *)(iVar5 + 0x10);
        for (iVar10 = 0xc; BEA_LOOP_GUARD((iVar10 != 0)); iVar10 = iVar10 + -1) {
          *puVar11 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar11 = puVar11 + 1;
        }
        *(undefined4 *)(iVar5 + 0xa0) = 1;
      }
      iStack_424 = iStack_424 + 1;
      FUN_00448170(bea_arg(&fStack_41c), bea_arg(auStack_408));
      piVar9 = (int *)piVar9[1];
      if (piVar9 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar9;
      }
    }
    *(undefined4 *)(this_ + 0x298) = 1;
  }
  else if (*(int *)(this_ + 0x298) != 0) {
    puVar8 = *(undefined4 **)(this_ + 0x1d4);
    if (puVar8 == (undefined4 *)0x0) {
      pvVar7 = (void *)0x0;
    }
    else {
      pvVar7 = (void *)*puVar8;
    }
    while (BEA_LOOP_GUARD((pvVar7 != (void *)0x0))) {
      FUN_004cb0b0(bea_arg(pvVar7), bea_arg(0));
      puVar8 = (undefined4 *)puVar8[1];
      if (puVar8 == (undefined4 *)0x0) {
        pvVar7 = (void *)0x0;
      }
      else {
        pvVar7 = (void *)*puVar8;
      }
    }
    *(undefined4 *)(this_ + 0x298) = 0;
  }
  if ((*(int *)(this_ + 0x27c) == 4) && (((byte)this_[0x2c] & 4) == 0)) {
    piVar9 = *(int **)(this_ + 0x1d4);
    iStack_424 = 1;
    if (piVar9 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar9;
    }
    while (BEA_LOOP_GUARD((iVar5 != 0))) {
      if (*(int *)(iVar5 + 4) == 0) {
        FUN_004cb3d0(bea_arg(&DAT_009c63e8), bea_arg(*(undefined4 *)(*(int *)(this_ + 0x164) + 0xc)), bea_arg(iVar5), bea_arg(DAT_00672868), bea_arg(DAT_0067286c), bea_arg(DAT_00672870), bea_arg(DAT_00672874), bea_arg(0), bea_arg(0));
      }
      bea_vcall<uint32_t>(this_, 0x160, 0x1a,iStack_424,&fStack_41c,auStack_408);
      if (*(void **)(iVar5 + 4) != (void *)0x0) {
        FUN_004097a0(bea_arg(*(void **)(iVar5 + 4)), bea_arg(&fStack_41c));
      }
      iVar5 = *(int *)(iVar5 + 4);
      if (iVar5 != 0) {
        puVar8 = auStack_408;
        puVar11 = (undefined4 *)(iVar5 + 0x10);
        for (iVar10 = 0xc; BEA_LOOP_GUARD((iVar10 != 0)); iVar10 = iVar10 + -1) {
          *puVar11 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar11 = puVar11 + 1;
        }
        *(undefined4 *)(iVar5 + 0xa0) = 1;
      }
      iStack_424 = iStack_424 + 1;
      FUN_00448170(bea_arg(&fStack_41c), bea_arg(auStack_408));
      piVar9 = (int *)piVar9[1];
      if (piVar9 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar9;
      }
    }
    *(undefined4 *)(this_ + 0x29c) = 1;
  }
  else if (*(int *)(this_ + 0x29c) != 0) {
    puVar8 = *(undefined4 **)(this_ + 0x1d4);
    if (puVar8 == (undefined4 *)0x0) {
      pvVar7 = (void *)0x0;
    }
    else {
      pvVar7 = (void *)*puVar8;
    }
    while (BEA_LOOP_GUARD((pvVar7 != (void *)0x0))) {
      FUN_004cb0b0(bea_arg(pvVar7), bea_arg(0));
      puVar8 = (undefined4 *)puVar8[1];
      if (puVar8 == (undefined4 *)0x0) {
        pvVar7 = (void *)0x0;
      }
      else {
        pvVar7 = (void *)*puVar8;
      }
    }
    *(undefined4 *)(this_ + 0x29c) = 0;
  }
  iVar5 = *(int *)(this_ + 0x27c);
  *(undefined4 *)(this_ + 0x2a8) = *(undefined4 *)(this_ + 0x2a4);
  if (iVar5 == 6) {
    iVar5 = bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
    iVar5 = *(int *)(iVar5 + 0x18);
    for (iVar10 = 0; BEA_LOOP_GUARD((iVar6 = bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24),
        iVar10 < *(int *)(iVar6 + 0x14))); iVar10 = iVar10 + 1) {
      iVar6 = FUN_00568390(bea_arg(s_dooropening_00628a98), bea_arg(iVar5));
      if (iVar6 == 0) {
        bea_vcall<uint32_t>(this_, 0x160, 0x1b,1,&fStack_41c,auStack_408);
        fVar12 = bea_fcast<float10>(FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(&fStack_41c)));
        if ((fVar12 - bea_fcast<float10>(0.1f) <= bea_fcast<float10>(fStack_414)) || (1.0f <= *(float *)(this_ + 0x2a4))) {
          *(undefined4 *)(this_ + 0x27c) = 4;
        }
        else {
          *(float *)(this_ + 0x2a4) = *(float *)(iVar5 + 0x20) + *(float *)(this_ + 0x2a4);
        }
        if (1.0f < *(float *)(this_ + 0x2a4)) {
          *(undefined4 *)(this_ + 0x2a4) = 0x3f800000;
        }
        goto LAB_00447897;
      }
      iVar5 = iVar5 + 0x24;
    }
    *(undefined4 *)(this_ + 0x27c) = 4;
  }
  else if (iVar5 == 7) {
    iVar5 = bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
    iVar5 = *(int *)(iVar5 + 0x18);
    for (iVar10 = 0; BEA_LOOP_GUARD((iVar6 = bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24),
        iVar10 < *(int *)(iVar6 + 0x14))); iVar10 = iVar10 + 1) {
      iVar6 = FUN_00568390(bea_arg(s_doorclosing_00628a8c), bea_arg(iVar5));
      if (iVar6 == 0) {
        fVar2 = *(float *)(iVar5 + 0x20) + *(float *)(this_ + 0x2a4);
        *(float *)(this_ + 0x2a4) = fVar2;
        if (1.0f <= fVar2) {
          bea_vcall<uint32_t>(this_, 0x1e0);
        }
        goto LAB_00447897;
      }
      iVar5 = iVar5 + 0x24;
    }
    bea_vcall<uint32_t>(this_, 0x1e0);
  }
  else if (iVar5 == 0) {
    *(undefined4 *)(this_ + 0x2a4) = 0;
  }
  else if (iVar5 == 2) {
    fVar2 = *(float *)(this_ + 0x2a0);
    fVar3 = *(float *)(this_ + 0x114);
    if (!(fVar3 >= -1.5707964f) && (1.5707964f < fVar2)) {
      fVar2 = fVar2 - 6.2831855f;
    }
    else if ((1.5707964f < fVar3) && !(fVar2 >= -1.5707964f)) {
      fVar2 = fVar2 + 6.2831855f;
    }
    if (!(ABS(fVar3 - fVar2) >= 0.1f)) {
      bea_vcall<uint32_t>(this_, 0x1dc);
    }
  }
  else if (iVar5 == 3) {
    pCVar1 = this_ + 0x1c;
    pvVar7 = (void *)FUN_00491ea0(bea_arg(&DAT_00704200), bea_arg(*(float *)pCVar1), bea_arg(*(undefined4 *)(this_ + 0x20)), bea_arg(*(undefined4 *)(this_ + 0x24)), bea_arg(*(undefined4 *)(this_ + 0x28)), bea_arg(0x41c80000));
    while (BEA_LOOP_GUARD((pvVar7 != (void *)0x0))) {
      piVar9 = (int *)FUN_00492c90(bea_arg(pvVar7));
      if (piVar9 != (int *)0x0) {
        if ((piVar9[0xd] & 0x2000000U) == 0) {
          if ((((piVar9[0xd] & 8U) != 0) && !(*(float *)(this_ + 0x24) - 2.0f >= bea_fcast<float>(piVar9[9]))) &&
             (fVar2 = SQRT((bea_fcast<float>(piVar9[9]) - *(float *)(this_ + 0x24)) *
                           (bea_fcast<float>(piVar9[9]) - *(float *)(this_ + 0x24)) +
                           (bea_fcast<float>(piVar9[8]) - *(float *)(this_ + 0x20)) *
                           (bea_fcast<float>(piVar9[8]) - *(float *)(this_ + 0x20)) +
                           (bea_fcast<float>(piVar9[7]) - *(float *)pCVar1) *
                           (bea_fcast<float>(piVar9[7]) - *(float *)pCVar1)), !(fVar2 >= 7.0f))) {
            bea_vcall<uint32_t>(piVar9, 0xa0, 0.9f / fVar2,this_,1,0xffffffff);
          }
        }
        else if (piVar9[0x12] == 0) {
          fStack_41c = bea_fcast<float>(piVar9[7]) - *(float *)pCVar1;
          fStack_418 = bea_fcast<float>(piVar9[8]) - *(float *)(this_ + 0x20);
          if (!(fStack_418 * fStack_418 +
              (bea_fcast<float>(piVar9[9]) - *(float *)(this_ + 0x24)) *
              (bea_fcast<float>(piVar9[9]) - *(float *)(this_ + 0x24)) + fStack_41c * fStack_41c >= 100.0f)) {
            fStack_414 = 0.0f;
            fVar2 = SQRT(fStack_418 * fStack_418 + fStack_41c * fStack_41c);
            if (fVar2 == 0.0f || bea_isnan(fVar2)) {                  // test ah,0x40: equal or unordered
              FUN_004f69b0(bea_arg(piVar9), bea_arg(&fStack_41c));
            }
            else {
              fVar2 = 1.0f / fVar2;
              fStack_414 = 0.0f;
              fStack_41c = fStack_41c * fVar2;
              fStack_418 = fStack_418 * fVar2;
              FUN_004f69b0(bea_arg(piVar9), bea_arg(&fStack_41c));
            }
          }
        }
      }
      pvVar7 = (void *)FUN_00492020(bea_arg(&DAT_00704200));
    }
  }
  else if (iVar5 != 5) {
    fVar2 = SQRT(*(float *)(this_ + 0x7c) * *(float *)(this_ + 0x7c) +
                 *(float *)(this_ + 0x84) * *(float *)(this_ + 0x84) +
                 *(float *)(this_ + 0x80) * *(float *)(this_ + 0x80));
    if (*(float *)(*(int *)(this_ + 0x164) + 0xb4) * 0.03125f <= fVar2) {
      fStack_41c = fVar2 * *(float *)(this_ + 0x40);
      fStack_418 = fVar2 * *(float *)(this_ + 0x50);
      fStack_414 = fVar2 * *(float *)(this_ + 0x60);
      bea_vcall<uint32_t>(this_, 0x70, &fStack_41c);
    }
    if ((*(int *)(this_ + 0x27c) == 0) && (iVar5 = FUN_004fd7e0(bea_arg(this_)), iVar5 != 0)) {
      bea_vcall<uint32_t>(this_, 0x190);
    }
  }
LAB_00447897:
  if ((((byte)this_[0x2c] & 4) != 0) && (iVar5 = FUN_00402dd0(bea_arg(this_)), iVar5 != 0)) {
    iStack_40c = 4;
    do {
      FUN_0048dcf0(bea_arg(&ppuStack_3d8));
      ppuStack_3d8 = ((void*)0x005d8c80);
      iStack_1c = 0;
      uStack_18 = 0;
      uStack_14 = 0;
      uStack_10 = 0;
      uStack_c = 0;
      uStack_4 = 0;
      uStack_8 = 0;
      puVar8 = (undefined4 *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x20, &fStack_41c,0);
      fVar2 = DAT_006fbdfc;
      uStack_3d4 = *puVar8;
      uStack_3d0 = puVar8[1];
      fStack_3cc = bea_fcast<float>(puVar8[2]);
      uStack_3c8 = puVar8[3];
      if (fStack_3cc < DAT_006fbdfc + 1.0f) {
        fVar12 = bea_fcast<float10>(FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(&uStack_3d4)));
        fVar3 = bea_fcast<float>(fVar12);
        if (!(fVar2 >= fVar3)) {
          fVar12 = bea_fcast<float10>(fVar2);
        }
        fStack_3cc = bea_fcast<float>(fVar12);
        piVar9 = (int *)FUN_0050ff10(bea_arg(*(undefined4 *)(*(int *)(this_ + 0x164) + 0xec)));
        if (piVar9 != (int *)0x0) {
          uStack_338 = *(undefined4 *)(this_ + 0x138);
          iVar5 = *(int *)(*(int *)(this_ + 0x164) + 0xec);
          iVar10 = 0;
          piVar4 = (int *)*DAT_008553f8;
          DAT_008553f8[2] = (int)piVar4;
          if (piVar4 == (int *)0x0) {
            iStack_1c = 0;
          }
          else {
            iStack_1c = *piVar4;
          }
          while (BEA_LOOP_GUARD((iStack_1c != 0))) {
            if (iVar10 == iVar5) goto LAB_004479e7;
            iVar10 = iVar10 + 1;
            piVar4 = *(int **)(DAT_008553f8[2] + 4);
            DAT_008553f8[2] = (int)piVar4;
            if (piVar4 == (int *)0x0) {
              iStack_1c = 0;
            }
            else {
              iStack_1c = *piVar4;
            }
          }
          iStack_1c = 0;
LAB_004479e7:
          uStack_18 = 2;
          if (!(fVar3 > fVar2)) {
            uStack_18 = 1;
          }
          bea_vcall<uint32_t>(piVar9, 0x24, &ppuStack_3d8);
        }
      }
      iStack_40c = iStack_40c + -1;
    } while (BEA_LOOP_GUARD((iStack_40c != 0)));
  }
  return;
}

// @autoport-registration
// stack parity (bea/parity.h): the game code this calls runs at the original's depths
// (level 3.11 with sound on game time: CAirUnit::vslot66 0x402fa0 under this port lost
// the mission at 269.4 instead of 277.2, 2026-11-05)
// tools/callsites.py 447120 --table: the original's calls (kind, target or vtable offset,
// ESP below the entry ESP, return address; BEA_PAR_TAIL: a tail jump); between calls its ESP is entry - 0x434
static const BeaParSite par_00447120[] = {
    {BEA_PAR_DIRECT, 0x00401fa0, 0x434, 0x00447156},   // 00447151
    {BEA_PAR_DIRECT, 0x0047eb80, 0x434, 0x004471a0},   // 0044719b
    {BEA_PAR_VCALL, 0x00000110, 0x434, 0x004471bb}, /* pops guessed */   // 004471b5
    {BEA_PAR_DIRECT, 0x00402fa0, 0x434, 0x004471c2},   // 004471bd
    {BEA_PAR_DIRECT, 0x004cb3d0, 0x454, 0x00447251},   // 0044724c
    {BEA_PAR_VCALL, 0x00000160, 0x444, 0x0044726d},   // 00447267
    {BEA_PAR_DIRECT, 0x004097a0, 0x438, 0x0044727e},   // 00447279
    {BEA_PAR_DIRECT, 0x00448170, 0x43c, 0x004472b7},   // 004472b2
    {BEA_PAR_DIRECT, 0x004cb0b0, 0x438, 0x004472fe},   // 004472f9
    {BEA_PAR_DIRECT, 0x004cb3d0, 0x454, 0x00447398},   // 00447393
    {BEA_PAR_VCALL, 0x00000160, 0x444, 0x004473b4},   // 004473ae
    {BEA_PAR_DIRECT, 0x004097a0, 0x438, 0x004473c5},   // 004473c0
    {BEA_PAR_DIRECT, 0x00448170, 0x43c, 0x004473fe},   // 004473f9
    {BEA_PAR_DIRECT, 0x004cb0b0, 0x438, 0x00447444},   // 0044743f
    {BEA_PAR_VCALL, 0x00000024, 0x434, 0x00447484}, /* pops guessed */   // 00447481
    {BEA_PAR_VCALL, 0x00000024, 0x434, 0x00447491}, /* pops guessed */   // 0044748e
    {BEA_PAR_DIRECT, 0x00568390, 0x43c, 0x004474a5},   // 004474a0
    {BEA_PAR_VCALL, 0x00000160, 0x444, 0x004474cb},   // 004474c5
    {BEA_PAR_DIRECT, 0x0047eb80, 0x434, 0x004474d9},   // 004474d4
    {BEA_PAR_VCALL, 0x00000024, 0x434, 0x0044755e}, /* pops guessed */   // 0044755b
    {BEA_PAR_VCALL, 0x00000024, 0x434, 0x0044756b}, /* pops guessed */   // 00447568
    {BEA_PAR_DIRECT, 0x00568390, 0x43c, 0x0044757b},   // 00447576
    {BEA_PAR_VCALL, 0x000001e0, 0x434, 0x004475b3},   // 004475ad
    {BEA_PAR_VCALL, 0x000001e0, 0x434, 0x004475c3},   // 004475bd
    {BEA_PAR_VCALL, 0x000001dc, 0x434, 0x00447656}, /* pops guessed */   // 00447650
    {BEA_PAR_DIRECT, 0x00491ea0, 0x448, 0x00447693},   // 0044768e
    {BEA_PAR_DIRECT, 0x00492c90, 0x434, 0x004476a2},   // 0044769d
    {BEA_PAR_DIRECT, 0x004f69b0, 0x438, 0x00447760},   // 0044775b
    {BEA_PAR_DIRECT, 0x004f69b0, 0x438, 0x00447771},   // 0044776c
    {BEA_PAR_VCALL, 0x000000a0, 0x444, 0x004477e3},   // 004477dd
    {BEA_PAR_DIRECT, 0x00492020, 0x434, 0x004477f1},   // 004477ec
    {BEA_PAR_VCALL, 0x00000070, 0x438, 0x00447873}, /* pops guessed */   // 00447870
    {BEA_PAR_DIRECT, 0x004fd7e0, 0x434, 0x00447888},   // 00447883
    {BEA_PAR_VCALL, 0x00000190, 0x434, 0x00447897},   // 00447891
    {BEA_PAR_DIRECT, 0x00402dd0, 0x434, 0x004478a8},   // 004478a3
    {BEA_PAR_DIRECT, 0x0048dcf0, 0x434, 0x004478c8},   // 004478c3
    {BEA_PAR_VCALL, 0x00000020, 0x43c, 0x0044790b}, /* pops guessed */   // 00447908
    {BEA_PAR_DIRECT, 0x0047eb80, 0x434, 0x00447953},   // 0044794e
    {BEA_PAR_DIRECT, 0x0050ff10, 0x438, 0x00447982},   // 0044797d
    {BEA_PAR_VCALL, 0x00000024, 0x438, 0x00447a1d}, /* pops guessed */   // 00447a1a
    {0, 0, 0, 0}};
BEA_PARITY_HOOK(0x00447120, 00447120, ap_00447120, 0x434, par_00447120)

