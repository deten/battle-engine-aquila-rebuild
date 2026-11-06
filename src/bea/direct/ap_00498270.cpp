// auto-ported from 00498270_FUN_00498270.c (FUN_00498270, 74 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define s_Nmidoutcyl_0062df18 ((char*)0x0062df18)
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static undefined4 BEA_CDECL ap_00498270(int param_1)
{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x15c)) {
    do {
      iVar1 = FUN_00568390(bea_arg(*(int *)(*(int *)(param_1 + 0x160) + iVar2 * 4) + 0xdc), bea_arg(s_Nmidoutcyl_0062df18));
      if (iVar1 == 0) {
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (BEA_LOOP_GUARD((iVar2 < *(int *)(param_1 + 0x15c))));
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00498270, ap_00498270));
