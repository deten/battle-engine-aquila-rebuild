// auto-ported from 0050d760_FUN_0050d760.c (FUN_0050d760, 61 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)

static float10 BEA_THISCALL ap_0050d760(void * this_, int param_1)
{
  float10 fVar1;
  
  if (*(int *)((int)this_ + param_1 * 4 + 0x20c) == 3) {
    fVar1 = (float10)*(float *)((int)this_ + param_1 * 4 + 0x23c) - (float10)DAT_00672fd0;
    if (fVar1 < (float10)0.0f) {
      return (float10)0.0f;
    }
  }
  else {
    fVar1 = (float10)*(float *)((int)this_ + param_1 * 4 + 0x23c);
  }
  return fVar1;
}

// @autoport-registration (verified: 14507 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0050d760, ap_0050d760));
