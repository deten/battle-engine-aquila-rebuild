// auto-ported from 00496f60_FUN_00496f60.c (FUN_00496f60, 55 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0062dd20 GLOBAL_AT(int, 0x0062dd20)
#define s_barrel_0062dd18 ((char*)0x0062dd18)
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};
typedef int (BEA_CDECL* FUN_0056e170_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0056e170_t> FUN_0056e170 = {(FUN_0056e170_t)0x0056e170};

static uint32_t BEA_CDECL ap_00496f60(int param_1)
{
  int iVar1;
  
  iVar1 = FUN_00568390(bea_arg(param_1 + 0xdc), bea_arg(&DAT_0062dd20));
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_0056e170(bea_arg(param_1 + 0xdc), bea_arg(s_barrel_0062dd18), bea_arg(6));
  return iVar1 != 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00496f60, ap_00496f60));
