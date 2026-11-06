// auto-ported from 004bf9e0_FUN_004bf9e0.c (FUN_004bf9e0, 28 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_0048dcf0_t)(uint32_t);
static const bea_guard<FUN_0048dcf0_t> FUN_0048dcf0 = {(FUN_0048dcf0_t)0x0048dcf0};

static void * BEA_THISCALL ap_004bf9e0(void * this_)
{
  FUN_0048dcf0(bea_arg(this_));
  *(undefined ***)this_ = ((void*)0x005dc1c0);
  *(undefined4 *)((int)this_ + 0x3bc) = 0;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004bf9e0, ap_004bf9e0));
