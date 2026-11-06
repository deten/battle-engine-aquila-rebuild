// auto-ported from 0051e120_vslot4.c (CFEPMultiplayerStart::vslot4, 135 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
#define DAT_009c68ac GLOBAL_AT(char, 0x009c68ac)
#define DAT_009c690d GLOBAL_AT(char, 0x009c690d)
typedef uint32_t (BEA_STDCALL* FUN_004530b0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004530b0_t> FUN_004530b0 = {(FUN_004530b0_t)0x004530b0};

static uint32_t BEA_STDCALL ap_0051e120(float param_1, undefined4 param_2)
{
  float fVar1;
  undefined4 local_8;
  DAT_009c68ac = 0;
  DAT_009c690d = 1;
  fVar1 = (param_1 - 0.25f) * 1.3333334f;
  if (0.0f <= fVar1) {
    if (1.0f < fVar1) {
      fVar1 = 1.0f;
    }
  }
  else {
    fVar1 = 0.0f;
  }
  local_8 = (undefined4)(longlong)ROUND(fVar1 * 255.0f);
  return FUN_004530b0(bea_arg(0x43480000), bea_arg(0), bea_arg(param_1 * 0.25f + 1.0f), bea_arg(local_8));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051e120, ap_0051e120));
