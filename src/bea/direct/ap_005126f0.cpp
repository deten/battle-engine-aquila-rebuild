// auto-ported from 005126f0_vslot8.c (PCLTShell::vslot8, 630 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CTweakSLONG;
typedef char PCLTShell;
#define DAT_0066eb90 GLOBAL_AT(int, 0x0066eb90)
#define DAT_008554f0 GLOBAL_AT(int, 0x008554f0)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define DAT_008889f0 GLOBAL_AT(int, 0x008889f0)
#define DAT_00856f64 GLOBAL_AT(int, 0x00856f64)
#define DAT_009cc0e8 GLOBAL_AT(undefined, 0x009cc0e8)
#define DAT_009cc108 GLOBAL_AT(undefined, 0x009cc108)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00889078 GLOBAL_AT(int, 0x00889078)
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define DAT_00889074 GLOBAL_AT(int, 0x00889074)
#define s_C__dev_ONSLAUGHT2_ltshell_cpp_0063dd8c ((char*)0x0063dd8c)
#define s_IDO_end__0063dddc ((char*)0x0063dddc)
#define s_InitDeviceObjects_0063dde8 ((char*)0x0063dde8)
#define s_Card_can_t_do_Mod2X_0063ddfc ((char*)0x0063ddfc)
typedef uint32_t (BEA_THISCALL* CTweakSLONG__vslot0_t)(uint32_t, uint32_t);
static const bea_guard<CTweakSLONG__vslot0_t> CTweakSLONG__vslot0 = {(CTweakSLONG__vslot0_t)0x00528ad0};
typedef uint32_t (BEA_THISCALL* FUN_0042c810_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042c810_t> FUN_0042c810 = {(FUN_0042c810_t)0x0042c810};
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef int (BEA_THISCALL* FUN_00513120_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513120_t> FUN_00513120 = {(FUN_00513120_t)0x00513120};
typedef uint32_t (BEA_THISCALL* FUN_00528b00_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00528b00_t> FUN_00528b00 = {(FUN_00528b00_t)0x00528b00};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef uint32_t (BEA_CDECL* FUN_0054fde0_t)(void);
static const bea_guard<FUN_0054fde0_t> FUN_0054fde0 = {(FUN_0054fde0_t)0x0054fde0};

static uint32_t BEA_THISCALL ap_005126f0(PCLTShell * this_)
{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined *this_00;
  PCLTShell *pPVar6;
  int iVar7;
  undefined4 uVar8;
  
  if (((byte)this_[0x32f34] & 0x10) == 0) {
    FUN_00441740(&DAT_0066eb90,s_Card_can_t_do_Mod2X_0063ddfc);
    CTweakSLONG__vslot0(bea_arg((CTweakSLONG *)&DAT_008554f0), bea_arg(0));
  }
  FUN_00441740(&DAT_0066eb90,s_InitDeviceObjects_0063dde8);
  iVar7 = *(int *)(((uint8_t *)&DAT_00855bb0) + (DAT_008889f0 + 1) * 0x516c);
  iVar4 = DAT_008889f0 * 0x516c;
  iVar1 = *(int *)(((char *)&DAT_00856f64) + iVar7 * 0xf68 + iVar4);
  uVar5 = bea_vcall<uint32_t>(*(int **)(this_ + 0x32ea0), 0x10, *(int **)(this_ + 0x32ea0));
  uVar5 = uVar5 >> 0x14;
  switch(*(uint *)(iVar4 + iVar7 * 0xf68 + iVar1 * 0x18 + 0x856164) & 7) {
  case 0:
  case 1:
  case 2:
    FUN_00528b00(bea_arg(&DAT_009cc0e8), bea_arg(1));
    if (uVar5 < 0xf) {
      uVar8 = 2;
    }
    else if (uVar5 < 0x28) {
      uVar8 = 1;
    }
    else {
LAB_00512833:
      uVar8 = 0;
    }
    break;
  default:
    if (uVar5 < 4) {
      uVar8 = 2;
    }
    else {
      if (9 < uVar5) goto LAB_00512833;
      uVar8 = 1;
    }
    break;
  case 4:
  case 5:
  case 6:
    if (uVar5 < 4) {
      uVar8 = 2;
    }
    else {
      if (0xe < uVar5) {
        uVar8 = 0;
        this_00 = &DAT_009cc108;
        if (uVar5 < 0x3c) {
          FUN_00528b00(bea_arg(&DAT_009cc108), bea_arg(0));
          uVar8 = 1;
          this_00 = &DAT_009cc0e8;
        }
        goto LAB_0051283a;
      }
      uVar8 = 1;
    }
    FUN_00528b00(bea_arg(&DAT_009cc108), bea_arg(uVar8));
    uVar8 = 1;
    this_00 = &DAT_009cc0e8;
    goto LAB_0051283a;
  case 7:
    FUN_00528b00(bea_arg(&DAT_009cc0e8), bea_arg(2));
    if (uVar5 < 10) {
      uVar8 = 2;
    }
    else {
      if (0x1d < uVar5) goto LAB_00512833;
      uVar8 = 1;
    }
  }
  this_00 = &DAT_009cc108;
LAB_0051283a:
  FUN_00528b00(bea_arg(this_00), bea_arg(uVar8));
  *(undefined4 *)(this_ + 0x330dc) = 1;
  pPVar6 = this_ + 0x333f4;
  iVar7 = 4;
  do {
    uVar8 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x110), bea_arg(0x80), bea_arg(s_C__dev_ONSLAUGHT2_ltshell_cpp_0063dd8c), bea_arg(0x480));
    *(undefined4 *)(pPVar6 + -0x10) = uVar8;
    uVar8 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x110), bea_arg(0x80), bea_arg(s_C__dev_ONSLAUGHT2_ltshell_cpp_0063dd8c), bea_arg(0x481));
    *(undefined4 *)pPVar6 = uVar8;
    pPVar6 = pPVar6 + 4;
    iVar7 = iVar7 + -1;
    piVar2 = DAT_00889078;
  } while (BEA_LOOP_GUARD((iVar7 != 0)));
  while (BEA_LOOP_GUARD((piVar3 = DAT_00889078, piVar2 != (int *)0x0))) {
    bea_vcall<uint32_t>(piVar2, 0x4);
    piVar2 = (int *)piVar2[1];
    FUN_0042c810(bea_arg(&DAT_00663498), bea_arg(0), bea_arg(2));
  }
  while (BEA_LOOP_GUARD((piVar2 = DAT_00889074, piVar3 != (int *)0x0))) {
    bea_vcall<uint32_t>(piVar3, 0x8);
    piVar3 = (int *)piVar3[1];
    FUN_0042c810(bea_arg(&DAT_00663498), bea_arg(0), bea_arg(2));
  }
  while (BEA_LOOP_GUARD((piVar2 != (int *)0x0))) {
    bea_vcall<uint32_t>(piVar2, 0x4);
    piVar2 = (int *)piVar2[1];
    FUN_0042c810(bea_arg(&DAT_00663498), bea_arg(0), bea_arg(2));
  }
  FUN_0054fde0();
  piVar2 = DAT_00889074;
  while (BEA_LOOP_GUARD((piVar2 != (int *)0x0))) {
    bea_vcall<uint32_t>(piVar2, 0x8);
    piVar2 = (int *)piVar2[1];
    FUN_0042c810(bea_arg(&DAT_00663498), bea_arg(0), bea_arg(2));
  }
  iVar7 = FUN_00513120(bea_arg(this_), bea_arg(*(undefined4 *)(this_ + 0x32e94)));
  FUN_00441740(&DAT_0066eb90,s_IDO_end__0063dddc);
  return iVar7 == 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005126f0, ap_005126f0));
