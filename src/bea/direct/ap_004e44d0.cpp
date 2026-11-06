// auto-ported from 004e44d0_FUN_004e44d0.c (FUN_004e44d0, 249 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008553fc GLOBAL_AT(int, 0x008553fc)
#define DAT_00704200 GLOBAL_AT(int, 0x00704200)
typedef undefined4 (BEA_THISCALL* FUN_00406d20_t)(uint32_t);
static const bea_guard<FUN_00406d20_t> FUN_00406d20 = {(FUN_00406d20_t)0x00406d20};
typedef int (BEA_THISCALL* FUN_00491ea0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00491ea0_t> FUN_00491ea0 = {(FUN_00491ea0_t)0x00491ea0};
typedef int (BEA_THISCALL* FUN_00492020_t)(uint32_t);
static const bea_guard<FUN_00492020_t> FUN_00492020 = {(FUN_00492020_t)0x00492020};
typedef int (BEA_THISCALL* FUN_00492c90_t)(uint32_t);
static const bea_guard<FUN_00492c90_t> FUN_00492c90 = {(FUN_00492c90_t)0x00492c90};

static undefined4 BEA_THISCALL ap_004e44d0(void * this_, float *param_1)
{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  void *this_00;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)((int)this_ + 0x3dc);
  iVar7 = 0;
  iVar5 = FUN_00406d20(bea_arg(DAT_008553fc));
  while (BEA_LOOP_GUARD((iVar5 != 0))) {
    if (iVar7 == iVar6) goto LAB_004e4510;
    iVar7 = iVar7 + 1;
    piVar1 = *(int **)(*(int *)((int)DAT_008553fc + 8) + 4);
    *(int **)((int)DAT_008553fc + 8) = piVar1;
    if (piVar1 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *piVar1;
    }
  }
  iVar5 = 0;
LAB_004e4510:
  if (*(int *)(iVar5 + 0xe0) != 3) {
    this_00 = (void *)FUN_00491ea0(bea_arg(&DAT_00704200), bea_arg(*param_1), bea_arg(param_1[1]), bea_arg(param_1[2]), bea_arg(param_1[3]), bea_arg(0x3f800000));
    while (BEA_LOOP_GUARD((this_00 != (void *)0x0))) {
      iVar6 = FUN_00492c90(bea_arg(this_00));
      if ((((iVar6 != 0) && ((*(uint *)(iVar6 + 0x34) & 0x10) != 0)) &&
          ((*(uint *)(iVar6 + 0x34) & 0xc4900) == 0)) &&
         ((iVar6 != *(int *)((int)this_ + 0x3d4) &&
          (fVar2 = *(float *)(iVar6 + 0x1c) - *param_1,
          fVar3 = *(float *)(iVar6 + 0x20) - param_1[1],
          fVar4 = *(float *)(iVar6 + 0x24) - param_1[2],
          fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4 < 36.0f)))) {
        return 0;
      }
      this_00 = (void *)FUN_00492020(bea_arg(&DAT_00704200));
    }
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e44d0, ap_004e44d0));
