// auto-ported from 004530b0_FUN_004530b0.c (FUN_004530b0, 133 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_006777c4 GLOBAL_AT(int, 0x006777c4)
#define DAT_0089d838 GLOBAL_AT(int, 0x0089d838)
typedef uint32_t (BEA_CDECL* FUN_005563d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005563d0_t> FUN_005563d0 = {(FUN_005563d0_t)0x005563d0};

static uint32_t BEA_STDCALL ap_004530b0(float param_1, float param_2, float param_3, int param_4)
{
  float fVar1;
  fVar1 = param_2 * param_3;
  if (DAT_006777c4 == 0) {
    param_2 = 320.0f - param_1 * param_3;
  }
  else {
    param_2 = 300.0;
  }
  return FUN_005563d0(bea_arg(param_2), bea_arg(240.0f - fVar1), bea_arg(0x3f747ae1), bea_arg(DAT_0089d838), bea_arg((param_4 * 0xff & 0xffbfU) << 0x10 | 0xbfbfff), bea_arg(param_3), bea_arg(param_3), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004530b0, ap_004530b0));
