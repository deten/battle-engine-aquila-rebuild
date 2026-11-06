// auto-ported from 004ffb60_vslot7.c (CUnitAI::vslot7, 72 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CUnitAI;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};

static undefined4 BEA_THISCALL ap_004ffb60(CUnitAI * this_)
{
  if ((*(int *)(this_ + 0x28) != 0) && (*(int *)(this_ + 0x2c) != 0)) {
    *(undefined4 *)(this_ + 0x20) = 2;
    *(float *)(this_ + 0x44) = DAT_00672fd0 + 10.0f;
    FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0xbba), bea_arg(this_), bea_arg(&DAT_00672fd0), bea_arg(0), bea_arg(0), bea_arg(0));
    return 1;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ffb60, ap_004ffb60));
