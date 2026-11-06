// auto-ported from 004dbbe0_vslot8.c (CRenderThing::vslot8, 17 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 * BEA_STDCALL ap_004dbbe0(undefined4 *param_1, undefined4 param_2)
{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return (undefined4 *)(param_1);
  return (undefined4 *)(param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dbbe0, ap_004dbbe0));
