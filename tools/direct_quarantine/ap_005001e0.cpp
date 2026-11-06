// auto-ported from 005001e0_FUN_005001e0.c (FUN_005001e0, 100 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static int BEA_THISCALL ap_005001e0(void * this_)
{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *local_4;
  
  piVar1 = *(int **)((int)this_ + 8);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    local_4 = this_;
    if (*(char *)((int)this_ + 0x28) == '\0') {
      iVar2 = bea_vcall<uint32_t>(piVar1, 0x30, piVar1);
      return iVar2;
    }
    *(undefined1 *)((int)this_ + 0x28) = 0;
    puVar6 = (undefined4 *)0x0;
    iVar2 = bea_vcall<uint32_t>(piVar1, 0x2c, piVar1,0,0,&local_4,0x800);
    if (-1 < iVar2) {
      uVar4 = *(uint *)((int)this_ + 0x10);
      puVar5 = *(undefined4 **)((int)this_ + 0x24);
      for (uVar3 = uVar4 >> 2; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = uVar4 & 3; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      iVar2 = bea_vcall<uint32_t>(*(int **)((int)this_ + 8), 0x30, *(int **)((int)this_ + 8));
      return iVar2;
    }
  }
  return iVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005001e0, ap_005001e0));
