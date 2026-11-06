// auto-ported from 00409e90_FUN_00409e90.c (FUN_00409e90, 39 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_00409e90(void * this_)
{
  int iVar1;
  
  iVar1 = bea_vcall<uint32_t>(this_, 0x1d4);
  if ((iVar1 != 0) && (*(int *)(*(int *)(iVar1 + 0xa4) + 0x34) == 1)) {
    *(undefined4 *)((int)this_ + 0x2cc) = 0x3f800000;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00409e90, ap_00409e90));
