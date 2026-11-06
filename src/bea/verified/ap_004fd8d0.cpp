// auto-ported from 004fd8d0_FUN_004fd8d0.c (FUN_004fd8d0, 62 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static int * BEA_THISCALL ap_004fd8d0(int in_ECX, int param_1)
{
  undefined4 *puVar1;
  int *piVar2;

  puVar1 = *(undefined4 **)(in_ECX + 0x19c);
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)*puVar1;
  }
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return (int *)0x0;
    }
    if ((*piVar2 != 0) && (*(int *)(*piVar2 + 0x270) == param_1)) break;
    puVar1 = (undefined4 *)puVar1[1];
    if (puVar1 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)*puVar1;
    }
  }
  return piVar2;
}

// @autoport-registration (verified: 39 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004fd8d0, ap_004fd8d0));
