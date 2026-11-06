// auto-ported from 004dd6b0_FUN_004dd6b0.c (FUN_004dd6b0, 181 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CTweakSLONG;
#define DAT_006321a0 GLOBAL_AT(int, 0x006321a0)
#define DAT_00631e88 GLOBAL_AT(int, 0x00631e88)
#define _DAT_00630e0c GLOBAL_AT(int, 0x00630e0c)
#define DAT_009c7558 GLOBAL_AT(int, 0x009c7558)
#define DAT_008aa990 GLOBAL_AT(int, 0x008aa990)
typedef uint32_t (BEA_THISCALL* CTweakSLONG__vslot0_t)(uint32_t, uint32_t);
static const bea_guard<CTweakSLONG__vslot0_t> CTweakSLONG__vslot0 = {(CTweakSLONG__vslot0_t)0x00528ad0};

static void BEA_CDECL ap_004dd6b0(int param_1)
{
  if (param_1 == 0) {
    DAT_006321a0 = 0x41200000;
    DAT_00631e88 = 0x40400000;
    _DAT_00630e0c = 0x3dcccccd;
    DAT_009c7558 = 0x41700000;
    CTweakSLONG__vslot0(bea_arg((CTweakSLONG *)&DAT_008aa990), bea_arg(0x3f800000));
  }
  else {
    if (param_1 == 1) {
      DAT_006321a0 = 0x41f00000;
      DAT_00631e88 = 0x3f800000;
      _DAT_00630e0c = 0x3f800000;
      DAT_009c7558 = 0x41f00000;
      CTweakSLONG__vslot0(bea_arg((CTweakSLONG *)&DAT_008aa990), bea_arg(0));
      return;
    }
    if (param_1 == 2) {
      DAT_006321a0 = 0x428c0000;
      DAT_00631e88 = 0x3e99999a;
      _DAT_00630e0c = 0x40000000;
      DAT_009c7558 = 0x42200000;
      CTweakSLONG__vslot0(bea_arg((CTweakSLONG *)&DAT_008aa990), bea_arg(0));
      return;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dd6b0, ap_004dd6b0));
