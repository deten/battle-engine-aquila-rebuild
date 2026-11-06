// auto-ported from 004122b0_FUN_004122b0.c (FUN_004122b0, 82 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_004122b0(int * in_ECX)
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
        if (iVar2 == 0) {
          return 0;
        }
        return *(undefined4 *)(in_ECX[6] + 0x55c + *(int *)(*(int *)(iVar2 + 0xa4) + 0x24) * 4);
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

// @autoport-registration (verified: 1038 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004122b0, ap_004122b0));
