// auto-ported from 004f6fd0_FUN_004f6fd0.c (FUN_004f6fd0, 125 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_0063012c GLOBAL_AT(int, 0x0063012c)
typedef uint32_t (BEA_THISCALL* CThing__vslot36_t)(uint32_t, uint32_t);
static const bea_guard<CThing__vslot36_t> CThing__vslot36 = {(CThing__vslot36_t)0x004f36d0};

static uint32_t BEA_THISCALL ap_004f6fd0(void * this_, undefined4 param_1)
{
  float fVar1;
  undefined4 local_8;
  
  if (0.0f < *(float *)(*(int *)((int)this_ + 0x48) + 0xbc)) {
    fVar1 = (*(float *)(*(int *)((int)this_ + 0x48) + 0xbc) + 5.0f) - DAT_00672fd0;
    if (fVar1 < 0.0f) {
      fVar1 = 0.0f;
    }
    local_8 = (undefined4)(longlong)ROUND(fVar1 * 0.2f * 255.0f);
    DAT_0063012c = local_8;
    CThing__vslot36(bea_arg(this_), bea_arg(param_1));
    DAT_0063012c = 0xff;
    return 1;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f6fd0, ap_004f6fd0));
