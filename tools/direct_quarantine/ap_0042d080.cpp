// auto-ported from 0042d080_FUN_0042d080.c (FUN_0042d080, 44 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef uint32_t (BEA_CDECL* FUN_0042cfa0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042cfa0_t> FUN_0042cfa0 = {(FUN_0042cfa0_t)0x0042cfa0};
typedef undefined1 * (BEA_CDECL* FUN_004f7d30_t)(void *, ...);
static const bea_guard<FUN_004f7d30_t> FUN_004f7d30 = {(FUN_004f7d30_t)0x004f7d30};
typedef wchar_t * (BEA_CDECL* FUN_00524830_t)(undefined4, ...);
static const bea_guard<FUN_00524830_t> FUN_00524830 = {(FUN_00524830_t)0x00524830};

static undefined4 BEA_STDCALL ap_0042d080(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  undefined4 uVar1;
  
  uVar1 = (uint)(byte)((char)param_1);
  if ((char)param_1 == '\0') {
    uVar1 = FUN_00524830(param_2);
    uVar1 = FUN_004f7d30(uVar1);
    uVar1 = FUN_0042cfa0(bea_arg(uVar1), bea_arg(param_3));
  }
  return uVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042d080, ap_0042d080));
