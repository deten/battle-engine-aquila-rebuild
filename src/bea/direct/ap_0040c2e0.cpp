// auto-ported from 0040c2e0_FUN_0040c2e0.c (FUN_0040c2e0, 87 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_00412050_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00412050_t> FUN_00412050 = {(FUN_00412050_t)0x00412050};
typedef undefined4 (BEA_THISCALL* FUN_004140d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004140d0_t> FUN_004140d0 = {(FUN_004140d0_t)0x004140d0};

static undefined4 BEA_THISCALL ap_0040c2e0(void * this_, undefined4 param_1)
{
  int iVar1;
  
  iVar1 = FUN_00412050(bea_arg(*(void **)((int)this_ + 0x57c)), bea_arg(param_1));
  if (iVar1 != 0) {
    *(undefined4 *)((int)this_ + 0x5d8) = 0;
    return 1;
  }
  iVar1 = FUN_004140d0(bea_arg(*(void **)((int)this_ + 0x578)), bea_arg(param_1));
  if (iVar1 != 0) {
    *(undefined4 *)((int)this_ + 0x5d8) = 0;
    return 1;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040c2e0, ap_0040c2e0));
