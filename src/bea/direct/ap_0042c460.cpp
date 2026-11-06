// auto-ported from 0042c460_vslot6.c (CConsoleMenu::vslot6, 70 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CConsoleMenu;
#define DAT_00665834 GLOBAL_AT(int, 0x00665834)
#define _DAT_00665844 GLOBAL_AT(int, 0x00665844)
#define _DAT_00665840 GLOBAL_AT(int, 0x00665840)

static void BEA_THISCALL ap_0042c460(CConsoleMenu * this_, int param_1)
{
  int iVar1;
  
  if (param_1 == DAT_00665834) {
    DAT_00665834 = *(int *)(param_1 + 0xc);
    _DAT_00665844 = 0;
    _DAT_00665840 = 0;
  }
  iVar1 = *(int *)(this_ + 4);
  if (iVar1 != 0) {
    do {
    } while (BEA_LOOP_GUARD((iVar1 != param_1)));
    *(undefined4 *)(this_ + 4) = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(this_ + 0x10) = *(int *)(this_ + 0x10) + -1;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042c460, ap_0042c460));
