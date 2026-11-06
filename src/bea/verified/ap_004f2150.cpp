// auto-ported from 004f2150_FUN_004f2150.c (FUN_004f2150, 21 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static uint32_t BEA_THISCALL ap_004f2150(void * this_)
{
  *(undefined4 *)((int)this_ + 0x1c) = 0xffffffff;
  *(undefined4 *)((int)this_ + 4) = 0;
  *(undefined4 *)((int)this_ + 0x14) = 0;
  *(undefined4 *)this_ = 0;
  *(undefined4 *)((int)this_ + 0x18) = 0;
  return (uint32_t)0;
  return (uint32_t)0;
}

// @autoport-registration (verified: 23 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004f2150, ap_004f2150));
