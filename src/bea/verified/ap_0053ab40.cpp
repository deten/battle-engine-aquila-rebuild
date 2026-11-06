// auto-ported from 0053ab40_FUN_0053ab40.c (FUN_0053ab40, 149 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define _DAT_008aa4e8 GLOBAL_AT(float, 0x008aa4e8)
#define _DAT_008aa4f0 GLOBAL_AT(float, 0x008aa4f0)
#define _DAT_0067a628 GLOBAL_AT(float, 0x0067a628)

static float * BEA_CDECL ap_0053ab40(float *param_1, float param_2, float param_3, float param_4, float *param_5, float param_6, undefined4 param_7)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = param_5[1];
  fVar2 = *param_5;
  fVar3 = param_5[1];
  fVar5 = ((_DAT_008aa4e8 + _DAT_008aa4f0) - 128.0f) - _DAT_0067a628;
  fVar4 = *param_5;
  param_1[2] = 0.9;
  param_1[3] = 0.5;
  *param_1 = (fVar4 - param_3) + fVar5;
  param_1[1] = (-param_4 - fVar1) + param_2;
  if ((char)param_7 == '\0') {
    param_1[7] = 0.0f;
    param_1[4] = fVar2 * 0.0078125f;
    param_1[5] = fVar3 * 0.0078125f;
    param_1[6] = param_6;
    return param_1;
  }
  param_1[5] = 0.0f;
  param_1[4] = param_6;
  param_1[6] = 0.0f;
  param_1[7] = 0.0f;
  return param_1;
  return param_1;
}

// @autoport-registration (verified: 27441 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0053ab40, ap_0053ab40));
