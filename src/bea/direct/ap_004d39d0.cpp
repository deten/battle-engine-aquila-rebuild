// auto-ported from 004d39d0_FUN_004d39d0.c (FUN_004d39d0, 45 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void * BEA_THISCALL ap_004d39d0(void * this_)
{
  *(undefined4 *)((int)this_ + 0x40) = 0;
  *(undefined4 *)((int)this_ + 0x44) = 0;
  *(undefined4 *)((int)this_ + 0x48) = 0;
  *(undefined4 *)((int)this_ + 0x50) = 0x3f800000;
  *(undefined4 *)((int)this_ + 0x60) = 0;
  *(undefined4 *)((int)this_ + 100) = 0;
  *(undefined4 *)((int)this_ + 0x78) = 0;
  *(undefined4 *)((int)this_ + 0x9c) = 0;
  *(undefined4 *)((int)this_ + 0x98) = 0;
  *(undefined4 *)((int)this_ + 0x7c) = 0;
  return (void *)(this_);
  return (void *)(this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d39d0, ap_004d39d0));
