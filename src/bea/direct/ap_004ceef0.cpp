// auto-ported from 004ceef0_vslot14.c (CShadowDetail::vslot14, 57 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_009c7c54 GLOBAL_AT(char, 0x009c7c54)
#define DAT_009c7c56 GLOBAL_AT(char, 0x009c7c56)

static uint BEA_STDCALL ap_004ceef0(int param_1)
{
  if (param_1 == 1) {
    DAT_009c7c54 = 0;
    DAT_009c7c56 = 1;
    return 0;
  }
  if (param_1 - 2U != 0) {
    DAT_009c7c54 = 0;
    DAT_009c7c56 = 0;
    return param_1 - 2U & 0xffffff00;
  }
  DAT_009c7c54 = 1;
  DAT_009c7c56 = 1;
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ceef0, ap_004ceef0));
