// auto-ported from 0048ace0_FUN_0048ace0.c (FUN_0048ace0, 477 bytes) by tools/autoport.py
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

static void BEA_THISCALL ap_0048ace0(void * this_)
{
  void *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  void *this_01;
  int *piVar10;
  float10 fVar11;
  float local_28;
  
  this_00 = (void *)((int)this_ + 0x44);
  FUN_00401000(bea_arg(this_00), bea_arg(0));
  iVar7 = *(int *)((int)this_ + 0x18);
  this_01 = (void *)FUN_00491ea0(bea_arg(&DAT_00704200), bea_arg(*(undefined4 *)(iVar7 + 0x1c)), bea_arg(*(undefined4 *)(iVar7 + 0x20)), bea_arg(*(undefined4 *)(iVar7 + 0x24)), bea_arg(*(undefined4 *)(iVar7 + 0x28)), bea_arg(0x3f800000));
  bVar9 = false;
  local_28 = 999999.0;
  while (BEA_LOOP_GUARD((this_01 != (void *)0x0))) {
    piVar10 = (int *)FUN_00492c90(bea_arg(this_01));
    if ((piVar10 != (int *)0x0) && (piVar8 = *(int **)((int)this_ + 0x18), piVar10 != piVar8)) {
      if (((piVar10[0xd] & 0x20800U) == 0) || (piVar10[0x4e] == piVar8[0x4e])) {
        if (((!bVar9) && ((piVar10[0xd] & 0x4000U) != 0)) && ((*(byte *)(piVar10 + 0xb) & 4) == 0))
        {
          fVar1 = (float)piVar10[7];
          fVar2 = (float)piVar8[7];
          fVar3 = (float)piVar10[8];
          fVar4 = (float)piVar8[8];
          fVar5 = (float)piVar10[9];
          fVar6 = (float)piVar8[9];
          fVar11 = (float10)bea_vcall<float10>(piVar10, 0x40);
          fVar1 = (float)(((float10)(fVar5 - fVar6) * (float10)(fVar5 - fVar6) +
                          (float10)(fVar3 - fVar4) * (float10)(fVar3 - fVar4) +
                          (float10)(fVar1 - fVar2) * (float10)(fVar1 - fVar2)) - fVar11 * fVar11);
          if ((fVar1 < local_28) && (fVar1 < 0.0009f)) {
            FUN_00401000(bea_arg(this_00), bea_arg(piVar10));
            local_28 = fVar1;
          }
        }
      }
      else {
        fVar1 = (float)piVar10[7];
        fVar2 = (float)piVar8[7];
        fVar3 = (float)piVar10[8];
        fVar4 = (float)piVar8[8];
        fVar5 = (float)piVar10[9];
        fVar6 = (float)piVar8[9];
        fVar11 = (float10)bea_vcall<float10>(piVar10, 0x40);
        fVar1 = (float)(((float10)(fVar3 - fVar4) * (float10)(fVar3 - fVar4) +
                        (float10)(fVar1 - fVar2) * (float10)(fVar1 - fVar2) +
                        (float10)(fVar5 - fVar6) * (float10)(fVar5 - fVar6)) - fVar11 * fVar11);
        if ((fVar1 < local_28) && (fVar1 < 1.0f)) {
          FUN_00401000(bea_arg(this_00), bea_arg(piVar10));
          bVar9 = true;
          local_28 = fVar1;
        }
      }
    }
    this_01 = (void *)FUN_00492020(bea_arg(&DAT_00704200));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048ace0, ap_0048ace0));
