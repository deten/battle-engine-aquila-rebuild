// auto-ported from 00528690_FUN_00528690.c (FUN_00528690, 32 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0089c018 GLOBAL_AT(int, 0x0089c018)

static void * BEA_THISCALL ap_00528690(void * this_, undefined4 param_1)
{
  *(undefined ***)this_ = ((void*)0x005e4a94);
  *(undefined4 *)((int)this_ + 8) = param_1;
  *(void **)((int)this_ + 4) = DAT_0089c018;
  DAT_0089c018 = this_;
  return this_;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00528690, ap_00528690));
