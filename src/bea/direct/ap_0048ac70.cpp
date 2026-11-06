// auto-ported from 0048ac70_vslot0.c (CInfantryGuide::vslot0, 107 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CInfantryGuide;
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef uint32_t (BEA_THISCALL* FUN_0048ace0_t)(uint32_t);
static const bea_guard<FUN_0048ace0_t> FUN_0048ace0 = {(FUN_0048ace0_t)0x0048ace0};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};

static void BEA_THISCALL ap_0048ac70(CInfantryGuide * this_, uint32_t param_1_bits)
{float param_1_f = __builtin_bit_cast(float, param_1_bits);   // @autoport-float-param: the slot holds a pointer first, a float later

  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1_bits;
  if (*(short *)((int)param_1_bits + 4) == 2000) {
    FUN_0048ace0(bea_arg(this_));
    uVar2 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
    uVar2 = uVar2 & 0x8000ffff;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xffff0000) + 1;
    }
    param_1_f = (float)(int)uVar2 * 3.8146973e-06f + DAT_00672fd0 + 0.25f;
    FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(2000), bea_arg(this_), bea_arg(&param_1_f), bea_arg(0), bea_arg(0), bea_arg(iVar1));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048ac70, ap_0048ac70));
