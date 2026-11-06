// auto-ported from 004135d0_FUN_004135d0.c (FUN_004135d0, 11 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static uint32_t BEA_THISCALL ap_004135d0(void * this_)
{
  return 0 < *(int *)((int)this_ + 0x44);
}

// @autoport-registration (verified: 30 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004135d0, ap_004135d0));
