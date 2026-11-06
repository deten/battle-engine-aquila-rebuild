// auto-ported from 00453970_FUN_00453970.c (FUN_00453970, 54 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void * BEA_THISCALL ap_00453970(void * this_)
{
  *(undefined4 *)((int)this_ + 4) = 3;
  *(undefined4 *)((int)this_ + 8) = 0;
  *(undefined4 *)((int)this_ + 0xc) = 0;
  *(undefined4 *)((int)this_ + 0x10) = 1;
  *(undefined4 *)((int)this_ + 0x14) = 0xffd6d6d6;
  *(undefined4 *)((int)this_ + 0x18) = 0x32;
  *(undefined ***)this_ = ((void*)0x005db404);
  *(undefined1 *)((int)this_ + 0x1c) = 0;
  *(undefined4 *)((int)this_ + 0x20) = 0;
  *(undefined4 *)((int)this_ + 0x2c) = 0;
  return this_;
  return this_;
}

// @autoport-registration (verified: 17 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00453970, ap_00453970));
