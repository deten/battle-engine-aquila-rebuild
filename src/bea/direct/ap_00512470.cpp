// auto-ported from 00512470_FUN_00512470.c (FUN_00512470, 20 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static uint32_t BEA_THISCALL ap_00512470(void * this_)
{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)((int)this_ + 0x332e4);
  for (iVar1 = 0x40; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return (uint32_t)0;
  return (uint32_t)0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00512470, ap_00512470));
