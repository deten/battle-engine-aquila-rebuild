// auto-ported from 00449820_FUN_00449820.c (FUN_00449820, 108 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void * BEA_THISCALL ap_00449820(void * this_)
{
  *(undefined ***)this_ = ((void*)0x005db270);
  *(undefined4 *)((int)this_ + 0x430) = 0x3dcccccd;
  *(undefined4 *)((int)this_ + 0x434) = 0x43800000;
  *(undefined4 *)((int)this_ + 0x470) = 0;
  *(undefined1 *)((int)this_ + 0x4a8) = 1;
  *(undefined4 *)((int)this_ + 0x4bc) = 0;
  *(undefined4 *)((int)this_ + 0x49c) = 0;
  *(undefined4 *)((int)this_ + 0x498) = 0;
  *(undefined4 *)((int)this_ + 0x14) = 0;
  *(undefined4 *)((int)this_ + 0x18) = 0;
  *(undefined4 *)((int)this_ + 0x1c) = 0;
  *(undefined4 *)((int)this_ + 0x4b0) = 1;
  *(undefined4 *)((int)this_ + 0x10) = 0;
  *(undefined4 *)((int)this_ + 0x4a0) = 0;
  *(undefined4 *)((int)this_ + 0x20) = 0;
  *(undefined4 *)((int)this_ + 0x24) = 0;
  *(undefined4 *)((int)this_ + 0x4ac) = 0;
  *(undefined4 *)((int)this_ + 4) = 0;
  *(undefined4 *)((int)this_ + 8) = 0;
  return this_;
  return this_;
}

// @autoport-registration (verified: 18 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00449820, ap_00449820));
