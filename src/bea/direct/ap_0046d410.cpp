// auto-ported from 0046d410_FUN_0046d410.c (FUN_0046d410, 83 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_Error__Outside_slot_range___d__i_00624318 ((char*)0x00624318)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};

static uint32_t BEA_THISCALL ap_0046d410(void * this_, uint param_1)
{
  uint uVar1;
  
  if ((-1 < (int)param_1) && ((int)param_1 < 0x100)) {
    uVar1 = 1;
    if ((param_1 & 0x1f) != 0) {
      uVar1 = 1 << (sbyte)(param_1 & 0x1f);
    }
    return (*(uint *)((int)this_ + ((int)param_1 >> 5) * 4 + 0x308) & uVar1) != 0;
  }
  FUN_00441740(&DAT_0066f580,s_Error__Outside_slot_range___d__i_00624318,param_1);
  return false;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0046d410, ap_0046d410));
