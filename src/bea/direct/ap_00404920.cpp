// auto-ported from 00404920_FUN_00404920.c (FUN_00404920, 54 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_006601a8 GLOBAL_AT(int, 0x006601a8)

static void * BEA_THISCALL ap_00404920(void * this_)
{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined ***)this_ = ((void*)0x005d87ec);
  if (DAT_006601a8 == (void *)0x0) {
    DAT_006601a8 = this_;
    *(undefined4 *)((int)this_ + 4) = 0;
    return this_;
  }
  iVar3 = *(int *)((int)DAT_006601a8 + 4);
  iVar2 = (int)DAT_006601a8;
  while (BEA_LOOP_GUARD((iVar1 = iVar3, iVar1 != 0))) {
    iVar2 = iVar1;
    iVar3 = *(int *)(iVar1 + 4);
  }
  *(void **)(iVar2 + 4) = this_;
  *(undefined4 *)((int)this_ + 4) = 0;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00404920, ap_00404920));
