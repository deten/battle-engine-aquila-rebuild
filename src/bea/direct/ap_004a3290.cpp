// auto-ported from 004a3290_FUN_004a3290.c (FUN_004a3290, 40 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004a32c0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004a32c0_t> FUN_004a32c0 = {(FUN_004a32c0_t)0x004a32c0};

static uint32_t BEA_THISCALL ap_004a3290(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  undefined4 uVar1;
  uVar1 = bea_vcall<uint32_t>(this_, 0x8);
  return FUN_004a32c0(bea_arg(this_), bea_arg(param_1), bea_arg(param_2), bea_arg(param_3), bea_arg(param_4), bea_arg(uVar1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a3290, ap_004a3290));
