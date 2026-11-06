// auto-ported from 004b9ea0_FUN_004b9ea0.c (FUN_004b9ea0, 22 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static uint32_t BEA_THISCALL ap_004b9ea0(void * this_)
{
  *(undefined4 *)((int)this_ + 0x28) = 1;
  *(undefined4 *)((int)this_ + 0x2c) = 0;
  *(undefined4 *)((int)this_ + 0x30) = 0;
  *(undefined4 *)((int)this_ + 0x38) = 0;
  *(undefined4 *)((int)this_ + 0x3c) = 0;
  return (uint32_t)0;
  return (uint32_t)0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b9ea0, ap_004b9ea0));
