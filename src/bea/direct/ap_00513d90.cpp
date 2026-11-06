// auto-ported from 00513d90_FUN_00513d90.c (FUN_00513d90, 54 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (4 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0085541c GLOBAL_AT(int, 0x0085541c)
#define DAT_008555a0 GLOBAL_AT(int, 0x008555a0)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)

static void BEA_STDCALL ap_00513d90(uint param_1)
{
  if (DAT_0085541c != 0) {
    param_1 = param_1 | param_1 << 8;
  }
  if (DAT_008555a0 != param_1) {
    DAT_008555a0 = param_1;
    bea_vcall<uint32_t>(DAT_00888a50, 0xe4, DAT_00888a50,0x18,param_1);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00513d90, ap_00513d90));
