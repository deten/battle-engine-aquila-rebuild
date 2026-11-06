// auto-ported from 004dbd20_FUN_004dbd20.c (FUN_004dbd20, 20 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_004dbd20(void * this_)
{
  *(undefined ***)this_ = ((void*)0x005deaac);
  if (*(undefined4 **)((int)this_ + 0x10) != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(*(undefined4 **)((int)this_ + 0x10), 0x0, 1);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dbd20, ap_004dbd20));
