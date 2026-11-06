// auto-ported from 004f7050_vslot0.c (CTree::vslot0, 48 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CThing;
typedef uint32_t (BEA_THISCALL* CThing__vslot0_t)(uint32_t, uint32_t);
static const bea_guard<CThing__vslot0_t> CThing__vslot0 = {(CThing__vslot0_t)0x004f3730};
typedef uint32_t (BEA_THISCALL* FUN_00426480_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00426480_t> FUN_00426480 = {(FUN_00426480_t)0x00426480};
typedef uint32_t (BEA_THISCALL* FUN_004f6b80_t)(uint32_t);
static const bea_guard<FUN_004f6b80_t> FUN_004f6b80 = {(FUN_004f6b80_t)0x004f6b80};

static uint32_t BEA_THISCALL ap_004f7050(CThing * this_, int param_1)
{
  if (*(short *)(param_1 + 4) == 3000) {
    return FUN_004f6b80(bea_arg(this_));
  }
  if (*(short *)(param_1 + 4) != 0xbb9) {
    return CThing__vslot0(bea_arg(this_), bea_arg(param_1));
  }
  return FUN_00426480(bea_arg(*(void **)(this_ + 0x38)), bea_arg(0xffffffff));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f7050, ap_004f7050));
