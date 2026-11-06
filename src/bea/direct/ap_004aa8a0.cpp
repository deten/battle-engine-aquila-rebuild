// auto-ported from 004aa8a0_FUN_004aa8a0.c (FUN_004aa8a0, 84 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static undefined4 BEA_THISCALL ap_004aa8a0(void * this_, undefined4 param_1)
{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)((int)this_ + 0x15c)) {
    do {
      iVar1 = FUN_00568390(bea_arg(*(int *)(*(int *)((int)this_ + 0x160) + iVar2 * 4) + 0xdc), bea_arg(param_1));
      if (iVar1 == 0) {
        return *(undefined4 *)(*(int *)((int)this_ + 0x160) + iVar2 * 4);
      }
      iVar2 = iVar2 + 1;
    } while (BEA_LOOP_GUARD((iVar2 < *(int *)((int)this_ + 0x15c))));
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004aa8a0, ap_004aa8a0));
