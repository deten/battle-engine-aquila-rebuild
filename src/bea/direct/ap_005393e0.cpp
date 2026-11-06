// auto-ported from 005393e0_FUN_005393e0.c (FUN_005393e0, 50 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_005393e0(void * this_)
{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this_ + 0x200);
  while (BEA_LOOP_GUARD((iVar2 != 0))) {
    puVar1 = *(undefined4 **)((int)this_ + *(int *)((int)this_ + 0x200) * 4 + -4);
    if (puVar1 != (undefined4 *)0x0) {
      bea_vcall<uint32_t>(puVar1, 0x0, 1);
    }
    iVar2 = *(int *)((int)this_ + 0x200) + -1;
    *(int *)((int)this_ + 0x200) = iVar2;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005393e0, ap_005393e0));
