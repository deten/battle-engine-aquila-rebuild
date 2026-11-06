// auto-ported from 00528bc0_FUN_00528bc0.c (FUN_00528bc0, 46 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0089c01c GLOBAL_AT(int, 0x0089c01c)

static void * BEA_THISCALL ap_00528bc0(void * this_)
{
  *(undefined4 *)((int)this_ + 4) = 0xffffffff;
  *(undefined4 *)((int)this_ + 8) = 0xffffffff;
  *(undefined4 *)((int)this_ + 0xc) = 0xffffffff;
  *(undefined4 *)((int)this_ + 0x10) = 0xffffffff;
  *(undefined ***)this_ = ((void*)0x005e4aac);
  *(undefined1 *)((int)this_ + 0x14) = 0;
  *(undefined1 *)((int)this_ + 0x15) = 0;
  *(void **)((int)this_ + 0x18) = DAT_0089c01c;
  DAT_0089c01c = this_;
  return this_;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00528bc0, ap_00528bc0));
