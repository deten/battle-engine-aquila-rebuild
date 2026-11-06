// auto-ported from 0049dc90_FUN_0049dc90.c (FUN_0049dc90, 31 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static int BEA_CDECL ap_0049dc90(int param_1)
{
  int iVar1;
  int iVar2;
  
  iVar2 = 2;
  iVar1 = 1;
  if (1 < param_1) {
    do {
      iVar1 = iVar1 * iVar2;
      iVar2 = iVar2 + 1;
    } while (BEA_LOOP_GUARD((iVar2 <= param_1)));
  }
  return iVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0049dc90, ap_0049dc90));
