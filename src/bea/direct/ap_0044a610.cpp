// auto-ported from 0044a610_FUN_0044a610.c (FUN_0044a610, 33 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004902b0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004902b0_t> FUN_004902b0 = {(FUN_004902b0_t)0x004902b0};

static uint32_t BEA_THISCALL ap_0044a610(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  return FUN_004902b0(bea_arg(*(void **)((int)this_ + 0x18)), bea_arg(param_1), bea_arg(*(undefined4 *)((int)this_ + 0x470)), bea_arg(param_2), bea_arg(param_3));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044a610, ap_0044a610));
