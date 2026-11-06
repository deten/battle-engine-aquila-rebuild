// auto-ported from 004a1570_FUN_004a1570.c (FUN_004a1570, 48 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_THISCALL ap_004a1570(void * this_, undefined4 *param_1)
{
  if (((param_1 != (undefined4 *)0x0) && (*(undefined4 **)((int)this_ + 0x8c0) <= param_1)) &&
     (param_1 < *(undefined4 **)((int)this_ + 0x8c8))) {
    *param_1 = *(undefined4 *)((int)this_ + 0x8c4);
    *(undefined4 **)((int)this_ + 0x8c4) = param_1;
    return 1;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a1570, ap_004a1570));
