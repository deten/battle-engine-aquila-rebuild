// auto-ported from 00412240_FUN_00412240.c (FUN_00412240, 110 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_00412240(int * in_ECX)
{
  int *piVar1;
  int iVar2;

  int iVar3;
  undefined4 local_8;
  
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
        iVar3 = *(int *)(*(int *)(iVar2 + 0xa4) + 0x24);
        if (*(int *)(in_ECX[6] + 0x55c + iVar3 * 4) != 0) {
          return 0;
        }
        local_8 = (undefined4)(longlong)ROUND(*(float *)(in_ECX[6] + 0x52c + iVar3 * 4));
        return local_8;
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
BEA_HOOKS(BEA_HOOK(0x00412240, ap_00412240));
