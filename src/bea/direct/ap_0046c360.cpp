// auto-ported from 0046c360_FUN_0046c360.c (FUN_0046c360, 208 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CDXEngine;
typedef char CTweakFLOAT;
#define DAT_0089c9a0 GLOBAL_AT(int, 0x0089c9a0)
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
#define DAT_009c7490 GLOBAL_AT(int, 0x009c7490)
#define DAT_009c8010 GLOBAL_AT(int, 0x009c8010)
#define DAT_00679fa8 GLOBAL_AT(int, 0x00679fa8)
#define DAT_008aa4e8 GLOBAL_AT(int, 0x008aa4e8)
#define s_cg_showdatasizes_0062bc34 ((char*)0x0062bc34)
#define s_Should_level_data_sizes_be_shown_0062bc48 ((char*)0x0062bc48)
#define s_Should_memory_deltas_be_shown__0062bc80 ((char*)0x0062bc80)
#define s_cg_showmemdeltas_0062bc6c ((char*)0x0062bc6c)
typedef undefined4 (BEA_THISCALL* CDXEngine__vslot1_t)(uint32_t);
static const bea_guard<CDXEngine__vslot1_t> CDXEngine__vslot1 = {(CDXEngine__vslot1_t)0x0053d5f0};
typedef uint32_t (BEA_THISCALL* CTweakFLOAT__vslot0_t)(uint32_t, uint32_t);
static const bea_guard<CTweakFLOAT__vslot0_t> CTweakFLOAT__vslot0 = {(CTweakFLOAT__vslot0_t)0x00528b50};
typedef uint32_t (BEA_THISCALL* FUN_00429ef0_t)(uint32_t);
static const bea_guard<FUN_00429ef0_t> FUN_00429ef0 = {(FUN_00429ef0_t)0x00429ef0};
typedef uint32_t (BEA_THISCALL* FUN_0042b040_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042b040_t> FUN_0042b040 = {(FUN_0042b040_t)0x0042b040};
typedef uint32_t (BEA_THISCALL* FUN_004729e0_t)(uint32_t);
static const bea_guard<FUN_004729e0_t> FUN_004729e0 = {(FUN_004729e0_t)0x004729e0};
typedef uint32_t (BEA_THISCALL* FUN_00481450_t)(uint32_t);
static const bea_guard<FUN_00481450_t> FUN_00481450 = {(FUN_00481450_t)0x00481450};
typedef undefined4 (BEA_THISCALL* FUN_00490f10_t)(uint32_t);
static const bea_guard<FUN_00490f10_t> FUN_00490f10 = {(FUN_00490f10_t)0x00490f10};
typedef uint32_t (BEA_THISCALL* FUN_004ebbc0_t)(uint32_t);
static const bea_guard<FUN_004ebbc0_t> FUN_004ebbc0 = {(FUN_004ebbc0_t)0x004ebbc0};
typedef undefined4 (BEA_CDECL* FUN_005428d0_t)(void);
static const bea_guard<FUN_005428d0_t> FUN_005428d0 = {(FUN_005428d0_t)0x005428d0};
typedef uint32_t (BEA_THISCALL* FUN_005515a0_t)(uint32_t);
static const bea_guard<FUN_005515a0_t> FUN_005515a0 = {(FUN_005515a0_t)0x005515a0};

static undefined4 BEA_THISCALL ap_0046c360(void * this_)
{
  int iVar1;
  
  *(undefined4 *)((int)this_ + 0x2a0) = 0xffffffff;
  CTweakFLOAT__vslot0(bea_arg((CTweakFLOAT *)&DAT_0089c9a0), bea_arg(0));
  *(undefined4 *)((int)this_ + 0x24) = 0;
  FUN_00429ef0(bea_arg(&DAT_00663498));
  iVar1 = FUN_00490f10(bea_arg(&DAT_006fadc8));
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = CDXEngine__vslot1(bea_arg((CDXEngine *)&DAT_0089c9a0));
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_005428d0();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_005515a0(bea_arg(&DAT_009c7490));
  FUN_004ebbc0(bea_arg(&DAT_009c8010));
  FUN_004729e0(bea_arg(&DAT_00679fa8));
  FUN_00481450(bea_arg(&DAT_008aa4e8));
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_cg_showmemdeltas_0062bc6c), bea_arg(s_Should_memory_deltas_be_shown__0062bc80), bea_arg(3), bea_arg((int)this_ + 0x9f4), bea_arg(0), bea_arg(0));
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_cg_showdatasizes_0062bc34), bea_arg(s_Should_level_data_sizes_be_shown_0062bc48), bea_arg(3), bea_arg((int)this_ + 0x9f0), bea_arg(0), bea_arg(0));
  *(undefined4 *)((int)this_ + 0x3b4) = 0;
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0046c360, ap_0046c360));
