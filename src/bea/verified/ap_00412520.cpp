// auto-ported from 00412520_FUN_00412520.c (FUN_00412520, 72 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_00412520(int * in_ECX)
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
        return *(undefined4 *)(*(int *)(iVar2 + 0xa4) + 0x38);
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
BEA_HOOKS(BEA_HOOK(0x00412520, ap_00412520));
