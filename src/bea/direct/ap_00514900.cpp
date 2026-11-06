// auto-ported from 00514900_vslot14.c (CPCController::vslot14, 67 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00888f94 GLOBAL_AT(int, 0x00888f94)

static float10 BEA_STDCALL ap_00514900(int param_1)
{
  float10 fVar1;
  
  if ((short)*(uint *)((&DAT_00888f94)[param_1] + 0x20) == -1) {
    return (float10)0.0f;
  }
  fVar1 = (float10)fcos((float10)*(uint *)((&DAT_00888f94)[param_1] + 0x20) * (float10)0.00017453294f
                       );
  return -fVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00514900, ap_00514900));
