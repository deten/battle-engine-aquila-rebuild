// auto-ported from 0042c4b0_vslot1.c (CConsoleCommandMenu::vslot1, 24 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0066582c GLOBAL_AT(int, 0x0066582c)

static int BEA_CDECL ap_0042c4b0(void)
{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = DAT_0066582c; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = *(int *)(iVar1 + 0xa8)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042c4b0, ap_0042c4b0));
