// auto-ported from 004fd440_vslot89.c (CUnit::vslot89, 136 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_004fd440(int in_ECX)
{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;

  piVar3 = *(int **)(in_ECX + 0x17c);
  if (piVar3 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar3;
  }
  while( true ) {
    if (iVar2 == 0) {
      if ((*(int **)(in_ECX + 0x18c) == (int *)0x0) || (**(int **)(in_ECX + 0x18c) == 0)) {
        puVar1 = *(undefined4 **)(in_ECX + 0x19c);
        if (puVar1 == (undefined4 *)0x0) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = (int *)*puVar1;
        }
        while( true ) {
          if (piVar3 == (int *)0x0) {
            return 0;
          }
          if (*piVar3 != 0) break;
          puVar1 = (undefined4 *)puVar1[1];
          if (puVar1 == (undefined4 *)0x0) {
            piVar3 = (int *)0x0;
          }
          else {
            piVar3 = (int *)*puVar1;
          }
        }
      }
      return 1;
    }
    if (((*(int *)(iVar2 + 0xa0) != 0) &&
        (iVar2 = *(int *)(*(int *)(iVar2 + 0xa0) + 0x18), iVar2 != 0)) &&
       (0.0f < *(float *)(iVar2 + 0x1c))) break;
    piVar3 = (int *)piVar3[1];
    if (piVar3 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar3;
    }
  }
  return 1;
}

// @autoport-registration (verified: 10537 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004fd440, ap_004fd440));
