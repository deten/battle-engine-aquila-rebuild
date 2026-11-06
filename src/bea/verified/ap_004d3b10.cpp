// auto-ported from 004d3b10_FUN_004d3b10.c (FUN_004d3b10, 450 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_STDCALL ap_004d3b10(float param_1, float param_2, float param_3, float param_4, float *param_5, float *param_6)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1 + param_3;
  if ((fVar1 < *param_5) && (fVar1 < *param_6)) {
    return 0;
  }
  if ((*param_5 < param_1) && (*param_6 < param_1)) {
    return 0;
  }
  fVar2 = param_2 + param_4;
  if ((fVar2 < param_5[1]) && (fVar2 < param_6[1])) {
    return 0;
  }
  if ((param_5[1] < param_2) && (param_6[1] < param_2)) {
    return 0;
  }
  fVar3 = *param_6 - *param_5;
  fVar4 = param_6[1] - param_5[1];
  if (fVar3 != 0.0) {
    fVar6 = (param_1 - *param_5) * (fVar4 / fVar3) + param_5[1];
    fVar5 = (fVar1 - *param_5) * (fVar4 / fVar3) + param_5[1];
    if ((fVar2 <= fVar6) && (fVar2 <= fVar5)) {
      return 0;
    }
    if ((fVar6 < param_2) && (fVar5 < param_2)) {
      return 0;
    }
  }
  if (fVar4 != 0.0) {
    fVar5 = (param_2 - param_5[1]) * (fVar3 / fVar4) + *param_5;
    fVar2 = (fVar2 - param_5[1]) * (fVar3 / fVar4) + *param_5;
    if ((fVar1 <= fVar5) && (fVar1 <= fVar2)) {
      return 0;
    }
    if ((fVar5 < param_1) && (fVar2 < param_1)) {
      return 0;
    }
  }
  return 1;
}

// @autoport-registration (verified: 310 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004d3b10, ap_004d3b10));
