// auto-ported from 00466980_FUN_00466980.c (FUN_00466980, 16 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static uint BEA_THISCALL ap_00466980(void * this_)
{
  return -(uint)(*(uint *)((int)this_ + 0x274) != 0xffffffff) & *(uint *)((int)this_ + 0x274);
}

// @autoport-registration (verified: 14 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00466980, ap_00466980));
