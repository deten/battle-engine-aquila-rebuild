// auto-ported from 0048e3c0_vslot1.c (CLandscapeIB::vslot1, 8 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_0048df20_t)(uint32_t);
static const bea_guard<FUN_0048df20_t> FUN_0048df20 = {(FUN_0048df20_t)0x0048df20};

static undefined4 BEA_THISCALL ap_0048e3c0(void * this_)
{
  FUN_0048df20(bea_arg(this_));
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048e3c0, ap_0048e3c0));
