// auto-ported from 0048e790_vslot4.c (CLandscapeTexture::vslot4, 28 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_006fabf4 GLOBAL_AT(undefined4*, 0x006fabf4)

static undefined4 BEA_CDECL ap_0048e790(void)
{
  if (DAT_006fabf4 != (int *)0x0) {
    bea_vcall<uint32_t>(DAT_006fabf4, 0x8, DAT_006fabf4);
    DAT_006fabf4 = (int *)0x0;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048e790, ap_0048e790));
