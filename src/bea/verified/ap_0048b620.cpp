// auto-ported from 0048b620_FUN_0048b620.c (FUN_0048b620, 50 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static uint32_t BEA_THISCALL ap_0048b620(void * this_)
{
  *(undefined4 *)((int)this_ + 0x9c) = 0;
  *(undefined4 *)((int)this_ + 0xa0) = 0;
  *(undefined4 *)((int)this_ + 0xa4) = 0;
  *(undefined4 *)((int)this_ + 0xa8) = 0;
  *(undefined4 *)((int)this_ + 0xb8) = 0;
  *(undefined4 *)((int)this_ + 0xac) = 99999;
  *(undefined4 *)((int)this_ + 0xb0) = 99999;
  return (uint32_t)0x1869f;
  return (uint32_t)0x1869f;
}

// @autoport-registration (verified: 780 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0048b620, ap_0048b620));
