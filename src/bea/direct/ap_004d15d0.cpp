// auto-ported from 004d15d0_vslot3.c (CPauseMenu::vslot3, 319 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CPauseMenu;
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_008a9ac0 GLOBAL_AT(int, 0x008a9ac0)
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
typedef uint (BEA_CDECL* FUN_00456650_t)(uint32_t);
static const bea_guard<FUN_00456650_t> FUN_00456650 = {(FUN_00456650_t)0x00456650};
typedef uint32_t (BEA_CDECL* FUN_00468770_t)(int, ...);
static const bea_guard<FUN_00468770_t> FUN_00468770 = {(FUN_00468770_t)0x00468770};
typedef int (BEA_THISCALL* FUN_004725d0_t)(uint32_t);
static const bea_guard<FUN_004725d0_t> FUN_004725d0 = {(FUN_004725d0_t)0x004725d0};
typedef undefined4 (BEA_THISCALL* FUN_004a4630_t)(uint32_t);
static const bea_guard<FUN_004a4630_t> FUN_004a4630 = {(FUN_004a4630_t)0x004a4630};
typedef uint32_t (BEA_THISCALL* FUN_004d06e0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004d06e0_t> FUN_004d06e0 = {(FUN_004d06e0_t)0x004d06e0};
typedef uint32_t (BEA_THISCALL* FUN_004d0810_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004d0810_t> FUN_004d0810 = {(FUN_004d0810_t)0x004d0810};
typedef void* (BEA_THISCALL* FUN_004e5c90_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5c90_t> FUN_004e5c90 = {(FUN_004e5c90_t)0x004e5c90};
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};
typedef wchar_t * (BEA_CDECL* FUN_00524830_t)(undefined4, ...);
static const bea_guard<FUN_00524830_t> FUN_00524830 = {(FUN_00524830_t)0x00524830};

static void BEA_THISCALL ap_004d15d0(CPauseMenu * this_, undefined4 param_1, int param_2, undefined4 param_3)
{
  CPauseMenu *this_00;
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  void *this_01;
  float10 fVar5;
  
  fVar5 = bea_fcast<float10>(FUN_005159e0(bea_arg(&DAT_0088a0a8)));
  if (fVar5 - bea_fcast<float10>(*(float *)(this_ + 0x2c)) < bea_fcast<float10>(0.4f)) {
    return;
  }
  this_00 = this_ + 0x14;
  piVar2 = (int *)FUN_004e5c90(bea_arg(this_00), bea_arg(*(undefined4 *)(this_ + 0x24)));
  uVar3 = bea_vcall<uint32_t>(piVar2, 0x8, param_1,param_2,param_3);
  if ((char)uVar3 != '\0') {
    return;
  }
  if (param_2 != 0x2e) {
    if (param_2 != 0x33) {
      piVar2 = (int *)FUN_004e5c90(bea_arg(this_00), bea_arg(*(undefined4 *)(this_ + 0x24)));
      bea_vcall<uint32_t>(piVar2, 0x4, param_1,param_2,param_3);
      return;
    }
    iVar4 = FUN_004e5c90(bea_arg(this_00), bea_arg(*(undefined4 *)(this_ + 0x24)));
    uVar3 = FUN_004e5c90(bea_arg((void *)(iVar4 + 8)), bea_arg(*(undefined4 *)(iVar4 + 0x18)));
    FUN_004d0810(bea_arg(this_), bea_arg(uVar3), bea_arg(param_1));
    return;
  }
  if (*(int *)(this_ + 0x24) < 1) {
    FUN_004d06e0(bea_arg(this_), bea_arg(param_1));
    FUN_00468770(2);
    return;
  }
  if (*(int *)(this_ + 0x24) == 1) {
    cVar1 = FUN_00456650(bea_arg(0));
    if (cVar1 == '\0') {
      uVar3 = 0xe8;
    }
    else {
      if ((((DAT_008a9ac0 < 1) || (8 < DAT_008a9ac0)) ||
          (iVar4 = FUN_004725d0(bea_arg(&DAT_008a9a98)), iVar4 == 0)) ||
         (cVar1 = FUN_00456650(bea_arg(1)), cVar1 != '\0')) goto LAB_004d16ce;
      uVar3 = 0xe9;
    }
    iVar4 = FUN_00524830(uVar3);
    if (iVar4 != 0) {
      return;
    }
  }
LAB_004d16ce:
  *(undefined4 *)(this_ + 0x24) = 0;
  this_01 = (void *)FUN_004e5c90(bea_arg(this_00), bea_arg(0));
  FUN_004a4630(bea_arg(this_01));
  FUN_00468770(2);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d15d0, ap_004d15d0));
