// auto-ported from 0040d5b0_FUN_0040d5b0.c (FUN_0040d5b0, 51 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_008a9e44 GLOBAL_AT(float, 0x008a9e44)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)

static float10 BEA_THISCALL ap_0040d5b0(void * this_)
{
  float10 fVar1;
  
  fVar1 = (((float10)DAT_008a9e44 * (float10)0.05f + (float10)DAT_00672fd0) -
          (float10)*(float *)((int)this_ + 4)) /
          ((float10)*(float *)((int)this_ + 8) - (float10)*(float *)((int)this_ + 4));
  if ((float10)1.0f < fVar1) {
    fVar1 = (float10)1.0f;
  }
  return fVar1;
}

// @autoport-registration (verified: 378 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0040d5b0, ap_0040d5b0));
