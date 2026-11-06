// auto-ported from 004729e0_FUN_004729e0.c (FUN_004729e0, 44 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static uint32_t BEA_THISCALL ap_004729e0(void * this_)
{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)((int)this_ + 0x10) = 0;
  *(undefined1 *)((int)this_ + 0x14) = 0;
  *(undefined4 *)((int)this_ + 0x18) = 0;
  *(undefined1 *)((int)this_ + 0x1c) = 0;
  *(undefined4 *)((int)this_ + 0x20) = 0;
  *(undefined1 *)((int)this_ + 0x24) = 1;
  *(undefined4 *)((int)this_ + 0x28) = 0;
  *(undefined4 *)((int)this_ + 0x44) = 1;
  puVar2 = (undefined4 *)((int)this_ + 0x2c);
  for (iVar1 = 6; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar2 = 1;
    puVar2 = puVar2 + 1;
  }
  return *(uint32_t*)((char*)this_ + 0x44);
  return *(uint32_t*)((char*)this_ + 0x44);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004729e0, ap_004729e0));
