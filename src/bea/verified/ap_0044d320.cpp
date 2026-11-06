// auto-ported from 0044d320_FUN_0044d320.c (FUN_0044d320, 106 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_0044d320(void * this_)
{
  *(undefined4 *)((int)this_ + 0x1fa0) = 0xffffffff;
  *(undefined4 *)((int)this_ + 0x1fa4) = 0xffffffff;
  *(undefined4 *)((int)this_ + 0x1f94) = 0;
  *(undefined4 *)((int)this_ + 0x1f68) = 0xaf000000;
  *(undefined4 *)((int)this_ + 0x1f6c) = 0xffffffff;
  *(undefined4 *)((int)this_ + 0x1f70) = 0xaf40ff40;
  *(undefined4 *)((int)this_ + 0x1f74) = 0xff7f7f7f;
  *(undefined4 *)this_ = 1;
  *(undefined4 *)((int)this_ + 0x1f88) = 0;
  *(undefined4 *)((int)this_ + 0x1f84) = 0;
  *(undefined4 *)((int)this_ + 0x1f7c) = 0;
  *(undefined4 *)((int)this_ + 0x1f78) = 0;
  *(undefined4 *)((int)this_ + 0x1f8c) = 0;
  *(undefined4 *)((int)this_ + 0x1fa8) = 0xfffffffe;
  return;
}

// @autoport-registration (verified: 122 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0044d320, ap_0044d320));
