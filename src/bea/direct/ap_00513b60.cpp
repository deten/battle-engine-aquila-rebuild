// auto-ported from 00513b60_FUN_00513b60.c (FUN_00513b60, 87 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_008554fc GLOBAL_AT(int, 0x008554fc)
#define DAT_008557f4 GLOBAL_AT(int, 0x008557f4)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)

static uint32_t BEA_STDCALL ap_00513b60(int param_1)
{
  if (DAT_008554fc != 0) {
    (&DAT_008557f4)[param_1 * 0x1e] = 5;
    return bea_vcall<uint32_t>(DAT_00888a50, 0x10c, DAT_00888a50,param_1,1,5);
  }
  (&DAT_008557f4)[param_1 * 0x1e] = 4;
  return bea_vcall<uint32_t>(DAT_00888a50, 0x10c, DAT_00888a50,param_1,1,4);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00513b60, ap_00513b60));
