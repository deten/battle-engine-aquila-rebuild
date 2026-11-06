// auto-ported from 0050ab60_FUN_0050ab60.c (FUN_0050ab60, 69 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_0089ce54 GLOBAL_AT(char, 0x0089ce54)
typedef uint32_t (BEA_CDECL* FUN_0044a690_t)(void);
static const bea_guard<FUN_0044a690_t> FUN_0044a690 = {(FUN_0044a690_t)0x0044a690};
typedef uint32_t (BEA_THISCALL* FUN_00476fe0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00476fe0_t> FUN_00476fe0 = {(FUN_00476fe0_t)0x00476fe0};
typedef uint32_t (BEA_STDCALL* FUN_0053f040_t)(uint32_t);
static const bea_guard<FUN_0053f040_t> FUN_0053f040 = {(FUN_0053f040_t)0x0053f040};

static uint32_t BEA_STDCALL ap_0050ab60(void *param_1, undefined4 param_2, int param_3)
{
  undefined4 uVar1;
  uVar1 = FUN_0053f040(bea_arg(1));
  if ((DAT_0089ce54 & 4) != 0) {
    uVar1 = FUN_0044a690();
  }
  FUN_00476fe0(bea_arg(param_1), bea_arg(1), bea_arg(1), bea_arg(CONCAT31((int3)((uint)uVar1 >> 8),param_3 != 0)));
  return FUN_0053f040(bea_arg(1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0050ab60, ap_0050ab60));
