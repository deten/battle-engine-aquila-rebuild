// auto-ported from 00541f10_FUN_00541f10.c (FUN_00541f10, 18 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_0046c210_t)(uint32_t);
static const bea_guard<FUN_0046c210_t> FUN_0046c210 = {(FUN_0046c210_t)0x0046c210};

static void * BEA_THISCALL ap_00541f10(void * this_)
{
  FUN_0046c210(bea_arg(this_));
  *(undefined ***)this_ = ((void*)0x005e509c);
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00541f10, ap_00541f10));
