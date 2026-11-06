// auto-ported from 004a4290_vslot1.c (CApplyMenuItem::vslot1, 88 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CApplyMenuItem;
#define DAT_00704868 GLOBAL_AT(int, 0x00704868)

static void BEA_THISCALL ap_004a4290(CApplyMenuItem * this_, undefined4 param_1, int param_2, undefined4 param_3)
{
  undefined4 *puVar1;
  int *piVar2;
  
  if (param_2 == 0x2c) {
    DAT_00704868 = DAT_00704868 + 1;
    puVar1 = *(undefined4 **)(*(int *)(this_ + 0x1c) + 8);
    *(undefined4 **)(*(int *)(this_ + 0x1c) + 0x10) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)*puVar1;
    }
    while (BEA_LOOP_GUARD((piVar2 != (int *)0x0))) {
      bea_vcall<uint32_t>(piVar2, 0x2c);
      puVar1 = *(undefined4 **)(*(int *)(*(int *)(this_ + 0x1c) + 0x10) + 4);
      *(undefined4 **)(*(int *)(this_ + 0x1c) + 0x10) = puVar1;
      if (puVar1 == (undefined4 *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = (int *)*puVar1;
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a4290, ap_004a4290));
