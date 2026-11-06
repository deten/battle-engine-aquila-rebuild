// auto-ported from 0049f600_FUN_0049f600.c (FUN_0049f600, 97 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0062e0cc GLOBAL_AT(int, 0x0062e0cc)
#define s_barrel_0062dd18 ((char*)0x0062dd18)
#define s_spinner_0062e0c4 ((char*)0x0062e0c4)
#define PTR_DAT_0062e0c0 GLOBAL_AT(void*, 0x0062e0c0)
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};
typedef int (BEA_CDECL* FUN_0056e170_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0056e170_t> FUN_0056e170 = {(FUN_0056e170_t)0x0056e170};

static uint32_t BEA_CDECL ap_0049f600(int param_1)
{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0xdc;
  iVar1 = FUN_00568390(bea_arg(iVar2), bea_arg(&DAT_0062e0cc));
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_0056e170(bea_arg(iVar2), bea_arg(s_barrel_0062dd18), bea_arg(6));
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00568390(bea_arg(iVar2), bea_arg(s_spinner_0062e0c4));
  if (iVar1 == 0) {
    return false;
  }
  iVar2 = FUN_0056e170(bea_arg(iVar2), bea_arg(&PTR_DAT_0062e0c0), bea_arg(3));
  return iVar2 != 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0049f600, ap_0049f600));
