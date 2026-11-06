// auto-ported from 0046cd30_FUN_0046cd30.c (FUN_0046cd30, 180 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define DAT_00662dd4 GLOBAL_AT(int, 0x00662dd4)
#define DAT_0082b400 GLOBAL_AT(int, 0x0082b400)
typedef uint32_t (BEA_THISCALL* FUN_0042bbc0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042bbc0_t> FUN_0042bbc0 = {(FUN_0042bbc0_t)0x0042bbc0};
typedef uint32_t (BEA_THISCALL* FUN_0042c810_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042c810_t> FUN_0042c810 = {(FUN_0042c810_t)0x0042c810};
typedef uint32_t (BEA_THISCALL* FUN_0042cf40_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042cf40_t> FUN_0042cf40 = {(FUN_0042cf40_t)0x0042cf40};
typedef uint32_t (BEA_CDECL* FUN_004a53f0_t)(undefined4, undefined4, ...);
static const bea_guard<FUN_004a53f0_t> FUN_004a53f0 = {(FUN_004a53f0_t)0x004a53f0};
typedef undefined4 (BEA_THISCALL* FUN_004cda60_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cda60_t> FUN_004cda60 = {(FUN_004cda60_t)0x004cda60};
typedef uint32_t (BEA_CDECL* FUN_004d7200_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004d7200_t> FUN_004d7200 = {(FUN_004d7200_t)0x004d7200};
typedef uint32_t (BEA_CDECL* FUN_004f29c0_t)(void);
static const bea_guard<FUN_004f29c0_t> FUN_004f29c0 = {(FUN_004f29c0_t)0x004f29c0};
typedef uint32_t (BEA_CDECL* FUN_00510520_t)(void);
static const bea_guard<FUN_00510520_t> FUN_00510520 = {(FUN_00510520_t)0x00510520};

static undefined4 BEA_STDCALL ap_0046cd30(undefined4 param_1, int param_2)
{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_0042bbc0(bea_arg(&DAT_00663498), bea_arg(1), bea_arg(1), bea_arg(1));
  FUN_0042c810(bea_arg(&DAT_00663498), bea_arg(0), bea_arg(0));
  if (param_2 == 0) {
    uVar3 = 0x41f00000;
    uVar2 = 0;
  }
  else {
    uVar3 = 0x42820000;
    uVar2 = 0x42480000;
  }
  FUN_0042cf40(bea_arg(&DAT_00663498), bea_arg(uVar2), bea_arg(uVar3));
  if (DAT_00662dd4 == 0) {
    FUN_004d7200(bea_arg(param_1), bea_arg(0), bea_arg(0));
  }
  if (param_2 == 0) {
    uVar3 = 0x42480000;
    uVar2 = 0x41f00000;
  }
  else {
    uVar3 = 0x42960000;
    uVar2 = 0x42820000;
  }
  FUN_0042cf40(bea_arg(&DAT_00663498), bea_arg(uVar2), bea_arg(uVar3));
  uVar2 = param_1;
  FUN_004f29c0();
  FUN_004a53f0(param_1,uVar2);
  iVar1 = FUN_004cda60(bea_arg(&DAT_0082b400), bea_arg(0));
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00510520();
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0046cd30, ap_0046cd30));
