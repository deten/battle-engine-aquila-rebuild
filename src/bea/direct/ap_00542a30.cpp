// auto-ported from 00542a30_FUN_00542a30.c (FUN_00542a30, 27 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_008aa8bc GLOBAL_AT(int, 0x008aa8bc)

static void * BEA_THISCALL ap_00542a30(void * this_)
{
  *(undefined4 *)((int)this_ + 0x30) = 0;
  *(undefined4 *)((int)this_ + 0x38) = 0;
  *(undefined4 *)((int)this_ + 0x3c) = 0;
  DAT_008aa8bc = DAT_008aa8bc + 1;
  return this_;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00542a30, ap_00542a30));
