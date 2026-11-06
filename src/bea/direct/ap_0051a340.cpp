// auto-ported from 0051a340_FUN_0051a340.c (FUN_0051a340, 49 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00897a90 GLOBAL_AT(undefined4*, 0x00897a90)

static void BEA_THISCALL ap_0051a340(void * this_)
{
  if (*(undefined4 **)this_ != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(*(undefined4 **)this_, 0x0, 1);
    *(undefined4 *)this_ = 0;
  }
  if (DAT_00897a90 != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(DAT_00897a90, 0x0, 1);
    DAT_00897a90 = (undefined4 *)0x0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051a340, ap_0051a340));
