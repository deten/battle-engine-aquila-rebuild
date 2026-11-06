// auto-ported from 0046c990_vslot2.c (CGame::vslot2, 220 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CDXEngine;
typedef char CGame;
typedef char CGameInterface;
#define DAT_00662dcc GLOBAL_AT(int, 0x00662dcc)
#define DAT_00889a48 GLOBAL_AT(int, 0x00889a48)
#define DAT_008aa4e8 GLOBAL_AT(int, 0x008aa4e8)
#define DAT_00679fa8 GLOBAL_AT(int, 0x00679fa8)
#define DAT_0082b400 GLOBAL_AT(int, 0x0082b400)
#define DAT_009c8010 GLOBAL_AT(int, 0x009c8010)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define DAT_009c4004 GLOBAL_AT(int, 0x009c4004)
#define DAT_0089c9a0 GLOBAL_AT(int, 0x0089c9a0)
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define s_Exiting_Level____0062bf0c ((char*)0x0062bf0c)
#define s_Freeing_Up_Level_Resources____0062bf20 ((char*)0x0062bf20)
typedef uint32_t (BEA_THISCALL* CDXEngine__vslot3_t)(uint32_t);
static const bea_guard<CDXEngine__vslot3_t> CDXEngine__vslot3 = {(CDXEngine__vslot3_t)0x0053d3e0};
typedef uint32_t (BEA_THISCALL* CGameInterface__vslot2_t)(uint32_t);
static const bea_guard<CGameInterface__vslot2_t> CGameInterface__vslot2 = {(CGameInterface__vslot2_t)0x00472a50};
typedef uint32_t (BEA_THISCALL* FUN_0042af20_t)(uint32_t);
static const bea_guard<FUN_0042af20_t> FUN_0042af20 = {(FUN_0042af20_t)0x0042af20};
typedef uint32_t (BEA_THISCALL* FUN_0042b500_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042b500_t> FUN_0042b500 = {(FUN_0042b500_t)0x0042b500};
typedef undefined4 (BEA_THISCALL* FUN_0042b800_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042b800_t> FUN_0042b800 = {(FUN_0042b800_t)0x0042b800};
typedef uint32_t (BEA_THISCALL* FUN_0046d9f0_t)(uint32_t);
static const bea_guard<FUN_0046d9f0_t> FUN_0046d9f0 = {(FUN_0046d9f0_t)0x0046d9f0};
typedef uint32_t (BEA_THISCALL* FUN_00481b00_t)(uint32_t);
static const bea_guard<FUN_00481b00_t> FUN_00481b00 = {(FUN_00481b00_t)0x00481b00};
typedef uint32_t (BEA_THISCALL* FUN_00490f40_t)(uint32_t);
static const bea_guard<FUN_00490f40_t> FUN_00490f40 = {(FUN_00490f40_t)0x00490f40};
typedef uint32_t (BEA_THISCALL* FUN_004a1ea0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004a1ea0_t> FUN_004a1ea0 = {(FUN_004a1ea0_t)0x004a1ea0};
typedef uint32_t (BEA_CDECL* FUN_004a5430_t)(void);
static const bea_guard<FUN_004a5430_t> FUN_004a5430 = {(FUN_004a5430_t)0x004a5430};
typedef uint32_t (BEA_THISCALL* FUN_004bb490_t)(uint32_t);
static const bea_guard<FUN_004bb490_t> FUN_004bb490 = {(FUN_004bb490_t)0x004bb490};
typedef uint32_t (BEA_THISCALL* FUN_004cbff0_t)(uint32_t);
static const bea_guard<FUN_004cbff0_t> FUN_004cbff0 = {(FUN_004cbff0_t)0x004cbff0};
typedef uint32_t (BEA_CDECL* FUN_004e5990_t)(void);
static const bea_guard<FUN_004e5990_t> FUN_004e5990 = {(FUN_004e5990_t)0x004e5990};
typedef uint32_t (BEA_THISCALL* FUN_004ebd10_t)(uint32_t);
static const bea_guard<FUN_004ebd10_t> FUN_004ebd10 = {(FUN_004ebd10_t)0x004ebd10};
typedef uint32_t (BEA_CDECL* FUN_004f2b40_t)(void);
static const bea_guard<FUN_004f2b40_t> FUN_004f2b40 = {(FUN_004f2b40_t)0x004f2b40};
typedef uint32_t (BEA_CDECL* FUN_00501360_t)(void);
static const bea_guard<FUN_00501360_t> FUN_00501360 = {(FUN_00501360_t)0x00501360};
typedef uint32_t (BEA_THISCALL* FUN_00513a50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513a50_t> FUN_00513a50 = {(FUN_00513a50_t)0x00513a50};
typedef uint32_t (BEA_CDECL* FUN_00542990_t)(void);
static const bea_guard<FUN_00542990_t> FUN_00542990 = {(FUN_00542990_t)0x00542990};
typedef uint32_t (BEA_THISCALL* FUN_00549270_t)(uint32_t);
static const bea_guard<FUN_00549270_t> FUN_00549270 = {(FUN_00549270_t)0x00549270};
typedef uint32_t (BEA_CDECL* FUN_0054fee0_t)(void);
static const bea_guard<FUN_0054fee0_t> FUN_0054fee0 = {(FUN_0054fee0_t)0x0054fee0};

static uint32_t BEA_THISCALL ap_0046c990(CGame * this_)
{
  int iVar1;
  if (DAT_00662dcc != 0) {
    FUN_004bb490(bea_arg(&DAT_00889a48));
  }
  FUN_00481b00(bea_arg(&DAT_008aa4e8));
  CGameInterface__vslot2(bea_arg((CGameInterface *)&DAT_00679fa8));
  FUN_004cbff0(bea_arg(&DAT_0082b400));
  FUN_0054fee0();
  FUN_004ebd10(bea_arg(&DAT_009c8010));
  iVar1 = 0;
  do {
    FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(iVar1), bea_arg(0));
    iVar1 = iVar1 + 1;
  } while (BEA_LOOP_GUARD((iVar1 < 4)));
  FUN_004e5990();
  FUN_004a1ea0(bea_arg(&DAT_009c4004), bea_arg(0));
  FUN_00542990();
  CDXEngine__vslot3(bea_arg((CDXEngine *)&DAT_0089c9a0));
  FUN_00490f40(bea_arg(&DAT_006fadc8));
  FUN_004a5430();
  FUN_00501360();
  FUN_004f2b40();
  FUN_004a1ea0(bea_arg(&DAT_009c4004), bea_arg(1));
  FUN_00549270(bea_arg(&DAT_009c3df0));
  FUN_0046d9f0(bea_arg(this_));
  FUN_0042b800(bea_arg(&DAT_00663498), bea_arg(s_Freeing_Up_Level_Resources____0062bf20), bea_arg(1));
  FUN_0042b500(bea_arg(&DAT_00663498), bea_arg(s_Exiting_Level____0062bf0c));
  return FUN_0042af20(bea_arg(&DAT_00663498));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0046c990, ap_0046c990));
