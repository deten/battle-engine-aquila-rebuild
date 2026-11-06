// auto-ported from 004f1ec0_FUN_004f1ec0.c (FUN_004f1ec0, 25 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CGuide;
typedef CGuide* (BEA_THISCALL* FUN_0047e290_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047e290_t> FUN_0047e290 = {(FUN_0047e290_t)0x0047e290};

static void * BEA_THISCALL ap_004f1ec0(void * this_, undefined4 param_1)
{
  FUN_0047e290(bea_arg(this_), bea_arg(param_1));
  *(undefined ***)this_ = ((void*)0x005df4ec);
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f1ec0, ap_004f1ec0));
