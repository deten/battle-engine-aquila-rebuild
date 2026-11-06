// auto-ported from 00401b50_FUN_00401b50.c (FUN_00401b50, 130 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_008a9e44 GLOBAL_AT(float, 0x008a9e44)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)

static float10 BEA_THISCALL ap_00401b50(void * this_)
{
  float fVar1;
  float10 fVar2;
  
  fVar2 = (float10)bea_vcall<float10>(this_, 0x60);
  if (fVar2 <= (float10)1.0f) {
    fVar2 = (float10)DAT_008a9e44;
  }
  else {
    fVar1 = DAT_00672fd0 - *(float *)((int)this_ + 0xd8);
    fVar2 = (float10)bea_vcall<float10>(this_, 0x60);
    fVar2 = ((float10)1.0f / fVar2) * (float10)fVar1 * (float10)20.0f +
            (float10)DAT_008a9e44 * ((float10)1.0f / fVar2);
    if (fVar2 < (float10)0.0f) {
      return (float10)0.0f;
    }
    if ((float10)1.0f < fVar2) {
      return (float10)1.0f;
    }
  }
  return fVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00401b50, ap_00401b50));
