// auto-ported from 0041b770_FUN_0041b770.c (FUN_0041b770, 61 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_0041b770(void * this_, uint param_1, int param_2)
{
  int iVar1;
  uint uVar2;
  
  uVar2 = 1;
  iVar1 = (int)param_1 >> 5;
  if ((param_1 & 0x1f) != 0) {
    uVar2 = 1 << (sbyte)(param_1 & 0x1f);
  }
  if (param_2 == 1) {
    *(uint *)((int)this_ + iVar1 * 4 + 0x14) = *(uint *)((int)this_ + iVar1 * 4 + 0x14) | uVar2;
    return;
  }
  *(uint *)((int)this_ + iVar1 * 4 + 0x14) = *(uint *)((int)this_ + iVar1 * 4 + 0x14) & ~uVar2;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0041b770, ap_0041b770));
