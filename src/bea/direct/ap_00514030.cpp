// auto-ported from 00514030_FUN_00514030.c (FUN_00514030, 173 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define _DAT_008555cc GLOBAL_AT(int, 0x008555cc)
#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)
#define _DAT_00855770 GLOBAL_AT(int, 0x00855770)
#define DAT_00888a78 GLOBAL_AT(int, 0x00888a78)

static uint32_t BEA_STDCALL ap_00514030(undefined4 param_1)
{
  if ((char)param_1 == '\0') {
    _DAT_008555cc = 0;
    bea_vcall<uint32_t>(DAT_00888a50, 0xe4, DAT_00888a50,0x23,0);
    _DAT_00855770 = 0;
    return bea_vcall<uint32_t>(DAT_00888a50, 0xe4, DAT_00888a50,0x8c,0);
  }
  if ((DAT_00888a78 & 0x100) != 0) {
    _DAT_008555cc = 1;
    return bea_vcall<uint32_t>(DAT_00888a50, 0xe4, DAT_00888a50,0x23,1);
  }
  _DAT_008555cc = 0;
  bea_vcall<uint32_t>(DAT_00888a50, 0xe4, DAT_00888a50,0x23,0);
  _DAT_00855770 = 1;
  return bea_vcall<uint32_t>(DAT_00888a50, 0xe4, DAT_00888a50,0x8c,1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00514030, ap_00514030));
