// auto-ported from 00511860_FUN_00511860.c (FUN_00511860, 148 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_008553f8 GLOBAL_AT(undefined4*, 0x008553f8)

static void BEA_THISCALL ap_00511860(int this_, byte *param_1)
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
    piVar2 = (int *)*DAT_008553f8;
    DAT_008553f8[2] = (int)piVar2;
    if (piVar2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar2;
    }
    while (BEA_LOOP_GUARD((iVar4 != 0))) {
      pbVar5 = *(byte **)(iVar4 + 0x30);
      pbVar3 = param_1;
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_005118b0:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_005118b5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_005118b0;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (BEA_LOOP_GUARD((bVar1 != 0)));
      iVar4 = 0;
LAB_005118b5:
      if (iVar4 == 0) {
        *(int *)(this_ + 0xf0) = iVar6;
        return;
      }
      iVar6 = iVar6 + 1;
      piVar2 = *(int **)(DAT_008553f8[2] + 4);
      DAT_008553f8[2] = (int)piVar2;
      if (piVar2 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar2;
      }
    }
  }
  *(undefined4 *)(this_ + 0xf0) = 0xffffffff;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00511860, ap_00511860));
