// auto-ported from 00469430_FUN_00469430.c (FUN_00469430, 46 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00675688 GLOBAL_AT(int, 0x00675688)
typedef undefined4 (BEA_THISCALL* FUN_0044dea0_t)(uint32_t);
static const bea_guard<FUN_0044dea0_t> FUN_0044dea0 = {(FUN_0044dea0_t)0x0044dea0};
typedef uint (BEA_CDECL* FUN_00523d40_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00523d40_t> FUN_00523d40 = {(FUN_00523d40_t)0x00523d40};

static uint BEA_CDECL ap_00469430(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  uint uVar1;
  
  uVar1 = FUN_0044dea0(bea_arg(&DAT_00675688));
  if (uVar1 != 0) {
    return uVar1 & 0xffffff00;
  }
  uVar1 = FUN_00523d40(bea_arg(param_1), bea_arg(param_2), bea_arg(param_3), bea_arg(param_4));
  return uVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00469430, ap_00469430));
