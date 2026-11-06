// auto-ported from 004968f0_FUN_004968f0.c (FUN_004968f0, 30 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0062dd20 GLOBAL_AT(int, 0x0062dd20)
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static uint32_t BEA_CDECL ap_004968f0(int param_1)
{
  int iVar1;
  
  iVar1 = FUN_00568390(bea_arg(param_1 + 0xdc), bea_arg(&DAT_0062dd20));
  return iVar1 != 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004968f0, ap_004968f0));
