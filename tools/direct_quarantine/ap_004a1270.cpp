// auto-ported from 004a1270_FUN_004a1270.c (FUN_004a1270, 282 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00704200 GLOBAL_AT(int, 0x00704200)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static FUN_00401000_t const FUN_00401000 = (FUN_00401000_t)0x00401000;
typedef int (BEA_THISCALL* FUN_00491ea0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static FUN_00491ea0_t const FUN_00491ea0 = (FUN_00491ea0_t)0x00491ea0;
typedef int (BEA_THISCALL* FUN_00492020_t)(uint32_t);
static FUN_00492020_t const FUN_00492020 = (FUN_00492020_t)0x00492020;
typedef int (BEA_THISCALL* FUN_00492c90_t)(uint32_t);
static FUN_00492c90_t const FUN_00492c90 = (FUN_00492c90_t)0x00492c90;

static void BEA_THISCALL ap_004a1270(void * this_)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int *piVar8;
  void *this_00;
  int *piVar9;
  float10 fVar10;
  float10 fVar11;
  float local_4;
  
  FUN_00401000(bea_arg((void *)((int)this_ + 0x44)), bea_arg(0));
  iVar7 = *(int *)((int)this_ + 0x18);
  this_00 = (void *)FUN_00491ea0(bea_arg(&DAT_00704200), bea_arg(*(undefined4 *)(iVar7 + 0x1c)), bea_arg(*(undefined4 *)(iVar7 + 0x20)), bea_arg(*(undefined4 *)(iVar7 + 0x24)), bea_arg(*(undefined4 *)(iVar7 + 0x28)), bea_arg(0x40000000));
  local_4 = 999999.0;
  while (BEA_LOOP_GUARD((this_00 != (void *)0x0))) {
    piVar9 = (int *)FUN_00492c90(bea_arg(this_00));
    if ((((piVar9 != (int *)0x0) && (piVar8 = *(int **)((int)this_ + 0x18), piVar9 != piVar8)) &&
        ((piVar9[0xd] & 0x80000U) == 0)) && ((piVar9[0xd] & 0x20800U) != 0)) {
      fVar1 = (float)piVar9[7];
      fVar2 = (float)piVar8[7];
      fVar3 = (float)piVar9[8];
      fVar4 = (float)piVar8[8];
      fVar5 = (float)piVar9[9];
      fVar6 = (float)piVar8[9];
      fVar10 = (float10)bea_vcall<float10>(piVar8, 0x40);
      fVar11 = (float10)bea_vcall<float10>(piVar9, 0x40);
      fVar11 = (float10)(float)((float10)SQRT((fVar1 - fVar2) * (fVar1 - fVar2) +
                                              (fVar5 - fVar6) * (fVar5 - fVar6) +
                                              (fVar3 - fVar4) * (fVar3 - fVar4)) - fVar10) - fVar11;
      fVar1 = (float)fVar11;
      if ((fVar11 < (float10)local_4) && (fVar1 < 1.0f)) {
        FUN_00401000(bea_arg((void *)((int)this_ + 0x44)), bea_arg(piVar9));
        local_4 = fVar1;
      }
    }
    this_00 = (void *)FUN_00492020(bea_arg(&DAT_00704200));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a1270, ap_004a1270));
