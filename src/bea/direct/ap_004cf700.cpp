// auto-ported from 004cf700_vslot17.c (CTextureRes::vslot17, 108 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_009cc114 GLOBAL_AT(int, 0x009cc114)
typedef wchar_t * (BEA_CDECL* FUN_00524830_t)(undefined4, ...);
static const bea_guard<FUN_00524830_t> FUN_00524830 = {(FUN_00524830_t)0x00524830};

static uint32_t BEA_STDCALL ap_004cf700(int param_1)
{
  if (param_1 != DAT_009cc114) {
    if (param_1 == 0) {
      return FUN_00524830(0x1a);
    }
    if (param_1 != 1) {
      return FUN_00524830(0x1c);
    }
    return FUN_00524830(0x1b);
  }
  if (param_1 == 0) {
    return FUN_00524830(0x17);
  }
  if (param_1 != 1) {
    return FUN_00524830(0x19);
  }
  return FUN_00524830(0x18);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cf700, ap_004cf700));
