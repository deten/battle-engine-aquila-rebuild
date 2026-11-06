// auto-ported from 004a4250_FUN_004a4250.c (FUN_004a4250, 50 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void * BEA_THISCALL ap_004a4250(void * this_, undefined4 param_1)
{
  *(undefined4 *)((int)this_ + 8) = 0;
  *(undefined4 *)((int)this_ + 0xc) = 0;
  *(undefined4 *)((int)this_ + 0x18) = 0;
  *(undefined4 *)((int)this_ + 4) = 3;
  *(undefined4 *)((int)this_ + 0x10) = 1;
  *(undefined4 *)((int)this_ + 0x14) = 0xffd6d6d6;
  *(undefined ***)this_ = ((void*)0x005dc610);
  *(undefined4 *)((int)this_ + 0x1c) = param_1;
  return (void *)(this_);
  return (void *)(this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a4250, ap_004a4250));
