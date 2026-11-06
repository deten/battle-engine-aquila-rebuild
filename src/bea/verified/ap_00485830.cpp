// auto-ported from 00485830_FUN_00485830.c (FUN_00485830, 124 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"


static undefined4 BEA_THISCALL ap_00485830(int in_ECX, int param_1)
{
  uint uVar1;
  int iVar2;

  uVar1 = *(uint *)(param_1 + 0x34);
  if ((uVar1 & 0x8000000) == 0) {
    if (((uVar1 & 0x10) != 0) && (iVar2 = *(int *)(param_1 + 0x164), iVar2 != 0)) {
      if (*(int *)(iVar2 + 0x124) != 0) goto switchD_00485875_caseD_9;
      if (iVar2 != 0) {
        switch(*(undefined4 *)(iVar2 + 0xe0)) {
        case 9:
        case 0x11:
        case 0x15:
        case 0x17:
          goto switchD_00485875_caseD_9;
        }
      }
    }
    if ((uVar1 & 0x4000) != 0) {
      return *(undefined4 *)(in_ECX + 0x1a0);
    }
    if (((uVar1 & 0x4008100) == 0) && ((uVar1 & 0x40) == 0)) {
      return *(undefined4 *)(in_ECX + 0x1a4);
    }
  }
switchD_00485875_caseD_9:
  return *(undefined4 *)(in_ECX + 0x1a8);
}

// @autoport-registration (verified: 188650 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00485830, ap_00485830));
