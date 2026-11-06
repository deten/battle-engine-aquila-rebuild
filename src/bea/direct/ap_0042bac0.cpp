// auto-ported from 0042bac0_FUN_0042bac0.c (FUN_0042bac0, 101 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_THISCALL ap_0042bac0(void * this_)
{
  char cVar1;
  int iVar2;
  
  if (*(char *)((int)this_ + 0x238d) == '\0') {
    return 0;
  }
  *(int *)((int)this_ + 0x23a8) = *(int *)((int)this_ + 0x23a8) + 1;
  iVar2 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x239c), 0x4);
  cVar1 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x239c), 0x10);
  if ((cVar1 != '\0') &&
     (iVar2 = iVar2 + *(int *)(*(int *)((int)this_ + 0x239c) + 0x10),
     *(int *)(*(int *)((int)this_ + 0x239c) + 0xc) != 0)) {
    iVar2 = iVar2 + 1;
  }
  if (iVar2 <= *(int *)((int)this_ + 0x23a8)) {
    *(int *)((int)this_ + 0x23a8) = iVar2 + -1;
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042bac0, ap_0042bac0));
