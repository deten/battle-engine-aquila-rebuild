// auto-ported from 00540840_FUN_00540840.c (FUN_00540840, 301 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef uint (BEA_THISCALL* FUN_00423910_t)(uint32_t);
static const bea_guard<FUN_00423910_t> FUN_00423910 = {(FUN_00423910_t)0x00423910};
typedef bool (BEA_THISCALL* FUN_00423960_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00423960_t> FUN_00423960 = {(FUN_00423960_t)0x00423960};
typedef uint32_t (BEA_THISCALL* FUN_00500540_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500540_t> FUN_00500540 = {(FUN_00500540_t)0x00500540};
typedef uint32_t (BEA_THISCALL* FUN_00500590_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500590_t> FUN_00500590 = {(FUN_00500590_t)0x00500590};
typedef int * (BEA_CDECL* FUN_00501280_t)(int, int, ...);
static const bea_guard<FUN_00501280_t> FUN_00501280 = {(FUN_00501280_t)0x00501280};
typedef uint32_t (BEA_STDCALL* FUN_00513d20_t)(uint32_t);
static const bea_guard<FUN_00513d20_t> FUN_00513d20 = {(FUN_00513d20_t)0x00513d20};
typedef undefined4 * (BEA_CDECL* FUN_00559be0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00559be0_t> FUN_00559be0 = {(FUN_00559be0_t)0x00559be0};

static uint32_t BEA_THISCALL ap_00540840(void * this_, void *param_1)
{
  int iVar1;
  void *this_00;
  FUN_00423910(bea_arg(param_1));
  FUN_00423910(bea_arg(param_1));
  iVar1 = FUN_00559be0(bea_arg(0), bea_arg(param_1));
  *(int *)((int)this_ + 0x170) = iVar1;
  *(int *)(iVar1 + 0xa4) = *(int *)(iVar1 + 0xa4) + 1;
  FUN_00513d20(bea_arg(*(undefined4 *)((int)this_ + 0x170)));
  FUN_00423910(bea_arg(param_1));
  FUN_00423960(bea_arg(param_1), bea_arg((int)this_ + 4), bea_arg(0x50), bea_arg(1));
  FUN_00423960(bea_arg(param_1), bea_arg((int)this_ + 0x54), bea_arg(4), bea_arg(1));
  FUN_00423960(bea_arg(param_1), bea_arg((int)this_ + 0x58), bea_arg(4), bea_arg(1));
  FUN_00423960(bea_arg(param_1), bea_arg((int)this_ + 0x5c), bea_arg(0x100), bea_arg(1));
  FUN_00423960(bea_arg(param_1), bea_arg((int)this_ + 0x160), bea_arg(4), bea_arg(1));
  FUN_00423960(bea_arg(param_1), bea_arg((int)this_ + 0x164), bea_arg(4), bea_arg(1));
  FUN_00423910(bea_arg(param_1));
  FUN_00423960(bea_arg(param_1), bea_arg((int)this_ + 0x17c), bea_arg(4), bea_arg(1));
  FUN_00423960(bea_arg(param_1), bea_arg((int)this_ + 0x180), bea_arg(0x1000), bea_arg(1));
  *(undefined1 *)((int)this_ + 0x15c) = 0;
  this_00 = (void *)FUN_00501280(*(undefined4 *)((int)this_ + 0x170),0);
  *(void **)((int)this_ + 0x174) = this_00;
  FUN_00500540(bea_arg(this_00), bea_arg(0x144), bea_arg(0x208), bea_arg(0x1c), bea_arg(4), bea_arg(0));
  return FUN_00500590(bea_arg(*(void **)((int)this_ + 0x174)), bea_arg(0x65), bea_arg(0x208), bea_arg(2), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00540840, ap_00540840));
