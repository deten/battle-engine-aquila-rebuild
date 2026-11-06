// auto-ported from 0044a110_FUN_0044a110.c (FUN_0044a110, 21 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00544fb0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00544fb0_t> FUN_00544fb0 = {(FUN_00544fb0_t)0x00544fb0};

static uint32_t BEA_THISCALL ap_0044a110(void * this_, undefined4 param_1, undefined4 param_2)
{
  return FUN_00544fb0(bea_arg(*(void **)((int)this_ + 0x10)), bea_arg(param_1), bea_arg(param_2));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044a110, ap_0044a110));
