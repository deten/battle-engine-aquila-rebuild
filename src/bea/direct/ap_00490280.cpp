// auto-ported from 00490280_FUN_00490280.c (FUN_00490280, 35 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_THISCALL ap_00490280(void * this_)
{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)((int)this_ + 0x1c0) = 0;
  puVar2 = (undefined4 *)((int)this_ + 0x1c4);
  for (iVar1 = 0xae; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00490280, ap_00490280));
