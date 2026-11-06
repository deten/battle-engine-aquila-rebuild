// auto-ported from 00513800_FUN_00513800.c (FUN_00513800, 19 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_STDCALL ap_00513800(int *param_1)
{
  if (param_1 != (int *)0x0) {
    bea_vcall<uint32_t>(param_1, 0x8, param_1);
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00513800, ap_00513800));
