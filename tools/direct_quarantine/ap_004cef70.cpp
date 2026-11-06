// auto-ported from 004cef70_vslot14.c (CScreenShape::vslot14, 31 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CTweakSLONG;
#define DAT_0082b478 GLOBAL_AT(int, 0x0082b478)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
typedef uint32_t (BEA_THISCALL* CTweakSLONG__vslot0_t)(uint32_t, uint32_t);
static const bea_guard<CTweakSLONG__vslot0_t> CTweakSLONG__vslot0 = {(CTweakSLONG__vslot0_t)0x00528ad0};
typedef uint32_t (BEA_THISCALL* FUN_0052c780_t)(uint32_t);
static const bea_guard<FUN_0052c780_t> FUN_0052c780 = {(FUN_0052c780_t)0x0052c780};

static uint32_t BEA_STDCALL ap_004cef70(int param_1)
{
  CTweakSLONG__vslot0(bea_arg((CTweakSLONG *)&DAT_0082b478), bea_arg((float)param_1));
  return FUN_0052c780(bea_arg(&DAT_00855bb0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cef70, ap_004cef70));
