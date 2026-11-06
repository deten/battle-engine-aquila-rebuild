// auto-ported from 00414970_FUN_00414970.c (FUN_00414970, 201 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_00414970(void * this_, byte *param_1)
{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  
  piVar2 = *(int **)this_;
  *(int **)((int)this_ + 8) = piVar2;
  if (piVar2 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar2;
  }
  while (BEA_LOOP_GUARD((iVar5 != 0))) {
    pbVar6 = (byte *)**(undefined4 **)(iVar5 + 0xa4);
    pbVar3 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_004149be:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_004149c3;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_004149be;
      pbVar3 = pbVar3 + 2;
      pbVar6 = pbVar6 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar4 = 0;
LAB_004149c3:
    if (iVar4 == 0) {
      *(undefined4 *)(iVar5 + 0x9c) = 1;
    }
    piVar2 = *(int **)(*(int *)((int)this_ + 8) + 4);
    *(int **)((int)this_ + 8) = piVar2;
    if (piVar2 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar2;
    }
  }
  pbVar6 = (byte *)**(undefined4 **)(*(int *)((int)this_ + 0x18) + 0xa4);
  do {
    bVar1 = *param_1;
    bVar7 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_00414a1f:
      iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_00414a24;
    }
    if (bVar1 == 0) break;
    bVar1 = param_1[1];
    bVar7 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_00414a1f;
    param_1 = param_1 + 2;
    pbVar6 = pbVar6 + 2;
  } while (BEA_LOOP_GUARD((bVar1 != 0)));
  iVar5 = 0;
LAB_00414a24:
  if (iVar5 == 0) {
    *(undefined4 *)(*(int *)((int)this_ + 0x18) + 0x9c) = 1;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00414970, ap_00414970));
