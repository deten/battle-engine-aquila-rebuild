// auto-ported from 00452df0_FUN_00452df0.c (FUN_00452df0, 471 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (17 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_0089d890 GLOBAL_AT(int, 0x0089d890)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define _DAT_008a9570 GLOBAL_AT(float, 0x008a9570)
#define DAT_0089d7fc GLOBAL_AT(int, 0x0089d7fc)
typedef uint32_t (BEA_CDECL* FUN_004681c0_t)(void);
static const bea_guard<FUN_004681c0_t> FUN_004681c0 = {(FUN_004681c0_t)0x004681c0};
typedef uint32_t (BEA_CDECL* FUN_004681e0_t)(undefined4, undefined4, ...);
static const bea_guard<FUN_004681e0_t> FUN_004681e0 = {(FUN_004681e0_t)0x004681e0};
typedef float10 (BEA_CDECL* FUN_00468730_t)(void);
static const bea_guard<FUN_00468730_t> FUN_00468730 = {(FUN_00468730_t)0x00468730};
typedef float10 (BEA_CDECL* FUN_00468750_t)(void);
static const bea_guard<FUN_00468750_t> FUN_00468750 = {(FUN_00468750_t)0x00468750};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};
typedef uint32_t (BEA_CDECL* FUN_005563d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005563d0_t> FUN_005563d0 = {(FUN_005563d0_t)0x005563d0};
#define _CIfmod(a0, a1) bea_x87call2(0x0055e3ea, (float10)(a0), (float10)(a1))

static void BEA_STDCALL ap_00452df0(float param_1)
{
  int iVar1;
  float10 fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  
  if (0.0f < param_1) {
    uVar11 = 0;
    uVar10 = 0x3f800000;
    iVar12 = (int)(longlong)ROUND(param_1 * 255.0f);
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0x3f570a3d;
    iVar1 = (iVar12 * 0x3f & 0xff00U) << 0x10;
    uVar6 = 0x3f570a3d;
    uVar4 = 0x3d3851ec;
    uVar5 = DAT_0089d890;
    iVar13 = iVar12;
    fVar2 = bea_fcast<float10>(FUN_00468750());
    fVar3 = bea_fcast<float>((fVar2 + bea_fcast<float10>(35.0f)));
    fVar2 = bea_fcast<float10>(FUN_00468730());
    FUN_005563d0(bea_arg(bea_fcast<float>((fVar2 + bea_fcast<float10>(65.0f)))), bea_arg(fVar3), bea_arg(uVar4), bea_arg(uVar5), bea_arg(iVar1), bea_arg(uVar6), bea_arg(uVar7), bea_arg(uVar8), bea_arg(uVar9), bea_arg(uVar10), bea_arg(uVar11));
    FUN_00513bc0(bea_arg(0x17), bea_arg(8));
    FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
    FUN_005563d0(bea_arg(0x42700000), bea_arg(0x41c80000), bea_arg(0x3f7fbe77), bea_arg(DAT_0089d890), bea_arg((iVar12 * 0xff & 0xffafU) << 0x10 | 0xafcfff), bea_arg(0x3f4ccccd), bea_arg(0x3f4ccccd), bea_arg(0), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
    FUN_00513bc0(bea_arg(0x17), bea_arg(4));
    FUN_00550d50(bea_arg(&DAT_009c65c0), bea_arg(0), bea_arg(0));
    fVar2 = _CIfmod(bea_fcast<float10>(512.0f),bea_fcast<float10>(_DAT_008a9570) * bea_fcast<float10>(0.6f));
    fVar3 = bea_fcast<float>(((bea_fcast<float10>(256.0f) - fVar2) - bea_fcast<float10>(80.0f)));
    FUN_004681c0();
    iVar1 = ((uint)(iVar12 * 0x7f) >> 8) * 0x10101 + -0x1000000;
    FUN_005563d0(bea_arg(fVar3), bea_arg(0x42c80000), bea_arg(0x3f7f7cee), bea_arg(DAT_0089d7fc), bea_arg(iVar1), bea_arg(0x3f800000), bea_arg(0x40000000), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
    FUN_005563d0(bea_arg(fVar3 + 512.0f), bea_arg(0x42c80000), bea_arg(0x3f7f7cee), bea_arg(DAT_0089d7fc), bea_arg(iVar1), bea_arg(0x3f800000), bea_arg(0x40000000), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
    FUN_004681e0(0,iVar13);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00452df0, ap_00452df0));
