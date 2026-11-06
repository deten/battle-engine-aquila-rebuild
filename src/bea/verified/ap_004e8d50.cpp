// auto-ported from 004e8d50_vslot75.c (CNormalSquad::vslot75, 119 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static int BEA_THISCALL ap_004e8d50(int in_ECX, float param_1, float param_2, uint32_t unused_2, uint32_t unused_3)
{
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int *piVar5;

  int iVar6;
  float local_4;
  
  puVar1 = *(undefined4 **)(in_ECX + 0xa4);
  iVar6 = 0;
  local_4 = 999999.0;
  if (puVar1 == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)*puVar1;
  }
  while (piVar5 != (int *)0x0) {
    iVar2 = *piVar5;
    if (((iVar2 != 0) && ((*(byte *)(iVar2 + 0x2c) & 4) == 0)) &&
       (fVar3 = param_1 - *(float *)(iVar2 + 0x1c), fVar4 = param_2 - *(float *)(iVar2 + 0x20),
       fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4), fVar3 < local_4)) {
      iVar6 = iVar2;
      local_4 = fVar3;
    }
    puVar1 = (undefined4 *)puVar1[1];
    if (puVar1 == (undefined4 *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)*puVar1;
    }
  }
  return iVar6;
}

// @autoport-registration (verified: 1706 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004e8d50, ap_004e8d50));
