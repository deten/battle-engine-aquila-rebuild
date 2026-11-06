// auto-ported from 004bdf70_FUN_004bdf70.c (FUN_004bdf70, 125 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (4 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static void BEA_THISCALL ap_004bdf70(void * this_, int param_1, int param_2, int param_3)
{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_1 >> 1;
  iVar2 = param_2 >> 1;
  if ((((-1 < (int)uVar3) && ((int)uVar3 < 0x100)) && (-1 < iVar2)) && (iVar2 < 0x100)) {
    if (param_3 != 0) {
      uVar3 = uVar3 & 0x80000007;
      pbVar1 = (byte *)((param_1 >> 4) * 0x100 + iVar2 + (int)this_);
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
      }
      *pbVar1 = *pbVar1 | '\x01' << ((byte)uVar3 & 0x1f);
      return;
    }
    uVar3 = uVar3 & 0x80000007;
    pbVar1 = (byte *)((param_1 >> 4) * 0x100 + iVar2 + (int)this_);
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
    }
    *pbVar1 = *pbVar1 & -('\x01' << ((byte)uVar3 & 0x1f)) - 1U;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004bdf70, ap_004bdf70));
