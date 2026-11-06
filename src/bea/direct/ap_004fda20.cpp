// auto-ported from 004fda20_FUN_004fda20.c (FUN_004fda20, 109 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_004fda20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fda20_t> FUN_004fda20 = {(FUN_004fda20_t)0x004fda20};
typedef uint32_t (BEA_THISCALL* FUN_004ffdd0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004ffdd0_t> FUN_004ffdd0 = {(FUN_004ffdd0_t)0x004ffdd0};

static undefined4 BEA_THISCALL ap_004fda20(void * this_, int param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if ((*(int **)((int)this_ + 0x148) != (int *)0x0) && (param_1 != 0)) {
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x148), 0x154, *(undefined4 *)(param_1 + 0x148));
  }
  if (*(void **)((int)this_ + 0x13c) != (void *)0x0) {
    FUN_004ffdd0(bea_arg(*(void **)((int)this_ + 0x13c)), bea_arg(param_1), bea_arg(1));
  }
  puVar1 = *(undefined4 **)((int)this_ + 0x19c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)*puVar1;
  }
  while (BEA_LOOP_GUARD((puVar2 != (undefined4 *)0x0))) {
    if ((void *)*puVar2 != (void *)0x0) {
      FUN_004fda20(bea_arg((void *)*puVar2), bea_arg(param_1));
    }
    puVar1 = (undefined4 *)puVar1[1];
    if (puVar1 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)*puVar1;
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fda20, ap_004fda20));
