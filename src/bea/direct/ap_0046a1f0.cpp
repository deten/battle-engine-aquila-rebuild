// auto-ported from 0046a1f0_FUN_0046a1f0.c (FUN_0046a1f0, 30 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0083d960 GLOBAL_AT(int, 0x0083d960)
typedef undefined4 (BEA_CDECL* FUN_00469cf0_t)(uint32_t);
static const bea_guard<FUN_00469cf0_t> FUN_00469cf0 = {(FUN_00469cf0_t)0x00469cf0};
typedef int (BEA_THISCALL* FUN_004f2500_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f2500_t> FUN_004f2500 = {(FUN_004f2500_t)0x004f2500};

static uint32_t BEA_CDECL ap_0046a1f0(undefined4 param_1, undefined4 param_2)
{
  undefined4 uVar1;
  uVar1 = FUN_00469cf0(bea_arg(param_1));
  return FUN_004f2500(bea_arg(&DAT_0083d960), bea_arg(uVar1), bea_arg(param_2));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0046a1f0, ap_0046a1f0));
