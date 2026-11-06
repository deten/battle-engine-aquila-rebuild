// auto-ported from 00401440_vslot16.c (CThing::vslot16, 19 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CThing;

static float10 BEA_THISCALL ap_00401440(CThing * this_)
{
  float10 fVar1;
  
  if (*(int **)(this_ + 0x30) != (int *)0x0) {
                    
                    
    fVar1 = bea_fcast<float10>(bea_vcall<float10>(*(int **)(this_ + 0x30), 0x18));
    return fVar1;
  }
  return bea_fcast<float10>(0.0f);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00401440, ap_00401440));
