// auto-ported from 00544af0_FUN_00544af0.c (FUN_00544af0, 457 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_00889010 GLOBAL_AT(int, 0x00889010)
#define DAT_008aa9f0 GLOBAL_AT(int, 0x008aa9f0)
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define DAT_008aa938 GLOBAL_AT(int, 0x008aa938)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_DXLandscape_cp_00650bdc ((char*)0x00650bdc)
#define s_LandscapeShader_00650c3c ((char*)0x00650c3c)
#define s_coast_calculation_thingy_00650da8 ((char*)0x00650da8)
#define s_BuildLandscapeCache_00650dc4 ((char*)0x00650dc4)
#define s_Build_the_landscape_texture_cach_00650dd8 ((char*)0x00650dd8)
#define s_vs_1_1_dcl_position_v0_dcl_texco_00650c4c ((char*)0x00650c4c)
#define s_xx_coastcalc_00650d98 ((char*)0x00650d98)
typedef undefined4 (BEA_THISCALL* FUN_0042af80_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042af80_t> FUN_0042af80 = {(FUN_0042af80_t)0x0042af80};
typedef uint32_t (BEA_THISCALL* FUN_0042b040_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042b040_t> FUN_0042b040 = {(FUN_0042b040_t)0x0042b040};
typedef uint32_t (BEA_THISCALL* FUN_00440b90_t)(uint32_t);
static const bea_guard<FUN_00440b90_t> FUN_00440b90 = {(FUN_00440b90_t)0x00440b90};
typedef void * (BEA_THISCALL* FUN_00488210_t)(uint32_t);
static const bea_guard<FUN_00488210_t> FUN_00488210 = {(FUN_00488210_t)0x00488210};
typedef int (BEA_THISCALL* FUN_00488330_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00488330_t> FUN_00488330 = {(FUN_00488330_t)0x00488330};
typedef void * (BEA_THISCALL* FUN_0048e430_t)(uint32_t);
static const bea_guard<FUN_0048e430_t> FUN_0048e430 = {(FUN_0048e430_t)0x0048e430};
typedef undefined4 (BEA_THISCALL* FUN_0048e4d0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0048e4d0_t> FUN_0048e4d0 = {(FUN_0048e4d0_t)0x0048e4d0};
typedef uint32_t (BEA_CDECL* FUN_0048e7b0_t)(void);
static const bea_guard<FUN_0048e7b0_t> FUN_0048e7b0 = {(FUN_0048e7b0_t)0x0048e7b0};
typedef void * (BEA_THISCALL* FUN_004fff00_t)(uint32_t);
static const bea_guard<FUN_004fff00_t> FUN_004fff00 = {(FUN_004fff00_t)0x004fff00};
typedef bool (BEA_THISCALL* FUN_005000c0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005000c0_t> FUN_005000c0 = {(FUN_005000c0_t)0x005000c0};
typedef int * (BEA_CDECL* FUN_00502060_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00502060_t> FUN_00502060 = {(FUN_00502060_t)0x00502060};
typedef uint32_t (BEA_STDCALL* FUN_00512ca0_t)(uint32_t);
static const bea_guard<FUN_00512ca0_t> FUN_00512ca0 = {(FUN_00512ca0_t)0x00512ca0};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 BEA_THISCALL ap_00544af0(void * this_, undefined4 param_1)
{
  void *pvVar1;
  undefined4 uVar2;
  undefined1 *puStack_8;
  undefined4 local_4;
  FUN_0048e7b0();
  *(undefined4 *)((int)this_ + 0x20) = 0;
  uVar2 = DAT_00889010;
  DAT_00889010 = 1;
  FUN_00440b90(bea_arg(&DAT_008aa9f0));
  FUN_0042af80(bea_arg(&DAT_00663498), bea_arg(s_BuildLandscapeCache_00650dc4), bea_arg(s_Build_the_landscape_texture_cach_00650dd8), bea_arg(((void*)0x00544700)), bea_arg(0));
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_xx_coastcalc_00650d98), bea_arg(s_coast_calculation_thingy_00650da8), bea_arg(3), bea_arg(&DAT_008aa938), bea_arg(0), bea_arg(0));
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x50), bea_arg(2), bea_arg(s_C__dev_ONSLAUGHT2_DXLandscape_cp_00650bdc), bea_arg(0xa9));
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = (void *)FUN_0048e430(bea_arg(pvVar1));
  }
  *(void **)((int)this_ + 0x30) = pvVar1;
  FUN_0048e4d0(bea_arg(pvVar1), bea_arg(0), bea_arg(4));
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x2c), bea_arg(0x35), bea_arg(s_C__dev_ONSLAUGHT2_DXLandscape_cp_00650bdc), bea_arg(0xae));
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = (void *)FUN_004fff00(bea_arg(pvVar1));
  }
  *(void **)((int)this_ + 0x28) = pvVar1;
  FUN_005000c0(bea_arg(pvVar1), bea_arg(0x1081), bea_arg(0x14), bea_arg(0x102));
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x24), bea_arg(0x35), bea_arg(s_C__dev_ONSLAUGHT2_DXLandscape_cp_00650bdc), bea_arg(0xb3));
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = (void *)FUN_00488210(bea_arg(pvVar1));
  }
  *(void **)((int)this_ + 0x2c) = pvVar1;
  FUN_00488330(bea_arg(pvVar1), bea_arg(40000), bea_arg(0x208), bea_arg(0x65), bea_arg(0));
  DAT_00889010 = uVar2;
  FUN_00512ca0(bea_arg(this_));
  bea_vcall<uint32_t>(this_, 0x4);
  if (((*(int *)((int)this_ + 0x1c) != 0) && (*(int *)((int)this_ + 8) != 0)) &&
     (*(int *)((int)this_ + 0xc) != 0)) {
    uVar2 = FUN_00502060(bea_arg(s_LandscapeShader_00650c3c), bea_arg(s_vs_1_1_dcl_position_v0_dcl_texco_00650c4c), bea_arg(4), bea_arg(0), bea_arg(0), bea_arg(0xffffffff));
    *(undefined4 *)((int)this_ + 0x18) = uVar2;
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00544af0, ap_00544af0));
