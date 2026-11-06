// auto-ported from 004048f0_FUN_004048f0.c (FUN_004048f0, 22 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_CDECL ap_004048f0(int param_1)
{
  if ((0 < param_1) && (param_1 < 0xb)) {
    return 1;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004048f0, ap_004048f0));
