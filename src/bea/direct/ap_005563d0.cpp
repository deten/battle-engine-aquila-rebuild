// auto-ported from 005563d0_FUN_005563d0.c (FUN_005563d0, 78 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef uint32_t (BEA_CDECL* FUN_00555be0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00555be0_t> FUN_00555be0 = {(FUN_00555be0_t)0x00555be0};

static uint32_t BEA_CDECL ap_005563d0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11)
{
  return FUN_00555be0(bea_arg(param_1), bea_arg(param_2), bea_arg(param_3), bea_arg(param_4), bea_arg(param_8), bea_arg(param_9), bea_arg(param_10), bea_arg(param_11), bea_arg(param_5), bea_arg(param_6), bea_arg(param_7), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005563d0, ap_005563d0));
