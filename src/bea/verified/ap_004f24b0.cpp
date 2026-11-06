// auto-ported from 004f24b0_FUN_004f24b0.c (FUN_004f24b0, 78 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static int BEA_THISCALL ap_004f24b0(int * in_ECX, int param_1)
{
  int *piVar1;

  int iVar2;
  int iVar3;
  
  if ((*in_ECX == 2) || (*in_ECX == 3)) {
    iVar2 = 0;
    piVar1 = (int *)(in_ECX[1] + 0x14);
    if (0 < in_ECX[4]) {
      iVar3 = (in_ECX[1] + 0xc) - (int)piVar1;
      do {
        if (param_1 == *(int *)(iVar3 + (int)piVar1)) {
          if (*piVar1 == -1) {
            return 0;
          }
          return in_ECX[3] + *piVar1;
        }
        piVar1 = piVar1 + 3;
        iVar2 = iVar2 + 1;
      } while (iVar2 < in_ECX[4]);
    }
  }
  return 0;
}

// @autoport-registration (verified: 13 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004f24b0, ap_004f24b0));
