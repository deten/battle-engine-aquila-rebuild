// auto-ported from 00464a80_vslot5.c (CFEPSaveGame::vslot5, 139 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
typedef uint32_t (BEA_STDCALL* FUN_00452df0_t)(uint32_t);
static const bea_guard<FUN_00452df0_t> FUN_00452df0 = {(FUN_00452df0_t)0x00452df0};
typedef uint32_t (BEA_STDCALL* FUN_00453140_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00453140_t> FUN_00453140 = {(FUN_00453140_t)0x00453140};
typedef uint32_t (BEA_THISCALL* FUN_00467200_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00467200_t> FUN_00467200 = {(FUN_00467200_t)0x00467200};
typedef uint32_t (BEA_STDCALL* FUN_00467bd0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00467bd0_t> FUN_00467bd0 = {(FUN_00467bd0_t)0x00467bd0};
typedef undefined * (BEA_CDECL* FUN_0046a2a0_t)(undefined4, undefined4, ...);
static const bea_guard<FUN_0046a2a0_t> FUN_0046a2a0 = {(FUN_0046a2a0_t)0x0046a2a0};

static uint32_t BEA_STDCALL ap_00464a80(float param_1, undefined4 param_2)
{
  undefined4 uVar1;
  float fVar2;
  FUN_00467200(bea_arg(&DAT_0089d758), bea_arg(param_1), bea_arg(param_2));
  fVar2 = param_1;
  uVar1 = FUN_0046a2a0(0x11,0);
  FUN_00467bd0(bea_arg(uVar1), bea_arg(fVar2), bea_arg(param_2));
  fVar2 = (param_1 - 0.75f) * 4.0f;
  if (0.0f <= fVar2) {
    if (1.0f < fVar2) {
      fVar2 = 1.0f;
    }
  }
  else {
    fVar2 = 0.0f;
  }
  FUN_00452df0(bea_arg(fVar2));
  return FUN_00453140(bea_arg(4), bea_arg(param_1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00464a80, ap_00464a80));
