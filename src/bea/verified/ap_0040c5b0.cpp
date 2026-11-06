// auto-ported from 0040c5b0_FUN_0040c5b0.c (FUN_0040c5b0, 47 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_THISCALL ap_0040c5b0(void * this_)
{
  if ((*(float *)(*(int *)((int)this_ + 0x4b0) + 0x20) <= *(float *)((int)this_ + 0xfc)) &&
     (*(float *)(*(int *)((int)this_ + 0x4b0) + 0x1c) <= *(float *)((int)this_ + 0xf8))) {
    return 1;
  }
  return 0;
}

// @autoport-registration (verified: 60 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0040c5b0, ap_0040c5b0));
