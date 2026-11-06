// auto-ported from 004aa630_FUN_004aa630.c (FUN_004aa630, 67 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static undefined4 BEA_THISCALL ap_004aa630(void * this_, undefined4 param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = *(int *)((int)this_ + 0x18);
  if (0 < *(int *)((int)this_ + 0x14)) {
    do {
      iVar1 = FUN_00568390(bea_arg(param_1), bea_arg(iVar2));
      if (iVar1 == 0) {
        return *(undefined4 *)(iVar2 + 0x10);
      }
      iVar2 = iVar2 + 0x24;
      iVar3 = iVar3 + 1;
    } while (BEA_LOOP_GUARD((iVar3 < *(int *)((int)this_ + 0x14))));
  }
  return 0xffffffff;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004aa630, ap_004aa630));
