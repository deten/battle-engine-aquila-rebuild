// auto-ported from 004ae110_FUN_004ae110.c (FUN_004ae110, 136 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_004d4c00_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004d4c00_t> FUN_004d4c00 = {(FUN_004d4c00_t)0x004d4c00};

static undefined4 BEA_THISCALL ap_004ae110(void * this_, undefined4 param_1, undefined4 param_2, int *param_3)
{
  short *psVar1;
  
  if (*(void **)((int)this_ + 0x100) == (void *)0x0) {
    return 0;
  }
  psVar1 = (short *)FUN_004d4c00(bea_arg(*(void **)((int)this_ + 0x100)), bea_arg(param_1), bea_arg(param_2));
  if (psVar1 == (short *)0x0) {
    return 0;
  }
  *param_3 = **(int **)(*(int *)((int)this_ + 0x100) + 0x98) + *psVar1 * 6;
  param_3[1] = **(int **)(*(int *)((int)this_ + 0x100) + 0x98) + psVar1[1] * 6;
  param_3[2] = **(int **)(*(int *)((int)this_ + 0x100) + 0x98) + psVar1[2] * 6;
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ae110, ap_004ae110));
