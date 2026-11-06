// auto-ported from 0053cd30_FUN_0053cd30.c (FUN_0053cd30, 1250 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x170: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
// @hand-fixed 2026-10-28 check_fild: local_100[3] = (float)uStack_114 -> bea_fcast<float> (original copies it with mov edx,[esp+0x24] / mov [esp+0x44],edx at 0x53cfb9)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char fStack_11c;
typedef char fStack_120;
#define DAT_00888a40 GLOBAL_AT(int, 0x00888a40)
#define DAT_009c6954 GLOBAL_AT(undefined4, 0x009c6954)
#define DAT_009c6994 GLOBAL_AT(undefined4, 0x009c6994)
#define DAT_009c6914 GLOBAL_AT(undefined4, 0x009c6914)
#define DAT_0089c928 GLOBAL_AT(float, 0x0089c928)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)
#define DAT_008aa4e8 GLOBAL_AT(int, 0x008aa4e8)
#define DAT_0089ce50 GLOBAL_AT(int, 0x0089ce50)
#define DAT_009c73e9 GLOBAL_AT(char, 0x009c73e9)
#define DAT_009c73e8 GLOBAL_AT(char, 0x009c73e8)
#define DAT_009c73ea GLOBAL_AT(char, 0x009c73ea)
typedef uint32_t (BEA_THISCALL* FUN_0040d660_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0040d660_t> FUN_0040d660 = {(FUN_0040d660_t)0x0040d660};
typedef uint32_t (BEA_THISCALL* FUN_00427210_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00427210_t> FUN_00427210 = {(FUN_00427210_t)0x00427210};
typedef int (BEA_THISCALL* FUN_004725d0_t)(uint32_t);
static const bea_guard<FUN_004725d0_t> FUN_004725d0 = {(FUN_004725d0_t)0x004725d0};
typedef undefined4 (BEA_THISCALL* FUN_004881e0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004881e0_t> FUN_004881e0 = {(FUN_004881e0_t)0x004881e0};
typedef uint32_t (BEA_THISCALL* FUN_00500320_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00500320_t> FUN_00500320 = {(FUN_00500320_t)0x00500320};
typedef uint32_t (BEA_STDCALL* FUN_00513820_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513820_t> FUN_00513820 = {(FUN_00513820_t)0x00513820};
typedef uint32_t (BEA_STDCALL* FUN_00513930_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513930_t> FUN_00513930 = {(FUN_00513930_t)0x00513930};
typedef uint32_t (BEA_THISCALL* FUN_00513a50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513a50_t> FUN_00513a50 = {(FUN_00513a50_t)0x00513a50};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef undefined4 (BEA_CDECL* FUN_00515940_t)(void);
static const bea_guard<FUN_00515940_t> FUN_00515940 = {(FUN_00515940_t)0x00515940};
typedef undefined4 (BEA_CDECL* FUN_00515b00_t)(void);
static const bea_guard<FUN_00515b00_t> FUN_00515b00 = {(FUN_00515b00_t)0x00515b00};
typedef uint32_t (BEA_THISCALL* FUN_0053c2e0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0053c2e0_t> FUN_0053c2e0 = {(FUN_0053c2e0_t)0x0053c2e0};
typedef uint32_t (BEA_THISCALL* FUN_0053c510_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0053c510_t> FUN_0053c510 = {(FUN_0053c510_t)0x0053c510};
typedef uint32_t (BEA_THISCALL* FUN_00550b10_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550b10_t> FUN_00550b10 = {(FUN_00550b10_t)0x00550b10};
typedef uint32_t (BEA_THISCALL* FUN_00550be0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550be0_t> FUN_00550be0 = {(FUN_00550be0_t)0x00550be0};
typedef uint32_t (BEA_THISCALL* FUN_00550ca0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550ca0_t> FUN_00550ca0 = {(FUN_00550ca0_t)0x00550ca0};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};
typedef undefined4 (BEA_THISCALL* FUN_00558690_t)(uint32_t);
static const bea_guard<FUN_00558690_t> FUN_00558690 = {(FUN_00558690_t)0x00558690};

static void BEA_THISCALL ap_0053cd30(void * this_, void *param_1)
{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  float *pfVar7;
  undefined4 *puVar8;
  float10 fVar9;
  float10 fVar10;

  alignas(16) uint8_t bea_frame_[0x170] = {};   // the original stack frame (emulate_frame)
  float &local_16c = *reinterpret_cast<float *>(bea_frame_ + 0x170 - 0x16c);
  undefined4 &local_168 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x168);
  undefined4 &local_164 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x164);
  undefined4 &local_160 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x160);
  undefined4 &local_15c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x15c);
  undefined4 &local_158 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x158);
  undefined4 &local_154 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x154);
  undefined4 &local_150 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x150);
  undefined4 uVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 uVar14;
  float *pfVar15;
  undefined4 uVar16;
  float fVar17;
  uint &local_124 = *reinterpret_cast<uint *>(bea_frame_ + 0x170 - 0x124);
  float &fStack_120 = *reinterpret_cast<float *>(bea_frame_ + 0x170 - 0x120);
  float &fStack_11c = *reinterpret_cast<float *>(bea_frame_ + 0x170 - 0x11c);
  undefined4 &uStack_118 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x118);
  undefined4 &uStack_114 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x114);
  undefined4 &local_110 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x110);
  undefined4 &local_10c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x10c);
  undefined4 &local_108 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x108);
  undefined4 &local_104 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0x104);
  float (&local_100)[4] = *reinterpret_cast<float (*)[4]>(bea_frame_ + 0x170 - 0x100);
  float &local_f0 = *reinterpret_cast<float *>(bea_frame_ + 0x170 - 0xf0);
  float &local_ec = *reinterpret_cast<float *>(bea_frame_ + 0x170 - 0xec);
  float &local_e8 = *reinterpret_cast<float *>(bea_frame_ + 0x170 - 0xe8);
  undefined4 &uStack_e4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0xe4);
  undefined4 &uStack_e0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0xe0);
  undefined4 &uStack_dc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0xdc);
  undefined4 &uStack_d8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0xd8);
  undefined4 &uStack_d4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0xd4);
  undefined4 &uStack_d0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0xd0);
  undefined4 &uStack_cc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0xcc);
  undefined4 &uStack_c8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0xc8);
  undefined4 &uStack_c4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x170 - 0xc4);
  undefined4 (&local_c0)[16] = *reinterpret_cast<undefined4 (*)[16]>(bea_frame_ + 0x170 - 0xc0);
  undefined4 (&local_80)[16] = *reinterpret_cast<undefined4 (*)[16]>(bea_frame_ + 0x170 - 0x80);
  undefined4 (&local_40)[16] = *reinterpret_cast<undefined4 (*)[16]>(bea_frame_ + 0x170 - 0x40);
  fVar2 = bea_fcast<float>(DAT_00888a40);
  uVar12 = 0x53cd55;
  FUN_00513820(bea_arg(0), bea_arg(1), bea_arg(4));
  FUN_0053c2e0(bea_arg(this_), bea_arg(param_1));
  FUN_0053c510(bea_arg(this_), bea_arg(param_1));
  pfVar15 = local_100;
  puVar6 = &DAT_009c6954;
  puVar8 = local_c0;
  for (iVar4 = 0x10; ((iVar4 != 0)); iVar4 = iVar4 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  local_110 = 0;
  puVar6 = &DAT_009c6994;
  puVar8 = local_40;
  for (iVar4 = 0x10; ((iVar4 != 0)); iVar4 = iVar4 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  local_10c = 0;
  puVar6 = &DAT_009c6914;
  puVar8 = local_80;
  for (iVar4 = 0x10; ((iVar4 != 0)); iVar4 = iVar4 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  local_108 = 0;
  pfVar3 = (float *)&DAT_0089c928;
  pfVar7 = local_100;
  for (iVar4 = 0xc; ((iVar4 != 0)); iVar4 = iVar4 + -1) {
    *pfVar7 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar7 = pfVar7 + 1;
  }
  puVar6 = &local_110;
  uVar14 = 0x53cdde;
  FUN_00550be0(bea_arg(&DAT_009c65c0), bea_arg(pfVar15), bea_arg(puVar6));
  uVar11 = local_10c;
  local_f0 = local_f0 * fVar2;
  local_ec = local_ec * fVar2;
  local_e8 = local_e8 * fVar2;
  pfVar3 = local_100;
  pfVar7 = (float *)&local_16c;
  for (iVar4 = 0xc; ((iVar4 != 0)); iVar4 = iVar4 + -1) {
    *pfVar7 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar7 = pfVar7 + 1;
  }
  FUN_00550ca0(bea_arg(&DAT_009c65c0), bea_arg(local_110), bea_arg(uVar11), bea_arg(local_108), bea_arg(local_104), bea_arg(local_16c), bea_arg(local_168), bea_arg(local_164), bea_arg(local_160), bea_arg(local_15c), bea_arg(local_158), bea_arg(local_154), bea_arg(local_150), bea_arg(uVar12), bea_arg(uVar14), bea_arg(pfVar15), bea_arg(puVar6));
  iVar4 = FUN_004725d0(bea_arg(&DAT_008a9a98));
  if (iVar4 == 0) {
    iVar4 = FUN_00515b00();
    fVar17 = (float)iVar4 * 0.00078125f;
    iVar4 = FUN_00515940();
    fVar1 = (float)iVar4 * 0.00078125f;
  }
  else {
    iVar4 = FUN_00515b00();
    fVar17 = (float)iVar4 * 0.00046666668f;
    iVar4 = FUN_00515940();
    fVar1 = (float)iVar4 * 0.00093750004f;
  }
  FUN_00550b10(bea_arg(&DAT_009c65c0), bea_arg(0x3f000000), bea_arg(0x42c80000), bea_arg(fVar1), bea_arg(fVar17));
  FUN_00513930(bea_arg(0), bea_arg(1), bea_arg(3));
  FUN_00513930(bea_arg(0), bea_arg(2), bea_arg(3));
  FUN_00513bc0(bea_arg(0xf), bea_arg(0));
  iVar4 = FUN_004725d0(bea_arg(&DAT_008a9a98));
  if (iVar4 == 0) {
    local_124 = *(int *)((int)this_ + 0x3c10) + 1U & 0x80000001;
    if ((int)local_124 < 0) {
      local_124 = (local_124 - 1 | 0xfffffffe) + 1;
    }
  }
  else {
    local_124 = 0;
  }
  uVar12 = FUN_00558690(bea_arg(*(void **)((int)this_ + local_124 * 4 + 0x3f04)));
  FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(0), bea_arg(uVar12));
  FUN_00500320(bea_arg(*(void **)((int)this_ + 0x3f10)), bea_arg(0));
  FUN_00513bc0(bea_arg(0x13), bea_arg(2));
  FUN_00513bc0(bea_arg(0x14), bea_arg(6));
  FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
  uVar14 = 5;
  uVar11 = 0x53cf9b;
  piVar13 = DAT_00888a50;
  bea_vcall<uint32_t>(DAT_00888a50, 0x144, DAT_00888a50,5,0,0x50);
  pfVar15 = &fStack_120;
  uVar16 = 0x53cfa7;
  pfVar3 = (float *)FUN_0040d660(bea_arg(param_1), bea_arg(pfVar15));
  uVar12 = local_10c;
  fVar9 = (float10)fcos(-(float10)*pfVar3);
  local_100[2] = 0.0;
  uStack_118 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0x3f800000;
  fVar10 = (float10)fsin((float10)(float)-(float10)*pfVar3);
  local_100[0] = (float)fVar9;
  local_100[3] = bea_fcast<float>(uStack_114);
  uStack_dc = 0;
  fStack_120 = (float)fVar10;
  local_100[1] = (float)-fVar10;
  fStack_11c = (float)fVar9;
  uStack_e4 = uStack_114;
  local_f0 = fStack_120 * fVar2;
  uStack_e0 = 0;
  uStack_d8 = 0x3f800000;
  uStack_d4 = uStack_c4;
  local_ec = fStack_11c * fVar2;
  local_e8 = fVar2 * 0.0;
  pfVar3 = local_100;
  pfVar7 = (float *)&local_16c;
  for (iVar4 = 0xc; ((iVar4 != 0)); iVar4 = iVar4 + -1) {
    *pfVar7 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar7 = pfVar7 + 1;
  }
  FUN_00550ca0(bea_arg(&DAT_009c65c0), bea_arg(local_110), bea_arg(uVar12), bea_arg(local_108), bea_arg(local_104), bea_arg(local_16c), bea_arg(local_168), bea_arg(local_164), bea_arg(local_160), bea_arg(local_15c), bea_arg(local_158), bea_arg(local_154), bea_arg(uVar11), bea_arg(piVar13), bea_arg(uVar14), bea_arg(uVar16), bea_arg(pfVar15));
  uVar12 = FUN_00558690(bea_arg(*(void **)((int)this_ + local_124 * 4 + 0x3c00)));
  FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(0), bea_arg(uVar12));
  FUN_00500320(bea_arg(*(void **)((int)this_ + 0x3f0c)), bea_arg(0));
  FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
  iVar4 = FUN_004881e0(bea_arg(&DAT_008aa4e8), bea_arg(2));
  if (iVar4 != 0) {
    bea_vcall<uint32_t>(DAT_00888a50, 0x144, DAT_00888a50,5,0,100);
  }
  FUN_00513bc0(bea_arg(0x13), bea_arg(5));
  FUN_00513bc0(bea_arg(0x14), bea_arg(6));
  if (DAT_0089ce50 != 0) {
    FUN_00513bc0(bea_arg(0xf), bea_arg(1));
  }
  FUN_00513930(bea_arg(0), bea_arg(1), bea_arg(1));
  FUN_00513930(bea_arg(0), bea_arg(2), bea_arg(1));
  FUN_00513820(bea_arg(0), bea_arg(1), bea_arg(4));
  puVar6 = local_c0;
  puVar8 = &DAT_009c6954;
  for (iVar4 = 0x10; ((iVar4 != 0)); iVar4 = iVar4 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  DAT_009c73e9 = 1;
  puVar6 = local_80;
  puVar8 = &DAT_009c6914;
  for (iVar4 = 0x10; ((iVar4 != 0)); iVar4 = iVar4 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  DAT_009c73e8 = 1;
  puVar6 = local_40;
  puVar8 = &DAT_009c6994;
  for (iVar4 = 0x10; ((iVar4 != 0)); iVar4 = iVar4 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  DAT_009c73ea = 1;
  FUN_00427210(bea_arg(this_), bea_arg(param_1));
  iVar4 = FUN_004725d0(bea_arg(&DAT_008a9a98));
  if (iVar4 == 0) {
    uVar5 = *(int *)((int)this_ + 0x3c10) + 1U & 0x80000001;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
    }
    *(uint *)((int)this_ + 0x3c10) = uVar5;
    return;
  }
  *(undefined4 *)((int)this_ + 0x3c10) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0053cd30, ap_0053cd30));
