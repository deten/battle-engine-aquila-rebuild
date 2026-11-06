// auto-ported from 005503d0_FUN_005503d0.c (FUN_005503d0, 33 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_005503d0(void * this_)
{
  int iVar1;
  undefined2 *puVar2;
  
  iVar1 = 0;
  if (0 < *(int *)((int)this_ + 4)) {
    puVar2 = (undefined2 *)(*(int *)this_ + 0x3c);
    do {
      *puVar2 = 0xffff;
      puVar2 = puVar2 + 0x28;
      iVar1 = iVar1 + 1;
    } while (BEA_LOOP_GUARD((iVar1 < *(int *)((int)this_ + 4))));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005503d0, ap_005503d0));
