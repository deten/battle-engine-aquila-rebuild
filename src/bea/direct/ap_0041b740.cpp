// auto-ported from 0041b740_FUN_0041b740.c (FUN_0041b740, 42 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_THISCALL ap_0041b740(void * this_)
{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)((int)this_ + 0x10) = 0;
  *(undefined4 *)((int)this_ + 4) = 0;
  *(undefined4 *)((int)this_ + 0x38) = 0;
  *(undefined4 *)((int)this_ + 8) = 0xffffffff;
  *(undefined4 *)((int)this_ + 0xc) = 0xffffffff;
  puVar2 = (undefined4 *)((int)this_ + 0x14);
  for (iVar1 = 9; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this_ + 0x3c) = 0xbf800000;
  return 0xffffffff;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0041b740, ap_0041b740));
