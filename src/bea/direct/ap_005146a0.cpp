// auto-ported from 005146a0_vslot11.c (CPCController::vslot11, 42 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00888ff8 GLOBAL_AT(int, 0x00888ff8)
#define DAT_00888f94 GLOBAL_AT(int, 0x00888f94)

static float10 BEA_STDCALL ap_005146a0(int param_1)
{
  if (DAT_00888ff8 <= param_1) {
    return (float10)0.0f;
  }
  return (float10)*(int *)((&DAT_00888f94)[param_1] + 8) * (float10)0.001f;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005146a0, ap_005146a0));
