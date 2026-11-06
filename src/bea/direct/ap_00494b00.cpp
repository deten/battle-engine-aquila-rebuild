// auto-ported from 00494b00_FUN_00494b00.c (FUN_00494b00, 77 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0062dcbc GLOBAL_AT(int, 0x0062dcbc)
#define DAT_0062dcb4 GLOBAL_AT(int, 0x0062dcb4)
#define s_Wheel_0062dcac ((char*)0x0062dcac)
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};
typedef int (BEA_CDECL* FUN_0056e170_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0056e170_t> FUN_0056e170 = {(FUN_0056e170_t)0x0056e170};

static uint32_t BEA_CDECL ap_00494b00(int param_1)
{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0xdc;
  iVar1 = FUN_00568390(bea_arg(iVar2), bea_arg(&DAT_0062dcbc));
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_0056e170(bea_arg(iVar2), bea_arg(&DAT_0062dcb4), bea_arg(4));
  if (iVar1 == 0) {
    return false;
  }
  iVar2 = FUN_0056e170(bea_arg(iVar2), bea_arg(s_Wheel_0062dcac), bea_arg(5));
  return iVar2 != 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00494b00, ap_00494b00));
