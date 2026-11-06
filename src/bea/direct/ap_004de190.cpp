// auto-ported from 004de190_vslot9.c (CSafeSide::vslot9, 52 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComplexThing;
typedef char CSafeSide;
#define DAT_00855160 GLOBAL_AT(int, 0x00855160)
typedef uint32_t (BEA_THISCALL* CComplexThing__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CComplexThing__vslot9_t> CComplexThing__vslot9 = {(CComplexThing__vslot9_t)0x004f3fd0};
typedef uint32_t (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5a80_t> FUN_004e5a80 = {(FUN_004e5a80_t)0x004e5a80};

static uint32_t BEA_THISCALL ap_004de190(CSafeSide * this_, int param_1)
{
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  this_[0x2c] = (CSafeSide)((byte)this_[0x2c] & 0xfd);
  FUN_004e5a80(bea_arg(&DAT_00855160), bea_arg(this_));
  *(undefined4 *)(this_ + 0x7c) = *(undefined4 *)(param_1 + 0xa0);
  return CComplexThing__vslot9(bea_arg((CComplexThing *)this_), bea_arg(param_1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004de190, ap_004de190));
