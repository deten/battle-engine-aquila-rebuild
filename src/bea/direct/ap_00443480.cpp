// auto-ported from 00443480_FUN_00443480.c (FUN_00443480, 60 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef void * (BEA_THISCALL* FUN_004425a0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004425a0_t> FUN_004425a0 = {(FUN_004425a0_t)0x004425a0};

static void * BEA_THISCALL ap_00443480(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  FUN_004425a0(bea_arg(this_), bea_arg(param_1), bea_arg(param_2), bea_arg(param_3), bea_arg(param_4));
  *(undefined4 *)((int)this_ + 0x44) = 0;
  *(undefined4 *)((int)this_ + 0x48) = 0;
  *(undefined4 *)((int)this_ + 0x4c) = 0;
  *(undefined4 *)((int)this_ + 0x40) = param_5;
  *(undefined ***)this_ = ((void*)0x005db06c);
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00443480, ap_00443480));
