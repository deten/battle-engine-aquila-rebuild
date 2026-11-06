// auto-ported from 00469400_FUN_00469400.c (FUN_00469400, 46 bytes) by tools/autoport.py
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
typedef uint (BEA_CDECL* FUN_00523cc0_t)(float, float, float, float, ...);
static const bea_guard<FUN_00523cc0_t> FUN_00523cc0 = {(FUN_00523cc0_t)0x00523cc0};

static uint BEA_CDECL ap_00469400(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  uint uVar1;
  
  uVar1 = FUN_0044dea0(bea_arg(&DAT_00675688));
  if (uVar1 != 0) {
    return uVar1 & 0xffffff00;
  }
  uVar1 = FUN_00523cc0(param_1,param_2,param_3,param_4);
  return uVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00469400, ap_00469400));
