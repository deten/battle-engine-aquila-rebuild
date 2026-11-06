// auto-ported from 0048e330_FUN_0048e330.c (FUN_0048e330, 25 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef void * (BEA_THISCALL* FUN_00488210_t)(uint32_t);
static const bea_guard<FUN_00488210_t> FUN_00488210 = {(FUN_00488210_t)0x00488210};

static void * BEA_THISCALL ap_0048e330(void * this_)
{
  FUN_00488210(bea_arg(this_));
  *(undefined ***)this_ = ((void*)0x005dc1d8);
  *(undefined4 *)((int)this_ + 0x2c) = 0;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048e330, ap_0048e330));
