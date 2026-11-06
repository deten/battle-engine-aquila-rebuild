// auto-ported from 00495030_FUN_00495030.c (FUN_00495030, 91 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0062896c GLOBAL_AT(int, 0x0062896c)
#define DAT_00628968 GLOBAL_AT(int, 0x00628968)
typedef int (BEA_CDECL* FUN_0056e170_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0056e170_t> FUN_0056e170 = {(FUN_0056e170_t)0x0056e170};

static undefined4 BEA_CDECL ap_00495030(int param_1)
{
  int iVar1;
  
  iVar1 = FUN_0056e170(bea_arg(param_1 + 0xdc), bea_arg(&DAT_0062896c), bea_arg(4));
  if (((iVar1 != 0) && (*(int *)(param_1 + 0xa0) < 1)) &&
     (iVar1 = FUN_0056e170(bea_arg(param_1 + 0xdc), bea_arg(&DAT_00628968), bea_arg(2)), iVar1 != 0)) {
    if (*(int *)(param_1 + 0x8c) != 1) {
      return 1;
    }
    if (*(int *)(param_1 + 0xb0) < 0x15) {
      return 1;
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00495030, ap_00495030));
