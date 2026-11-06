// auto-ported from 00513af0_FUN_00513af0.c (FUN_00513af0, 99 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (19 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_008554fc GLOBAL_AT(int, 0x008554fc)
#define DAT_008557f4 GLOBAL_AT(int, 0x008557f4)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)

static void BEA_STDCALL ap_00513af0(int param_1)
{
  if (DAT_008554fc == 0) {
    if ((&DAT_008557f4)[param_1 * 0x1e] != 4) {
      (&DAT_008557f4)[param_1 * 0x1e] = 4;
      bea_vcall<uint32_t>(DAT_00888a50, 0x10c, DAT_00888a50,param_1,1,4);
    }
  }
  else if ((&DAT_008557f4)[param_1 * 0x1e] != 5) {
    (&DAT_008557f4)[param_1 * 0x1e] = 5;
    bea_vcall<uint32_t>(DAT_00888a50, 0x10c, DAT_00888a50,param_1,1,5);
    return;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00513af0, ap_00513af0));
