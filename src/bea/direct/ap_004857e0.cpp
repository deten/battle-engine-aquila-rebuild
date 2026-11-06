// auto-ported from 004857e0_FUN_004857e0.c (FUN_004857e0, 69 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef uint32_t (BEA_CDECL* FUN_00555be0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00555be0_t> FUN_00555be0 = {(FUN_00555be0_t)0x00555be0};

static uint32_t BEA_CDECL ap_004857e0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  return FUN_00555be0(bea_arg(param_1), bea_arg(param_2), bea_arg(0x3c343958), bea_arg(param_3), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(param_4), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004857e0, ap_004857e0));
