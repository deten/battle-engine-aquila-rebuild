// auto-ported from 004e36c0_FUN_004e36c0.c (FUN_004e36c0, 141 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_008553fc GLOBAL_AT(undefined4*, 0x008553fc)

static int BEA_CDECL ap_004e36c0(byte *param_1)
{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  
  if (param_1 != (byte *)0x0) {
    iVar6 = 0;
    piVar2 = (int *)*DAT_008553fc;
    DAT_008553fc[2] = (int)piVar2;
    if (piVar2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar2;
    }
    while (BEA_LOOP_GUARD((iVar4 != 0))) {
      pbVar5 = *(byte **)(iVar4 + 0xb0);
      pbVar3 = param_1;
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_004e3717:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_004e371c;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_004e3717;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (BEA_LOOP_GUARD((bVar1 != 0)));
      iVar4 = 0;
LAB_004e371c:
      if (iVar4 == 0) {
        return iVar6;
      }
      iVar6 = iVar6 + 1;
      piVar2 = *(int **)(DAT_008553fc[2] + 4);
      DAT_008553fc[2] = (int)piVar2;
      if (piVar2 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar2;
      }
    }
  }
  return -1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e36c0, ap_004e36c0));
