// auto-ported from 0043e9c0_vslot27.c (CThing::vslot27, 44 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0066ea10 GLOBAL_AT(int, 0x0066ea10)
#define DAT_0066ea14 GLOBAL_AT(int, 0x0066ea14)
#define DAT_0066ea18 GLOBAL_AT(int, 0x0066ea18)
#define DAT_0066ea1c GLOBAL_AT(int, 0x0066ea1c)

static undefined4 * BEA_STDCALL ap_0043e9c0(undefined4 *param_1)
{
  *param_1 = DAT_0066ea10;
  param_1[1] = DAT_0066ea14;
  param_1[2] = DAT_0066ea18;
  param_1[3] = DAT_0066ea1c;
  return (undefined4 *)(param_1);
  return (undefined4 *)(param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0043e9c0, ap_0043e9c0));
