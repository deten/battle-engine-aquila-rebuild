// auto-ported from 004cac40_FUN_004cac40.c (FUN_004cac40, 62 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static float10 BEA_CDECL ap_004cac40(float param_1, float param_2, float param_3)
{
  float10 fVar1;
  
  fVar1 = (bea_fcast<float10>(param_1) - bea_fcast<float10>(param_2)) / (bea_fcast<float10>(param_3) - bea_fcast<float10>(param_2));
  if (fVar1 < bea_fcast<float10>(0.0f)) {
    return bea_fcast<float10>(0.0f);
  }
  if (bea_fcast<float10>(1.0f) < fVar1) {
    fVar1 = bea_fcast<float10>(1.0f);
  }
  return fVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cac40, ap_004cac40));
