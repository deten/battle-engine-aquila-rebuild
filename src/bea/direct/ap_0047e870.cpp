// auto-ported from 0047e870_FUN_0047e870.c (FUN_0047e870, 39 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void * BEA_THISCALL ap_0047e870(void * this_)
{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)((int)this_ + 0x20) = 0;
  *(undefined4 *)((int)this_ + 0x24) = 0;
  puVar2 = (undefined4 *)((int)this_ + 0x28);
  for (iVar1 = 0x400; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this_ + 0x1028) = 0;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047e870, ap_0047e870));
