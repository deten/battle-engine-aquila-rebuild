// auto-ported from 005286b0_FUN_005286b0.c (FUN_005286b0, 41 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0089c018 GLOBAL_AT(undefined4, 0x0089c018)

static undefined4 BEA_THISCALL ap_005286b0(void * this_)
{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  *(undefined ***)this_ = ((void*)0x005e4a94);
  puVar3 = &DAT_0089c018;
  uVar2 = 0;
  pvVar1 = DAT_0089c018;
  if (DAT_0089c018 != (void *)0x0) {
    while (BEA_LOOP_GUARD((pvVar1 != this_))) {
      puVar3 = (undefined4 *)((int)pvVar1 + 4);
      pvVar1 = *(void **)((int)pvVar1 + 4);
      if (pvVar1 == (void *)0x0) {
        return 0;
      }
    }
    uVar2 = *(undefined4 *)((int)this_ + 4);
    *puVar3 = uVar2;
  }
  return uVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005286b0, ap_005286b0));
