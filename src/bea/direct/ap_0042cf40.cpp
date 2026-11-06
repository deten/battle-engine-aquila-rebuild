// auto-ported from 0042cf40_FUN_0042cf40.c (FUN_0042cf40, 38 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_0042c810_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042c810_t> FUN_0042c810 = {(FUN_0042c810_t)0x0042c810};

static uint32_t BEA_THISCALL ap_0042cf40(void * this_, undefined4 param_1, undefined4 param_2)
{
  *(undefined4 *)((int)this_ + 0xb3d8) = param_1;
  *(undefined4 *)((int)this_ + 0xb3dc) = param_2;
  *(undefined4 *)((int)this_ + 0xb3e0) = param_1;
  return FUN_0042c810(bea_arg(this_), bea_arg(1), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042cf40, ap_0042cf40));
