// auto-ported from 004d0290_vslot4.c (CControllerBackMenuItem::vslot4, 121 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CControllerBackMenuItem;
#define DAT_008a9ac0 GLOBAL_AT(int, 0x008a9ac0)
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
typedef uint (BEA_CDECL* FUN_00456650_t)(uint32_t);
static const bea_guard<FUN_00456650_t> FUN_00456650 = {(FUN_00456650_t)0x00456650};
typedef int (BEA_THISCALL* FUN_004725d0_t)(uint32_t);
static const bea_guard<FUN_004725d0_t> FUN_004725d0 = {(FUN_004725d0_t)0x004725d0};
typedef uint32_t (BEA_THISCALL* FUN_004a3290_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004a3290_t> FUN_004a3290 = {(FUN_004a3290_t)0x004a3290};
typedef wchar_t * (BEA_CDECL* FUN_00524830_t)(undefined4, ...);
static const bea_guard<FUN_00524830_t> FUN_00524830 = {(FUN_00524830_t)0x00524830};

static void BEA_THISCALL ap_004d0290(CControllerBackMenuItem * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = 0xffffffff;
  cVar1 = FUN_00456650(bea_arg(0));
  if (cVar1 == '\0') {
    uVar4 = 0xe8;
  }
  else {
    if ((DAT_008a9ac0 < 1) || (8 < DAT_008a9ac0)) goto LAB_004d02ed;
    iVar2 = FUN_004725d0(bea_arg(&DAT_008a9a98));
    if (iVar2 == 0) goto LAB_004d02ed;
    cVar1 = FUN_00456650(bea_arg(1));
    if (cVar1 != '\0') goto LAB_004d02ed;
    uVar4 = 0xe9;
  }
  iVar2 = FUN_00524830(uVar4);
  if (iVar2 != 0) {
    uVar3 = 0xffff8080;
  }
LAB_004d02ed:
  FUN_004a3290(bea_arg(this_), bea_arg(param_1), bea_arg(param_2), bea_arg(param_3), bea_arg(uVar3));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d0290, ap_004d0290));
