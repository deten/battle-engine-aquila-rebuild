// auto-ported from 0054fde0_FUN_0054fde0.c (FUN_0054fde0, 243 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0066eb90 GLOBAL_AT(int, 0x0066eb90)
#define DAT_009c64d0 GLOBAL_AT(int, 0x009c64d0)
#define DAT_009c648c GLOBAL_AT(int, 0x009c648c)
#define DAT_00888b20 GLOBAL_AT(int, 0x00888b20)
#define DAT_009c646c GLOBAL_AT(int, 0x009c646c)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define DAT_009c6468 GLOBAL_AT(int, 0x009c6468)
#define s_vs_1_1_dcl_position_v0_dcl_texco_00651ee0 ((char*)0x00651ee0)
#define s_CPT__RAS___end_00651df4 ((char*)0x00651df4)
#define s_CPT__RAS___00652110 ((char*)0x00652110)
#define s_ps_2_0_dcl_2d_s0_dcl_2d_s1_dcl_v_00651e04 ((char*)0x00651e04)
#define s_particleshader_00651ed0 ((char*)0x00651ed0)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef int * (BEA_CDECL* FUN_004f27f0_t)(undefined4, int, undefined4, int, int, undefined4, ...);
static const bea_guard<FUN_004f27f0_t> FUN_004f27f0 = {(FUN_004f27f0_t)0x004f27f0};
typedef uint32_t (BEA_THISCALL* FUN_00500540_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500540_t> FUN_00500540 = {(FUN_00500540_t)0x00500540};
typedef uint32_t (BEA_THISCALL* FUN_00500590_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500590_t> FUN_00500590 = {(FUN_00500590_t)0x00500590};
typedef int * (BEA_CDECL* FUN_00501280_t)(int, int, ...);
static const bea_guard<FUN_00501280_t> FUN_00501280 = {(FUN_00501280_t)0x00501280};
typedef int * (BEA_CDECL* FUN_00502060_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00502060_t> FUN_00502060 = {(FUN_00502060_t)0x00502060};
typedef undefined4 (BEA_THISCALL* FUN_00513f20_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513f20_t> FUN_00513f20 = {(FUN_00513f20_t)0x00513f20};

static uint32_t BEA_CDECL ap_0054fde0(void)
{
  int iVar1;
  undefined4 uVar2;
  void *this_local;
  FUN_00441740(&DAT_0066eb90,s_CPT__RAS___00652110);
  for (iVar1 = DAT_009c64d0; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = *(int *)(iVar1 + 0x1a0)) {
    if ((*(int *)(iVar1 + 400) < 2) || (uVar2 = 2, 3 < *(int *)(iVar1 + 400))) {
      uVar2 = 5;
    }
    uVar2 = FUN_004f27f0(iVar1 + 0x20,uVar2,0,1,1,1);
    *(undefined4 *)(iVar1 + 0x194) = uVar2;
    this_local = (void *)FUN_00501280(uVar2,0);
    *(void **)(iVar1 + 0x198) = this_local;
    FUN_00500540(bea_arg(this_local), bea_arg(0x142), bea_arg(0x208), bea_arg(0x18), bea_arg(4), bea_arg(0));
    FUN_00500590(bea_arg(*(void **)(iVar1 + 0x198)), bea_arg(0x65), bea_arg(0x208), bea_arg(2), bea_arg(0));
  }
  if ((DAT_009c648c != 0) && (0xffff01ff < DAT_00888b20)) {
    DAT_009c646c = FUN_00502060(bea_arg(s_particleshader_00651ed0), bea_arg(s_vs_1_1_dcl_position_v0_dcl_texco_00651ee0), bea_arg(6), bea_arg(0), bea_arg(0), bea_arg(0xffffffff));
    FUN_00513f20(bea_arg(&DAT_00855bb0), bea_arg(s_ps_2_0_dcl_2d_s0_dcl_2d_s1_dcl_v_00651e04), bea_arg(&DAT_009c6468));
  }
  return FUN_00441740(&DAT_0066eb90,s_CPT__RAS___end_00651df4);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0054fde0, ap_0054fde0));
