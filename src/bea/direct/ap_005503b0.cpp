// auto-ported from 005503b0_FUN_005503b0.c (FUN_005503b0, 23 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_THISCALL ap_005503b0(void * this_)
{
  uint32_t eax_in = 0;
  if (*(undefined4 **)this_ != (undefined4 *)0x0) {
    eax_in = bea_vcall<uint32_t>(*(undefined4 **)this_, 0x0, 3);
    *(undefined4 *)this_ = 0;
  }
  return eax_in;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005503b0, ap_005503b0));
