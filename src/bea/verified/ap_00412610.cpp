// auto-ported from 00412610_FUN_00412610.c (FUN_00412610, 57 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static int BEA_THISCALL ap_00412610(int * in_ECX)
{
  int *piVar1;
  int iVar2;

  int iVar3;
  
  piVar1 = (int *)*in_ECX;
  iVar3 = 0;
  in_ECX[2] = (int)piVar1;
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  if (iVar2 != 0) {
    do {
      if (iVar3 == in_ECX[4]) {
        return iVar2;
      }
      iVar3 = iVar3 + 1;
      piVar1 = *(int **)(in_ECX[2] + 4);
      in_ECX[2] = (int)piVar1;
      if (piVar1 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar1;
      }
    } while (iVar2 != 0);
  }
  return 0;
}

// @autoport-registration (verified: 3235 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00412610, ap_00412610));
