// auto-ported from 004312b0_FUN_004312b0.c (FUN_004312b0, 81 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_004312b0(void * this_)
{  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined ***)this_ = ((void*)0x005d9800);
  if (*(undefined4 **)((int)this_ + 0x10c) != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(*(undefined4 **)((int)this_ + 0x10c), 0x0, 1);
  }
  *(undefined ***)this_ = ((void*)0x005d9894);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004312b0, ap_004312b0));
