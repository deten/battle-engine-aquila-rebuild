// auto-ported from 004b82a0_FUN_004b82a0.c (FUN_004b82a0, 14 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_THISCALL ap_004b82a0(void * this_, int param_1)
{
  return *(undefined4 *)((int)this_ + param_1 * 0x18 + 0x3c);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b82a0, ap_004b82a0));
