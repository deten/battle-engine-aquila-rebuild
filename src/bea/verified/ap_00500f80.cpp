// auto-ported from 00500f80_FUN_00500f80.c (FUN_00500f80, 31 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00854e04 GLOBAL_AT(char, 0x00854e04)

static void BEA_THISCALL ap_00500f80(void * this_)
{
  if (*(int *)((int)this_ + 0x1c) != 0) {
    *(int *)((int)this_ + 100) = *(int *)((int)this_ + 0x1c);
  }
  *(undefined4 *)((int)this_ + 0x1c) = 0;
  *(undefined4 *)((int)this_ + 0x34) = 0;
  if (DAT_00854e04 != '\0') {
    *(uint *)((int)this_ + 0x48) = *(uint *)((int)this_ + 0x48) ^ 1;
  }
  return;
}

// @autoport-registration (verified: 463197 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00500f80, ap_00500f80));
