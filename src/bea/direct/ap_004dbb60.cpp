// auto-ported from 004dbb60_FUN_004dbb60.c (FUN_004dbb60, 17 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void * BEA_THISCALL ap_004dbb60(void * this_)
{
  *(undefined4 *)((int)this_ + 0x10) = 0;
  *(undefined ***)this_ = ((void*)0x005dea38);
  *(undefined4 *)((int)this_ + 0x18) = 0;
  return (void *)(this_);
  return (void *)(this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dbb60, ap_004dbb60));
