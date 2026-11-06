// auto-ported from 004606b0_vslot3.c (CFEPLevelSelect::vslot3, 857 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CFEPLevelSelect;
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
#define DAT_0089d94c GLOBAL_AT(int, 0x0089d94c)
#define _DAT_00629390 GLOBAL_AT(float, 0x00629390)
#define _DAT_00629394 GLOBAL_AT(float, 0x00629394)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
typedef undefined4 (BEA_STDCALL* FUN_00461a50_t)(uint32_t);
static const bea_guard<FUN_00461a50_t> FUN_00461a50 = {(FUN_00461a50_t)0x00461a50};
typedef uint32_t (BEA_THISCALL* FUN_00466ae0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00466ae0_t> FUN_00466ae0 = {(FUN_00466ae0_t)0x00466ae0};
typedef uint32_t (BEA_CDECL* FUN_00468770_t)(int, ...);
static const bea_guard<FUN_00468770_t> FUN_00468770 = {(FUN_00468770_t)0x00468770};
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};
typedef float10 (BEA_CDECL* FUN_0055dfe7_t)(double);
static const bea_guard<FUN_0055dfe7_t> FUN_0055dfe7 = {(FUN_0055dfe7_t)0x0055dfe7};

static void BEA_THISCALL ap_004606b0(CFEPLevelSelect * this_, int param_1, undefined4 param_2)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  
  if ((0x29 < param_1) && (param_1 < 0x2c)) {
    if (*(int *)(this_ + 0x346c) < *(int *)(this_ + *(int *)(this_ + 0x3468) * 4 + 4)) {
      if (*(int *)(this_ + 0x346c) < 0) {
        *(undefined4 *)(this_ + 0x346c) = 0;
      }
    }
    else {
      *(int *)(this_ + 0x346c) = *(int *)(this_ + *(int *)(this_ + 0x3468) * 4 + 4) + -1;
    }
  }
  iVar1 = *(int *)(this_ + 0x3468);
  iVar2 = *(int *)(this_ + 0x346c);
  iVar3 = *(int *)(this_ + (iVar1 * 6 + iVar2) * 4 + 0xcc);
  switch(param_1) {
  case 0x2a:
    *(int *)(this_ + 0x346c) = iVar2 + 1;
    if (*(int *)(this_ + iVar1 * 4 + 4) <= iVar2 + 1) {
      *(int *)(this_ + 0x346c) = *(int *)(this_ + iVar1 * 4 + 4) + -1;
    }
    FUN_00468770(0);
    break;
  case 0x2b:
    *(int *)(this_ + 0x346c) = iVar2 + -1;
    if (iVar2 + -1 < 0) {
      *(undefined4 *)(this_ + 0x346c) = 0;
    }
    FUN_00468770(0);
    break;
  case 0x2c:
    if (iVar2 < *(int *)(this_ + iVar1 * 4 + 4)) {
      iVar5 = iVar2;
      if (iVar2 < 0) {
        iVar5 = 0;
      }
    }
    else {
      iVar5 = *(int *)(this_ + iVar1 * 4 + 4) + -1;
    }
    iVar4 = FUN_00461a50(bea_arg(*(undefined4 *)(this_ + (iVar1 * 6 + iVar5) * 4 + 0xcc)));
    if (iVar4 == 1) {
      FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(5), bea_arg(0x1e));
      FUN_00468770(1);
      DAT_0089d94c = *(undefined4 *)(this_ + (iVar5 + *(int *)(this_ + 0x3468) * 6) * 4 + 0xcc);
    }
    break;
  case 0x2e:
    FUN_00468770(2);
    FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(0), bea_arg(0x46));
    break;
  case 0x36:
    if (iVar1 == 0x10) {
      if ((iVar2 == 2) || (iVar2 == 3)) {
        *(undefined4 *)(this_ + 0x346c) = 1;
      }
      else {
        *(undefined4 *)(this_ + 0x346c) = 0;
      }
    }
    *(int *)(this_ + 0x3468) = iVar1 + -1;
    if (iVar1 + -1 < 0) {
      *(undefined4 *)(this_ + 0x3468) = 0;
    }
    FUN_00468770(0);
    if ((*(int *)(this_ + 0x3468) == 0x10) && (*(int *)(this_ + 0x346c) == 1)) {
      *(undefined4 *)(this_ + 0x346c) = 2;
    }
    if ((148.0f - *(float *)(this_ + 0x3460)) + (float)*(int *)(this_ + 0x3468) * 60.0f < _DAT_00629390)
    {
      *(float *)(this_ + 0x3460) = *(float *)(this_ + 0x3460) - 60.0f;
    }
    break;
  case 0x37:
    if (iVar1 == 0x10) {
      if ((iVar2 == 2) || (iVar2 == 3)) {
        *(undefined4 *)(this_ + 0x346c) = 1;
      }
      else {
        *(undefined4 *)(this_ + 0x346c) = 0;
      }
    }
    *(int *)(this_ + 0x3468) = iVar1 + 1;
    if (*(int *)(this_ + 0x345c) <= iVar1 + 1) {
      *(int *)(this_ + 0x3468) = *(int *)(this_ + 0x345c) + -1;
    }
    FUN_00468770(0);
    if ((*(int *)(this_ + 0x3468) == 0x10) && (*(int *)(this_ + 0x346c) == 1)) {
      *(undefined4 *)(this_ + 0x346c) = 2;
    }
    if (_DAT_00629394 < (148.0f - *(float *)(this_ + 0x3460)) + (float)*(int *)(this_ + 0x3468) * 60.0f)
    {
      *(float *)(this_ + 0x3460) = *(float *)(this_ + 0x3460) + 60.0f;
    }
  }
  fVar6 = (float10)FUN_0055dfe7((double)(360.0f / (float)(*(int *)(this_ + 0x345c) + -1)));
  fVar7 = (float10)*(int *)(this_ + 0x3468);
  *(float *)(this_ + 0x3464) = (float)(fVar7 * (float10)60.0f - fVar7 * fVar6);
  if ((*(int *)(this_ + 0x3468) != iVar1) || (*(int *)(this_ + 0x346c) != iVar2)) {
    fVar6 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
    *(float *)(this_ + 0x3474) = (float)fVar6;
  }
  if (*(int *)(this_ + (*(int *)(this_ + 0x346c) + *(int *)(this_ + 0x3468) * 6) * 4 + 0xcc) / 100 !=
      iVar3 / 100) {
    fVar6 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
    *(float *)(this_ + 0x3470) = (float)fVar6;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004606b0, ap_004606b0));
