// auto-ported from 005565b0_FUN_005565b0.c (FUN_005565b0, 30 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_THISCALL ap_005565b0(void * this_)
{
  uint32_t eax_in = 0;
  if (*(undefined4 **)this_ != (undefined4 *)0x0) {
    eax_in = bea_vcall<uint32_t>(*(undefined4 **)this_, 0x0, 1);
  }
  if (*(undefined4 **)((int)this_ + 4) != (undefined4 *)0x0) {
    eax_in = bea_vcall<uint32_t>(*(undefined4 **)((int)this_ + 4), 0x0, 1);
  }
  return eax_in;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005565b0, ap_005565b0));
