// auto-ported from 005214d0_FUN_005214d0.c (FUN_005214d0, 134 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_THISCALL ap_005214d0(void * this_)
{
  short *psVar1;
  short sVar2;
  int iVar3;
  
  psVar1 = (short *)((int)this_ +
                    (*(int *)((int)this_ + 0x6ec) +
                    (*(int *)((int)this_ + 0x6e4) * 5 + *(int *)((int)this_ + 0x6e8)) * 0xe) * 8 +
                    0x54);
  if ((*(int *)((int)this_ + 0x6e4) == 1) && ((sVar2 = *psVar1, sVar2 == 4 || (sVar2 == 5)))) {
    return 1;
  }
  if (*psVar1 == 9) {
    if (*(short *)((int)this_ + 4) == 0) {
      return 1;
    }
    sVar2 = *(short *)((int)this_ + 4);
    iVar3 = (int)this_ + 4;
    while(BEA_LOOP_GUARD(( true ))) {
      if (sVar2 == 0) {
        return 1;
      }
      if (sVar2 != 0x20) break;
      sVar2 = *(short *)(iVar3 + 2);
      iVar3 = iVar3 + 2;
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005214d0, ap_005214d0));
