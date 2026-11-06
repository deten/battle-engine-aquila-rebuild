// auto-ported from 0049bc40_FUN_0049bc40.c (FUN_0049bc40, 55 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static float10 BEA_THISCALL ap_0049bc40(float * in_ECX)
{
  return ((float10)in_ECX[4] * (float10)in_ECX[9] - (float10)in_ECX[8] * (float10)in_ECX[5]) *
         (float10)in_ECX[2] +
         (((float10)in_ECX[5] * (float10)in_ECX[10] - (float10)in_ECX[6] * (float10)in_ECX[9]) *
          (float10)*in_ECX -
         ((float10)in_ECX[4] * (float10)in_ECX[10] - (float10)in_ECX[8] * (float10)in_ECX[6]) *
         (float10)in_ECX[1]);
}

// @autoport-registration (verified: 59936 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0049bc40, ap_0049bc40));
