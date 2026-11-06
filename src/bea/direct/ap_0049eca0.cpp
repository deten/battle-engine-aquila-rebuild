// auto-ported from 0049eca0_FUN_0049eca0.c (FUN_0049eca0, 135 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0062e038 GLOBAL_AT(int, 0x0062e038)
#define DAT_0062e090 GLOBAL_AT(int, 0x0062e090)
#define s_tether_0062e040 ((char*)0x0062e040)
#define s_tentacle_0062e02c ((char*)0x0062e02c)
#define s_tethercp_0062e00c ((char*)0x0062e00c)
#define s_headcp_0062e004 ((char*)0x0062e004)
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};
typedef int (BEA_CDECL* FUN_0056e170_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0056e170_t> FUN_0056e170 = {(FUN_0056e170_t)0x0056e170};

static uint32_t BEA_CDECL ap_0049eca0(int param_1)
{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0xdc;
  iVar1 = FUN_00568390(bea_arg(iVar2), bea_arg(s_tether_0062e040));
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00568390(bea_arg(iVar2), bea_arg(&DAT_0062e038));
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00568390(bea_arg(iVar2), bea_arg(s_tethercp_0062e00c));
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00568390(bea_arg(iVar2), bea_arg(s_headcp_0062e004));
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00568390(bea_arg(iVar2), bea_arg(s_tentacle_0062e02c));
  if (iVar1 == 0) {
    return false;
  }
  iVar2 = FUN_0056e170(bea_arg(iVar2), bea_arg(&DAT_0062e090), bea_arg(4));
  return iVar2 != 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0049eca0, ap_0049eca0));
