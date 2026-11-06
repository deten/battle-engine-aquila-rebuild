// auto-ported from 0040d470_FUN_0040d470.c (FUN_0040d470, 89 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void * BEA_THISCALL ap_0040d470(void * this_, undefined4 *param_1, undefined4 *param_2)
{
  undefined4 uVar1;
  
  *(undefined4 *)((int)this_ + 4) = 0;
  *(undefined4 *)((int)this_ + 8) = 0;
  *(undefined4 *)((int)this_ + 0xc) = 0;
  *(undefined ***)this_ = ((void*)0x005d892c);
  *(undefined4 *)((int)this_ + 0x14) = *param_1;
  *(undefined4 *)((int)this_ + 0x18) = param_1[1];
  *(undefined4 *)((int)this_ + 0x1c) = param_1[2];
  *(undefined4 *)((int)this_ + 0x20) = param_1[3];
  *(undefined4 *)((int)this_ + 0x24) = *param_2;
  *(undefined4 *)((int)this_ + 0x28) = param_2[1];
  *(undefined4 *)((int)this_ + 0x2c) = param_2[2];
  uVar1 = param_2[3];
  *(undefined ***)this_ = ((void*)0x005d8bfc);
  *(undefined4 *)((int)this_ + 0x30) = uVar1;
  return (void *)(this_);
  return (void *)(this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040d470, ap_0040d470));
