// auto-ported from 005491b0_FUN_005491b0.c (FUN_005491b0, 100 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_004a15a0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004a15a0_t> FUN_004a15a0 = {(FUN_004a15a0_t)0x004a15a0};
typedef undefined4 * (BEA_THISCALL* FUN_004a1c40_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004a1c40_t> FUN_004a1c40 = {(FUN_004a1c40_t)0x004a1c40};

static undefined4 BEA_THISCALL ap_005491b0(void * this_, int param_1, undefined4 param_2)
{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = param_2;
  cVar1 = FUN_004a15a0(bea_arg((void *)((int)this_ + 0x214)), bea_arg(param_1), bea_arg(param_2), bea_arg(&param_2));
  if (cVar1 != '\0') {
    return param_2;
  }
  cVar1 = FUN_004a15a0(bea_arg((void *)((int)this_ + 0x13ac)), bea_arg(param_1), bea_arg(uVar2), bea_arg(&param_2));
  if (cVar1 != '\0') {
    return param_2;
  }
  uVar2 = FUN_004a1c40(bea_arg(*(void **)((int)this_ + *(int *)(param_1 + -8) * 4 + 0x10)), bea_arg(param_1 + -0x10), bea_arg(uVar2));
  return uVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005491b0, ap_005491b0));
