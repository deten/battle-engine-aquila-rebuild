// auto-ported from 004d0220_vslot2.c (CControllerBackMenuItem::vslot2, 97 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_008a9ac0 GLOBAL_AT(int, 0x008a9ac0)
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define DAT_0083d960 GLOBAL_AT(int, 0x0083d960)
typedef uint (BEA_CDECL* FUN_00456650_t)(uint32_t);
static const bea_guard<FUN_00456650_t> FUN_00456650 = {(FUN_00456650_t)0x00456650};
typedef int (BEA_THISCALL* FUN_004725d0_t)(uint32_t);
static const bea_guard<FUN_004725d0_t> FUN_004725d0 = {(FUN_004725d0_t)0x004725d0};
typedef undefined * (BEA_THISCALL* FUN_004f2580_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f2580_t> FUN_004f2580 = {(FUN_004f2580_t)0x004f2580};
typedef wchar_t * (BEA_CDECL* FUN_00524830_t)(undefined4, ...);
static const bea_guard<FUN_00524830_t> FUN_00524830 = {(FUN_00524830_t)0x00524830};

static void BEA_CDECL ap_004d0220(void)
{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_00456650(bea_arg(0));
  if (cVar1 == '\0') {
    uVar3 = 0xe8;
  }
  else {
    if ((((DAT_008a9ac0 < 1) || (8 < DAT_008a9ac0)) ||
        (iVar2 = FUN_004725d0(bea_arg(&DAT_008a9a98)), iVar2 == 0)) ||
       (cVar1 = FUN_00456650(bea_arg(1)), cVar1 != '\0')) goto LAB_004d0271;
    uVar3 = 0xe9;
  }
  iVar2 = FUN_00524830(uVar3);
  if (iVar2 != 0) {
    return;
  }
LAB_004d0271:
  FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x6f9da));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d0220, ap_004d0220));
