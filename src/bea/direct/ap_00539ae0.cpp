// auto-ported from 00539ae0_FUN_00539ae0.c (FUN_00539ae0, 18 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00539b00_t)(uint32_t);
static const bea_guard<FUN_00539b00_t> FUN_00539b00 = {(FUN_00539b00_t)0x00539b00};

static uint32_t BEA_THISCALL ap_00539ae0(void * this_, undefined4 param_1)
{
  *(undefined4 *)((int)this_ + 0x214) = param_1;
  return FUN_00539b00(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00539ae0, ap_00539ae0));
