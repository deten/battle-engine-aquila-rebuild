// auto-ported from 00440c40_FUN_00440c40.c (FUN_00440c40, 47 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static uint32_t BEA_THISCALL ap_00440c40(void * this_)
{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = this_;
  for (iVar1 = 20000; BEA_LOOP_GUARD((puVar2 = puVar2 + 1, iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar2 = 0;
  }
  puVar2 = (undefined4 *)((int)this_ + 0x13884);
  for (iVar1 = 0x800; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this_ + 0x15888) = 1;
  *(undefined4 *)((int)this_ + 0x15884) = 1;
  return (uint32_t)1;
  return (uint32_t)1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00440c40, ap_00440c40));
