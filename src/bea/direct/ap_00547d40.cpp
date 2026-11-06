// auto-ported from 00547d40_FUN_00547d40.c (FUN_00547d40, 35 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00650f6c GLOBAL_AT(int, 0x00650f6c)

static void BEA_CDECL ap_00547d40(int param_1)
{
  if (param_1 == 0) {
    DAT_00650f6c = 0x100000;
    return;
  }
  DAT_00650f6c = param_1 + 0xfffffU & 0xfff00000;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00547d40, ap_00547d40));
