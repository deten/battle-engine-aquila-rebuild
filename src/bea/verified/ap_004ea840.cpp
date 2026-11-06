// auto-ported from 004ea840_vslot70.c (CRelaxedSquad::vslot70, 61 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_004ea840(int in_ECX)
{
  undefined4 *puVar1;
  int *piVar2;

  if (*(int *)(in_ECX + 0x80) == 0) {
    puVar1 = *(undefined4 **)(in_ECX + 0xa4);
    if (puVar1 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)*puVar1;
    }
    while( true ) {
      if (piVar2 == (int *)0x0) {
        return 1;
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
  }
  return 0;
}

// @autoport-registration (verified: 32 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004ea840, ap_004ea840));
