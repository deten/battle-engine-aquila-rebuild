// auto-ported from 004cf3e0_vslot15.c (CSCModeMenuItem::vslot15, 67 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00856f64 GLOBAL_AT(int, 0x00856f64)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define DAT_008889f0 GLOBAL_AT(int, 0x008889f0)

static undefined4 BEA_CDECL ap_004cf3e0(void)
{
  return *(undefined4 *)
          (((uint8_t *)&DAT_00856f64) +
          *(int *)(((uint8_t *)&DAT_00855bb0) + (DAT_008889f0 + 1) * 0x516c) * 0xf68 + DAT_008889f0 * 0x516c);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cf3e0, ap_004cf3e0));
