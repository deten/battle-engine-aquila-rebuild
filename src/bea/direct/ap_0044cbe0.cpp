// auto-ported from 0044cbe0_vslot2.c (CFeature::vslot2, 47 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CComplexThing;
typedef char CFeature;
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define DAT_009c8010 GLOBAL_AT(int, 0x009c8010)
typedef uint32_t (BEA_THISCALL* CComplexThing__vslot2_t)(uint32_t);
static const bea_guard<CComplexThing__vslot2_t> CComplexThing__vslot2 = {(CComplexThing__vslot2_t)0x004f41b0};
typedef uint32_t (BEA_THISCALL* FUN_004e1130_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e1130_t> FUN_004e1130 = {(FUN_004e1130_t)0x004e1130};
typedef uint32_t (BEA_THISCALL* FUN_004ebfb0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004ebfb0_t> FUN_004ebfb0 = {(FUN_004ebfb0_t)0x004ebfb0};
typedef uint32_t (BEA_STDCALL* FUN_0050b020_t)(uint32_t);
static const bea_guard<FUN_0050b020_t> FUN_0050b020 = {(FUN_0050b020_t)0x0050b020};

static uint32_t BEA_THISCALL ap_0044cbe0(CFeature * this_)
{
  FUN_004e1130(bea_arg(&DAT_00896988), bea_arg(this_));
  FUN_0050b020(bea_arg(this_));
  FUN_004ebfb0(bea_arg(&DAT_009c8010), bea_arg(this_), bea_arg(1));
  return CComplexThing__vslot2(bea_arg((CComplexThing *)this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044cbe0, ap_0044cbe0));
