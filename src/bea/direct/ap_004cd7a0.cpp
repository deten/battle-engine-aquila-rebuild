// auto-ported from 004cd7a0_FUN_004cd7a0.c (FUN_004cd7a0, 65 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0082b3f8 GLOBAL_AT(undefined4*, 0x0082b3f8)
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static int BEA_THISCALL ap_004cd7a0(void * this_, undefined4 param_1)
{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this_;
  DAT_0082b3f8 = this_;
  while(BEA_LOOP_GUARD(( true ))) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = FUN_00568390(bea_arg(param_1), bea_arg(iVar1 + 4));
    if (iVar2 == 0) break;
    if (iVar2 < 0) {
      return 0;
    }
    DAT_0082b3f8 = (int *)(iVar1 + 0x38);
    iVar1 = *DAT_0082b3f8;
  }
  return iVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cd7a0, ap_004cd7a0));
