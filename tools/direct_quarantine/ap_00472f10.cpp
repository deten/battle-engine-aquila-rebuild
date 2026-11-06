// auto-ported from 00472f10_FUN_00472f10.c (FUN_00472f10, 4527 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xa0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c68ac GLOBAL_AT(char, 0x009c68ac)
#define DAT_009c690d GLOBAL_AT(char, 0x009c690d)
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_0062c854 GLOBAL_AT(int, 0x0062c854)
#define DAT_0062c838 GLOBAL_AT(int, 0x0062c838)
#define DAT_0062c81c GLOBAL_AT(int, 0x0062c81c)
#define DAT_008aa468 GLOBAL_AT(int, 0x008aa468)
#define DAT_00679b40 GLOBAL_AT(char, 0x00679b40)
#define DAT_0089ce18 GLOBAL_AT(int, 0x0089ce18)
#define _DAT_0089ce1c GLOBAL_AT(int, 0x0089ce1c)
#define DAT_0089ce14 GLOBAL_AT(int, 0x0089ce14)
#define DAT_0083d960 GLOBAL_AT(int, 0x0083d960)
#define DAT_008a9d3c GLOBAL_AT(int, 0x008a9d3c)
#define DAT_008a9ab8 GLOBAL_AT(int, 0x008a9ab8)
#define s_Movement_0062c65c ((char*)0x0062c65c)
typedef undefined4 (BEA_THISCALL* FUN_0042e4b0_t)(uint32_t);
static const bea_guard<FUN_0042e4b0_t> FUN_0042e4b0 = {(FUN_0042e4b0_t)0x0042e4b0};
typedef uint32_t (BEA_THISCALL* FUN_004659a0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004659a0_t> FUN_004659a0 = {(FUN_004659a0_t)0x004659a0};
typedef undefined4 (BEA_THISCALL* FUN_0046f2c0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0046f2c0_t> FUN_0046f2c0 = {(FUN_0046f2c0_t)0x0046f2c0};
typedef undefined4 (BEA_THISCALL* FUN_004705d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004705d0_t> FUN_004705d0 = {(FUN_004705d0_t)0x004705d0};
typedef uint32_t (BEA_THISCALL* FUN_00472b40_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00472b40_t> FUN_00472b40 = {(FUN_00472b40_t)0x00472b40};
typedef undefined * (BEA_THISCALL* FUN_004f2580_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f2580_t> FUN_004f2580 = {(FUN_004f2580_t)0x004f2580};
typedef int16_t* (BEA_CDECL* FUN_004f7bf0_t)(uint32_t);
static const bea_guard<FUN_004f7bf0_t> FUN_004f7bf0 = {(FUN_004f7bf0_t)0x004f7bf0};
typedef undefined4 (BEA_CDECL* FUN_00515940_t)(void);
static const bea_guard<FUN_00515940_t> FUN_00515940 = {(FUN_00515940_t)0x00515940};
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef undefined4 (BEA_CDECL* FUN_00515b00_t)(void);
static const bea_guard<FUN_00515b00_t> FUN_00515b00 = {(FUN_00515b00_t)0x00515b00};
typedef uint32_t (BEA_CDECL* FUN_00523a70_t)(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, ...);
static const bea_guard<FUN_00523a70_t> FUN_00523a70 = {(FUN_00523a70_t)0x00523a70};
typedef undefined4 (BEA_CDECL* FUN_00523b50_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00523b50_t> FUN_00523b50 = {(FUN_00523b50_t)0x00523b50};
typedef uint (BEA_CDECL* FUN_00523cc0_t)(float, float, float, float, ...);
static const bea_guard<FUN_00523cc0_t> FUN_00523cc0 = {(FUN_00523cc0_t)0x00523cc0};
typedef undefined4 (BEA_THISCALL* FUN_00540010_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00540010_t> FUN_00540010 = {(FUN_00540010_t)0x00540010};
typedef undefined4 (BEA_THISCALL* FUN_00540640_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00540640_t> FUN_00540640 = {(FUN_00540640_t)0x00540640};
typedef undefined4 (BEA_THISCALL* FUN_00540680_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00540680_t> FUN_00540680 = {(FUN_00540680_t)0x00540680};
typedef uint32_t (BEA_CDECL* FUN_00555be0_t)(float, float, float, void *, undefined4, undefined4, float, float, float, float, float, float, float, float, ...);
static const bea_guard<FUN_00555be0_t> FUN_00555be0 = {(FUN_00555be0_t)0x00555be0};
typedef uint32_t (BEA_CDECL* FUN_005563d0_t)(undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, undefined4, ...);
static const bea_guard<FUN_005563d0_t> FUN_005563d0 = {(FUN_005563d0_t)0x005563d0};
typedef short * (BEA_CDECL* FUN_0055e64e_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055e64e_t> FUN_0055e64e = {(FUN_0055e64e_t)0x0055e64e};

static void BEA_THISCALL ap_00472f10(void * this_)
{
  longlong lVar1;
  short sVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  void *pvVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  bool bVar16;
  float10 fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined4 uVar26;
  undefined4 uVar27;

  alignas(16) uint8_t bea_frame_[0xa0] = {};   // the original stack frame (emulate_frame)
  undefined8 &local_9c = *reinterpret_cast<undefined8 *>(bea_frame_ + 0xa0 - 0x9c);
  undefined8 uVar28;
  longlong lVar29;
  ulonglong &local_90 = *reinterpret_cast<ulonglong *>(bea_frame_ + 0xa0 - 0x90);
  int &iStack_8c = *reinterpret_cast<int *>(bea_frame_ + 0xa0 - 0x8c);
  undefined1 (&local_80)[128] = *reinterpret_cast<undefined1 (*)[128]>(bea_frame_ + 0xa0 - 0x80);
  uVar7 = (undefined4)((ulonglong)local_9c >> 0x20);
  DAT_009c68ac = 0;
  DAT_009c690d = 1;
  if (*(char *)((int)this_ + 0x14) == '\0') {
    iVar12 = *(int *)((int)this_ + 0x10) + -0x10;
    *(int *)((int)this_ + 0x10) = iVar12;
    if (iVar12 < 0) {
      *(undefined4 *)((int)this_ + 0x10) = 0;
    }
LAB_00472f59:
    iVar12 = *(int *)((int)this_ + 0x10);
  }
  else {
    iVar12 = *(int *)((int)this_ + 0x10) + 0x10;
    *(int *)((int)this_ + 0x10) = iVar12;
    if (0xff < iVar12) {
      *(undefined4 *)((int)this_ + 0x10) = 0xff;
      goto LAB_00472f59;
    }
  }
  if (iVar12 != 0xff) {
    piVar4 = (int *)FUN_0046f2c0(bea_arg(&DAT_008a9a98), bea_arg(0));
    bea_vcall<uint32_t>(piVar4, 0x1c);
  }
  if (*(int *)((int)this_ + 0x10) != 0) {
    local_90 = (ulonglong)ROUND((float)*(int *)((int)this_ + 0x10) * 0.75f);
    uVar14 = iVar12 << 0x18 | 0xffffff;
    if (*(int *)((int)this_ + 0xc) != 0) {
      DAT_009c68ac = 0;
      DAT_009c690d = 1;
      iVar6 = *(int *)(*(int *)((int)this_ + 0xc) + 0xac);
      iVar5 = FUN_00515940();
      sVar2 = *(short *)(*(int *)((int)this_ + 0xc) + 0xb0);
      uVar28 = CONCAT44(uVar7,iVar5 / 2 - iVar6 / 2);
      iVar6 = FUN_00515b00();
      fVar21 = (float)(iVar6 / 2 - (int)sVar2 / 2);
      fVar20 = (float)(int)uVar28;
      FUN_005563d0(fVar20,fVar21,0x3a83126f,*(undefined4 *)((int)this_ + 0xc),uVar14,0x3f800000,
                   0x3f800000,0,0,0x3f800000);
      pcVar15 = s_Movement_0062c65c;
      iVar6 = 0;
      do {
        puVar24 = (undefined1 *)&local_90;
        uVar7 = FUN_004f7bf0(bea_arg(pcVar15));
        pvVar8 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
        FUN_00540680(bea_arg(pvVar8), bea_arg(uVar7), bea_arg(puVar24));
        uVar26 = 0;
        uVar7 = 0;
        uVar9 = iVar12 / 2;
        local_90 = (ulonglong)uVar9;
        if (*(int *)((int)&DAT_0062c854 + iVar6) == 0) {
          uVar10 = FUN_004f7bf0(bea_arg(pcVar15));
          fVar19 = (float)*(int *)((int)&DAT_0062c838 + iVar6) + fVar21;
          fVar18 = ((float)*(int *)((int)&DAT_0062c81c + iVar6) + fVar20) - (float)(int)uVar9;
        }
        else {
          uVar10 = FUN_004f7bf0(bea_arg(pcVar15));
          fVar19 = (float)*(int *)((int)&DAT_0062c838 + iVar6) + fVar21;
          fVar18 = (float)*(int *)((int)&DAT_0062c81c + iVar6) + fVar20;
        }
        uVar23 = 0x3f000000;
        uVar22 = 0x3f000000;
        uVar27 = 0x3dcccccd;
        uVar9 = uVar14;
        pvVar8 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
        FUN_00540010(bea_arg(pvVar8), bea_arg(fVar18), bea_arg(fVar19), bea_arg(uVar27), bea_arg(uVar22), bea_arg(uVar23), bea_arg(uVar9), bea_arg(uVar10), bea_arg(uVar7), bea_arg(uVar26));
        uVar7 = (undefined4)((ulonglong)uVar28 >> 0x20);
        pcVar15 = pcVar15 + 0x40;
        iVar6 = iVar6 + 4;
      } while (BEA_LOOP_GUARD(((int)pcVar15 < 0x62c81c)));
    }
  }
  if (*(char *)((int)this_ + 0x1c) == '\0') {
    iVar12 = *(int *)((int)this_ + 0x18) + -0x20;
    *(int *)((int)this_ + 0x18) = iVar12;
    if (iVar12 < 0) {
      *(undefined4 *)((int)this_ + 0x18) = 0;
    }
  }
  else {
    iVar12 = *(int *)((int)this_ + 0x18) + 0x20;
    *(int *)((int)this_ + 0x18) = iVar12;
    if (0xff < iVar12) {
      *(undefined4 *)((int)this_ + 0x18) = 0xff;
    }
  }
  bVar16 = false;
  if (((*(int *)((int)this_ + 0x44) == 1) && (*(int *)((int)this_ + 0x18) != 0)) &&
     (DAT_008aa468 == 0)) {
    DAT_00679b40 = 1;
    lVar1 = (longlong)ROUND((float)*(int *)((int)this_ + 0x18) * 0.75f);
    iVar12 = (int)lVar1;
    fVar21 = ((float)DAT_0089ce18 - (float)DAT_0089ce18 * 0.5f) + 15.0f;
    lVar29 = CONCAT44(uVar7,fVar21);
    iVar6 = iVar12;
    if (0xa0 < iVar12) {
      iVar6 = 0xa0;
    }
    if (*(char *)((int)this_ + 0x24) != '\0') {
      FUN_00555be0((float)_DAT_0089ce1c + (float)DAT_0089ce14 * 0.5f,fVar21,0x3a83126f,
                   *(undefined4 *)((int)this_ + 8),4,0,0x3f800000,0,iVar6 << 0x18 | 0x505050,
                   0x3eae147b,0x3f4ccccd,0,0x3f800000,0);
    }
    iVar6 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
    iVar5 = (*(int *)((int)this_ + 0x28) - (*(int *)(iVar6 + 0x54) * 5) / 2) + 0xf0;
    iVar6 = iVar5;
    uVar7 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x130ed7));
    FUN_0055e64e(bea_arg(local_80), bea_arg(uVar7));
    puVar24 = (undefined1 *)&local_90;
    puVar25 = local_80;
    pvVar8 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
    FUN_00540680(bea_arg(pvVar8), bea_arg(puVar25), bea_arg(puVar24));
    if (*(char *)((int)this_ + 0x24) != '\0') {
      uVar10 = 0x3f800000;
      uVar26 = 0;
      puVar24 = local_80;
      uVar7 = 0;
      fVar21 = (float)iVar6;
      uVar14 = iVar12 << 0x18 | 0x505050;
      lVar29 = CONCAT44((int)((ulonglong)lVar29 >> 0x20),iVar12 / 2);
      fVar20 = 320.0f - (float)(iVar12 / 2);
      pvVar8 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
      FUN_00540640(bea_arg(pvVar8), bea_arg(fVar20), bea_arg(fVar21), bea_arg(uVar14), bea_arg(puVar24), bea_arg(uVar7), bea_arg(uVar26), bea_arg(uVar10));
    }
    iStack_8c = (int)((ulonglong)lVar1 >> 0x20);
    iVar5 = iVar5 + iStack_8c;
    iVar6 = iVar5;
    if (*(int *)((int)this_ + 0x20) == 0) {
      fVar17 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
      lVar29 = (longlong)ROUND(fVar17 * (float10)2.7f * (float10)100.0f);
      uVar14 = (uint)lVar29 & 0x800000ff;
      if ((int)uVar14 < 0) {
        uVar14 = (uVar14 - 1 | 0xffffff00) + 1;
      }
      uVar9 = (int)(uVar14 - 0x80) >> 0x1f;
      iVar11 = (uVar14 - 0x80 ^ uVar9) - uVar9;
      uVar14 = ((int)(iVar11 + (iVar11 >> 0x1f & 3U)) >> 2) * 0x101 + (iVar12 << 0x18 | 0x400000U) +
               iVar11 * 0x10000;
    }
    else if (*(int *)((int)this_ + 0x2c) == 1) {
      uVar14 = iVar12 << 0x18 | 0xf0f0f0;
    }
    else {
      uVar14 = iVar12 << 0x18 | 0x202020;
    }
    uVar9 = iVar12 << 0x18;
    uVar7 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x41d6e9));
    FUN_0055e64e(bea_arg(local_80), bea_arg(uVar7));
    puVar24 = (undefined1 *)&local_90;
    puVar25 = local_80;
    pvVar8 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
    FUN_00540680(bea_arg(pvVar8), bea_arg(puVar25), bea_arg(puVar24));
    if ((*(int *)((int)this_ + 0x2c) != 0) || (*(char *)((int)this_ + 0x24) == '\x01')) {
      uVar10 = 0x3f800000;
      uVar26 = 0;
      puVar24 = local_80;
      uVar7 = 0;
      fVar21 = (float)iVar6;
      lVar29 = CONCAT44((int)((ulonglong)lVar29 >> 0x20),iVar12 / 2);
      fVar20 = 320.0f - (float)(iVar12 / 2);
      pvVar8 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
      FUN_00540640(bea_arg(pvVar8), bea_arg(fVar20), bea_arg(fVar21), bea_arg(uVar14), bea_arg(puVar24), bea_arg(uVar7), bea_arg(uVar26), bea_arg(uVar10));
    }
    iVar6 = iVar5 + 0x18;
    if (*(int *)((int)this_ + 0x20) == 1) {
      fVar17 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
      lVar29 = (longlong)ROUND(fVar17 * (float10)2.7f * (float10)100.0f);
      uVar14 = (uint)lVar29 & 0x800000ff;
      if ((int)uVar14 < 0) {
        uVar14 = (uVar14 - 1 | 0xffffff00) + 1;
      }
      uVar13 = (int)(uVar14 - 0x80) >> 0x1f;
      iVar11 = (uVar14 - 0x80 ^ uVar13) - uVar13;
      uVar14 = ((int)(iVar11 + (iVar11 >> 0x1f & 3U)) >> 2) * 0x101 + (uVar9 | 0x400000) +
               iVar11 * 0x10000;
    }
    else if (*(int *)((int)this_ + 0x30) == 1) {
      uVar14 = uVar9 | 0xf0f0f0;
    }
    else {
      uVar14 = uVar9 | 0x202020;
    }
    uVar7 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x1f08cea));
    FUN_0055e64e(bea_arg(local_80), bea_arg(uVar7));
    puVar24 = (undefined1 *)&local_90;
    puVar25 = local_80;
    pvVar8 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
    FUN_00540680(bea_arg(pvVar8), bea_arg(puVar25), bea_arg(puVar24));
    if ((*(int *)((int)this_ + 0x30) != 0) || (*(char *)((int)this_ + 0x24) == '\x01')) {
      uVar27 = 0x3f800000;
      uVar10 = 0x3f800000;
      uVar26 = 0;
      puVar24 = local_80;
      fVar21 = (float)iVar6;
      uVar7 = 0;
      lVar29 = CONCAT44((int)((ulonglong)lVar29 >> 0x20),iVar12 / 2);
      fVar20 = 320.0f - (float)(iVar12 / 2);
      pvVar8 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
      FUN_004659a0(bea_arg(pvVar8), bea_arg(fVar20), bea_arg(fVar21), bea_arg(uVar14), bea_arg(puVar24), bea_arg(uVar7), bea_arg(uVar26), bea_arg(uVar10), bea_arg(uVar27));
    }
    iVar6 = iVar5 + 0x30;
    if (*(int *)((int)this_ + 0x20) == 2) {
      fVar17 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
      lVar29 = (longlong)ROUND(fVar17 * (float10)2.7f * (float10)100.0f);
      uVar14 = (uint)lVar29 & 0x800000ff;
      if ((int)uVar14 < 0) {
        uVar14 = (uVar14 - 1 | 0xffffff00) + 1;
      }
      uVar13 = (int)(uVar14 - 0x80) >> 0x1f;
      iVar11 = (uVar14 - 0x80 ^ uVar13) - uVar13;
      uVar14 = ((int)(iVar11 + (iVar11 >> 0x1f & 3U)) >> 2) * 0x101 + (uVar9 | 0x400000) +
               iVar11 * 0x10000;
    }
    else if (*(int *)((int)this_ + 0x34) == 1) {
      uVar14 = uVar9 | 0xf0f0f0;
    }
    else {
      uVar14 = uVar9 | 0x202020;
    }
    uVar7 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x3fc4f9));
    FUN_0055e64e(bea_arg(local_80), bea_arg(uVar7));
    puVar24 = (undefined1 *)&local_90;
    puVar25 = local_80;
    pvVar8 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
    FUN_00540680(bea_arg(pvVar8), bea_arg(puVar25), bea_arg(puVar24));
    if ((*(int *)((int)this_ + 0x34) != 0) || (*(char *)((int)this_ + 0x24) == '\x01')) {
      uVar27 = 0x3f800000;
      uVar10 = 0x3f800000;
      uVar26 = 0;
      puVar24 = local_80;
      fVar21 = (float)iVar6;
      uVar7 = 0;
      lVar29 = CONCAT44((int)((ulonglong)lVar29 >> 0x20),iVar12 / 2);
      fVar20 = 320.0f - (float)(iVar12 / 2);
      pvVar8 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
      FUN_004659a0(bea_arg(pvVar8), bea_arg(fVar20), bea_arg(fVar21), bea_arg(uVar14), bea_arg(puVar24), bea_arg(uVar7), bea_arg(uVar26), bea_arg(uVar10), bea_arg(uVar27));
    }
    iVar5 = iVar5 + 0x48;
    iVar6 = iVar5;
    if (*(int *)((int)this_ + 0x20) == 3) {
      fVar17 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
      lVar29 = (longlong)ROUND(fVar17 * (float10)2.7f * (float10)100.0f);
      uVar14 = (uint)lVar29 & 0x800000ff;
      if ((int)uVar14 < 0) {
        uVar14 = (uVar14 - 1 | 0xffffff00) + 1;
      }
      uVar13 = (int)(uVar14 - 0x80) >> 0x1f;
      iVar11 = (uVar14 - 0x80 ^ uVar13) - uVar13;
      uVar14 = ((int)(iVar11 + (iVar11 >> 0x1f & 3U)) >> 2) * 0x101 + (uVar9 | 0x400000) +
               iVar11 * 0x10000;
    }
    else if (*(int *)((int)this_ + 0x38) == 1) {
      uVar14 = uVar9 | 0xf0f0f0;
    }
    else {
      uVar14 = uVar9 | 0x202020;
    }
    uVar7 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0xcada9));
    FUN_0055e64e(bea_arg(local_80), bea_arg(uVar7));
    puVar24 = (undefined1 *)&local_90;
    puVar25 = local_80;
    pvVar8 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
    FUN_00540680(bea_arg(pvVar8), bea_arg(puVar25), bea_arg(puVar24));
    if ((*(int *)((int)this_ + 0x38) == 1) || (*(char *)((int)this_ + 0x24) == '\x01')) {
      uVar7 = (undefined4)((ulonglong)lVar29 >> 0x20);
      fVar21 = (float)iVar6;
      cVar3 = FUN_00523b50(bea_arg(320.0f - (float)(iVar12 / 2)), bea_arg(fVar21), bea_arg((float)(iVar12 / 2) + 320.0f), bea_arg((float)(iStack_8c + iVar6)));
      if (cVar3 != '\0') {
        *(undefined4 *)((int)this_ + 0x20) = 3;
      }
      cVar3 = FUN_00523cc0(320.0f - (float)(iVar12 / 2),fVar21,(float)(iVar12 / 2) + 320.0f,
                           (float)(iStack_8c + iVar6));
      bVar16 = cVar3 != '\0';
      if (bVar16) {
        *(undefined4 *)((int)this_ + 0x20) = 3;
      }
      uVar27 = 0x3f800000;
      uVar10 = 0x3f800000;
      lVar29 = CONCAT44(uVar7,iVar12 / 2);
      uVar26 = 0;
      puVar24 = local_80;
      uVar7 = 0;
      fVar20 = 320.0f - (float)(iVar12 / 2);
      pvVar8 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
      iVar5 = iVar6;
      FUN_004659a0(bea_arg(pvVar8), bea_arg(fVar20), bea_arg(fVar21), bea_arg(uVar14), bea_arg(puVar24), bea_arg(uVar7), bea_arg(uVar26), bea_arg(uVar10), bea_arg(uVar27));
    }
    iVar5 = iVar5 + 0x18;
    iVar6 = iVar5;
    if (*(int *)((int)this_ + 0x20) == 4) {
      fVar17 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
      lVar29 = (longlong)ROUND(fVar17 * (float10)2.7f * (float10)100.0f);
      uVar14 = (uint)lVar29 & 0x800000ff;
      if ((int)uVar14 < 0) {
        uVar14 = (uVar14 - 1 | 0xffffff00) + 1;
      }
      uVar13 = (int)(uVar14 - 0x80) >> 0x1f;
      iVar11 = (uVar14 - 0x80 ^ uVar13) - uVar13;
      uVar14 = ((int)(iVar11 + (iVar11 >> 0x1f & 3U)) >> 2) * 0x101 + (uVar9 | 0x400000) +
               iVar11 * 0x10000;
    }
    else if (*(int *)((int)this_ + 0x3c) == 1) {
      uVar14 = uVar9 | 0xf0f0f0;
    }
    else {
      uVar14 = uVar9 | 0x202020;
    }
    uVar7 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x7a211));
    FUN_0055e64e(bea_arg(local_80), bea_arg(uVar7));
    puVar24 = (undefined1 *)&local_90;
    puVar25 = local_80;
    pvVar8 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
    FUN_00540680(bea_arg(pvVar8), bea_arg(puVar25), bea_arg(puVar24));
    if ((*(int *)((int)this_ + 0x3c) == 1) || (*(char *)((int)this_ + 0x24) == '\x01')) {
      uVar7 = (undefined4)((ulonglong)lVar29 >> 0x20);
      fVar21 = (float)iVar6;
      cVar3 = FUN_00523b50(bea_arg(320.0f - (float)(iVar12 / 2)), bea_arg(fVar21), bea_arg((float)(iVar12 / 2) + 320.0f), bea_arg((float)(iStack_8c + iVar6)));
      if (cVar3 != '\0') {
        *(undefined4 *)((int)this_ + 0x20) = 4;
      }
      cVar3 = FUN_00523cc0(320.0f - (float)(iVar12 / 2),fVar21,(float)(iVar12 / 2) + 320.0f,
                           (float)(iStack_8c + iVar6));
      if (cVar3 != '\0') {
        *(undefined4 *)((int)this_ + 0x20) = 4;
        bVar16 = true;
      }
      uVar27 = 0x3f800000;
      uVar10 = 0x3f800000;
      lVar29 = CONCAT44(uVar7,iVar12 / 2);
      uVar26 = 0;
      puVar24 = local_80;
      uVar7 = 0;
      fVar20 = 320.0f - (float)(iVar12 / 2);
      pvVar8 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
      iVar5 = iVar6;
      FUN_004659a0(bea_arg(pvVar8), bea_arg(fVar20), bea_arg(fVar21), bea_arg(uVar14), bea_arg(puVar24), bea_arg(uVar7), bea_arg(uVar26), bea_arg(uVar10), bea_arg(uVar27));
    }
    iVar5 = iVar5 + 0x18;
    if (*(int *)((int)this_ + 0x20) == 5) {
      fVar17 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
      lVar29 = (longlong)ROUND(fVar17 * (float10)2.7f * (float10)100.0f);
      uVar14 = (uint)lVar29 & 0x800000ff;
      if ((int)uVar14 < 0) {
        uVar14 = (uVar14 - 1 | 0xffffff00) + 1;
      }
      uVar13 = (int)(uVar14 - 0x80) >> 0x1f;
      iVar6 = (uVar14 - 0x80 ^ uVar13) - uVar13;
      uVar9 = ((int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2) * 0x101 + (uVar9 | 0x400000) +
              iVar6 * 0x10000;
    }
    else if (*(int *)((int)this_ + 0x40) == 1) {
      uVar9 = uVar9 | 0xf0f0f0;
    }
    else {
      uVar9 = uVar9 | 0x202020;
    }
    uVar7 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x265233));
    FUN_0055e64e(bea_arg(local_80), bea_arg(uVar7));
    puVar24 = (undefined1 *)&local_90;
    puVar25 = local_80;
    pvVar8 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
    FUN_00540680(bea_arg(pvVar8), bea_arg(puVar25), bea_arg(puVar24));
    if ((*(int *)((int)this_ + 0x40) != 0) || (*(char *)((int)this_ + 0x24) == '\x01')) {
      uVar27 = 0x3f800000;
      fVar21 = (float)iVar5;
      uVar10 = 0x3f800000;
      uVar26 = 0;
      puVar24 = local_80;
      uVar7 = 0;
      lVar29 = CONCAT44((int)((ulonglong)lVar29 >> 0x20),iVar12 / 2);
      fVar20 = 320.0f - (float)(iVar12 / 2);
      pvVar8 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
      FUN_004659a0(bea_arg(pvVar8), bea_arg(fVar20), bea_arg(fVar21), bea_arg(uVar9), bea_arg(puVar24), bea_arg(uVar7), bea_arg(uVar26), bea_arg(uVar10), bea_arg(uVar27));
    }
    FUN_00523a70(0,0,0,0,(int)lVar29,
                 (int)((ulonglong)lVar29 >> 0x20),iVar5,iVar12);
    DAT_00679b40 = 0;
  }
  if (((*(int *)((int)this_ + 0x44) == 2) && (*(int *)((int)this_ + 0x18) != 0)) &&
     (DAT_008aa468 == 0)) {
    lVar1 = (longlong)ROUND((float)*(int *)((int)this_ + 0x18) * 0.75f);
    iVar12 = (int)lVar1;
    iVar6 = iVar12;
    if (0xa0 < iVar12) {
      iVar6 = 0xa0;
    }
    if (*(char *)((int)this_ + 0x24) != '\0') {
      FUN_00555be0((float)_DAT_0089ce1c + (float)DAT_0089ce14 * 0.5f,
                   ((float)DAT_0089ce18 - (float)DAT_0089ce18 * 0.5f) - 10.0f,0x3a83126f,
                   *(undefined4 *)((int)this_ + 8),4,0,0x3f800000,0,iVar6 << 0x18 | 0x505050,
                   0x3eae147b,0x3f19999a,0,0x3f800000,0);
    }
    iVar6 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
    iVar6 = *(int *)(iVar6 + 0x54);
    iVar5 = FUN_00515b00();
    iVar5 = (iVar5 / 2 - (iVar6 * 5) / 2) + *(int *)((int)this_ + 0x28);
    iVar6 = iVar5;
    uVar7 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x265233));
    FUN_0055e64e(bea_arg(local_80), bea_arg(uVar7));
    puVar24 = (undefined1 *)&local_90;
    puVar25 = local_80;
    pvVar8 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
    FUN_00540680(bea_arg(pvVar8), bea_arg(puVar25), bea_arg(puVar24));
    if (*(char *)((int)this_ + 0x24) != '\0') {
      fVar21 = (float)iVar6;
      uVar10 = 0x3f800000;
      uVar26 = 0;
      puVar24 = local_80;
      uVar7 = 0;
      uVar14 = iVar12 << 0x18 | 0x505050;
      iVar6 = FUN_00515940();
      fVar20 = (float)(iVar6 / 2) - (float)(iVar12 / 2);
      pvVar8 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
      FUN_00540640(bea_arg(pvVar8), bea_arg(fVar20), bea_arg(fVar21), bea_arg(uVar14), bea_arg(puVar24), bea_arg(uVar7), bea_arg(uVar26), bea_arg(uVar10));
    }
    iStack_8c = (int)((ulonglong)lVar1 >> 0x20);
    iVar5 = iVar5 + iStack_8c;
    iVar6 = iVar5;
    if (*(int *)((int)this_ + 0x20) == 0) {
      fVar17 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
      uVar14 = (uint)(longlong)ROUND(fVar17 * (float10)2.7f * (float10)100.0f) & 0x800000ff;
      if ((int)uVar14 < 0) {
        uVar14 = (uVar14 - 1 | 0xffffff00) + 1;
      }
      uVar9 = (int)(uVar14 - 0x80) >> 0x1f;
      iVar11 = (uVar14 - 0x80 ^ uVar9) - uVar9;
      uVar14 = ((int)(iVar11 + (iVar11 >> 0x1f & 3U)) >> 2) * 0x101 + (iVar12 << 0x18 | 0x400000U) +
               iVar11 * 0x10000;
    }
    else if (*(int *)((int)this_ + 0x2c) == 1) {
      uVar14 = iVar12 << 0x18 | 0xf0f0f0;
    }
    else {
      uVar14 = iVar12 << 0x18 | 0x202020;
    }
    uVar9 = iVar12 << 0x18;
    if (*(int *)(DAT_008a9d3c + 0x20) == 0) {
      uVar7 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x226f16));
    }
    else {
      uVar7 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x148fe9));
    }
    FUN_0055e64e(bea_arg(local_80), bea_arg(uVar7));
    puVar24 = (undefined1 *)&local_90;
    puVar25 = local_80;
    pvVar8 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
    FUN_00540680(bea_arg(pvVar8), bea_arg(puVar25), bea_arg(puVar24));
    if ((*(int *)((int)this_ + 0x2c) != 0) || (*(char *)((int)this_ + 0x24) == '\x01')) {
      fVar21 = (float)iVar6;
      uVar27 = 0x3f800000;
      uVar10 = 0x3f800000;
      uVar26 = 0;
      puVar24 = local_80;
      uVar7 = 0;
      iVar6 = FUN_00515940();
      fVar20 = (float)(iVar6 / 2) - (float)(iVar12 / 2);
      pvVar8 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
      FUN_004659a0(bea_arg(pvVar8), bea_arg(fVar20), bea_arg(fVar21), bea_arg(uVar14), bea_arg(puVar24), bea_arg(uVar7), bea_arg(uVar26), bea_arg(uVar10), bea_arg(uVar27));
    }
    iVar6 = iVar5 + 0x18;
    if (*(int *)((int)this_ + 0x20) == 1) {
      fVar17 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
      uVar14 = (uint)(longlong)ROUND(fVar17 * (float10)2.7f * (float10)100.0f) & 0x800000ff;
      if ((int)uVar14 < 0) {
        uVar14 = (uVar14 - 1 | 0xffffff00) + 1;
      }
      uVar13 = (int)(uVar14 - 0x80) >> 0x1f;
      iVar11 = (uVar14 - 0x80 ^ uVar13) - uVar13;
      uVar14 = ((int)(iVar11 + (iVar11 >> 0x1f & 3U)) >> 2) * 0x101 + (uVar9 | 0x400000) +
               iVar11 * 0x10000;
    }
    else if (*(int *)((int)this_ + 0x30) == 1) {
      uVar14 = uVar9 | 0xf0f0f0;
    }
    else {
      uVar14 = uVar9 | 0x202020;
    }
    if (DAT_008a9ab8 == 1) {
      uVar7 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x20df719));
    }
    else {
      uVar7 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x3ba2e96));
    }
    FUN_0055e64e(bea_arg(local_80), bea_arg(uVar7));
    puVar24 = (undefined1 *)&local_90;
    puVar25 = local_80;
    pvVar8 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
    FUN_00540680(bea_arg(pvVar8), bea_arg(puVar25), bea_arg(puVar24));
    if ((*(int *)((int)this_ + 0x34) != 0) || (*(char *)((int)this_ + 0x24) == '\x01')) {
      fVar21 = (float)iVar6;
      uVar27 = 0x3f800000;
      uVar10 = 0x3f800000;
      uVar26 = 0;
      puVar24 = local_80;
      uVar7 = 0;
      iVar6 = FUN_00515940();
      fVar20 = (float)(iVar6 / 2) - (float)(iVar12 / 2);
      pvVar8 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
      FUN_004659a0(bea_arg(pvVar8), bea_arg(fVar20), bea_arg(fVar21), bea_arg(uVar14), bea_arg(puVar24), bea_arg(uVar7), bea_arg(uVar26), bea_arg(uVar10), bea_arg(uVar27));
    }
    iVar5 = iVar5 + 0x30;
    if (*(int *)((int)this_ + 0x20) == 2) {
      fVar17 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
      uVar14 = (uint)(longlong)ROUND(fVar17 * (float10)2.7f * (float10)100.0f) & 0x800000ff;
      if ((int)uVar14 < 0) {
        uVar14 = (uVar14 - 1 | 0xffffff00) + 1;
      }
      uVar13 = (int)(uVar14 - 0x80) >> 0x1f;
      iVar6 = (uVar14 - 0x80 ^ uVar13) - uVar13;
      uVar9 = ((int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2) * 0x101 + (uVar9 | 0x400000) +
              iVar6 * 0x10000;
    }
    else if (*(int *)((int)this_ + 0x34) == 1) {
      uVar9 = uVar9 | 0xf0f0f0;
    }
    else {
      uVar9 = uVar9 | 0x202020;
    }
    uVar7 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x6f9da));
    FUN_0055e64e(bea_arg(local_80), bea_arg(uVar7));
    puVar24 = (undefined1 *)&local_90;
    puVar25 = local_80;
    pvVar8 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
    FUN_00540680(bea_arg(pvVar8), bea_arg(puVar25), bea_arg(puVar24));
    if ((*(int *)((int)this_ + 0x38) == 1) || (*(char *)((int)this_ + 0x24) == '\x01')) {
      fVar21 = (float)iVar5;
      uVar27 = 0x3f800000;
      uVar10 = 0x3f800000;
      uVar26 = 0;
      puVar24 = local_80;
      uVar7 = 0;
      iVar6 = FUN_00515940();
      fVar20 = (float)(iVar6 / 2) - (float)(iVar12 / 2);
      pvVar8 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
      FUN_004659a0(bea_arg(pvVar8), bea_arg(fVar20), bea_arg(fVar21), bea_arg(uVar9), bea_arg(puVar24), bea_arg(uVar7), bea_arg(uVar26), bea_arg(uVar10), bea_arg(uVar27));
    }
  }
  if (!bVar16) {
    DAT_009c68ac = 1;
    DAT_009c690d = 1;
    return;
  }
  iVar12 = FUN_004705d0(bea_arg(&DAT_008a9a98), bea_arg(0));
  if (iVar12 != 0) {
    pvVar8 = (void *)FUN_004705d0(bea_arg(&DAT_008a9a98), bea_arg(0));
    pvVar8 = (void *)FUN_0042e4b0(bea_arg(pvVar8));
    if (pvVar8 == this_) {
      uVar7 = 0;
      goto LAB_00474097;
    }
  }
  iVar12 = FUN_004705d0(bea_arg(&DAT_008a9a98), bea_arg(1));
  if (iVar12 == 0) {
    DAT_009c68ac = 1;
    DAT_009c690d = 1;
    return;
  }
  pvVar8 = (void *)FUN_004705d0(bea_arg(&DAT_008a9a98), bea_arg(1));
  pvVar8 = (void *)FUN_0042e4b0(bea_arg(pvVar8));
  if (pvVar8 != this_) {
    DAT_009c68ac = 1;
    DAT_009c690d = 1;
    return;
  }
  uVar7 = 1;
LAB_00474097:
  uVar7 = FUN_004705d0(bea_arg(&DAT_008a9a98), bea_arg(uVar7));
  FUN_00472b40(bea_arg(this_), bea_arg(uVar7));
  DAT_009c68ac = 1;
  DAT_009c690d = 1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00472f10, ap_00472f10));
