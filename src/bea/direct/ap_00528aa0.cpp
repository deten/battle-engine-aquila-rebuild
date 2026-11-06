// auto-ported from 00528aa0_FUN_00528aa0.c (FUN_00528aa0, 45 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0089c018 GLOBAL_AT(int, 0x0089c018)

static void * BEA_THISCALL ap_00528aa0(void * this_, undefined4 param_1, undefined4 param_2)
{
  *(undefined ***)this_ = ((void*)0x005e4a94);
  *(undefined4 *)((int)this_ + 8) = param_1;
  *(void **)((int)this_ + 4) = DAT_0089c018;
  DAT_0089c018 = this_;
  *(undefined ***)this_ = ((void*)0x005e4a9c);
  *(undefined4 *)((int)this_ + 0xc) = param_2;
  return this_;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00528aa0, ap_00528aa0));
