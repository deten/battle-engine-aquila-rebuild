// auto-ported from 004026e0_vslot0.c (CAirGuide::vslot0, 210 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CAirGuide;
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_004027c0_t)(uint32_t);
static const bea_guard<FUN_004027c0_t> FUN_004027c0 = {(FUN_004027c0_t)0x004027c0};
typedef uint32_t (BEA_THISCALL* FUN_004028e0_t)(uint32_t);
static const bea_guard<FUN_004028e0_t> FUN_004028e0 = {(FUN_004028e0_t)0x004028e0};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};

static void BEA_THISCALL ap_004026e0(CAirGuide * this_, uint32_t param_1_bits)
{float param_1_f = __builtin_bit_cast(float, param_1_bits);   // @autoport-float-param: the slot holds a pointer first, a float later

  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1_bits;
  if (*(short *)((int)param_1_bits + 4) == 2000) {
    FUN_004028e0(bea_arg(this_));
    uVar2 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
    uVar2 = uVar2 & 0x8000ffff;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xffff0000) + 1;
    }
    param_1_f = (float)(int)uVar2 * 7.6293945e-06f + DAT_00672fd0 + 0.5f;
    FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(2000), bea_arg(this_), bea_arg(&param_1_f), bea_arg(0), bea_arg(0), bea_arg(iVar1));
  }
  else if (*(short *)((int)param_1_bits + 4) == 0x7d1) {
    FUN_004027c0(bea_arg(this_));
    uVar2 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
    uVar2 = uVar2 & 0x8000ffff;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xffff0000) + 1;
    }
    param_1_f = (float)(int)uVar2 * 7.6293945e-06f + DAT_00672fd0 + 0.5f;
    FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0x7d1), bea_arg(this_), bea_arg(&param_1_f), bea_arg(0), bea_arg(0), bea_arg(iVar1));
    return;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004026e0, ap_004026e0));
