// auto-ported from 0044fd50_vslot8.c (CFrontEndThing::vslot8, 19 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CFrontEndThing;

static float10 BEA_THISCALL ap_0044fd50(CFrontEndThing * this_)
{
  float10 fVar1;
  
  if (*(int **)(this_ + 0x58) != (int *)0x0) {
                    
                    
    fVar1 = bea_fcast<float10>(bea_vcall<float10>(*(int **)(this_ + 0x58), 0x18));
    return fVar1;
  }
  return bea_fcast<float10>(1.0f);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044fd50, ap_0044fd50));
