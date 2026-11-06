// auto-ported from 004f5b70_FUN_004f5b70.c (FUN_004f5b70, 15 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static uint32_t BEA_THISCALL ap_004f5b70(void * this_, int param_1, undefined4 param_2)
{
  *(undefined4 *)((int)this_ + param_1 * 4 + 0xc) = param_2;
  return param_2;
  return param_2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f5b70, ap_004f5b70));
