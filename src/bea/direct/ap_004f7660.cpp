// auto-ported from 004f7660_FUN_004f7660.c (FUN_004f7660, 607 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef short * (BEA_THISCALL* FUN_004f78c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f78c0_t> FUN_004f78c0 = {(FUN_004f78c0_t)0x004f78c0};

static void BEA_THISCALL ap_004f7660(void * this_, undefined4 param_1, undefined4 param_2)
{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ushort *puVar9;
  ushort *puVar10;
  uint uVar11;
  uint uVar12;
  
  puVar9 = (ushort *)FUN_004f78c0(bea_arg(this_), bea_arg(param_1), bea_arg(param_2));
  puVar10 = (ushort *)FUN_004f78c0(bea_arg(this_), bea_arg(param_2), bea_arg(param_1));
  if (puVar9 == (ushort *)0x0) {
    return;
  }
  if (puVar10 == (ushort *)0x0) {
    return;
  }
  iVar5 = *(int *)this_;
  uVar12 = (uint)*puVar9;
  uVar11 = (uint)puVar9[1];
  fVar6 = *(float *)(iVar5 + uVar12 * 8) - *(float *)(iVar5 + uVar11 * 8);
  fVar7 = *(float *)(iVar5 + 4 + uVar12 * 8) - *(float *)(iVar5 + 4 + uVar11 * 8);
  pfVar1 = (float *)(iVar5 + uVar12 * 8);
  pfVar2 = (float *)(iVar5 + uVar11 * 8);
  pfVar3 = (float *)(iVar5 + (uint)puVar10[2] * 8);
  fVar6 = SQRT(fVar6 * fVar6 + fVar7 * fVar7);
  pfVar4 = (float *)(iVar5 + (uint)puVar9[2] * 8);
  fVar7 = SQRT((*pfVar4 - *pfVar3) * (*pfVar4 - *pfVar3) +
               (pfVar4[1] - pfVar3[1]) * (pfVar4[1] - pfVar3[1]));
  if (0.8f <= fVar6 / fVar7) {
    fVar6 = (pfVar3[1] - pfVar2[1]) * (*pfVar4 - *pfVar2) -
            (pfVar4[1] - pfVar2[1]) * (*pfVar3 - *pfVar2);
    fVar7 = (pfVar4[1] - pfVar1[1]) * (*pfVar3 - *pfVar1) -
            (pfVar3[1] - pfVar1[1]) * (*pfVar4 - *pfVar1);
    if (fVar6 <= 0.0f) {
      return;
    }
    if (fVar7 <= 0.0f) {
      return;
    }
    if (fVar6 <= fVar7) {
      fVar7 = fVar6 / fVar7;
    }
    else {
      fVar7 = fVar7 / fVar6;
    }
    fVar6 = (pfVar3[1] - pfVar1[1]) * (*pfVar3 - *pfVar2) -
            (*pfVar3 - *pfVar1) * (pfVar3[1] - pfVar2[1]);
    fVar8 = (pfVar4[1] - pfVar1[1]) * (*pfVar4 - *pfVar2) -
            (*pfVar4 - *pfVar1) * (pfVar4[1] - pfVar2[1]);
    if (fVar6 <= fVar8) {
      fVar6 = fVar6 / fVar8;
    }
    else {
      fVar6 = fVar8 / fVar6;
    }
    if (fVar7 <= fVar6) {
      return;
    }
  }
  else {
    if (fVar6 <= fVar7) {
      return;
    }
    if ((pfVar3[1] - pfVar2[1]) * (*pfVar4 - *pfVar2) -
        (pfVar4[1] - pfVar2[1]) * (*pfVar3 - *pfVar2) <= 0.0f) {
      return;
    }
    if ((pfVar4[1] - pfVar1[1]) * (*pfVar3 - *pfVar1) -
        (pfVar3[1] - pfVar1[1]) * (*pfVar4 - *pfVar1) <= 0.0f) {
      return;
    }
  }
  *puVar9 = puVar10[2];
  *puVar10 = puVar9[2];
  *(undefined4 *)((int)this_ + 0x14) = 1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f7660, ap_004f7660));
