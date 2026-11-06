// auto-ported from 0042ba90_FUN_0042ba90.c (FUN_0042ba90, 44 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_THISCALL ap_0042ba90(void * this_)
{
  int iVar1;
  
  if (*(char *)((int)this_ + 0x238d) == '\0') {
    return 0;
  }
  iVar1 = *(int *)((int)this_ + 0x23a8) + -1;
  *(int *)((int)this_ + 0x23a8) = iVar1;
  if (iVar1 < 0) {
    *(undefined4 *)((int)this_ + 0x23a8) = 0;
  }
  return 1;
}

// @autoport-registration (verified: 478 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0042ba90, ap_0042ba90));
