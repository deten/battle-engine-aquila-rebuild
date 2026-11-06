// auto-ported from 00405f80_vslot2.c (CBattleEngine::vslot2, 120 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CBattleEngine;
typedef char CUnit;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
typedef uint32_t (BEA_THISCALL* CUnit__vslot2_t)(uint32_t);
static const bea_guard<CUnit__vslot2_t> CUnit__vslot2 = {(CUnit__vslot2_t)0x004f95d0};
typedef uint32_t (BEA_THISCALL* FUN_0042e750_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042e750_t> FUN_0042e750 = {(FUN_0042e750_t)0x0042e750};
typedef undefined4 (BEA_THISCALL* FUN_004705d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004705d0_t> FUN_004705d0 = {(FUN_004705d0_t)0x004705d0};
typedef uint32_t (BEA_THISCALL* FUN_004cb0b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cb0b0_t> FUN_004cb0b0 = {(FUN_004cb0b0_t)0x004cb0b0};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static uint32_t BEA_THISCALL ap_00405f80(CBattleEngine * this_)
{
  int *piVar1;
  int iVar2;
  void *this_00;
  while(BEA_LOOP_GUARD(( true ))) {
    piVar1 = *(int **)(this_ + 0x250);
    *(int **)(this_ + 600) = piVar1;
    if ((piVar1 == (int *)0x0) || (iVar2 = *piVar1, iVar2 == 0)) break;
    FUN_004e5bd0(bea_arg(this_ + 0x250), bea_arg(iVar2));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar2));
  }
  if (*(int *)(this_ + 0x574) != 0) {
    this_00 = (void *)FUN_004705d0(bea_arg(&DAT_008a9a98), bea_arg(*(int *)(*(int *)(this_ + 0x574) + 0x2c) + -1));
    if (this_00 != (void *)0x0) {
      FUN_0042e750(bea_arg(this_00), bea_arg(0), bea_arg(*(int *)(*(int *)(this_ + 0x574) + 0x2c) + -1));
    }
  }
  FUN_004cb0b0(bea_arg(this_ + 0x5f8), bea_arg(0));
  return CUnit__vslot2(bea_arg((CUnit *)this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00405f80, ap_00405f80));
