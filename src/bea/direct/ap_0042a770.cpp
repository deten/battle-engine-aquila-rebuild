// auto-ported from 0042a770_FUN_0042a770.c (FUN_0042a770, 54 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static int BEA_THISCALL ap_0042a770(void * this_, undefined4 param_1)
{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this_ + 0x2394);
  while(BEA_LOOP_GUARD(( true ))) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = FUN_00568390(bea_arg(iVar1), bea_arg(param_1));
    if (iVar2 == 0) break;
    iVar1 = *(int *)(iVar1 + 0xa8);
  }
  return iVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042a770, ap_0042a770));
