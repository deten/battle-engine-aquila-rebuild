// auto-ported from 0043fcd0_FUN_0043fcd0.c (FUN_0043fcd0, 19 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0066ea20 GLOBAL_AT(undefined4*, 0x0066ea20)

static void BEA_CDECL ap_0043fcd0(void)
{
  if (DAT_0066ea20 != (int *)0x0) {
                    
                    
    bea_vcall<uint32_t>(DAT_0066ea20, 0x100);
    return;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0043fcd0, ap_0043fcd0));
