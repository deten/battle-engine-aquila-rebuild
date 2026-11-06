// auto-ported from 004e8cd0_vslot73.c (CNormalSquad::vslot73, 48 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static int BEA_THISCALL ap_004e8cd0(int in_ECX)
{
  undefined4 *puVar1;
  int *piVar2;

  puVar1 = *(undefined4 **)(in_ECX + 0xa4);
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)*puVar1;
  }
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    if (*piVar2 != 0) break;
    puVar1 = (undefined4 *)puVar1[1];
    if (puVar1 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)*puVar1;
    }
  }
  return *piVar2;
}

// @autoport-registration (verified: 2634 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004e8cd0, ap_004e8cd0));
