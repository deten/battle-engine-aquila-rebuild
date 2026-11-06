// auto-ported from 004b93f0_FUN_004b93f0.c (FUN_004b93f0, 1667 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
// @hand-fixed 2026-10-28: sprite-draw calls in 15-dword form, float constants as floats (tools/menu_test.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define DAT_0083d960 GLOBAL_AT(int, 0x0083d960)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_00807418 GLOBAL_AT(int, 0x00807418)
#define DAT_0089be28 GLOBAL_AT(int, 0x0089be28)
typedef uint32_t (BEA_THISCALL* FUN_004659a0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004659a0_t> FUN_004659a0 = {(FUN_004659a0_t)0x004659a0};
typedef uint32_t (BEA_CDECL* FUN_00482090_t)(void);
static const bea_guard<FUN_00482090_t> FUN_00482090 = {(FUN_00482090_t)0x00482090};
typedef uint32_t (BEA_THISCALL* FUN_004b9010_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004b9010_t> FUN_004b9010 = {(FUN_004b9010_t)0x004b9010};
typedef undefined4 (BEA_THISCALL* FUN_004b9a80_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004b9a80_t> FUN_004b9a80 = {(FUN_004b9a80_t)0x004b9a80};
typedef void* (BEA_THISCALL* FUN_004e5c90_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5c90_t> FUN_004e5c90 = {(FUN_004e5c90_t)0x004e5c90};
typedef undefined * (BEA_THISCALL* FUN_004f2580_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f2580_t> FUN_004f2580 = {(FUN_004f2580_t)0x004f2580};
typedef uint32_t (BEA_STDCALL* FUN_00513820_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513820_t> FUN_00513820 = {(FUN_00513820_t)0x00513820};
typedef uint32_t (BEA_STDCALL* FUN_00513930_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513930_t> FUN_00513930 = {(FUN_00513930_t)0x00513930};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef float10 (BEA_THISCALL* FUN_00515950_t)(uint32_t);
static const bea_guard<FUN_00515950_t> FUN_00515950 = {(FUN_00515950_t)0x00515950};
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef uint32_t (BEA_CDECL* FUN_00523a70_t)(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, ...);
static const bea_guard<FUN_00523a70_t> FUN_00523a70 = {(FUN_00523a70_t)0x00523a70};
typedef uint (BEA_CDECL* FUN_00523cc0_t)(float, float, float, float, ...);
static const bea_guard<FUN_00523cc0_t> FUN_00523cc0 = {(FUN_00523cc0_t)0x00523cc0};
typedef undefined4 (BEA_THISCALL* FUN_00540680_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00540680_t> FUN_00540680 = {(FUN_00540680_t)0x00540680};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};
// 15 dwords (conv_overrides.csv); the old 14 + varargs prototype dropped the trailing 1.0f and
// turned float bit patterns (0x43a00000) into their integer values (menu tours, 2026-10-28)
typedef uint32_t (BEA_CDECL* FUN_00555be0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00555be0_t> FUN_00555be0 = {(FUN_00555be0_t)0x00555be0};

static void BEA_THISCALL ap_004b93f0(void * this_, undefined4 param_1)
{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int *piVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  int iVar22;
  longlong lVar23;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  int (&local_8)[2] = *reinterpret_cast<int (*)[2]>(bea_frame_ + 0x10 - 0x8);
  iVar7 = 0;
  if (*(int *)((int)this_ + 0x28) != 0) {
    *(undefined4 *)((int)this_ + 0x34) = 0;
    FUN_00482090();
    FUN_00513bc0(bea_arg(0x17), bea_arg(8));
    FUN_00513820(bea_arg(0), bea_arg(1), bea_arg(4));
    FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
    FUN_00555be0(bea_arg(0), bea_arg(0), bea_arg(0x3c23d70a), bea_arg(*(undefined4 *)((int)this_ + 0xc)), bea_arg(0), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0xc0101010), bea_arg(0x42200000), bea_arg(0x41f00000), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
    FUN_00555be0(bea_arg(0x42c80000), bea_arg(0x42c80000), bea_arg(0x3c23d70a), bea_arg(*(undefined4 *)((int)this_ + 0x10)), bea_arg(0), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
    FUN_00513820(bea_arg(0), bea_arg(1), bea_arg(4));
    FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
    uVar2 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x1f08cea));
    piVar15 = local_8;
    uVar10 = uVar2;
    pvVar3 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
    FUN_00540680(bea_arg(pvVar3), bea_arg(uVar10), bea_arg(piVar15));
    uVar16 = 0x3f800000;
    fVar17 = 320.0f - (float)(local_8[0] / 2);
    uVar14 = 0x3f800000;
    uVar13 = 0x3b03126f;
    uVar12 = 0;
    uVar11 = 0xffa0a0a0;
    uVar10 = 0x42200000;
    pvVar3 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
    FUN_004659a0(bea_arg(pvVar3), bea_arg(fVar17), bea_arg(uVar10), bea_arg(uVar11), bea_arg(uVar2), bea_arg(uVar12), bea_arg(uVar13), bea_arg(uVar14), bea_arg(uVar16));
    if (*(int *)((int)this_ + 0x24) == 0) {
      uVar2 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x2a9338));
      FUN_004b9010(bea_arg(this_), bea_arg(0xaa), bea_arg(0xb0), bea_arg(300), bea_arg(0x40), bea_arg(0x3f800000));
      piVar15 = local_8;
      uVar10 = uVar2;
      pvVar3 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
      FUN_00540680(bea_arg(pvVar3), bea_arg(uVar10), bea_arg(piVar15));
      uVar16 = 0x3f800000;
      uVar14 = 0x3f800000;
      uVar13 = 0x3b03126f;
      uVar12 = 0;
      uVar11 = 0xffffffff;
      uVar10 = 0x43480000;
      fVar17 = 320.0f - (float)(local_8[0] / 2);
      pvVar3 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
      FUN_004659a0(bea_arg(pvVar3), bea_arg(fVar17), bea_arg(uVar10), bea_arg(uVar11), bea_arg(uVar2), bea_arg(uVar12), bea_arg(uVar13), bea_arg(uVar14), bea_arg(uVar16));
    }
    FUN_00513930(bea_arg(0), bea_arg(6), bea_arg(1));
    FUN_00513930(bea_arg(0), bea_arg(5), bea_arg(1));
    FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
    lVar23 = (longlong)ROUND(120.0f - *(float *)((int)this_ + 0x2c));
    iVar8 = (int)lVar23;
    if ((0 < *(int *)((int)this_ + 0x38)) && (0 < *(int *)((int)this_ + 0x38))) {
      do {
        uVar13 = 1;
        uVar12 = 0x437f0000;
        uVar11 = 0x43700000;
        uVar2 = 0x42c80000;
        uVar10 = FUN_004e5c90(bea_arg((void *)((int)this_ + 0x18)), bea_arg(iVar7));
        iVar4 = FUN_004b9a80(bea_arg(this_), bea_arg(uVar10), bea_arg(uVar2), bea_arg(uVar11), bea_arg(uVar12), bea_arg(uVar13));
        iVar8 = iVar8 + (-8 - iVar4);
        iVar7 = iVar7 + 1;
      } while (BEA_LOOP_GUARD((iVar7 < *(int *)((int)this_ + 0x38))));
    }
    piVar15 = *(int **)((int)this_ + 0x18);
    iVar4 = 0;
    iVar22 = 0;
    uVar10 = (undefined4)((ulonglong)lVar23 >> 0x20);
    *(int **)((int)this_ + 0x20) = piVar15;
    iVar7 = iVar8;
    if (piVar15 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar15;
    }
    while (BEA_LOOP_GUARD((iVar6 != 0))) {
      iVar19 = iVar8;
      iVar5 = FUN_004b9a80(bea_arg(this_), bea_arg(iVar6), bea_arg(0x42c80000), bea_arg(0x43700000), bea_arg(0x437f0000), bea_arg(1));
      if (iVar8 < 0x33) {
        iVar4 = 1;
      }
      if (315.0f <= (float)iVar19) {
        iVar22 = 1;
      }
      if ((0x32 < iVar8) && (iVar8 < 0x15e)) {
        fVar17 = 1.0f;
        if (iVar8 < 0x78) {
          fVar17 = 1.0f - (float)(0x78 - iVar8) * 0.014285714f;
          if (fVar17 <= 1.0f) {
            if (fVar17 < 0.0f) {
              fVar17 = 0.0f;
            }
          }
          else {
            fVar17 = 1.0f;
          }
        }
        if (0x118 < iVar8) {
          fVar17 = 1.0f - (float)(iVar8 + -0x118) * 0.014285714f;
          if (fVar17 <= 1.0f) {
            if (fVar17 < 0.0f) {
              fVar17 = 0.0f;
            }
          }
          else {
            fVar17 = 1.0f;
          }
        }
        FUN_004b9a80(bea_arg(this_), bea_arg(iVar6), bea_arg(0x42c80000), bea_arg((float)iVar19), bea_arg(fVar17), bea_arg(0));
        iVar7 = iVar5 + iVar8;
      }
      iVar8 = iVar8 + 8 + iVar5;
      piVar15 = *(int **)(*(int *)((int)this_ + 0x20) + 4);
      *(int **)((int)this_ + 0x20) = piVar15;
      if (piVar15 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar15;
      }
    }
    fVar9 = (float10)FUN_00515950(bea_arg(&DAT_0088a0a8));
    fVar9 = ((float10)*(float *)((int)this_ + 0x30) - (float10)*(float *)((int)this_ + 0x2c)) *
            (float10)0.16666667f * ((float10)60.0f / fVar9) + (float10)*(float *)((int)this_ + 0x2c);
    *(float *)((int)this_ + 0x2c) = (float)fVar9;
    if (ABS(fVar9 - (float10)*(float *)((int)this_ + 0x30)) < (float10)1.0f) {
      *(undefined4 *)((int)this_ + 0x2c) = 0;
      *(undefined4 *)((int)this_ + 0x30) = 0;
      if (*(int *)((int)this_ + 0x38) != *(int *)((int)this_ + 0x3c)) {
        *(int *)((int)this_ + 0x38) = *(int *)((int)this_ + 0x3c);
      }
    }
    FUN_00513930(bea_arg(0), bea_arg(6), bea_arg(2));
    FUN_00513930(bea_arg(0), bea_arg(5), bea_arg(2));
    FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
    fVar9 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
    fVar9 = (float10)fcos(fVar9 * (float10)10.0);
    fVar17 = (float)(fVar9 * (float10)0.05f);
    fVar9 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
    fVar9 = (float10)fcos(fVar9 * (float10)10.0);
    fVar20 = (float)(fVar9 * (float10)5.0f);
    fVar17 = 0.95f - fVar17;
    fVar21 = 0.0f;
    fVar18 = fVar17;
    if (iVar4 != 0) {
      fVar21 = fVar20 + 102.0f;
      FUN_00555be0(bea_arg(0x43a00000), bea_arg(fVar21), bea_arg(0x3a83126f), bea_arg(DAT_00807418), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0xbfc90fdb), bea_arg(0xffffffff), bea_arg(fVar17 * 0.5f), bea_arg(fVar17), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
      cVar1 = FUN_00523cc0(304.0f,fVar21 - 16.0f,336.0f,fVar20 + 118.0f);
      if (cVar1 != '\0') {
        bea_vcall<uint32_t>(this_, 0xc, 0,0x2a,0x3f800000);
      }
    }
    if (iVar22 != 0) {
      iVar7 = iVar7 + 0x10;
      fVar20 = (float)iVar7 - fVar20;
      FUN_00555be0(bea_arg(0x43a00000), bea_arg(fVar20), bea_arg(0x3a83126f), bea_arg(DAT_00807418), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0x3fc90fdb), bea_arg(0xffffffff), bea_arg(fVar18 * 0.5f), bea_arg(fVar17), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
      *(undefined4 *)((int)this_ + 0x34) = 1;
      cVar1 = FUN_00523cc0(304.0f,fVar20 - 16.0f,336.0f,fVar20 + 16.0f);
      if (cVar1 != '\0') {
        bea_vcall<uint32_t>(this_, 0xc, 0,0x2b,0x3f800000);
      }
    }
    FUN_00555be0(bea_arg(0x41c00000), bea_arg(0x43e30000), bea_arg(0x3a83126f), bea_arg(DAT_00807418), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0x40490fdb), bea_arg(0xffffffff), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
    cVar1 = FUN_00523cc0(0,400.0f,200.0f,480.0f);
    if (cVar1 != '\0') {
      bea_vcall<uint32_t>(this_, 0xc, 0,0x2e,0x3f800000);
    }
    if (DAT_0089be28 != 0) {
      DAT_0089be28 = 0;
      bea_vcall<uint32_t>(this_, 0xc, 0,0x2e,0x3f800000);
    }
    FUN_00523a70(0,0,fVar18,fVar20,fVar21,iVar22,iVar7,uVar10);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b93f0, ap_004b93f0));
