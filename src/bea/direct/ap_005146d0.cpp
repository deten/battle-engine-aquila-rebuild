// auto-ported from 005146d0_vslot12.c (CPCController::vslot12, 66 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00889014 GLOBAL_AT(int, 0x00889014)
#define DAT_00888ff8 GLOBAL_AT(int, 0x00888ff8)
#define DAT_00888f94 GLOBAL_AT(int, 0x00888f94)

static float10 BEA_STDCALL ap_005146d0(int param_1)
{
  if (*(int *)(((char *)&DAT_00889014) + param_1 * 4) == 0) {
    return (float10)0.0f;
  }
  if (DAT_00888ff8 <= param_1) {
    return (float10)0.0f;
  }
  return ((float10)*(int *)((&DAT_00888f94)[param_1] + 0x14) - (float10)32768.0f) *
         (float10)3.0517578e-05f;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005146d0, ap_005146d0));
