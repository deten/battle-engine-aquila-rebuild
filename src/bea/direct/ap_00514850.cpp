// auto-ported from 00514850_vslot6.c (CPCController::vslot6, 23 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
typedef uint (BEA_THISCALL* FUN_00513a90_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513a90_t> FUN_00513a90 = {(FUN_00513a90_t)0x00513a90};

static uint32_t BEA_STDCALL ap_00514850(undefined4 param_1)
{
  undefined1 uVar1;
  
  uVar1 = FUN_00513a90(bea_arg(&DAT_00855bb0), bea_arg(param_1));
  return uVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00514850, ap_00514850));
