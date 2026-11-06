// auto-ported from 00541240_FUN_00541240.c (FUN_00541240, 17 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_THISCALL ap_00541240(void * this_)
{
  *(undefined4 *)((int)this_ + 0x24) = 0x200;
  *(undefined4 *)((int)this_ + 0x20) = 0x200;
  return 1;
}

// @autoport-registration (verified: 193 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00541240, ap_00541240));
