// auto-ported from 004656e0_vslot3.c (CFMV::vslot3, 41 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CFMV;
#define DAT_006630cc GLOBAL_AT(int, 0x006630cc)

static int BEA_THISCALL ap_004656e0(CFMV * this_, undefined4 param_1, int param_2, undefined4 param_3)
{
  if ((param_2 == 7) || ((param_2 == 0x42 && (param_2 = *(int *)(this_ + 0xc), param_2 != 0)))) {
    *(undefined4 *)(this_ + 8) = 1;
    DAT_006630cc = 0;
  }
  return param_2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004656e0, ap_004656e0));
