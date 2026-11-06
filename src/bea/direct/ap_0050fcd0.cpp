// auto-ported from 0050fcd0_vslot15.c (CComponent::vslot15, 22 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CComponent;

static float10 BEA_THISCALL ap_0050fcd0(CComponent * this_)
{
  float10 fVar1;
  
  if (*(int **)(this_ + 0x26c) != (int *)0x0) {
                    
                    
    fVar1 = bea_fcast<float10>(bea_vcall<float10>(*(int **)(this_ + 0x26c), 0x3c));
    return fVar1;
  }
  return bea_fcast<float10>(13.0f);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0050fcd0, ap_0050fcd0));
