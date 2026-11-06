// auto-ported from 004e5da0_FUN_004e5da0.c (FUN_004e5da0, 39 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef void * (BEA_THISCALL* FUN_004f3e10_t)(uint32_t);
static const bea_guard<FUN_004f3e10_t> FUN_004f3e10 = {(FUN_004f3e10_t)0x004f3e10};

static void * BEA_THISCALL ap_004e5da0(void * this_)
{
  FUN_004f3e10(bea_arg(this_));
  *(undefined ***)this_ = ((void*)0x005def1c);
  *(undefined4 *)((int)this_ + 0x80) = 0;
  *(undefined4 *)((int)this_ + 0x84) = 0;
  *(undefined ***)((int)this_ + 8) = ((void*)0x005deea4);
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e5da0, ap_004e5da0));
