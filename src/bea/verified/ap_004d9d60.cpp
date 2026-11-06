// auto-ported from 004d9d60_FUN_004d9d60.c (FUN_004d9d60, 61 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static uint32_t BEA_THISCALL ap_004d9d60(void * this_)
{
  *(undefined4 *)this_ = 0;
  *(undefined4 *)((int)this_ + 8) = 0;
  *(undefined4 *)((int)this_ + 0xc) = 0;
  *(undefined4 *)((int)this_ + 0x10) = 1;
  *(undefined4 *)((int)this_ + 0x14) = 0;
  *(undefined4 *)((int)this_ + 0x18) = 2;
  *(undefined4 *)((int)this_ + 0x1c) = 2;
  *(undefined4 *)((int)this_ + 0x20) = 1;
  *(undefined4 *)((int)this_ + 0x2c) = 0xbf800000;
  *(undefined4 *)((int)this_ + 4) = 0;
  *(undefined4 *)((int)this_ + 0x28) = 0;
  *(undefined4 *)((int)this_ + 0x24) = 0;
  *(undefined4 *)((int)this_ + 0x30) = 0;
  *(undefined4 *)((int)this_ + 0x34) = 0;
  return (uint32_t)0;
  return (uint32_t)0;
}

// @autoport-registration (verified: 834 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004d9d60, ap_004d9d60));
