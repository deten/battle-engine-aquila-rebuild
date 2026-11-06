// auto-ported from 00423490_vslot0.c (CCarverGuide::vslot0, 120 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CAirGuide;
typedef char CCarverGuide;
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* CAirGuide__vslot0_t)(uint32_t, uint32_t);
static const bea_guard<CAirGuide__vslot0_t> CAirGuide__vslot0 = {(CAirGuide__vslot0_t)0x004026e0};
typedef uint32_t (BEA_THISCALL* FUN_00423510_t)(uint32_t);
static const bea_guard<FUN_00423510_t> FUN_00423510 = {(FUN_00423510_t)0x00423510};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};

static uint32_t BEA_THISCALL ap_00423490(CCarverGuide * this_, uint32_t param_1_bits)
{
float param_1_f = __builtin_bit_cast(float, param_1_bits);   // @autoport-float-param: the slot holds a pointer first, a float later

  int iVar1;
  uint uVar2;
  iVar1 = (int)param_1_bits;
  if (*(short *)((int)param_1_bits + 4) != 0x7d1) {
    return CAirGuide__vslot0(bea_arg((CAirGuide *)this_), bea_arg(param_1_f));
  }
  FUN_00423510(bea_arg(this_));
  uVar2 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
  uVar2 = uVar2 & 0x8000ffff;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xffff0000) + 1;
  }
  param_1_f = (float)(int)uVar2 * 3.8146973e-06f + DAT_00672fd0 + 0.25f;
  return FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0x7d1), bea_arg(this_), bea_arg(&param_1_f), bea_arg(0), bea_arg(0), bea_arg(iVar1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00423490, ap_00423490));
