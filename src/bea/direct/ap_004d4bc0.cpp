// auto-ported from 004d4bc0_FUN_004d4bc0.c (FUN_004d4bc0, 54 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_THISCALL ap_004d4bc0(void * this_, float *param_1)
{
  if (((*(float *)this_ == *param_1) && (*(float *)((int)this_ + 4) == param_1[1])) &&
     (*(float *)((int)this_ + 8) == param_1[2])) {
    return 1;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d4bc0, ap_004d4bc0));
