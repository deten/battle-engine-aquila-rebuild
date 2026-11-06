// auto-ported from 005151a0_FUN_005151a0.c (FUN_005151a0, 14 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_STDCALL ap_005151a0(undefined4 param_1, undefined2 *param_2)
{
  *param_2 = 0;
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005151a0, ap_005151a0));
