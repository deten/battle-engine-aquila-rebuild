// auto-ported from 004901e0_FUN_004901e0.c (FUN_004901e0, 60 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static uint32_t BEA_THISCALL ap_004901e0(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
{
  *(undefined4 *)this_ = param_1;
  *(undefined4 *)((int)this_ + 0x14) = param_2;
  *(undefined4 *)((int)this_ + 0x18) = param_3;
  *(undefined4 *)((int)this_ + 0x1c) = param_4;
  *(undefined4 *)((int)this_ + 0x20) = param_5;
  *(undefined4 *)((int)this_ + 0x24) = param_6;
  *(undefined4 *)((int)this_ + 0x28) = param_7;
  *(undefined4 *)((int)this_ + 0x2c) = param_8;
  return param_7;
  return param_7;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004901e0, ap_004901e0));
