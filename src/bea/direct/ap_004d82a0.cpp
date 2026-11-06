// auto-ported from 004d82a0_vslot15.c (CRound::vslot15, 43 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CRound;

static float10 BEA_THISCALL ap_004d82a0(CRound * this_)
{
  float10 fVar1;
  
  fVar1 = (float10)bea_vcall<float10>(this_, 0xb4);
  if (fVar1 != (float10)0.0f) {
    return (float10)160.0f;
  }
  return (float10)*(float *)(*(int *)(this_ + 0xf0) + 0x2c);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d82a0, ap_004d82a0));
