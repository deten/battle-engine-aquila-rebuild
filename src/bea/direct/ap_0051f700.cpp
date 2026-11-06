// auto-ported from 0051f700_vslot5.c (CFEPOptions::vslot5, 219 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
#define DAT_0089bc30 GLOBAL_AT(int, 0x0089bc30)
#define DAT_0083d960 GLOBAL_AT(int, 0x0083d960)
#define DAT_00622dbc GLOBAL_AT(int, 0x00622dbc)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef uint32_t (BEA_STDCALL* FUN_00452df0_t)(uint32_t);
static const bea_guard<FUN_00452df0_t> FUN_00452df0 = {(FUN_00452df0_t)0x00452df0};
typedef uint32_t (BEA_STDCALL* FUN_00453140_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00453140_t> FUN_00453140 = {(FUN_00453140_t)0x00453140};
typedef uint32_t (BEA_THISCALL* FUN_00467200_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00467200_t> FUN_00467200 = {(FUN_00467200_t)0x00467200};
typedef uint32_t (BEA_STDCALL* FUN_00467bd0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00467bd0_t> FUN_00467bd0 = {(FUN_00467bd0_t)0x00467bd0};
typedef uint (BEA_THISCALL* FUN_004d11d0_t)(uint32_t);
static const bea_guard<FUN_004d11d0_t> FUN_004d11d0 = {(FUN_004d11d0_t)0x004d11d0};
typedef undefined * (BEA_THISCALL* FUN_004f2580_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f2580_t> FUN_004f2580 = {(FUN_004f2580_t)0x004f2580};
typedef undefined1 * (BEA_CDECL* FUN_004f7d30_t)(void *, ...);
static const bea_guard<FUN_004f7d30_t> FUN_004f7d30 = {(FUN_004f7d30_t)0x004f7d30};

static uint32_t BEA_STDCALL ap_0051f700(float param_1, int param_2)
{
  int iVar1;
  int iVar2;
  FUN_00467200(bea_arg(&DAT_0089d758), bea_arg(param_1), bea_arg(param_2));
  iVar1 = FUN_004d11d0(bea_arg(DAT_0089bc30));
  iVar2 = iVar1;
  if (iVar1 == 0) {
    iVar2 = FUN_004f2580(bea_arg(&DAT_0083d960), bea_arg(0x265233));
  }
  FUN_00467bd0(bea_arg(iVar2), bea_arg(param_1), bea_arg(param_2));
  if (iVar1 != 0) {
    FUN_004f7d30(iVar1);
    CRenderThing__vslot3(&DAT_00622dbc);
  }
  FUN_00453140(bea_arg(1), bea_arg(param_1));
  if ((param_2 == 0x12) || (param_2 == 0x13)) {
    param_1 = 1.0f;
  }
  else {
    param_1 = (param_1 - 0.75f) * 4.0f;
    if (0.0f <= param_1) {
      if (1.0f < param_1) {
        param_1 = 1.0f;
      }
    }
    else {
      param_1 = 0.0f;
    }
  }
  return FUN_00452df0(bea_arg(param_1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051f700, ap_0051f700));
