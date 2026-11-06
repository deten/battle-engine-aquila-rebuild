// auto-ported from 0051d020_vslot2.c (CFEPMultiplayer::vslot2, 313 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CFEPMultiplayer;
#define DAT_00677d70 GLOBAL_AT(int, 0x00677d70)
#define DAT_00677614 GLOBAL_AT(int, 0x00677614)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_00675688 GLOBAL_AT(int, 0x00675688)
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
typedef int (BEA_THISCALL* FUN_0044d390_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044d390_t> FUN_0044d390 = {(FUN_0044d390_t)0x0044d390};
typedef uint32_t (BEA_CDECL* FUN_00453780_t)(int, ...);
static const bea_guard<FUN_00453780_t> FUN_00453780 = {(FUN_00453780_t)0x00453780};
typedef uint (BEA_CDECL* FUN_00456650_t)(uint32_t);
static const bea_guard<FUN_00456650_t> FUN_00456650 = {(FUN_00456650_t)0x00456650};
typedef uint32_t (BEA_THISCALL* FUN_00466ae0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00466ae0_t> FUN_00466ae0 = {(FUN_00466ae0_t)0x00466ae0};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef wchar_t * (BEA_CDECL* FUN_00524830_t)(undefined4, ...);
static const bea_guard<FUN_00524830_t> FUN_00524830 = {(FUN_00524830_t)0x00524830};

static void BEA_THISCALL ap_0051d020(CFEPMultiplayer * this_, int param_1)
{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CFEPMultiplayer *pCVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  if (ABS(*(float *)(this_ + 0x58) - *(float *)(this_ + 0x5c)) <= 1.0f) {
    if (*(float *)(this_ + 0x5c) <= *(float *)(this_ + 0x58)) {
      fVar1 = *(float *)(this_ + 0x5c) + 1.0f;
    }
    else {
      fVar1 = *(float *)(this_ + 0x5c) - 1.0f;
    }
  }
  else {
    fVar1 = (*(float *)(this_ + 0x5c) - *(float *)(this_ + 0x58)) * 0.25f + *(float *)(this_ + 0x58);
  }
  *(float *)(this_ + 0x58) = fVar1;
  iVar7 = 0;
  pCVar5 = this_ + 0x10;
  do {
    iVar6 = 0;
    do {
      if (((param_1 == 0) && (iVar7 == *(int *)(this_ + 0x60))) && (iVar6 == *(int *)(this_ + 100))) {
        fVar1 = *(float *)pCVar5 + 0.1f;
      }
      else {
        fVar1 = *(float *)pCVar5 - 0.1f;
      }
      *(float *)pCVar5 = fVar1;
      if (*(float *)pCVar5 < 0.0f) {
        *(float *)pCVar5 = 0.0f;
      }
      if (1.0f < *(float *)pCVar5) {
        *(float *)pCVar5 = 1.0f;
      }
      iVar6 = iVar6 + 1;
      pCVar5 = pCVar5 + 4;
    } while (BEA_LOOP_GUARD((iVar6 < 3)));
    iVar7 = iVar7 + 1;
  } while (BEA_LOOP_GUARD((iVar7 < 6)));
  if (param_1 == 0) {
    cVar2 = FUN_00456650(bea_arg(1));
    if (cVar2 == '\0') {
      if (DAT_00677d70 == 1) {
        FUN_00453780(2);
        return;
      }
      uVar12 = 0;
      uVar11 = 3;
      uVar10 = 0;
      uVar9 = 10;
      uVar8 = 0x3c;
      DAT_00677614 = 0;
      uVar3 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
      uVar4 = FUN_00524830(0xd5);
      FUN_0044d390(bea_arg(&DAT_00675688), bea_arg(0x43a00000), bea_arg(0x43700000), bea_arg(0x43c80000), bea_arg(0x3dcccccd), bea_arg(uVar4), bea_arg(uVar3), bea_arg(uVar8), bea_arg(uVar9), bea_arg(uVar10), bea_arg(uVar11), bea_arg(uVar12));
      FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(0x11), bea_arg(0x28));
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051d020, ap_0051d020));
