// auto-ported from 00512c40_vslot1.c (PCLTShell::vslot1, 89 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0088907c GLOBAL_AT(char, 0x0088907c)
#define DAT_0063c108 GLOBAL_AT(char, 0x0063c108)
#define s_Accepting_software_VS_s_0063de10 ((char*)0x0063de10)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};

static undefined4 BEA_STDCALL ap_00512c40(int param_1, uint param_2, undefined4 param_3)
{
  if ((0xff < *(uint *)(param_1 + 0x58)) && (0xff < *(uint *)(param_1 + 0x5c))) {
    DAT_0088907c = 1;
    if (DAT_0063c108 != '\0') {
      if ((param_2 & 0xa0) == 0) {
        if (*(uint *)(param_1 + 0xc4) < 0xfffe0101) {
          DAT_0088907c = 1;
          return 0x80004005;
        }
      }
      else {
        CRenderThing__vslot3(s_Accepting_software_VS_s_0063de10);
      }
    }
    if ((*(byte *)(param_1 + 0x3c) & 0x84) != 0) {
      return 0;
    }
  }
  return 0x80004005;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00512c40, ap_00512c40));
