// auto-ported from 00509e40_FUN_00509e40.c (FUN_00509e40, 70 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_008553ec GLOBAL_AT(undefined4*, 0x008553ec)

static int BEA_CDECL ap_00509e40(int param_1)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar1 = (int *)*DAT_008553ec;
  DAT_008553ec[2] = (int)piVar1;
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  while(BEA_LOOP_GUARD(( true ))) {
    if (iVar2 == 0) {
      return 0;
    }
    if (iVar3 == param_1) break;
    iVar3 = iVar3 + 1;
    piVar1 = *(int **)(DAT_008553ec[2] + 4);
    DAT_008553ec[2] = (int)piVar1;
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar1;
    }
  }
  return iVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00509e40, ap_00509e40));
