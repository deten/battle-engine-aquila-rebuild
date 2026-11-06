// auto-ported from 004659a0_FUN_004659a0.c (FUN_004659a0, 124 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_00540010_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00540010_t> FUN_00540010 = {(FUN_00540010_t)0x00540010};

static uint32_t BEA_THISCALL ap_004659a0(void * this_, float param_1, float param_2, uint param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
{
  FUN_00540010(bea_arg(this_), bea_arg(param_1 + 1.0f), bea_arg(param_2 + 1.0f), bea_arg(param_6), bea_arg(param_7), bea_arg(param_8), bea_arg(param_3 & 0xff000000), bea_arg(param_4), bea_arg(param_5), bea_arg(0));
  return FUN_00540010(bea_arg(this_), bea_arg(param_1), bea_arg(param_2), bea_arg(param_6), bea_arg(param_7), bea_arg(param_8), bea_arg(param_3), bea_arg(param_4), bea_arg(param_5), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004659a0, ap_004659a0));
