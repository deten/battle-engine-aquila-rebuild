// auto-ported from 004aa820_FUN_004aa820.c (FUN_004aa820, 119 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef int (BEA_CDECL* FUN_00568390_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00568390_t> FUN_00568390 = {(FUN_00568390_t)0x00568390};

static undefined4 BEA_THISCALL ap_004aa820(void * this_, undefined4 param_1, int param_2)
{
  int iVar1;
  int iVar2;
  int iVar3;
  
  do {
    iVar2 = 0;
    if (0 < *(int *)((int)this_ + 0x1c)) {
      iVar3 = 0;
      do {
        iVar1 = FUN_00568390(bea_arg(*(int *)((int)this_ + 0x20) + 0x4c + iVar3), bea_arg(param_1));
        if ((iVar1 == 0) && (*(int *)(*(int *)((int)this_ + 0x20) + 0x14c + iVar3) == param_2)) {
          return *(undefined4 *)(iVar2 * 0x150 + 0x40 + *(int *)((int)this_ + 0x20));
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x150;
      } while (BEA_LOOP_GUARD((iVar2 < *(int *)((int)this_ + 0x1c))));
    }
    this_ = *(void **)((int)this_ + 8);
    if (this_ == (void *)0x0) {
      return 0;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004aa820, ap_004aa820));
