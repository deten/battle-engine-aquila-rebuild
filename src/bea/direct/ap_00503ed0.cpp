// auto-ported from 00503ed0_vslot1.c (CVertexShaderMenu::vslot1, 21 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00854e68 GLOBAL_AT(int, 0x00854e68)

static int BEA_CDECL ap_00503ed0(void)
{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = DAT_00854e68; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = *(int *)(iVar1 + 0x58)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00503ed0, ap_00503ed0));
