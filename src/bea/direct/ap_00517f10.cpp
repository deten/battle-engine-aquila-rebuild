// auto-ported from 00517f10_FUN_00517f10.c (FUN_00517f10, 142 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (5 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00889a48 GLOBAL_AT(int, 0x00889a48)
#define DAT_008a9d84 GLOBAL_AT(int, 0x008a9d84)
#define DAT_00662dcc GLOBAL_AT(int, 0x00662dcc)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define DAT_0066307c GLOBAL_AT(int, 0x0066307c)
#define s_Killing_all_DSBuffers_for_the_sa_0063e834 ((char*)0x0063e834)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef uint32_t (BEA_THISCALL* FUN_004b8800_t)(uint32_t);
static const bea_guard<FUN_004b8800_t> FUN_004b8800 = {(FUN_004b8800_t)0x004b8800};
typedef uint32_t (BEA_THISCALL* FUN_004bb380_t)(uint32_t);
static const bea_guard<FUN_004bb380_t> FUN_004bb380 = {(FUN_004bb380_t)0x004bb380};
typedef uint32_t (BEA_THISCALL* FUN_004bb400_t)(uint32_t);
static const bea_guard<FUN_004bb400_t> FUN_004bb400 = {(FUN_004bb400_t)0x004bb400};
typedef uint32_t (BEA_THISCALL* FUN_004e06b0_t)(uint32_t);
static const bea_guard<FUN_004e06b0_t> FUN_004e06b0 = {(FUN_004e06b0_t)0x004e06b0};
typedef int (BEA_THISCALL* FUN_004e0a00_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e0a00_t> FUN_004e0a00 = {(FUN_004e0a00_t)0x004e0a00};
typedef undefined4 (BEA_THISCALL* FUN_005169b0_t)(uint32_t);
static const bea_guard<FUN_005169b0_t> FUN_005169b0 = {(FUN_005169b0_t)0x005169b0};
typedef uint32_t (BEA_THISCALL* FUN_005171e0_t)(uint32_t);
static const bea_guard<FUN_005171e0_t> FUN_005171e0 = {(FUN_005171e0_t)0x005171e0};
typedef uint32_t (BEA_THISCALL* FUN_00517d00_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00517d00_t> FUN_00517d00 = {(FUN_00517d00_t)0x00517d00};

static void BEA_THISCALL ap_00517f10(void * this_)
{
  int iVar1;
  char cVar2;
  
  CRenderThing__vslot3(s_Killing_all_DSBuffers_for_the_sa_0063e834);
  FUN_004e06b0(bea_arg(this_));
  FUN_004bb400(bea_arg(&DAT_00889a48));
  if (DAT_008a9d84 != (void *)0x0) {
    FUN_004b8800(bea_arg(DAT_008a9d84));
  }
  FUN_005171e0(bea_arg(this_));
  cVar2 = FUN_005169b0(bea_arg(this_));
  if (cVar2 != '\0') {
    if (DAT_00662dcc != 0) {
      FUN_004bb380(bea_arg(&DAT_00889a48));
    }
    FUN_00517d00(bea_arg(this_), bea_arg(1));
    iVar1 = DAT_00896988;
    if (DAT_0066307c == 0) {
      for (; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = *(int *)(iVar1 + 0x74)) {
        FUN_004e0a00(bea_arg(&DAT_00896988), bea_arg(iVar1 + 8), bea_arg(*(undefined4 *)(iVar1 + 0x6c)), bea_arg(1));
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00517f10, ap_00517f10));
