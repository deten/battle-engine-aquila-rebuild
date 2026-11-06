// auto-ported from 00423960_FUN_00423960.c (FUN_00423960, 45 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};

static uint32_t BEA_THISCALL ap_00423960(void * this_, undefined4 param_1, int param_2, int param_3)
{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2 * param_3;
  *(int *)((int)this_ + 8) = *(int *)((int)this_ + 8) + iVar2;
  iVar1 = FUN_00548570(bea_arg(*(void **)((int)this_ + 4)), bea_arg(param_1), bea_arg(iVar2));
  return iVar1 == iVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00423960, ap_00423960));
