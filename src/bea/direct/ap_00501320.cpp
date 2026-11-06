// auto-ported from 00501320_FUN_00501320.c (FUN_00501320, 50 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};
typedef int * (BEA_CDECL* FUN_004f27f0_t)(undefined4, int, undefined4, int, int, undefined4, ...);
static const bea_guard<FUN_004f27f0_t> FUN_004f27f0 = {(FUN_004f27f0_t)0x004f27f0};
typedef int * (BEA_CDECL* FUN_00501280_t)(int, int, ...);
static const bea_guard<FUN_00501280_t> FUN_00501280 = {(FUN_00501280_t)0x00501280};

static uint32_t BEA_CDECL ap_00501320(undefined4 param_1, undefined4 param_2)
{
  int iVar1;
  iVar1 = FUN_004f27f0(param_1,0,0,param_2,1,1);
  FUN_004f27e0(bea_arg((void *)(iVar1 + 8)));
  return FUN_00501280(iVar1,0);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00501320, ap_00501320));
