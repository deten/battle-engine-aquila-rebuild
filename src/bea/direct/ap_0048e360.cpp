// auto-ported from 0048e360_FUN_0048e360.c (FUN_0048e360, 90 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static uint32_t BEA_THISCALL ap_0048e360(void * this_, undefined4 param_1, uint param_2)
{
  int iVar1;
  int iVar2;
  iVar1 = 2 << ((byte)param_1 & 0x1f);
  *(undefined4 *)((int)this_ + 0x24) = param_1;
  *(uint *)((int)this_ + 0x28) = param_2;
  *(int *)((int)this_ + 0x2c) = iVar1;
  iVar2 = iVar1 * iVar1 * 2;
  iVar1 = iVar1 / 2;
  if ((param_2 & 1) != 0) {
    iVar2 = iVar2 - iVar1;
  }
  if ((param_2 & 2) != 0) {
    iVar2 = iVar2 - iVar1;
  }
  if ((param_2 & 4) != 0) {
    iVar2 = iVar2 - iVar1;
  }
  if ((param_2 & 8) != 0) {
    iVar2 = iVar2 - iVar1;
  }
  *(int *)((int)this_ + 0x30) = iVar2;
  *(undefined4 *)((int)this_ + 0x18) = 1;
  return bea_vcall<uint32_t>(this_, 0x4);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048e360, ap_0048e360));
