// auto-ported from 0042e750_FUN_0042e750.c (FUN_0042e750, 62 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (9 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_008a9ac0 GLOBAL_AT(int, 0x008a9ac0)
#define DAT_00662acc GLOBAL_AT(int, 0x00662acc)

static void BEA_THISCALL ap_0042e750(void * this_, float param_1, int param_2)
{
  if ((DAT_008a9ac0 == 3) || (param_1 == 0.0f)) {
    if ((&DAT_00662acc)[param_2] != 0) {
      bea_vcall<uint32_t>(this_, 0x4, param_1);
      return;
    }
    bea_vcall<uint32_t>(this_, 0x4, 0);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042e750, ap_0042e750));
