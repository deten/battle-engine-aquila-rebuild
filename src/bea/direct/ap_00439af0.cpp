// auto-ported from 00439af0_FUN_00439af0.c (FUN_00439af0, 78 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_00439af0(void * this_)
{  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined ***)this_ = ((void*)0x005da2dc);
  if (*(undefined4 **)((int)this_ + 8) != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(*(undefined4 **)((int)this_ + 8), 0x0, 1);
  }
  *(undefined ***)this_ = ((void*)0x005da584);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00439af0, ap_00439af0));
