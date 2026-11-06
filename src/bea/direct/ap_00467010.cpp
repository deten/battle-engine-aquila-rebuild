// auto-ported from 00467010_FUN_00467010.c (FUN_00467010, 149 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
#define DAT_0089d8ec GLOBAL_AT(int, 0x0089d8ec)
typedef uint32_t (BEA_STDCALL* FUN_00513930_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513930_t> FUN_00513930 = {(FUN_00513930_t)0x00513930};
typedef uint32_t (BEA_CDECL* FUN_005563d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005563d0_t> FUN_005563d0 = {(FUN_005563d0_t)0x005563d0};

static uint32_t BEA_STDCALL ap_00467010(float param_1, float param_2, float param_3, float param_4, undefined4 param_5, undefined4 param_6)
{
  FUN_00513930(bea_arg(0), bea_arg(1), bea_arg(3));
  FUN_00513930(bea_arg(0), bea_arg(2), bea_arg(3));
  FUN_005563d0(bea_arg(param_1), bea_arg(param_2), bea_arg(param_5), bea_arg(DAT_0089d8ec), bea_arg(param_6), bea_arg((param_3 - param_1) * 0.0625f), bea_arg((param_4 - param_2) * 0.0625f), bea_arg(0), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
  FUN_00513930(bea_arg(0), bea_arg(1), bea_arg(1));
  return FUN_00513930(bea_arg(0), bea_arg(2), bea_arg(1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00467010, ap_00467010));
