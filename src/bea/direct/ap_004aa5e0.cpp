// auto-ported from 004aa5e0_FUN_004aa5e0.c (FUN_004aa5e0, 70 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_THISCALL ap_004aa5e0(void * this_, int param_1)
{
  int *piVar1;
  int iVar2;
  
  do {
    iVar2 = 0;
    if (0 < *(int *)((int)this_ + 0xc)) {
      piVar1 = (int *)(*(int *)((int)this_ + 0x10) + 8);
      do {
        if ((piVar1[-1] <= param_1) && (param_1 <= *piVar1)) {
          return *(undefined4 *)(*(int *)((int)this_ + 0x10) + iVar2 * 0xc);
        }
        iVar2 = iVar2 + 1;
        piVar1 = piVar1 + 3;
      } while (BEA_LOOP_GUARD((iVar2 < *(int *)((int)this_ + 0xc))));
    }
    this_ = *(void **)((int)this_ + 8);
    if (this_ == (void *)0x0) {
      return 0;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004aa5e0, ap_004aa5e0));
