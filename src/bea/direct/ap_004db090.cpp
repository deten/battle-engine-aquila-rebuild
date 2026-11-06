// auto-ported from 004db090_FUN_004db090.c (FUN_004db090, 152 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_008553f8 GLOBAL_AT(undefined4*, 0x008553f8)

static float10 BEA_THISCALL ap_004db090(void * this_)
{
  byte bVar1;
  byte *pbVar2;
  int *piVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  
  pbVar2 = *(byte **)(*(int *)((int)this_ + 0xf0) + 8);
  if (pbVar2 != (byte *)0x0) {
    piVar3 = (int *)*DAT_008553f8;
    DAT_008553f8[2] = (int)piVar3;
    if (piVar3 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar3;
    }
    while (BEA_LOOP_GUARD((iVar6 != 0))) {
      pbVar7 = *(byte **)(iVar6 + 0x30);
      pbVar4 = pbVar2;
      do {
        bVar1 = *pbVar4;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_004db0e9:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_004db0ee;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_004db0e9;
        pbVar4 = pbVar4 + 2;
        pbVar7 = pbVar7 + 2;
      } while (BEA_LOOP_GUARD((bVar1 != 0)));
      iVar5 = 0;
LAB_004db0ee:
      if (iVar5 == 0) {
        if (iVar6 != 0) {
          return (float10)*(float *)(iVar6 + 0x38);
        }
        break;
      }
      piVar3 = *(int **)(DAT_008553f8[2] + 4);
      DAT_008553f8[2] = (int)piVar3;
      if (piVar3 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar3;
      }
    }
  }
  return (float10)0.0f;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004db090, ap_004db090));
