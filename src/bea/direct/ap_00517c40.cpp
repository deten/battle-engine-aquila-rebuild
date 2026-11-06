// auto-ported from 00517c40_FUN_00517c40.c (FUN_00517c40, 24 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_00517c40(void * this_)
{
  int *piVar1;
  
  if ((*(char *)((int)this_ + 4) != '\0') &&
     (piVar1 = *(int **)((int)this_ + 0x2c4), piVar1 != (int *)0x0)) {
    bea_vcall<uint32_t>(piVar1, 0x44, piVar1);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00517c40, ap_00517c40));
