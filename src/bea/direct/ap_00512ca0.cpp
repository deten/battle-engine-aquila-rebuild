// auto-ported from 00512ca0_FUN_00512ca0.c (FUN_00512ca0, 21 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00889074 GLOBAL_AT(int, 0x00889074)

static uint32_t BEA_STDCALL ap_00512ca0(int param_1)
{
  *(int *)(param_1 + 4) = DAT_00889074;
  DAT_00889074 = param_1;
  return param_1;
  return param_1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00512ca0, ap_00512ca0));
