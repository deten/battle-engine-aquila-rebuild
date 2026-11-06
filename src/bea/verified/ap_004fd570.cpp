// auto-ported from 004fd570_FUN_004fd570.c (FUN_004fd570, 56 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_004fd570(int in_ECX)
{
  int *piVar1;
  int iVar2;

  piVar1 = *(int **)(in_ECX + 0x17c);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    if (*(int *)(iVar2 + 0x94) != 0) break;
    piVar1 = (int *)piVar1[1];
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar1;
    }
  }
  return 1;
}

// @autoport-registration (verified: 5017 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004fd570, ap_004fd570));
