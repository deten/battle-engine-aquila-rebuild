// auto-ported from 00468750_FUN_00468750.c (FUN_00468750, 21 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define _DAT_008a9570 GLOBAL_AT(float, 0x008a9570)

static float10 BEA_CDECL ap_00468750(void)
{
  float10 fVar1;
  
  fVar1 = bea_fcast<float10>(fcos(bea_fcast<float10>(_DAT_008a9570) * bea_fcast<float10>(0.01f)));
  return fVar1 * bea_fcast<float10>(3.0f);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00468750, ap_00468750));
