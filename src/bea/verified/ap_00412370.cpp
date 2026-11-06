// auto-ported from 00412370_FUN_00412370.c (FUN_00412370, 165 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static float10 BEA_THISCALL ap_00412370(int * in_ECX)
{
  int iVar1;
  int iVar2;

  int *piVar3;
  int iVar4;
  int *piVar5;
  int local_4;
  
  piVar5 = (int *)*in_ECX;
  iVar4 = 0;
  in_ECX[2] = (int)piVar5;
  if (piVar5 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *piVar5;
  }
  if (iVar1 != 0) {
    do {
      if (iVar4 == in_ECX[4]) {
        if (iVar1 != 0) {
          iVar4 = 0;
          iVar2 = 0;
          piVar3 = (int *)(*(int *)(iVar1 + 0xa4) + 0xc);
          piVar5 = piVar3;
          do {
            if (*piVar5 != -1) {
              iVar4 = iVar2;
            }
            iVar2 = iVar2 + 100;
            piVar5 = piVar5 + 1;
          } while (iVar2 < 500);
          if (iVar4 != 0) {
            local_4 = 0;
            iVar4 = 0;
            do {
              if (*piVar3 != -1) {
                local_4 = iVar4;
              }
              iVar4 = iVar4 + 100;
              piVar3 = piVar3 + 1;
            } while (iVar4 < 500);
            return (float10)*(float *)(iVar1 + 0x60) / (float10)local_4;
          }
          return (float10)0.0f;
        }
        break;
      }
      iVar4 = iVar4 + 1;
      piVar5 = *(int **)(in_ECX[2] + 4);
      in_ECX[2] = (int)piVar5;
      if (piVar5 == (int *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *piVar5;
      }
    } while (iVar1 != 0);
  }
  return (float10)0.0f;
}

// @autoport-registration (verified: 1038 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00412370, ap_00412370));
