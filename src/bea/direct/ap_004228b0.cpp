// auto-ported from 004228b0_vslot36.c (CCarver::vslot36, 89 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CCarver;
typedef char CThing;
#define DAT_0063012c GLOBAL_AT(int, 0x0063012c)
typedef uint32_t (BEA_THISCALL* CThing__vslot36_t)(uint32_t, uint32_t);
static const bea_guard<CThing__vslot36_t> CThing__vslot36 = {(CThing__vslot36_t)0x004f36d0};

static void BEA_THISCALL ap_004228b0(CCarver * this_, uint param_1)
{
  undefined4 local_8;
  
  if (0.0f < *(float *)(this_ + 0x280)) {
    local_8 = (undefined4)(longlong)ROUND(255.0f - *(float *)(this_ + 0x280) * 2.55f);
    DAT_0063012c = local_8;
    param_1 = param_1 | 0x40;
  }
  CThing__vslot36(bea_arg((CThing *)this_), bea_arg(param_1));
  DAT_0063012c = 0xff;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004228b0, ap_004228b0));
