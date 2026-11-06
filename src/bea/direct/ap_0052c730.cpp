// auto-ported from 0052c730_FUN_0052c730.c (FUN_0052c730, 23 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static uint32_t BEA_THISCALL ap_0052c730(void * this_, undefined4 param_1, undefined4 param_2)
{
  *(undefined4 *)((int)this_ + 0x330bc) = param_1;
  *(undefined4 *)((int)this_ + 0x330c0) = param_2;
  return param_1;
  return param_1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0052c730, ap_0052c730));
