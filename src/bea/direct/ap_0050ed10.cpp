// auto-ported from 0050ed10_FUN_0050ed10.c (FUN_0050ed10, 25 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef void * (BEA_THISCALL* FUN_004f7e90_t)(uint32_t);
static const bea_guard<FUN_004f7e90_t> FUN_004f7e90 = {(FUN_004f7e90_t)0x004f7e90};

static void * BEA_THISCALL ap_0050ed10(void * this_)
{
  FUN_004f7e90(bea_arg(this_));
  *(undefined ***)this_ = ((void*)0x005e32d4);
  *(undefined ***)((int)this_ + 8) = ((void*)0x005e325c);
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0050ed10, ap_0050ed10));
