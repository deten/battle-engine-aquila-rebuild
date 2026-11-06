// auto-ported from 004eb9a0_FUN_004eb9a0.c (FUN_004eb9a0, 133 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void * BEA_THISCALL ap_004eb9a0(void * this_)
{
  *(undefined4 *)this_ = 0x3f800000;
  *(undefined4 *)((int)this_ + 4) = 0x3f800000;
  *(undefined4 *)((int)this_ + 8) = 0x3f800000;
  *(undefined4 *)((int)this_ + 0xc) = 0x3f800000;
  *(undefined4 *)((int)this_ + 0x10) = 0;
  *(undefined4 *)((int)this_ + 0x14) = 0;
  *(undefined4 *)((int)this_ + 0x18) = 0;
  *(undefined4 *)((int)this_ + 0x1c) = 0x3f800000;
  *(undefined4 *)((int)this_ + 0x20) = 0;
  *(undefined4 *)((int)this_ + 0x24) = 0;
  *(undefined4 *)((int)this_ + 0x28) = 0;
  *(undefined4 *)((int)this_ + 0x2c) = 0;
  *(undefined4 *)((int)this_ + 0x30) = 0;
  *(undefined4 *)((int)this_ + 0x34) = 0;
  *(undefined4 *)((int)this_ + 0x38) = 0;
  *(undefined4 *)((int)this_ + 0x3c) = 0;
  *(undefined4 *)((int)this_ + 0x40) = 0x3dcccccd;
  *(undefined4 *)((int)this_ + 0x44) = 0;
  *(undefined4 *)((int)this_ + 0x48) = 0;
  *(undefined4 *)((int)this_ + 0x4c) = 0;
  *(undefined4 *)((int)this_ + 0x50) = 0x3f800000;
  *(undefined4 *)((int)this_ + 0x54) = 0x3f4ccccd;
  *(undefined4 *)((int)this_ + 0x58) = 0x3f4ccccd;
  *(undefined4 *)((int)this_ + 0x5c) = 0x3f4ccccd;
  *(undefined4 *)((int)this_ + 0x60) = 0x3f800000;
  *(undefined4 *)((int)this_ + 100) = 0;
  *(undefined4 *)((int)this_ + 0x68) = 0;
  *(undefined4 *)((int)this_ + 0x6c) = 0;
  *(undefined4 *)((int)this_ + 0x70) = 0;
  *(undefined4 *)((int)this_ + 0x74) = 0;
  *(undefined4 *)((int)this_ + 0x78) = 0;
  *(undefined4 *)((int)this_ + 0x7c) = 0;
  *(undefined4 *)((int)this_ + 0x80) = 0;
  *(undefined4 *)((int)this_ + 0x84) = 0;
  return this_;
  return this_;
}

// @autoport-registration (verified: 18 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004eb9a0, ap_004eb9a0));
