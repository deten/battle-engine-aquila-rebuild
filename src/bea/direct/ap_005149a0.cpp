// auto-ported from 005149a0_FUN_005149a0.c (FUN_005149a0, 26 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef wchar_t * (BEA_CDECL* FUN_00524830_t)(undefined4, ...);
static const bea_guard<FUN_00524830_t> FUN_00524830 = {(FUN_00524830_t)0x00524830};
typedef short * (BEA_CDECL* FUN_0055e64e_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055e64e_t> FUN_0055e64e = {(FUN_0055e64e_t)0x0055e64e};

static undefined4 BEA_STDCALL ap_005149a0(undefined4 param_1, undefined4 param_2)
{
  undefined4 uVar1;
  
  uVar1 = FUN_00524830(0x28);
  FUN_0055e64e(bea_arg(param_2), bea_arg(uVar1));
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005149a0, ap_005149a0));
