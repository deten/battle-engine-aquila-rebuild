// auto-ported from 00490e10_FUN_00490e10.c (FUN_00490e10, 12 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef void * (BEA_THISCALL* FUN_0047e870_t)(uint32_t);
static const bea_guard<FUN_0047e870_t> FUN_0047e870 = {(FUN_0047e870_t)0x0047e870};

static void * BEA_THISCALL ap_00490e10(void * this_)
{
  FUN_0047e870(bea_arg(this_));
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00490e10, ap_00490e10));
