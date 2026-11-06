// auto-ported from 0040b660_FUN_0040b660.c (FUN_0040b660, 107 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static float10 BEA_CDECL ap_0040b660(float param_1, float param_2)
{
  if ((param_1 < -1.5707964f) && (1.5707964f < param_2)) {
    return (float10)param_1 - ((float10)param_2 - (float10)6.2831855f);
  }
  if ((1.5707964f < param_1) && (param_2 < -1.5707964f)) {
    return (float10)param_1 - ((float10)param_2 + (float10)6.2831855f);
  }
  return (float10)param_1 - (float10)param_2;
}

// @autoport-registration (verified: 92 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0040b660, ap_0040b660));
