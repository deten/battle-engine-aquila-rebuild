// auto-ported from 004140d0_FUN_004140d0.c (FUN_004140d0, 823 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
typedef uint32_t (BEA_THISCALL* FUN_0040f110_t)(uint32_t);
static const bea_guard<FUN_0040f110_t> FUN_0040f110 = {(FUN_0040f110_t)0x0040f110};

static undefined4 BEA_THISCALL ap_004140d0(void * this_, int param_1)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  
  piVar1 = *(int **)this_;
  *(int **)((int)this_ + 8) = piVar1;
  if (piVar1 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar1;
  }
  while (BEA_LOOP_GUARD((iVar4 != 0))) {
    if (iVar4 == param_1) {
      iVar2 = *(int *)((int)this_ + 0x20);
      iVar5 = *(int *)(*(int *)(iVar4 + 0xa4) + 0x24);
      if (*(int *)(iVar2 + 0x55c + iVar5 * 4) == 0) {
        if (0.0f < *(float *)(iVar2 + 0x52c + iVar5 * 4)) {
          pfVar6 = (float *)(*(int *)((int)this_ + 0x20) + 0x52c + iVar5 * 4);
          *pfVar6 = *pfVar6 - *(float *)(*(int *)(iVar4 + 0xa4) + 0x20);
          goto LAB_004143b2;
        }
        if (*(float *)(iVar2 + 0x608) < DAT_00672fd0 - 8.0f) {
          *(float *)(iVar2 + 0x608) = DAT_00672fd0;
        }
      }
      else {
        if (0 < *(int *)(iVar4 + 0x68)) {
          return 1;
        }
        if ((*(float *)(iVar2 + 0x52c + iVar5 * 4) <
             *(float *)(*(int *)(iVar2 + 0x4b0) + 0x88 + iVar5 * 4)) &&
           (*(int *)(iVar2 + 0x544 + iVar5 * 4) == 0)) {
          pfVar6 = (float *)(*(int *)((int)this_ + 0x20) + 0x52c + iVar5 * 4);
          *pfVar6 = *(float *)(*(int *)(iVar4 + 0xa4) + 0x20) + *pfVar6;
          *(undefined4 *)((int)this_ + 0x14) = 0;
          return 1;
        }
        *(undefined4 *)(iVar2 + 0x544 + iVar5 * 4) = 1;
        FUN_0040f110(bea_arg(*(void **)((int)this_ + 0x20)));
      }
    }
    piVar1 = *(int **)(*(int *)((int)this_ + 8) + 4);
    *(int **)((int)this_ + 8) = piVar1;
    if (piVar1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
    }
  }
  iVar4 = *(int *)((int)this_ + 0x18);
  if ((iVar4 != 0) && (param_1 == iVar4)) {
    iVar2 = *(int *)(iVar4 + 0xa4);
    iVar5 = *(int *)((int)this_ + 0x20);
    iVar3 = *(int *)(iVar2 + 0x24);
    if (*(int *)(iVar5 + 0x55c + iVar3 * 4) == 0) {
      if (0.0f < *(float *)(iVar5 + 0x52c + iVar3 * 4)) {
        *(float *)(iVar5 + 0x52c + iVar3 * 4) =
             *(float *)(iVar5 + 0x52c + iVar3 * 4) - *(float *)(iVar2 + 0x20);
        pfVar6 = (float *)(*(int *)((int)this_ + 0x20) + 0x52c + iVar3 * 4);
        goto LAB_004143bc;
      }
      if (*(float *)(iVar5 + 0x608) < DAT_00672fd0 - 8.0f) {
        *(float *)(iVar5 + 0x608) = DAT_00672fd0;
      }
    }
    else {
      if (0 < *(int *)(iVar4 + 0x68)) {
        return 1;
      }
      if ((*(float *)(iVar5 + 0x52c + iVar3 * 4) <
           *(float *)(*(int *)(iVar5 + 0x4b0) + 0x88 + iVar3 * 4)) &&
         (*(int *)(iVar5 + 0x544 + iVar3 * 4) == 0)) {
        *(float *)(iVar5 + 0x52c + iVar3 * 4) =
             *(float *)(iVar2 + 0x20) + *(float *)(iVar5 + 0x52c + iVar3 * 4);
        *(undefined4 *)((int)this_ + 0x14) = 0;
        return 1;
      }
      *(undefined4 *)(iVar5 + 0x544 + iVar3 * 4) = 1;
      FUN_0040f110(bea_arg(*(void **)((int)this_ + 0x20)));
    }
  }
  iVar4 = *(int *)((int)this_ + 0x1c);
  if ((iVar4 == 0) || (param_1 != iVar4)) {
    return 0;
  }
  iVar2 = *(int *)(iVar4 + 0xa4);
  iVar3 = *(int *)((int)this_ + 0x20);
  iVar5 = *(int *)(iVar2 + 0x24);
  if (*(int *)(iVar3 + 0x55c + iVar5 * 4) != 0) {
    if (0 < *(int *)(iVar4 + 0x68)) {
      *(undefined4 *)(iVar3 + 0x2f8) = 0;
      return 1;
    }
    if ((*(float *)(iVar3 + 0x52c + iVar5 * 4) <
         *(float *)(*(int *)(iVar3 + 0x4b0) + 0x88 + iVar5 * 4)) &&
       (*(int *)(iVar3 + 0x544 + iVar5 * 4) == 0)) {
      *(float *)(iVar3 + 0x52c + iVar5 * 4) =
           *(float *)(iVar2 + 0x20) + *(float *)(iVar3 + 0x52c + iVar5 * 4);
      *(undefined4 *)((int)this_ + 0x14) = 0;
      *(undefined4 *)(*(int *)((int)this_ + 0x20) + 0x2f8) = 0;
      return 1;
    }
    *(undefined4 *)(iVar3 + 0x544 + iVar5 * 4) = 1;
    FUN_0040f110(bea_arg(*(void **)((int)this_ + 0x20)));
    return 0;
  }
  if (*(float *)(iVar3 + 0x52c + iVar5 * 4) <= 0.0f) {
    if (DAT_00672fd0 - 8.0f <= *(float *)(iVar3 + 0x608)) {
      return 0;
    }
    *(float *)(iVar3 + 0x608) = DAT_00672fd0;
    return 0;
  }
  *(float *)(iVar3 + 0x52c + iVar5 * 4) =
       *(float *)(iVar3 + 0x52c + iVar5 * 4) - *(float *)(iVar2 + 0x20);
  *(undefined4 *)(*(int *)((int)this_ + 0x20) + 0x2f8) = 0;
LAB_004143b2:
  pfVar6 = (float *)(*(int *)((int)this_ + 0x20) + 0x52c + iVar5 * 4);
LAB_004143bc:
  if (*pfVar6 < 0.0f) {
    *pfVar6 = 0.0f;
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004140d0, ap_004140d0));
