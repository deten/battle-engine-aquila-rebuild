// auto-ported from 0048e7b0_FUN_0048e7b0.c (FUN_0048e7b0, 11 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_006fa7d8 GLOBAL_AT(int, 0x006fa7d8)
#define PTR_DAT_0062d868 GLOBAL_AT(void*, 0x0062d868)

static void BEA_CDECL ap_0048e7b0(void)
{
  PTR_DAT_0062d868 = (undefined *)&DAT_006fa7d8;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048e7b0, ap_0048e7b0));
