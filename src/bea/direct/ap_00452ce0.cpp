// auto-ported from 00452ce0_FUN_00452ce0.c (FUN_00452ce0, 188 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_0089d91c GLOBAL_AT(int, 0x0089d91c)
typedef uint32_t (BEA_STDCALL* FUN_00513820_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513820_t> FUN_00513820 = {(FUN_00513820_t)0x00513820};
typedef undefined4 (BEA_CDECL* FUN_00515940_t)(void);
static const bea_guard<FUN_00515940_t> FUN_00515940 = {(FUN_00515940_t)0x00515940};
typedef undefined4 (BEA_CDECL* FUN_00515b00_t)(void);
static const bea_guard<FUN_00515b00_t> FUN_00515b00 = {(FUN_00515b00_t)0x00515b00};
typedef undefined4 (BEA_THISCALL* FUN_00541790_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00541790_t> FUN_00541790 = {(FUN_00541790_t)0x00541790};

static uint32_t BEA_STDCALL ap_00452ce0(float param_1, undefined4 param_2, float param_3, float param_4)
{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  if (param_3 == -9999999.0f) {
    iVar1 = FUN_00515940();
    param_3 = (float)iVar1 * 0.5f;
    iVar1 = FUN_00515b00();
    param_4 = (float)iVar1 * 0.5f;
  }
  FUN_00513820(bea_arg(0), bea_arg(1), bea_arg(4));
  uVar3 = 1;
  iVar1 = FUN_00515b00();
  fVar2 = (float)iVar1 * param_1 * 0.007910157f;
  iVar1 = FUN_00515940();
  return FUN_00541790(bea_arg(&DAT_0089d91c), bea_arg(param_3), bea_arg(param_4), bea_arg(0x3f75c28f), bea_arg((float)iVar1 * param_1 * 0.0087890625f), bea_arg(fVar2), bea_arg(param_2), bea_arg(uVar3));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00452ce0, ap_00452ce0));
