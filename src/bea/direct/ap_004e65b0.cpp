// auto-ported from 004e65b0_vslot2.c (CSquad::vslot2, 45 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComplexThing;
typedef char CSquad;
#define DAT_008550c0 GLOBAL_AT(int, 0x008550c0)
#define DAT_008550b0 GLOBAL_AT(int, 0x008550b0)
#define DAT_008550a0 GLOBAL_AT(int, 0x008550a0)
typedef uint32_t (BEA_THISCALL* CComplexThing__vslot2_t)(uint32_t);
static const bea_guard<CComplexThing__vslot2_t> CComplexThing__vslot2 = {(CComplexThing__vslot2_t)0x004f41b0};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};

static uint32_t BEA_THISCALL ap_004e65b0(CSquad * this_)
{
  FUN_004e5bd0(bea_arg(&DAT_008550c0), bea_arg(this_));
  FUN_004e5bd0(bea_arg(&DAT_008550b0), bea_arg(this_));
  FUN_004e5bd0(bea_arg(&DAT_008550a0), bea_arg(this_));
  return CComplexThing__vslot2(bea_arg((CComplexThing *)this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e65b0, ap_004e65b0));
