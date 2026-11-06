// auto-ported from 0050ecc0_vslot16.c (CFenrir::vslot16, 32 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CFenrir;

static float10 BEA_THISCALL ap_0050ecc0(CFenrir * this_)
{
  float10 fVar1;
  
  if (*(int **)(this_ + 0x30) != (int *)0x0) {
    fVar1 = (float10)bea_vcall<float10>(*(int **)(this_ + 0x30), 0x18);
    return fVar1 * (float10)1.5f;
  }
  return (float10)0.0f * (float10)1.5f;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0050ecc0, ap_0050ecc0));
