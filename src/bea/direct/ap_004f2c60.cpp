// auto-ported from 004f2c60_FUN_004f2c60.c (FUN_004f2c60, 35 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef void * (BEA_THISCALL* FUN_00488620_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00488620_t> FUN_00488620 = {(FUN_00488620_t)0x00488620};

static void * BEA_THISCALL ap_004f2c60(void * this_, undefined4 param_1, undefined4 param_2)
{
  FUN_00488620(bea_arg(this_), bea_arg(param_1));
  *(undefined ***)this_ = ((void*)0x005df518);
  *(undefined4 *)((int)this_ + 0x118) = param_2;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f2c60, ap_004f2c60));
