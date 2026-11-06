// auto-ported from 00418720_FUN_00418720.c (FUN_00418720, 38 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_00418720(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  *(undefined4 *)((int)this_ + 0xc) = param_1;
  *(undefined4 *)((int)this_ + 0x10) = param_2;
  *(undefined4 *)((int)this_ + 0x14) = param_3;
  *(undefined4 *)((int)this_ + 0x18) = param_4;
  *(undefined1 *)((int)this_ + 0x1c) = (undefined1)param_5;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00418720, ap_00418720));
