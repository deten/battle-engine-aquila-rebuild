// auto-ported from 004623e0_vslot11.c (CFEPMain::vslot11, 569 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CFEPMain;
#define DAT_00662aa8 GLOBAL_AT(int, 0x00662aa8)
#define DAT_00660620 GLOBAL_AT(int, 0x00660620)
#define DAT_008a1894 GLOBAL_AT(int, 0x008a1894)
#define DAT_008a9580 GLOBAL_AT(int, 0x008a9580)
#define DAT_008a1110 GLOBAL_AT(int, 0x008a1110)
#define DAT_008a968c GLOBAL_AT(int, 0x008a968c)
#define DAT_008a9690 GLOBAL_AT(int, 0x008a9690)
#define DAT_008a9584 GLOBAL_AT(int, 0x008a9584)
#define DAT_0089d94c GLOBAL_AT(int, 0x0089d94c)
#define DAT_0089dab8 GLOBAL_AT(int, 0x0089dab8)
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
#define DAT_00677614 GLOBAL_AT(int, 0x00677614)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_00675688 GLOBAL_AT(int, 0x00675688)
#define _DAT_00677630 GLOBAL_AT(int, 0x00677630)
#define _DAT_00677634 GLOBAL_AT(int, 0x00677634)
typedef uint32_t (BEA_THISCALL* FUN_0041b7c0_t)(uint32_t);
static const bea_guard<FUN_0041b7c0_t> FUN_0041b7c0 = {(FUN_0041b7c0_t)0x0041b7c0};
typedef int (BEA_THISCALL* FUN_0044d390_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044d390_t> FUN_0044d390 = {(FUN_0044d390_t)0x0044d390};
typedef uint32_t (BEA_THISCALL* FUN_004589f0_t)(uint32_t);
static const bea_guard<FUN_004589f0_t> FUN_004589f0 = {(FUN_004589f0_t)0x004589f0};
typedef uint32_t (BEA_THISCALL* FUN_00460310_t)(uint32_t);
static const bea_guard<FUN_00460310_t> FUN_00460310 = {(FUN_00460310_t)0x00460310};
typedef uint32_t (BEA_THISCALL* FUN_00466ae0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00466ae0_t> FUN_00466ae0 = {(FUN_00466ae0_t)0x00466ae0};
typedef uint32_t (BEA_CDECL* FUN_00468770_t)(int, ...);
static const bea_guard<FUN_00468770_t> FUN_00468770 = {(FUN_00468770_t)0x00468770};
typedef undefined * (BEA_CDECL* FUN_0046a2a0_t)(undefined4, undefined4, ...);
static const bea_guard<FUN_0046a2a0_t> FUN_0046a2a0 = {(FUN_0046a2a0_t)0x0046a2a0};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef uint32_t (BEA_THISCALL* FUN_0051fff0_t)(uint32_t);
static const bea_guard<FUN_0051fff0_t> FUN_0051fff0 = {(FUN_0051fff0_t)0x0051fff0};
typedef wchar_t * (BEA_CDECL* FUN_00524830_t)(undefined4, ...);
static const bea_guard<FUN_00524830_t> FUN_00524830 = {(FUN_00524830_t)0x00524830};

static void BEA_THISCALL ap_004623e0(CFEPMain * this_)
{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  switch(*(undefined4 *)(this_ + 8)) {
  case 0:
    if (DAT_00662aa8 == 0) {
      FUN_0041b7c0(bea_arg(&DAT_00660620));
      FUN_0051fff0(bea_arg(&DAT_008a1894));
      DAT_008a9580 = 1;
      FUN_004589f0(bea_arg(&DAT_008a1110));
      DAT_008a968c = 7;
      DAT_008a9690 = 0;
      DAT_008a9584 = 0;
      DAT_0089d94c = 100;
      FUN_00460310(bea_arg(&DAT_0089dab8));
      FUN_00468770(1);
      *(undefined4 *)(this_ + 0x18) = 0;
      return;
    }
    uVar1 = 1;
    break;
  case 1:
    FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(7), bea_arg(0x46));
    FUN_00468770(1);
    *(undefined4 *)(this_ + 0x18) = 0;
    return;
  case 2:
    if (DAT_00662aa8 == 0) {
      DAT_008a9580 = 0;
      FUN_004589f0(bea_arg(&DAT_008a1110));
      DAT_008a968c = 7;
      DAT_008a9690 = 0;
      FUN_00468770(1);
      *(undefined4 *)(this_ + 0x18) = 0;
      return;
    }
    uVar1 = 2;
    break;
  case 3:
    FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(0x10), bea_arg(0x46));
    FUN_00468770(1);
    *(undefined4 *)(this_ + 0x18) = 0;
    return;
  case 4:
    FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(8), bea_arg(0x46));
    FUN_00468770(1);
    *(undefined4 *)(this_ + 0x18) = 0;
    return;
  case 5:
    FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(0x11), bea_arg(0x46));
    FUN_00468770(1);
    *(undefined4 *)(this_ + 0x18) = 0;
    return;
  case 6:
    uVar7 = 0xb;
    uVar6 = 2;
    uVar5 = 0;
    uVar4 = 10;
    uVar3 = 0;
    DAT_00677614 = 0;
    uVar1 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
    uVar2 = FUN_00524830(0xe4);
    FUN_0044d390(bea_arg(&DAT_00675688), bea_arg(0x43a00000), bea_arg(0x43700000), bea_arg(0x43c80000), bea_arg(0x3dcccccd), bea_arg(uVar2), bea_arg(uVar1), bea_arg(uVar3), bea_arg(uVar4), bea_arg(uVar5), bea_arg(uVar6), bea_arg(uVar7));
    _DAT_00677630 = 0;
    _DAT_00677634 = 0;
  default:
    FUN_00468770(1);
    *(undefined4 *)(this_ + 0x18) = 0;
    return;
  case 8:
    DAT_008a9580 = 1;
    if (DAT_008a9584 == 1) {
      DAT_008a9580 = 1;
      FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(0xb), bea_arg(0));
    }
    else {
      FUN_004589f0(bea_arg(&DAT_008a1110));
    }
    DAT_008a968c = 0;
    DAT_008a9690 = 0x46;
    FUN_00468770(1);
    *(undefined4 *)(this_ + 0x18) = 0;
    return;
  }
  uVar7 = 2;
  uVar6 = 0;
  uVar5 = 10;
  uVar4 = 0;
  uVar2 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
  uVar3 = FUN_0046a2a0(0x18,0);
  FUN_0044d390(bea_arg(&DAT_00675688), bea_arg(0x43a00000), bea_arg(0x43700000), bea_arg(0x43960000), bea_arg(0x3dcccccd), bea_arg(uVar3), bea_arg(uVar2), bea_arg(uVar4), bea_arg(uVar5), bea_arg(uVar6), bea_arg(uVar7), bea_arg(uVar1));
  FUN_00468770(1);
  *(undefined4 *)(this_ + 0x18) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004623e0, ap_004623e0));
