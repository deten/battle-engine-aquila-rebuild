// auto-ported from 0049c250_FUN_0049c250.c (FUN_0049c250, 119 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0062dcbc GLOBAL_AT(int, 0x0062dcbc)
#define DAT_0062df34 GLOBAL_AT(int, 0x0062df34)
#define DAT_0062dd20 GLOBAL_AT(int, 0x0062dd20)
#define PTR_DAT_0062df30 GLOBAL_AT(void*, 0x0062df30)
#define PTR_DAT_0062df3c GLOBAL_AT(void*, 0x0062df3c)
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};
typedef int (BEA_CDECL* FUN_0056e170_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0056e170_t> FUN_0056e170 = {(FUN_0056e170_t)0x0056e170};

static uint32_t BEA_CDECL ap_0049c250(int param_1)
{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0xdc;
  iVar1 = FUN_00568390(bea_arg(iVar2), bea_arg(&DAT_0062dcbc));
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_0056e170(bea_arg(iVar2), bea_arg(&PTR_DAT_0062df3c), bea_arg(3));
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_0056e170(bea_arg(iVar2), bea_arg(&DAT_0062df34), bea_arg(4));
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_0056e170(bea_arg(iVar2), bea_arg(&PTR_DAT_0062df30), bea_arg(3));
  if (iVar1 == 0) {
    return false;
  }
  iVar2 = FUN_00568390(bea_arg(iVar2), bea_arg(&DAT_0062dd20));
  return iVar2 != 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0049c250, ap_0049c250));
