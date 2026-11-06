// auto-ported from 00511bc0_FUN_00511bc0.c (FUN_00511bc0, 67 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static int * BEA_THISCALL ap_00511bc0(int in_ECX, int param_1, int param_2)
{
  undefined4 *puVar1;
  int *piVar2;

  puVar1 = *(undefined4 **)(in_ECX + 0x6c);
  *(undefined4 **)(in_ECX + 0x74) = puVar1;
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
    if ((piVar2[1] == param_2) && (*piVar2 == param_1)) break;
    puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x74) + 4);
    *(undefined4 **)(in_ECX + 0x74) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)*puVar1;
    }
  }
  return piVar2;
}

// @autoport-registration (verified: 94247 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00511bc0, ap_00511bc0));
