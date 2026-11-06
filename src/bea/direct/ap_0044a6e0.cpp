// auto-ported from 0044a6e0_FUN_0044a6e0.c (FUN_0044a6e0, 90 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
typedef uint (BEA_THISCALL* FUN_00423910_t)(uint32_t);
static const bea_guard<FUN_00423910_t> FUN_00423910 = {(FUN_00423910_t)0x00423910};
typedef bool (BEA_THISCALL* FUN_00423960_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00423960_t> FUN_00423960 = {(FUN_00423960_t)0x00423960};
typedef uint32_t (BEA_THISCALL* FUN_00491060_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00491060_t> FUN_00491060 = {(FUN_00491060_t)0x00491060};
typedef uint32_t (BEA_THISCALL* FUN_004916c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004916c0_t> FUN_004916c0 = {(FUN_004916c0_t)0x004916c0};

static uint32_t BEA_THISCALL ap_0044a6e0(void * this_, void *param_1)
{
  void *this_00;
  int iVar1;
  int iVar2;
  this_00 = param_1;
  FUN_00423910(bea_arg(param_1));
  FUN_00423960(bea_arg(this_00), bea_arg(&param_1), bea_arg(4), bea_arg(1));
  iVar1 = 0;
  if (0 < (int)param_1) {
    iVar2 = 0;
    do {
      FUN_004916c0(bea_arg((void *)(*(int *)((int)this_ + 0x49c) + iVar2)), bea_arg(this_00), bea_arg(iVar1));
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x4c;
    } while (BEA_LOOP_GUARD((iVar1 < (int)param_1)));
  }
  return FUN_00491060(bea_arg(&DAT_006fadc8), bea_arg(this_00));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044a6e0, ap_0044a6e0));
