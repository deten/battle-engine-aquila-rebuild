// auto-ported from 0042bb30_FUN_0042bb30.c (FUN_0042bb30, 134 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_THISCALL ap_0042bb30(void * this_)
{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)((int)this_ + 0x238d) == '\0') {
    return 0;
  }
  iVar1 = *(int *)((int)this_ + 0x23a8);
  iVar3 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x239c), 0x4);
  piVar2 = *(int **)((int)this_ + 0x239c);
  if (iVar3 <= iVar1) {
    iVar1 = piVar2[1];
    iVar3 = bea_vcall<uint32_t>(piVar2, 0x4);
    for (iVar3 = *(int *)((int)this_ + 0x23a8) - iVar3; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
      iVar1 = *(int *)(iVar1 + 8);
    }
    if (iVar1 == 0) {
      *(undefined4 *)((int)this_ + 0x239c) = *(undefined4 *)(*(int *)((int)this_ + 0x239c) + 0xc);
    }
    else {
      *(int *)((int)this_ + 0x239c) = iVar1;
    }
    *(undefined4 *)((int)this_ + 0x23ac) = 0;
    *(undefined4 *)((int)this_ + 0x23a8) = 0;
    return 1;
  }
  bea_vcall<uint32_t>(piVar2, 0xc, iVar1);
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042bb30, ap_0042bb30));
