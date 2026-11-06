// auto-ported from 004e8010_vslot70.c (CNormalSquad::vslot70, 69 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_004e8010(int in_ECX)
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
      if ((*piVar2 != 0) && ((*(byte *)(*piVar2 + 0x2c) & 4) == 0)) break;
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

// @autoport-registration (verified: 1122 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004e8010, ap_004e8010));
