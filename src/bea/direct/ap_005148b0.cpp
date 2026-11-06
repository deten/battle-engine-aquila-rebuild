// auto-ported from 005148b0_vslot13.c (CPCController::vslot13, 65 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00888f94 GLOBAL_AT(int, 0x00888f94)

static float10 BEA_STDCALL ap_005148b0(int param_1)
{
  float10 fVar1;
  
  if ((short)*(uint *)((&DAT_00888f94)[param_1] + 0x20) == -1) {
    return (float10)0.0f;
  }
  fVar1 = (float10)fsin((float10)*(uint *)((&DAT_00888f94)[param_1] + 0x20) * (float10)0.00017453294f
                       );
  return fVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005148b0, ap_005148b0));
