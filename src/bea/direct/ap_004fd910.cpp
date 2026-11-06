// auto-ported from 004fd910_FUN_004fd910.c (FUN_004fd910, 256 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00855160 GLOBAL_AT(undefined4*, 0x00855160)

static float * BEA_THISCALL ap_004fd910(void * this_, float *param_1)
{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int *piVar8;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_20 = 0.0;
  local_1c = 0.0;
  local_18 = 0.0;
  puVar2 = DAT_00855160;
  if (DAT_00855160 == (undefined4 *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = (int *)*DAT_00855160;
  }
  while (BEA_LOOP_GUARD((piVar8 != (int *)0x0))) {
    iVar1 = *(int *)((int)this_ + 0x138);
    iVar7 = bea_vcall<uint32_t>(piVar8, 0x108);
    if ((iVar7 == iVar1) &&
       (fVar3 = *(float *)((int)this_ + 0x1c) - local_20,
       fVar4 = *(float *)((int)this_ + 0x20) - local_1c,
       fVar5 = *(float *)((int)this_ + 0x1c) - bea_fcast<float>(piVar8[7]),
       fVar6 = *(float *)((int)this_ + 0x20) - bea_fcast<float>(piVar8[8]),
       SQRT(fVar5 * fVar5 + fVar6 * fVar6) < SQRT(fVar3 * fVar3 + fVar4 * fVar4))) {
      local_20 = bea_fcast<float>(piVar8[7]);
      local_1c = bea_fcast<float>(piVar8[8]);
      local_18 = bea_fcast<float>(piVar8[9]);
      local_14 = bea_fcast<float>(piVar8[10]);
    }
    puVar2 = (undefined4 *)puVar2[1];
    if (puVar2 == (undefined4 *)0x0) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = (int *)*puVar2;
    }
  }
  *param_1 = local_20;
  param_1[1] = local_1c;
  param_1[2] = local_18;
  param_1[3] = local_14;
  return (float *)(param_1);
  return (float *)(param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fd910, ap_004fd910));
