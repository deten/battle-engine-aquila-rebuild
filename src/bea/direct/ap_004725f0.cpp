// auto-ported from 004725f0_FUN_004725f0.c (FUN_004725f0, 37 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_THISCALL ap_004725f0(void * this_, int param_1)
{
  if (param_1 == 1) {
    return *(undefined4 *)((int)this_ + 0x290);
  }
  if (param_1 == 2) {
    return *(undefined4 *)((int)this_ + 0x294);
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004725f0, ap_004725f0));
