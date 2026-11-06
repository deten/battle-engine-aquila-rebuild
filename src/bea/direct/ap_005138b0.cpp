// auto-ported from 005138b0_FUN_005138b0.c (FUN_005138b0, 128 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (4 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00888a78 GLOBAL_AT(int, 0x00888a78)
#define DAT_00888ac0 GLOBAL_AT(int, 0x00888ac0)
#define DAT_008557f0 GLOBAL_AT(int, 0x008557f0)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)

static void BEA_STDCALL ap_005138b0(int param_1, int param_2, uint param_3)
{
  uint uVar1;
  
  if (param_2 == 6) {
    if ((param_3 == 3) && ((DAT_00888a78 & 0x20000) == 0)) {
      return;
    }
  }
  else {
    if (param_2 == 8) {
      return;
    }
    if (param_2 == 10) {
      uVar1 = 1;
      if ((DAT_00888a78 & 0x20000) != 0) {
        uVar1 = param_3;
      }
      param_3 = uVar1;
      if (DAT_00888ac0 < uVar1) {
        param_3 = DAT_00888ac0;
      }
    }
  }
  (&DAT_008557f0)[param_2 + param_1 * 0x1e] = param_3;
  bea_vcall<uint32_t>(DAT_00888a50, 0x114, DAT_00888a50,param_1,param_2,param_3);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005138b0, ap_005138b0));
