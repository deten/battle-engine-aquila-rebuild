// auto-ported from 00449560_FUN_00449560.c (FUN_00449560, 31 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void * BEA_THISCALL ap_00449560(void * this_, undefined4 *param_1, undefined4 *param_2, undefined4 *param_3)
{
  *(undefined4 *)this_ = *param_1;
  *(undefined4 *)((int)this_ + 4) = *param_2;
  *(undefined4 *)((int)this_ + 8) = *param_3;
  return (void *)(this_);
  return (void *)(this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00449560, ap_00449560));
