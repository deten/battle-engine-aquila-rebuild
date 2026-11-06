// auto-ported from 00513c20_FUN_00513c20.c (FUN_00513c20, 77 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00855540 GLOBAL_AT(int, 0x00855540)
#define DAT_0089d680 GLOBAL_AT(char, 0x0089d680)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)

static uint32_t BEA_STDCALL ap_00513c20(int param_1, int param_2)
{
  (&DAT_00855540)[param_1] = param_2;
  if ((param_1 == 0x16) && (DAT_0089d680 != '\0')) {
    if (param_2 == 2) {
      param_2 = 3;
    }
    else if (param_2 == 3) {
      param_2 = 2;
    }
  }
  return bea_vcall<uint32_t>(DAT_00888a50, 0xe4, DAT_00888a50,param_1,param_2);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00513c20, ap_00513c20));
