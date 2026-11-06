// auto-ported from 00513dd0_FUN_00513dd0.c (FUN_00513dd0, 46 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0085541c GLOBAL_AT(int, 0x0085541c)
#define DAT_008555a0 GLOBAL_AT(int, 0x008555a0)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)

static uint32_t BEA_STDCALL ap_00513dd0(uint param_1)
{
  if (DAT_0085541c != 0) {
    param_1 = param_1 | param_1 << 8;
  }
  DAT_008555a0 = param_1;
  return bea_vcall<uint32_t>(DAT_00888a50, 0xe4, DAT_00888a50,0x18,param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00513dd0, ap_00513dd0));
