// auto-ported from 00539350_FUN_00539350.c (FUN_00539350, 132 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void * BEA_THISCALL ap_00539350(void * this_, int param_1)
{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this_ + 0x200);
  while (BEA_LOOP_GUARD((iVar1 != 0))) {
    puVar2 = *(undefined4 **)((int)this_ + *(int *)((int)this_ + 0x200) * 4 + -4);
    if (puVar2 != (undefined4 *)0x0) {
      bea_vcall<uint32_t>(puVar2, 0x0, 1);
    }
    iVar1 = *(int *)((int)this_ + 0x200) + -1;
    *(int *)((int)this_ + 0x200) = iVar1;
  }
  iVar3 = 0;
  iVar1 = *(int *)(param_1 + 0x200);
  *(int *)((int)this_ + 0x200) = iVar1;
  if (iVar1 < 1) {
    *(undefined4 *)(param_1 + 0x200) = 0;
    return this_;
  }
  puVar2 = this_;
  do {
    iVar3 = iVar3 + 1;
    *puVar2 = *(undefined4 *)((param_1 - (int)this_) + (int)puVar2);
    puVar2 = puVar2 + 1;
  } while (BEA_LOOP_GUARD((iVar3 < *(int *)((int)this_ + 0x200))));
  *(undefined4 *)(param_1 + 0x200) = 0;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00539350, ap_00539350));
