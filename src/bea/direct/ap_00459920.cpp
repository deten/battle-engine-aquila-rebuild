// auto-ported from 00459920_FUN_00459920.c (FUN_00459920, 110 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void * BEA_THISCALL ap_00459920(void * this_)
{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined ***)this_ = ((void*)0x005db4fc);
  puVar2 = (undefined4 *)((int)this_ + 4);
  for (iVar1 = 0x32; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this_ + 4) = 1;
  *(undefined4 *)((int)this_ + 8) = 1;
  *(undefined4 *)((int)this_ + 0xc) = 1;
  *(undefined4 *)((int)this_ + 0x10) = 1;
  *(undefined4 *)((int)this_ + 0xcc) = 0x6e;
  *(undefined4 *)((int)this_ + 0xe4) = 200;
  *(undefined4 *)((int)this_ + 0xfc) = 0xe7;
  *(undefined4 *)((int)this_ + 0x114) = 0x137;
  *(undefined4 *)((int)this_ + 0x345c) = 4;
  puVar2 = (undefined4 *)((int)this_ + 0xa2c);
  for (iVar1 = 300; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00459920, ap_00459920));
