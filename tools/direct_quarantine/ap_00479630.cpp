// auto-ported from 00479630_FUN_00479630.c (FUN_00479630, 311 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static float10 BEA_CDECL ap_00479630(float *param_1, float *param_2, float param_3)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  
  fVar1 = *param_2 - *param_1;
  fVar2 = param_2[1] - param_1[1];
  fVar3 = param_2[2] - param_1[2];
  fVar4 = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
  if (fVar4 != 0.0f) {
    fVar4 = 1.0f / fVar4;
    fVar1 = fVar1 * fVar4;
    fVar2 = fVar2 * fVar4;
    fVar3 = fVar3 * fVar4;
  }
  fVar5 = -*param_1;
  fVar6 = -param_1[1];
  fVar4 = -param_1[2];
  fVar1 = fVar5 * fVar1 + fVar6 * fVar2 + fVar4 * fVar3;
  fVar2 = param_3 * param_3 - ((fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4) - fVar1 * fVar1);
  if (0.0f <= fVar2) {
    fVar2 = SQRT(fVar2);
    fVar7 = bea_fcast<float10>(fVar1) - bea_fcast<float10>(fVar2);
    if (bea_fcast<float10>(0.0f) <= fVar7) {
      return fVar7;
    }
    if (0.0f < fVar2 + fVar1) {
      return bea_fcast<float10>(param_3) -
             SQRT(bea_fcast<float10>(*param_1) * bea_fcast<float10>(*param_1) +
                  bea_fcast<float10>(param_1[1]) * bea_fcast<float10>(param_1[1]) +
                  bea_fcast<float10>(param_1[2]) * bea_fcast<float10>(param_1[2]));
    }
  }
  return bea_fcast<float10>(-1.0f);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00479630, ap_00479630));
