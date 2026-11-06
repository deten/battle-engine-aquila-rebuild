// auto-ported from 00412570_FUN_00412570.c (FUN_00412570, 156 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_00412570(int * in_ECX)
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
        iVar3 = in_ECX[6];
        iVar2 = *(int *)(*(int *)(iVar2 + 0xa4) + 0x24);
        if (*(int *)(iVar3 + 0x55c + iVar2 * 4) == 0) {
          if (*(float *)(iVar3 + 0x52c + iVar2 * 4) <= 0.0f) {
            return 0;
          }
          return 1;
        }
        if (*(float *)(*(int *)(iVar3 + 0x4b0) + 0x88 + iVar2 * 4) <=
            *(float *)(iVar3 + 0x52c + iVar2 * 4)) {
          return 0;
        }
        if (*(int *)(iVar3 + 0x544 + iVar2 * 4) != 0) {
          return 0;
        }
        return 1;
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

// @autoport-registration (verified: 736 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00412570, ap_00412570));
