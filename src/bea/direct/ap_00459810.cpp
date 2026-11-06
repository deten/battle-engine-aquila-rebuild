// auto-ported from 00459810_FUN_00459810.c (FUN_00459810, 20 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static uint32_t BEA_THISCALL ap_00459810(void * this_, undefined4 param_1)
{
  *(undefined4 *)((int)this_ + 0xc) = 1;
  *(undefined4 *)((int)this_ + 0x10) = param_1;
  *(undefined4 *)((int)this_ + 8) = param_1;
  return param_1;
  return param_1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00459810, ap_00459810));
