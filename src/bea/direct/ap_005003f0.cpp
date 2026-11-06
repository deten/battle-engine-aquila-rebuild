// auto-ported from 005003f0_FUN_005003f0.c (FUN_005003f0, 103 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00854e00 GLOBAL_AT(int, 0x00854e00)

static void * BEA_THISCALL ap_005003f0(void * this_, int param_1)
{
  *(undefined4 *)((int)this_ + 4) = 0;
  *(undefined4 *)((int)this_ + 8) = 0;
  *(undefined4 *)((int)this_ + 0x40) = 0;
  *(undefined4 *)((int)this_ + 0x44) = 0;
  *(undefined4 *)((int)this_ + 0x48) = 0;
  *(undefined4 *)((int)this_ + 0x4c) = 0;
  *(undefined4 *)((int)this_ + 0x54) = 0;
  *(undefined4 *)((int)this_ + 0x14) = 0;
  *(undefined4 *)((int)this_ + 0x18) = 0;
  *(undefined4 *)((int)this_ + 100) = 0;
  *(undefined4 *)((int)this_ + 0x1c) = 0;
  *(undefined1 *)((int)this_ + 0x10) = 0;
  *(undefined4 *)((int)this_ + 0x38) = 0;
  *(undefined4 *)((int)this_ + 0x50) = 0;
  *(undefined4 *)((int)this_ + 0x20) = 0;
  *(undefined4 *)((int)this_ + 0x24) = 0;
  *(undefined4 *)((int)this_ + 0x30) = 0;
  *(undefined4 *)((int)this_ + 0x34) = 0;
  *(undefined1 *)((int)this_ + 0x2c) = 0;
  *(undefined4 *)((int)this_ + 0x3c) = 0;
  *(void **)((int)this_ + 0x58) = DAT_00854e00;
  DAT_00854e00 = this_;
  *(undefined4 *)((int)this_ + 0x60) = 0;
  *(int *)this_ = param_1;
  if (param_1 != 0) {
    *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
  }
  *(int *)((int)this_ + 0x60) = *(int *)((int)this_ + 0x60) + 1;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005003f0, ap_005003f0));
