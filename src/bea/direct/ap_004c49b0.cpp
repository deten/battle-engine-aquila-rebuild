// auto-ported from 004c49b0_FUN_004c49b0.c (FUN_004c49b0, 40 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_004c49b0(void * this_)
{
  int iVar1;
  
  iVar1 = *(int *)((int)this_ + 0x5c);
  *(undefined ***)this_ = ((void*)0x005ddb3c);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x170) = *(int *)(iVar1 + 0x170) + -1;
    *(undefined4 *)((int)this_ + 0x5c) = 0;
  }
  *(undefined ***)this_ = ((void*)0x005ddad4);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c49b0, ap_004c49b0));
