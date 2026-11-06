// auto-ported from 004de850_FUN_004de850.c (FUN_004de850, 9 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_004de850(void * this_)
{
  *(undefined1 *)((int)this_ + 100) = 1;
  *(undefined1 *)((int)this_ + 0x65) = 1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004de850, ap_004de850));
