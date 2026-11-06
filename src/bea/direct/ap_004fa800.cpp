// auto-ported from 004fa800_FUN_004fa800.c (FUN_004fa800, 199 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)

static void BEA_THISCALL ap_004fa800(void * this_)
{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)((int)this_ + 0x168);
  if (iVar1 == 1) {
    if (*(float *)((int)this_ + 0x16c) <= DAT_00672fd0) {
      if (*(int *)((int)this_ + 0x1ec) == 0) {
        bea_vcall<uint32_t>(this_, 0x15c);
        *(undefined4 *)((int)this_ + 0x168) = 0;
        return;
      }
      *(undefined4 *)((int)this_ + 0x1e8) = 1;
      *(undefined4 *)((int)this_ + 0x168) = 0;
      return;
    }
    *(undefined4 *)((int)this_ + 0x1e8) = 0;
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return;
      }
      if (*(float *)((int)this_ + 0x16c) < DAT_00672fd0) {
        *(undefined4 *)((int)this_ + 0x168) = 0;
      }
      puVar2 = (undefined4 *)((int)this_ + 0x9c);
      puVar3 = (undefined4 *)((int)this_ + 0x3c);
      for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      return;
    }
    *(undefined4 *)((int)this_ + 0x1e8) = 0;
    if (*(float *)((int)this_ + 0x16c) < DAT_00672fd0) {
      *(undefined4 *)((int)this_ + 0x168) = 0;
      return;
    }
  }
  bea_vcall<uint32_t>(this_, 0x100);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fa800, ap_004fa800));
