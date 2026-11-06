// auto-ported from 00412050_FUN_00412050.c (FUN_00412050, 339 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define _DAT_006236a4 GLOBAL_AT(int, 0x006236a4)
typedef uint32_t (BEA_THISCALL* FUN_0040f110_t)(uint32_t);
static const bea_guard<FUN_0040f110_t> FUN_0040f110 = {(FUN_0040f110_t)0x0040f110};

static undefined4 BEA_THISCALL ap_00412050(void * this_, int param_1)
{
  float *pfVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = *(int **)this_;
  *(int **)((int)this_ + 8) = piVar2;
  if (piVar2 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar2;
  }
  do {
    if (iVar5 == 0) {
      return 0;
    }
    if (iVar5 == param_1) {
      iVar3 = *(int *)((int)this_ + 0x18);
      iVar4 = *(int *)(*(int *)(iVar5 + 0xa4) + 0x24);
      if (*(int *)(iVar3 + 0x55c + iVar4 * 4) == 0) {
        if (0.0f < *(float *)(iVar3 + 0x52c + iVar4 * 4)) {
          pfVar1 = (float *)(*(int *)((int)this_ + 0x18) + 0x52c + iVar4 * 4);
          *pfVar1 = *pfVar1 - *(float *)(*(int *)(iVar5 + 0xa4) + 0x20);
          if (0.0f <= *(float *)(*(int *)((int)this_ + 0x18) + 0x52c + iVar4 * 4)) {
            return 1;
          }
          *(undefined4 *)(*(int *)((int)this_ + 0x18) + 0x52c + iVar4 * 4) = 0;
          return 1;
        }
        if (*(float *)(iVar3 + 0x608) < DAT_00672fd0 - 8.0f) {
          *(float *)(iVar3 + 0x608) = DAT_00672fd0;
        }
      }
      else {
        if (0 < *(int *)(iVar5 + 0x68)) {
          return 1;
        }
        if ((*(float *)(iVar3 + 0x52c + iVar4 * 4) <
             *(float *)(*(int *)(iVar3 + 0x4b0) + 0x88 + iVar4 * 4)) &&
           (*(int *)(iVar3 + 0x544 + iVar4 * 4) == 0)) {
          pfVar1 = (float *)(*(int *)((int)this_ + 0x18) + 0x52c + iVar4 * 4);
          *pfVar1 = (*(float *)(*(int *)(iVar5 + 0xa4) + 0x20) - (float)_DAT_006236a4) + *pfVar1;
          return 1;
        }
        *(undefined4 *)(iVar3 + 0x544 + iVar4 * 4) = 1;
        FUN_0040f110(bea_arg(*(void **)((int)this_ + 0x18)));
      }
    }
    piVar2 = *(int **)(*(int *)((int)this_ + 8) + 4);
    *(int **)((int)this_ + 8) = piVar2;
    if (piVar2 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar2;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00412050, ap_00412050));
