// auto-ported from 00527c90_FUN_00527c90.c (FUN_00527c90, 45 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00528690_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00528690_t> FUN_00528690 = {(FUN_00528690_t)0x00528690};

static void * BEA_THISCALL ap_00527c90(void * this_, undefined4 param_1, int param_2)
{
  FUN_00528690(bea_arg(this_), bea_arg(param_1));
  *(undefined4 *)((int)this_ + 8) = param_1;
  *(undefined ***)this_ = ((void*)0x005e4a80);
  *(int *)((int)this_ + 0xc) = param_2 + -1;
  *(undefined4 *)((int)this_ + 0x10) = 0;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00527c90, ap_00527c90));
