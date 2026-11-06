// auto-ported from 004bb490_FUN_004bb490.c (FUN_004bb490, 21 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (7 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_004bb490(void * this_)
{
  if (*(char *)((int)this_ + 8) != '\0') {
    bea_vcall<uint32_t>(this_, 0xc);
    *(undefined1 *)((int)this_ + 8) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004bb490, ap_004bb490));
