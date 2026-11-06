// auto-ported from 00516990_FUN_00516990.c (FUN_00516990, 18 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_008964ec GLOBAL_AT(int, 0x008964ec)

static undefined * BEA_CDECL ap_00516990(int param_1)
{
  return (undefined *)(((uint8_t *)&DAT_008964ec) + param_1 * 0x78);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00516990, ap_00516990));
