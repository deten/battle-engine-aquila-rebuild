// auto-ported from 004ee8a0_FUN_004ee8a0.c (FUN_004ee8a0, 76 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef uint (BEA_THISCALL* FUN_00423910_t)(uint32_t);
static const bea_guard<FUN_00423910_t> FUN_00423910 = {(FUN_00423910_t)0x00423910};
typedef bool (BEA_THISCALL* FUN_00423960_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00423960_t> FUN_00423960 = {(FUN_00423960_t)0x00423960};
typedef uint32_t (BEA_CDECL* FUN_004ee8f0_t)(uint32_t);
static const bea_guard<FUN_004ee8f0_t> FUN_004ee8f0 = {(FUN_004ee8f0_t)0x004ee8f0};

static void BEA_STDCALL ap_004ee8a0(void *param_1)
{
  void *this_local;
  int iVar1;
  
  this_local = param_1;
  FUN_00423910(bea_arg(param_1));
  FUN_00423910(bea_arg(this_local));
  FUN_00423960(bea_arg(this_local), bea_arg(&param_1), bea_arg(4), bea_arg(1));
  FUN_00423910(bea_arg(this_local));
  iVar1 = 0;
  if (0 < (int)param_1) {
    do {
      FUN_004ee8f0(bea_arg(this_local));
      iVar1 = iVar1 + 1;
    } while (BEA_LOOP_GUARD((iVar1 < (int)param_1)));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ee8a0, ap_004ee8a0));
