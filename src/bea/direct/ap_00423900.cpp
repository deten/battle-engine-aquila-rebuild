// auto-ported from 00423900_FUN_00423900.c (FUN_00423900, 16 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_00548c00_t)(uint32_t);
static const bea_guard<FUN_00548c00_t> FUN_00548c00 = {(FUN_00548c00_t)0x00548c00};

static int BEA_THISCALL ap_00423900(void * this_)
{
  int iVar1;
  
  iVar1 = FUN_00548c00(bea_arg(*(void **)((int)this_ + 4)));
  return (iVar1 != 0) - 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00423900, ap_00423900));
