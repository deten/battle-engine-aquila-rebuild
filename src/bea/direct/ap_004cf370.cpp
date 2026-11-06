// auto-ported from 004cf370_vslot14.c (CSCModeMenuItem::vslot14, 98 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00856f64 GLOBAL_AT(int, 0x00856f64)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define DAT_008889f0 GLOBAL_AT(int, 0x008889f0)
#define DAT_00631170 GLOBAL_AT(int, 0x00631170)
#define DAT_00704868 GLOBAL_AT(int, 0x00704868)
#define DAT_0082b5b0 GLOBAL_AT(char, 0x0082b5b0)

static void BEA_STDCALL ap_004cf370(undefined4 param_1)
{
  *(undefined4 *)
   (((uint8_t *)&DAT_00856f64) +
   *(int *)(((uint8_t *)&DAT_00855bb0) + (DAT_008889f0 + 1) * 0x516c) * 0xf68 + DAT_008889f0 * 0x516c) = param_1;
  if (DAT_00631170 != DAT_00704868) {
    DAT_0082b5b0 = 1;
    DAT_00631170 = DAT_00704868;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cf370, ap_004cf370));
