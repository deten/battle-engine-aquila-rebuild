// auto-ported from 005234d0_FUN_005234d0.c (FUN_005234d0, 10 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0089bdf0 GLOBAL_AT(int, 0x0089bdf0)

static uint32_t BEA_CDECL ap_005234d0(undefined4 param_1)
{
  DAT_0089bdf0 = param_1;
  return param_1;
  return param_1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005234d0, ap_005234d0));
