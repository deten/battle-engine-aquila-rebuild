// auto-ported from 00513870_FUN_00513870.c (FUN_00513870, 53 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_008557f0 GLOBAL_AT(int, 0x008557f0)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)

static uint32_t BEA_STDCALL ap_00513870(int param_1, int param_2, undefined4 param_3)
{
  (&DAT_008557f0)[param_2 + param_1 * 0x1e] = param_3;
  return bea_vcall<uint32_t>(DAT_00888a50, 0x10c, DAT_00888a50,param_1,param_2,param_3);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00513870, ap_00513870));
