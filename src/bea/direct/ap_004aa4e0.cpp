// auto-ported from 004aa4e0_FUN_004aa4e0.c (FUN_004aa4e0, 27 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef int (BEA_THISCALL* FUN_004aa4e0_t)(uint32_t);
static const bea_guard<FUN_004aa4e0_t> FUN_004aa4e0 = {(FUN_004aa4e0_t)0x004aa4e0};

static int BEA_THISCALL ap_004aa4e0(void * this_)
{
  int iVar1;
  
  if (*(void **)((int)this_ + 8) != (void *)0x0) {
    iVar1 = FUN_004aa4e0(bea_arg(*(void **)((int)this_ + 8)));
    return iVar1 + *(int *)((int)this_ + 0x1c);
  }
  return *(int *)((int)this_ + 0x1c);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004aa4e0, ap_004aa4e0));
