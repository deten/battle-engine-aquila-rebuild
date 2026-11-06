// auto-ported from 00412830_FUN_00412830.c (FUN_00412830, 202 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00411e70_t)(uint32_t);
static const bea_guard<FUN_00411e70_t> FUN_00411e70 = {(FUN_00411e70_t)0x00411e70};

static void BEA_THISCALL ap_00412830(void * this_, byte *param_1)
{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  bool bVar9;
  
  piVar2 = *(int **)this_;
  if (piVar2 == (int *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *piVar2;
  }
  do {
    if (iVar7 == 0) {
      return;
    }
    pbVar8 = (byte *)**(undefined4 **)(iVar7 + 0xa4);
    pbVar4 = param_1;
    do {
      bVar1 = *pbVar4;
      bVar9 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_00412882:
        iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_00412887;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar9 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_00412882;
      pbVar4 = pbVar4 + 2;
      pbVar8 = pbVar8 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar5 = 0;
LAB_00412887:
    if (iVar5 == 0) {
      *(undefined4 *)(iVar7 + 0x9c) = 0;
      piVar3 = *(int **)this_;
      iVar5 = 0;
      *(int **)((int)this_ + 8) = piVar3;
      if (piVar3 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar3;
      }
      if (iVar6 != 0) {
        do {
          if (iVar5 == *(int *)((int)this_ + 0x10)) goto LAB_004128c7;
          iVar5 = iVar5 + 1;
          piVar3 = *(int **)(*(int *)((int)this_ + 8) + 4);
          *(int **)((int)this_ + 8) = piVar3;
          if (piVar3 == (int *)0x0) {
            iVar6 = 0;
          }
          else {
            iVar6 = *piVar3;
          }
        } while (BEA_LOOP_GUARD((iVar6 != 0)));
      }
      iVar6 = 0;
LAB_004128c7:
      if (iVar6 == iVar7) {
        FUN_00411e70(bea_arg(this_));
      }
    }
    piVar2 = (int *)piVar2[1];
    if (piVar2 == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar2;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00412830, ap_00412830));
