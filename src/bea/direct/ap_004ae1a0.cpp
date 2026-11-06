// auto-ported from 004ae1a0_FUN_004ae1a0.c (FUN_004ae1a0, 122 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_004d4f00_t)(uint32_t);
static const bea_guard<FUN_004d4f00_t> FUN_004d4f00 = {(FUN_004d4f00_t)0x004d4f00};

static undefined4 BEA_THISCALL ap_004ae1a0(void * this_, int *param_1)
{
  short *psVar1;
  
  if (*(void **)((int)this_ + 0x100) != (void *)0x0) {
    psVar1 = (short *)FUN_004d4f00(bea_arg(*(void **)((int)this_ + 0x100)));
    if (psVar1 != (short *)0x0) {
      *param_1 = **(int **)(*(int *)((int)this_ + 0x100) + 0x98) + *psVar1 * 6;
      param_1[1] = **(int **)(*(int *)((int)this_ + 0x100) + 0x98) + psVar1[1] * 6;
      param_1[2] = **(int **)(*(int *)((int)this_ + 0x100) + 0x98) + psVar1[2] * 6;
      return 1;
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ae1a0, ap_004ae1a0));
