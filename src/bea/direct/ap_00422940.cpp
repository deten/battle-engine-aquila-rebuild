// auto-ported from 00422940_FUN_00422940.c (FUN_00422940, 34 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)

static undefined4 BEA_THISCALL ap_00422940(void * this_)
{
  if (DAT_00672fd0 < *(float *)((int)this_ + 0x288) + 1.0f) {
    return 1;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00422940, ap_00422940));
