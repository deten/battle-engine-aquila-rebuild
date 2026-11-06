// auto-ported from 00496250_FUN_00496250.c (FUN_00496250, 32 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0062dd74 GLOBAL_AT(int, 0x0062dd74)
typedef int (BEA_CDECL* FUN_0056e170_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0056e170_t> FUN_0056e170 = {(FUN_0056e170_t)0x0056e170};

static uint32_t BEA_CDECL ap_00496250(int param_1)
{
  int iVar1;
  
  iVar1 = FUN_0056e170(bea_arg(param_1 + 0xdc), bea_arg(&DAT_0062dd74), bea_arg(4));
  return iVar1 != 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00496250, ap_00496250));
