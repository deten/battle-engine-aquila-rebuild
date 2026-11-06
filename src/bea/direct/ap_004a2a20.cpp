// auto-ported from 004a2a20_FUN_004a2a20.c (FUN_004a2a20, 88 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_004a2a20(void * this_)
{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  for (puVar1 = *(undefined4 **)this_; BEA_LOOP_GUARD((puVar1 != (undefined4 *)0x0)); puVar1 = (undefined4 *)*puVar1) {
    iVar2 = puVar1[1];
    uVar3 = *(uint *)(iVar2 + 4);
    if ((uVar3 & 0xfffffff0) + 0x10 + iVar2 < (uint)(puVar1[2] + iVar2)) {
      do {
        if ((uVar3 & 1) != 0) {
          *(uint *)(iVar2 + 4) = uVar3 | 2;
        }
        iVar2 = iVar2 + 0x10 + (*(uint *)(iVar2 + 4) & 0xfffffff0);
        uVar3 = *(uint *)(iVar2 + 4);
      } while (BEA_LOOP_GUARD(((uVar3 & 0xfffffff0) + 0x10 + iVar2 < (uint)(puVar1[1] + puVar1[2]))));
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a2a20, ap_004a2a20));
