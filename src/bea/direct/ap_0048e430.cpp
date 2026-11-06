// auto-ported from 0048e430_FUN_0048e430.c (FUN_0048e430, 26 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef void * (BEA_THISCALL* FUN_004f79d0_t)(uint32_t);
static const bea_guard<FUN_004f79d0_t> FUN_004f79d0 = {(FUN_004f79d0_t)0x004f79d0};

static void * BEA_THISCALL ap_0048e430(void * this_)
{
  FUN_004f79d0(bea_arg(this_));
  *(undefined ***)this_ = ((void*)0x005dc1f0);
  *(undefined4 *)((int)this_ + 0x2c) = 0;
  *(undefined4 *)((int)this_ + 0x40) = 0;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048e430, ap_0048e430));
