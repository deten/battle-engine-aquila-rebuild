// auto-ported from 004062d0_FUN_004062d0.c (FUN_004062d0, 193 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static void BEA_THISCALL ap_004062d0(float * in_ECX, float param_1, float param_2, float param_3)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  float10 fVar5;
  float10 fVar6;
  
  fVar5 = (float10)fcos((float10)param_1);
  fVar6 = (float10)fsin((float10)param_1);
  fVar1 = (float)fVar6;
  fVar6 = (float10)fcos((float10)param_3);
  fVar2 = (float)fVar6;
  fVar6 = (float10)fsin((float10)param_3);
  fVar3 = (float)fVar6;
  fVar6 = (float10)fcos((float10)param_2);
  fVar4 = (float)fVar6;
  fVar6 = (float10)fsin((float10)param_2);
  *in_ECX = (float)((float10)fVar2 * fVar5 - fVar6 * (float10)fVar3 * (float10)fVar1);
  in_ECX[1] = -(fVar4 * fVar1);
  in_ECX[2] = (float)((float10)fVar3 * fVar5 + fVar6 * (float10)fVar2 * (float10)fVar1);
  in_ECX[4] = (float)((float10)fVar2 * (float10)fVar1 + fVar6 * (float10)fVar3 * fVar5);
  in_ECX[5] = (float)((float10)fVar4 * fVar5);
  in_ECX[6] = (float)((float10)fVar3 * (float10)fVar1 -
                     (float10)(float)(fVar6 * (float10)fVar2) * fVar5);
  in_ECX[8] = -(fVar4 * fVar3);
  in_ECX[9] = (float)fVar6;
  in_ECX[10] = fVar4 * fVar2;
  return;
}

// @autoport-registration (verified: 51030 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004062d0, ap_004062d0));
