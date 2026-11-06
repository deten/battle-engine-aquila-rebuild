// auto-ported from 004cf290_vslot15.c (C3DSoundMethod::vslot15, 16 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00663084 GLOBAL_AT(int, 0x00663084)
#define DAT_00896a44 GLOBAL_AT(int, 0x00896a44)

static int BEA_CDECL ap_004cf290(void)
{
  int iVar1;
  
  iVar1 = DAT_00663084;
  if (DAT_00663084 == -1) {
    iVar1 = DAT_00896a44;
  }
  return iVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cf290, ap_004cf290));
