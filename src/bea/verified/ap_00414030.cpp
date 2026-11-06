// auto-ported from 00414030_FUN_00414030.c (FUN_00414030, 150 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static int BEA_THISCALL ap_00414030(int * in_ECX)
{
  int *piVar1;
  int *piVar2;
  int iVar3;

  int iVar4;
  uint uVar5;
  
  if ((in_ECX[4] != 0) ||
     (((*(int *)(in_ECX[8] + 0x2fc) == 0 || (iVar3 = in_ECX[7], iVar3 == 0)) &&
      (iVar3 = in_ECX[6], iVar3 == 0)))) {
    iVar3 = in_ECX[6];
    uVar5 = (uint)(iVar3 != 0);
    piVar1 = (int *)*in_ECX;
    in_ECX[2] = (int)piVar1;
    if (piVar1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
    }
    while (iVar4 != 0) {
      if (uVar5 == in_ECX[4]) {
        return iVar4;
      }
      uVar5 = uVar5 + 1;
      piVar2 = *(int **)(in_ECX[2] + 4);
      in_ECX[2] = (int)piVar2;
      if (piVar2 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar2;
      }
    }
    in_ECX[4] = 0;
    if (iVar3 != 0) {
      return iVar3;
    }
    in_ECX[2] = (int)piVar1;
    if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
      in_ECX[2] = (int)piVar1;
      return *piVar1;
    }
    iVar3 = 0;
  }
  return iVar3;
}

// @autoport-registration (verified: 14753 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00414030, ap_00414030));
