// auto-ported from 005285b0_FUN_005285b0.c (FUN_005285b0, 48 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0089bec8 GLOBAL_AT(undefined4*, 0x0089bec8)
#define DAT_0089bec4 GLOBAL_AT(int, 0x0089bec4)
#define DAT_0089bec0 GLOBAL_AT(int, 0x0089bec0)

static void BEA_CDECL ap_005285b0(void)
{
  if (DAT_0089bec8 != (int *)0x0) {
    bea_vcall<uint32_t>(DAT_0089bec8, 0x48, DAT_0089bec8);
    ResetEvent(DAT_0089bec4);
    ResetEvent(DAT_0089bec0);
    ResetEvent(((void*)0x00528540));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005285b0, ap_005285b0));
