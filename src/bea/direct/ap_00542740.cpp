// auto-ported from 00542740_FUN_00542740.c (FUN_00542740, 12 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef void * (BEA_THISCALL* FUN_00481400_t)(uint32_t);
static const bea_guard<FUN_00481400_t> FUN_00481400 = {(FUN_00481400_t)0x00481400};

static void * BEA_THISCALL ap_00542740(void * this_)
{
  FUN_00481400(bea_arg(this_));
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00542740, ap_00542740));
