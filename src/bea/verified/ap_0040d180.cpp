// auto-ported from 0040d180_FUN_0040d180.c (FUN_0040d180, 27 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-handfixed (do not regenerate)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static float10 BEA_THISCALL ap_0040d180(void * this_, float *param_1)
{
  // x87 order of the original: (z*z' + y*y') + x*x' (Ghidra prints the chain
  // without parentheses in a different association; NOTES A1-8 rule 10)
  return ((float10)param_1[2] * (float10)*(float *)((int)this_ + 8) +
          (float10)param_1[1] * (float10)*(float *)((int)this_ + 4)) +
         (float10)*param_1 * (float10)*(float *)this_;
}

// @autoport-registration (verified: 74862 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0040d180, ap_0040d180));
