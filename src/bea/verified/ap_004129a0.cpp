// auto-ported from 004129a0_FUN_004129a0.c (FUN_004129a0, 49 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static int BEA_THISCALL ap_004129a0(int * in_ECX)
{
  int *piVar1;
  int iVar2;

  int iVar3;
  
  piVar1 = (int *)*in_ECX;
  iVar2 = 0;
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar1;
  }
  while (iVar3 != 0) {
    if (*(int *)(iVar3 + 0x9c) != 0) {
      iVar2 = iVar2 + 1;
    }
    piVar1 = (int *)piVar1[1];
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
  }
  return iVar2;
}

// @autoport-registration (verified: 1038 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004129a0, ap_004129a0));
