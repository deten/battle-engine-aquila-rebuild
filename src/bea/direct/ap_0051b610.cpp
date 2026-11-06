// auto-ported from 0051b610_FUN_0051b610.c (FUN_0051b610, 36 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00677614 GLOBAL_AT(int, 0x00677614)
#define DAT_0083d448 GLOBAL_AT(int, 0x0083d448)

static void BEA_THISCALL ap_0051b610(void * this_)
{
  *(undefined4 *)((int)this_ + 0xc) = 0;
  DAT_00677614 = 0;
  *(undefined4 *)((int)this_ + 0x10) = 1;
  if (DAT_0083d448 == 0) {
    DAT_00677614 = 0;
    *(undefined4 *)((int)this_ + 0xc) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051b610, ap_0051b610));
