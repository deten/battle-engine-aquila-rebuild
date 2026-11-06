// auto-ported from 004cf620_vslot14.c (CLandscapeRes::vslot14, 99 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CTweakSLONG;
#define DAT_008aa96c GLOBAL_AT(int, 0x008aa96c)
#define DAT_008aa950 GLOBAL_AT(int, 0x008aa950)
typedef uint32_t (BEA_THISCALL* CTweakSLONG__vslot0_t)(uint32_t, uint32_t);
static const bea_guard<CTweakSLONG__vslot0_t> CTweakSLONG__vslot0 = {(CTweakSLONG__vslot0_t)0x00528ad0};

static uint32_t BEA_STDCALL ap_004cf620(int param_1)
{
  if (DAT_008aa96c < param_1) {
    param_1 = DAT_008aa96c;
  }
  if (param_1 == 0) {
    return CTweakSLONG__vslot0(bea_arg((CTweakSLONG *)&DAT_008aa950), bea_arg(0x3f800000));
  }
  if (param_1 == 1) {
    return CTweakSLONG__vslot0(bea_arg((CTweakSLONG *)&DAT_008aa950), bea_arg(0x40400000));
  }
  if (param_1 != 2) {
    return CTweakSLONG__vslot0(bea_arg((CTweakSLONG *)&DAT_008aa950), bea_arg(0x40a00000));
  }
  return CTweakSLONG__vslot0(bea_arg((CTweakSLONG *)&DAT_008aa950), bea_arg(0x40800000));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cf620, ap_004cf620));
