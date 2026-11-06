// auto-ported from 0050af70_FUN_0050af70.c (FUN_0050af70, 146 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static int * BEA_THISCALL ap_0050af70(void * this_, byte *param_1)
{
  byte bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  byte *pbVar6;
  bool bVar7;
  
  puVar2 = *(undefined4 **)((int)this_ + 0xa0);
  *(undefined4 **)((int)this_ + 0xa8) = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)*puVar2;
  }
  do {
    if (piVar5 == (int *)0x0) {
      return (int *)0x0;
    }
    pbVar3 = (byte *)bea_vcall<uint32_t>(piVar5, 0xa4);
    pbVar6 = param_1;
    do {
      bVar1 = *pbVar6;
      bVar7 = bVar1 < *pbVar3;
      if (bVar1 != *pbVar3) {
LAB_0050afc8:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_0050afcd;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar7 = bVar1 < pbVar3[1];
      if (bVar1 != pbVar3[1]) goto LAB_0050afc8;
      pbVar6 = pbVar6 + 2;
      pbVar3 = pbVar3 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar4 = 0;
LAB_0050afcd:
    if (iVar4 == 0) {
      return piVar5;
    }
    puVar2 = *(undefined4 **)(*(int *)((int)this_ + 0xa8) + 4);
    *(undefined4 **)((int)this_ + 0xa8) = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)*puVar2;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0050af70, ap_0050af70));
