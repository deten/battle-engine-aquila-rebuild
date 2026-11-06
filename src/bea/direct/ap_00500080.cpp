// auto-ported from 00500080_FUN_00500080.c (FUN_00500080, 55 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static uint32_t BEA_THISCALL ap_00500080(void * this_, int param_1, int param_2, undefined4 param_3)
{
  int iVar1;
  
  *(int *)((int)this_ + 0x1c) = param_2;
  *(int *)((int)this_ + 0x10) = param_1 * param_2;
  *(undefined4 *)((int)this_ + 0x14) = 0x208;
  *(undefined4 *)((int)this_ + 0x18) = param_3;
  *(undefined4 *)((int)this_ + 0x20) = 0;
  iVar1 = bea_vcall<uint32_t>(this_, 0x8);
  return -1 < iVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00500080, ap_00500080));
