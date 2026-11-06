// auto-ported from 004f4e00_FUN_004f4e00.c (FUN_004f4e00, 55 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CGuide;
typedef CGuide* (BEA_THISCALL* FUN_0047e290_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047e290_t> FUN_0047e290 = {(FUN_0047e290_t)0x0047e290};

static void * BEA_THISCALL ap_004f4e00(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  FUN_0047e290(bea_arg(this_), bea_arg(param_1));
  *(undefined ***)this_ = ((void*)0x005df8d4);
  *(undefined4 *)((int)this_ + 0x20) = param_2;
  *(undefined4 *)((int)this_ + 0x24) = param_3;
  *(undefined4 *)((int)this_ + 0x28) = param_4;
  *(undefined4 *)((int)this_ + 0x2c) = param_5;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f4e00, ap_004f4e00));
