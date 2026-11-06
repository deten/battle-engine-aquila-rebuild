// auto-ported from 004d0de0_FUN_004d0de0.c (FUN_004d0de0, 88 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_008a9ac0 GLOBAL_AT(int, 0x008a9ac0)
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
typedef uint (BEA_CDECL* FUN_00456650_t)(uint32_t);
static const bea_guard<FUN_00456650_t> FUN_00456650 = {(FUN_00456650_t)0x00456650};
typedef int (BEA_THISCALL* FUN_004725d0_t)(uint32_t);
static const bea_guard<FUN_004725d0_t> FUN_004725d0 = {(FUN_004725d0_t)0x004725d0};
typedef wchar_t * (BEA_CDECL* FUN_00524830_t)(undefined4, ...);
static const bea_guard<FUN_00524830_t> FUN_00524830 = {(FUN_00524830_t)0x00524830};

static undefined4 BEA_CDECL ap_004d0de0(void)
{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  cVar1 = FUN_00456650(bea_arg(0));
  if (cVar1 == '\0') {
    uVar2 = FUN_00524830(0xe8);
    return uVar2;
  }
  if ((0 < DAT_008a9ac0) && (DAT_008a9ac0 < 9)) {
    iVar3 = FUN_004725d0(bea_arg(&DAT_008a9a98));
    if (iVar3 != 0) {
      cVar1 = FUN_00456650(bea_arg(1));
      if (cVar1 == '\0') {
        uVar2 = FUN_00524830(0xe9);
        return uVar2;
      }
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d0de0, ap_004d0de0));
