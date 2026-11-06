// auto-ported from 00416e30_FUN_00416e30.c (FUN_00416e30, 389 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef float10 (BEA_THISCALL* FUN_00416e30_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00416e30_t> FUN_00416e30 = {(FUN_00416e30_t)0x00416e30};

static float10 BEA_THISCALL ap_00416e30(void * this_, int param_1, int param_2, float param_3)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  
  if (param_2 == 1) {
    if (((float)*(int *)(*(int *)((int)this_ + 8) + param_1 * 4) <= param_3) &&
       (param_3 < (float)*(int *)(*(int *)((int)this_ + 8) + 4 + param_1 * 4))) {
      return (float10)1.0f;
    }
LAB_00416e97:
    return (float10)0.0f;
  }
  iVar1 = *(int *)((int)this_ + 8);
  iVar5 = (param_1 + param_2) * 4;
  iVar2 = *(int *)(iVar5 + -4 + iVar1);
  if (iVar2 == *(int *)(iVar1 + param_1 * 4)) {
    if (*(int *)(iVar5 + iVar1) == *(int *)(iVar1 + 4 + param_1 * 4)) goto LAB_00416e97;
    if (iVar2 == *(int *)(iVar1 + param_1 * 4)) {
      iVar1 = *(int *)((int)this_ + 8);
      iVar2 = *(int *)(iVar5 + iVar1);
      fVar6 = (float10)FUN_00416e30(bea_arg(this_), bea_arg(param_1 + 1), bea_arg(param_2 + -1), bea_arg(param_3));
      return (((float10)iVar2 - (float10)param_3) /
             (float10)(iVar2 - *(int *)(iVar1 + (param_1 + 1) * 4))) * fVar6;
    }
  }
  iVar2 = param_1 + 1;
  if (*(int *)(iVar5 + iVar1) == *(int *)(iVar1 + iVar2 * 4)) {
    iVar1 = *(int *)((int)this_ + 8);
    iVar2 = *(int *)(iVar1 + param_1 * 4);
    fVar6 = (float10)FUN_00416e30(bea_arg(this_), bea_arg(param_1), bea_arg(param_2 + -1), bea_arg(param_3));
    return (((float10)param_3 - (float10)iVar2) / (float10)(*(int *)(iVar5 + -4 + iVar1) - iVar2)) *
           fVar6;
  }
  iVar1 = *(int *)((int)this_ + 8);
  iVar3 = *(int *)(iVar5 + iVar1);
  iVar4 = *(int *)(iVar1 + param_1 * 4);
  fVar6 = (float10)FUN_00416e30(bea_arg(this_), bea_arg(param_1), bea_arg(param_2 + -1), bea_arg(param_3));
  iVar5 = *(int *)(iVar5 + -4 + iVar1);
  fVar7 = (float10)FUN_00416e30(bea_arg(this_), bea_arg(iVar2), bea_arg(param_2 + -1), bea_arg(param_3));
  return (((float10)iVar3 - (float10)param_3) / (float10)(iVar3 - *(int *)(iVar1 + iVar2 * 4))) *
         fVar7 + (float10)(float)((((float10)param_3 - (float10)iVar4) / (float10)(iVar5 - iVar4)) *
                                 fVar6);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00416e30, ap_00416e30));
