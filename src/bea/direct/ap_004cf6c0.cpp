// auto-ported from 004cf6c0_vslot14.c (CTrilinear::vslot14, 36 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CTweakSLONG;
#define DAT_0082b468 GLOBAL_AT(int, 0x0082b468)
typedef uint32_t (BEA_THISCALL* CTweakSLONG__vslot0_t)(uint32_t, uint32_t);
static const bea_guard<CTweakSLONG__vslot0_t> CTweakSLONG__vslot0 = {(CTweakSLONG__vslot0_t)0x00528ad0};

static uint32_t BEA_STDCALL ap_004cf6c0(int param_1)
{
  return CTweakSLONG__vslot0(bea_arg((CTweakSLONG *)&DAT_0082b468), bea_arg((float)(param_1 == 0)));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cf6c0, ap_004cf6c0));
