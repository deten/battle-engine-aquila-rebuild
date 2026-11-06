// auto-ported from 004cf880_vslot16.c (CEnable32Bit::vslot16, 95 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00856014 GLOBAL_AT(int, 0x00856014)
#define DAT_00856f64 GLOBAL_AT(int, 0x00856f64)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define DAT_008889f0 GLOBAL_AT(int, 0x008889f0)

static uint32_t BEA_CDECL ap_004cf880(void)
{
  return ((byte)*(undefined4 *)
                 (((uint8_t *)&DAT_00856014) +
                 (*(int *)(((uint8_t *)&DAT_00856f64) +
                          *(int *)(((uint8_t *)&DAT_00855bb0) + (DAT_008889f0 + 1) * 0x516c) * 0xf68 +
                          DAT_008889f0 * 0x516c) + 0xe) * 0x18 +
                 *(int *)(((uint8_t *)&DAT_00855bb0) + (DAT_008889f0 + 1) * 0x516c) * 0xf68 +
                 DAT_008889f0 * 0x516c) & 4 | 2) >> 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cf880, ap_004cf880));
