// auto-ported from 004a4630_FUN_004a4630.c (FUN_004a4630, 64 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_THISCALL ap_004a4630(void * this_)
{
  undefined4 *puVar1;
  int *piVar2;
  
  *(undefined4 *)((int)this_ + 0x18) = 0;
  puVar1 = *(undefined4 **)((int)this_ + 8);
  *(undefined4 **)((int)this_ + 0x10) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)*puVar1;
  }
  while (BEA_LOOP_GUARD((piVar2 != (int *)0x0))) {
    bea_vcall<uint32_t>(piVar2, 0x30);
    puVar1 = *(undefined4 **)(*(int *)((int)this_ + 0x10) + 4);
    *(undefined4 **)((int)this_ + 0x10) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)*puVar1;
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a4630, ap_004a4630));
