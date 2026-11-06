// auto-ported from 00404a00_FUN_00404a00.c (FUN_00404a00, 386 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00660198 GLOBAL_AT(int, 0x00660198)
#define DAT_0066019c GLOBAL_AT(int, 0x0066019c)
#define DAT_006601a0 GLOBAL_AT(int, 0x006601a0)
#define DAT_00660190 GLOBAL_AT(int, 0x00660190)
#define _DAT_00660190 GLOBAL_AT(int, 0x00660190)
#define DAT_0066018c GLOBAL_AT(int, 0x0066018c)
#define _DAT_0066018c GLOBAL_AT(int, 0x0066018c)
#define DAT_00660188 GLOBAL_AT(int, 0x00660188)
#define _DAT_00660188 GLOBAL_AT(int, 0x00660188)
#define DAT_006601ac GLOBAL_AT(int, 0x006601ac)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define s_Atmospherics_Snow_SnowLayer_tga_00622ee8 ((char*)0x00622ee8)
#define s_Lightning_density__0_1__00622df0 ((char*)0x00622df0)
#define s_atm_lightningdensity_00622dd8 ((char*)0x00622dd8)
#define s_atm_snowdensity_00622e08 ((char*)0x00622e08)
#define s_Displays_a_list_of_the_atmospher_00622e90 ((char*)0x00622e90)
#define s_Snow_density__0_1__00622e18 ((char*)0x00622e18)
#define s_The_prevailing_wind_vector_00622e60 ((char*)0x00622e60)
#define s_C__dev_ONSLAUGHT2_Atmospherics_c_00622ec4 ((char*)0x00622ec4)
#define s_atm_windvector_00622e50 ((char*)0x00622e50)
#define s_atm_raindensity_00622e2c ((char*)0x00622e2c)
#define s_Rain_density__0_1__00622e3c ((char*)0x00622e3c)
#define s_ListAtmospherics_00622e7c ((char*)0x00622e7c)
typedef undefined4 (BEA_THISCALL* FUN_0042af80_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042af80_t> FUN_0042af80 = {(FUN_0042af80_t)0x0042af80};
typedef uint32_t (BEA_THISCALL* FUN_0042b040_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042b040_t> FUN_0042b040 = {(FUN_0042b040_t)0x0042b040};
typedef int * (BEA_CDECL* FUN_004f27f0_t)(void *, int, undefined4, int, int, undefined4, ...);
static const bea_guard<FUN_004f27f0_t> FUN_004f27f0 = {(FUN_004f27f0_t)0x004f27f0};
typedef void * (BEA_THISCALL* FUN_0053b900_t)(uint32_t);
static const bea_guard<FUN_0053b900_t> FUN_0053b900 = {(FUN_0053b900_t)0x0053b900};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef void * (BEA_THISCALL* FUN_00554f80_t)(uint32_t);
static const bea_guard<FUN_00554f80_t> FUN_00554f80 = {(FUN_00554f80_t)0x00554f80};

static uint32_t BEA_CDECL ap_00404a00(void)
{
  void *pvVar1;
  undefined1 *puStack_8;
  undefined4 local_4;
  DAT_00660198 = 0;
  DAT_0066019c = 0;
  DAT_006601a0 = 0;
  _DAT_00660190 = 0;
  _DAT_0066018c = 0;
  _DAT_00660188 = 0;
  DAT_006601ac = FUN_004f27f0(s_Atmospherics_Snow_SnowLayer_tga_00622ee8,4,0,1,1,0);
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x3a4), bea_arg(0x65), bea_arg(s_C__dev_ONSLAUGHT2_Atmospherics_c_00622ec4), bea_arg(0x70));
  if (pvVar1 != (void *)0x0) {
    FUN_00554f80(bea_arg(pvVar1));
  }
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x334), bea_arg(0x65), bea_arg(s_C__dev_ONSLAUGHT2_Atmospherics_c_00622ec4), bea_arg(0x73));
  if (pvVar1 != (void *)0x0) {
    FUN_0053b900(bea_arg(pvVar1));
  }
  FUN_0042af80(bea_arg(&DAT_00663498), bea_arg(s_ListAtmospherics_00622e7c), bea_arg(s_Displays_a_list_of_the_atmospher_00622e90), bea_arg(((void*)0x004049a0)), bea_arg(0));
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_atm_windvector_00622e50), bea_arg(s_The_prevailing_wind_vector_00622e60), bea_arg(5), bea_arg(&DAT_00660198), bea_arg(0), bea_arg(0));
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_atm_raindensity_00622e2c), bea_arg(s_Rain_density__0_1__00622e3c), bea_arg(4), bea_arg(&DAT_00660190), bea_arg(0), bea_arg(0));
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_atm_snowdensity_00622e08), bea_arg(s_Snow_density__0_1__00622e18), bea_arg(4), bea_arg(&DAT_0066018c), bea_arg(0), bea_arg(0));
  return FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_atm_lightningdensity_00622dd8), bea_arg(s_Lightning_density__0_1__00622df0), bea_arg(4), bea_arg(&DAT_00660188), bea_arg(0), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00404a00, ap_00404a00));
