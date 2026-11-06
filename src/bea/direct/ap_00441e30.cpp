// auto-ported from 00441e30_FUN_00441e30.c (FUN_00441e30, 6 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static uint32_t BEA_THISCALL ap_00441e30(void * this_)
{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)this_;
  *(undefined1 *)this_ = 1;
  return uVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00441e30, ap_00441e30));
