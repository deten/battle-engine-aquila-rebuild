// auto-ported from 00515190_FUN_00515190.c (FUN_00515190, 15 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_STDCALL ap_00515190(undefined4 param_1, undefined4 *param_2)
{
  *param_2 = param_1;
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00515190, ap_00515190));
