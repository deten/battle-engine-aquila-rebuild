// auto-ported from 004fe540_vslot107.c (CUnit::vslot107, 117 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CUnit;
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};

static int BEA_THISCALL ap_004fe540(CUnit * this_, float param_1)
{
  int local_8 [2];
  
  if (*(int *)(this_ + 0x218) == 0) {
    local_8[0] = 0xbf800000;
    FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0xfa5), bea_arg(this_), bea_arg(local_8), bea_arg(0), bea_arg(0), bea_arg(0));
  }
  local_8[0] = (int)(longlong)ROUND(param_1 * 100.0f);
  local_8[0] = *(int *)(this_ + 0x218) + local_8[0];
  *(int *)(this_ + 0x218) = local_8[0];
  if (100 < local_8[0]) {
    *(undefined4 *)(this_ + 0x218) = 100;
  }
  *(undefined4 *)(this_ + 0x21c) = 10;
  return local_8[0];
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fe540, ap_004fe540));
