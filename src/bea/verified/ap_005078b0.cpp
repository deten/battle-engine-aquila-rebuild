// auto-ported from 005078b0_FUN_005078b0.c (FUN_005078b0, 58 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_005078b0(int in_ECX, int param_1)
{
  undefined4 *puVar1;

  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x4c);
  iVar3 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)*puVar1;
  }
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    if (iVar3 == param_1) break;
    puVar1 = (undefined4 *)puVar1[1];
    iVar3 = iVar3 + 1;
    if (puVar1 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)*puVar1;
    }
  }
  return *puVar2;
}

// @autoport-registration (verified: 66 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x005078b0, ap_005078b0));
