// auto-ported from 00420cd0_FUN_00420cd0.c (FUN_00420cd0, 57 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static int BEA_THISCALL ap_00420cd0(void * this_, int param_1)
{
  if (param_1 == -1) {
    return (int)this_ + *(int *)((int)this_ + 0x32e40) * 0x516c + 4;
  }
  return (int)this_ + param_1 * 0x516c + 4;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00420cd0, ap_00420cd0));
