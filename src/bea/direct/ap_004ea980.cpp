// auto-ported from 004ea980_vslot72.c (CRelaxedSquad::vslot72, 221 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CRelaxedSquad;

static float * BEA_THISCALL ap_004ea980(CRelaxedSquad * this_, float *param_1)
{
  int iVar1;
  float fVar2;
  int *piVar3;
  float fVar4;
  undefined4 *puVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  float local_4;
  
  puVar5 = *(undefined4 **)(this_ + 0xa4);
  fVar4 = 0.0f;
  fVar6 = 0.0f;
  fVar8 = 0.0f;
  iVar7 = 0;
  if (puVar5 == (undefined4 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)*puVar5;
  }
  if (piVar3 != (int *)0x0) {
    do {
      iVar1 = *piVar3;
      if (iVar1 != 0) {
        fVar4 = fVar4 + *(float *)(iVar1 + 0x1c);
        fVar6 = fVar6 + *(float *)(iVar1 + 0x20);
        fVar8 = fVar8 + *(float *)(iVar1 + 0x24);
        iVar7 = iVar7 + 1;
      }
      puVar5 = (undefined4 *)puVar5[1];
      if (puVar5 == (undefined4 *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)*puVar5;
      }
    } while (BEA_LOOP_GUARD((piVar3 != (int *)0x0)));
    if (iVar7 != 0) {
      fVar2 = (float)iVar7;
      fVar4 = fVar4 / fVar2;
      fVar6 = fVar6 / fVar2;
      fVar8 = fVar8 / fVar2;
      goto LAB_004eaa43;
    }
  }
  fVar4 = *(float *)(this_ + 0x1c);
  fVar6 = *(float *)(this_ + 0x20);
  fVar8 = *(float *)(this_ + 0x24);
  local_4 = *(float *)(this_ + 0x28);
LAB_004eaa43:
  *param_1 = fVar4;
  param_1[1] = fVar6;
  param_1[2] = fVar8;
  param_1[3] = local_4;
  return (float *)(param_1);
  return (float *)(param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ea980, ap_004ea980));
