// auto-ported from 00414b70_FUN_00414b70.c (FUN_00414b70, 69 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static int BEA_THISCALL ap_00414b70(int * in_ECX)
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
  if ((in_ECX[6] != 0) && (*(int *)(in_ECX[6] + 0x9c) != 0)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

// @autoport-registration (verified: 1908 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00414b70, ap_00414b70));
