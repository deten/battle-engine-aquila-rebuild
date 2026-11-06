// auto-ported from 004bba60_vslot1.c (CMusicMenu::vslot1, 26 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00889a54 GLOBAL_AT(int, 0x00889a54)

static int BEA_CDECL ap_004bba60(void)
{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = DAT_00889a54; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = *(int *)(iVar1 + 0x104)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2 + 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004bba60, ap_004bba60));
