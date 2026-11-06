// auto-ported from 004de8c0_FUN_004de8c0.c (FUN_004de8c0, 14 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void * BEA_THISCALL ap_004de8c0(void * this_, undefined4 param_1)
{
  *(undefined4 *)((int)this_ + 4) = param_1;
  *(undefined4 *)this_ = param_1;
  return (void *)(this_);
  return (void *)(this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004de8c0, ap_004de8c0));
