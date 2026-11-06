// auto-ported from 00539980_FUN_00539980.c (FUN_00539980, 8 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_005393e0_t)(uint32_t);
static const bea_guard<FUN_005393e0_t> FUN_005393e0 = {(FUN_005393e0_t)0x005393e0};

static void BEA_THISCALL ap_00539980(void * this_)
{
  FUN_005393e0(bea_arg((void *)((int)this_ + 0xc)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00539980, ap_00539980));
