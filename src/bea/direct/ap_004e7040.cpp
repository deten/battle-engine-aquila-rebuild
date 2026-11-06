// auto-ported from 004e7040_vslot0.c (CNormalSquad::vslot0, 45 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CNormalSquad;
typedef char CSquad;
typedef uint32_t (BEA_THISCALL* CSquad__vslot0_t)(uint32_t, uint32_t);
static const bea_guard<CSquad__vslot0_t> CSquad__vslot0 = {(CSquad__vslot0_t)0x004e65e0};
typedef uint32_t (BEA_THISCALL* FUN_004e8100_t)(uint32_t);
static const bea_guard<FUN_004e8100_t> FUN_004e8100 = {(FUN_004e8100_t)0x004e8100};
typedef uint32_t (BEA_THISCALL* FUN_004e83b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e83b0_t> FUN_004e83b0 = {(FUN_004e83b0_t)0x004e83b0};

static uint32_t BEA_THISCALL ap_004e7040(CNormalSquad * this_, int param_1)
{
  if (*(short *)(param_1 + 4) == 4000) {
    return FUN_004e8100(bea_arg(this_));
  }
  if (*(short *)(param_1 + 4) != 0xfa1) {
    return CSquad__vslot0(bea_arg((CSquad *)this_), bea_arg(param_1));
  }
  return FUN_004e83b0(bea_arg(this_), bea_arg(1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e7040, ap_004e7040));
