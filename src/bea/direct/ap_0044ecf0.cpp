// auto-ported from 0044ecf0_FUN_0044ecf0.c (FUN_0044ecf0, 70 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0089da3c GLOBAL_AT(undefined4*, 0x0089da3c)
#define DAT_0089da34 GLOBAL_AT(undefined4*, 0x0089da34)
#define DAT_0089d94c GLOBAL_AT(int, 0x0089d94c)

static int BEA_CDECL ap_0044ecf0(void)
{
  int *piVar1;
  
  DAT_0089da3c = DAT_0089da34;
  if (DAT_0089da34 == (undefined4 *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)*DAT_0089da34;
  }
  while(BEA_LOOP_GUARD(( true ))) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (DAT_0089d94c == *piVar1) break;
    DAT_0089da3c = (undefined4 *)DAT_0089da3c[1];
    if (DAT_0089da3c == (undefined4 *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = (int *)*DAT_0089da3c;
    }
  }
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  DAT_0089da3c = DAT_0089da3c;
  return piVar1[8];
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044ecf0, ap_0044ecf0));
