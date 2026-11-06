// auto-ported from 004a3190_vslot2.c (CMenuItem::vslot2, 202 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CMenuItem;
#define DAT_0083d960 GLOBAL_AT(int, 0x0083d960)
#define DAT_00704878 GLOBAL_AT(int, 0x00704878)
#define DAT_0062f7f8 GLOBAL_AT(int, 0x0062f7f8)
typedef undefined * (BEA_THISCALL* FUN_004f2580_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f2580_t> FUN_004f2580 = {(FUN_004f2580_t)0x004f2580};
typedef int16_t* (BEA_CDECL* FUN_004f7bf0_t)(uint32_t);
static const bea_guard<FUN_004f7bf0_t> FUN_004f7bf0 = {(FUN_004f7bf0_t)0x004f7bf0};
typedef wchar_t * (BEA_CDECL* FUN_00524830_t)(undefined4, ...);
static const bea_guard<FUN_00524830_t> FUN_00524830 = {(FUN_00524830_t)0x00524830};
typedef short * (BEA_CDECL* FUN_0055e624_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055e624_t> FUN_0055e624 = {(FUN_0055e624_t)0x0055e624};
typedef short * (BEA_CDECL* FUN_0055e64e_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055e64e_t> FUN_0055e64e = {(FUN_0055e64e_t)0x0055e64e};

static undefined * BEA_THISCALL ap_004a3190(CMenuItem * this_)
{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(this_ + 8);
  if ((iVar1 == 0x9aba4) || (iVar1 == 0x9c55c)) {
    uVar3 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x119bdd4));
    FUN_0055e64e(bea_arg(&DAT_00704878), bea_arg(uVar3));
    uVar3 = FUN_004f7bf0(bea_arg(&DAT_0062f7f8));
    FUN_0055e624(bea_arg(&DAT_00704878), bea_arg(uVar3));
    uVar3 = 0x378d6;
  }
  else {
    if ((iVar1 != 0x10c6d0) && (iVar1 != 0x9d238)) {
      if (iVar1 == 0) {
        puVar2 = (undefined *)FUN_00524830(*(undefined4 *)(this_ + 0x18));
        return (undefined *)(puVar2);
      }
      puVar2 = (undefined *)FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(iVar1));
      return (undefined *)(puVar2);
    }
    uVar3 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x119bdd4));
    FUN_0055e64e(bea_arg(&DAT_00704878), bea_arg(uVar3));
    uVar3 = FUN_004f7bf0(bea_arg(&DAT_0062f7f8));
    FUN_0055e624(bea_arg(&DAT_00704878), bea_arg(uVar3));
    uVar3 = 0x50cf2;
  }
  uVar3 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(uVar3));
  FUN_0055e624(bea_arg(&DAT_00704878), bea_arg(uVar3));
  return (undefined *)(&DAT_00704878);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a3190, ap_004a3190));
