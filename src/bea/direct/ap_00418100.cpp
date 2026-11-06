// auto-ported from 00418100_vslot37.c (CBuilding::vslot37, 22 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CBuilding;
typedef char CThing;
typedef uint32_t (BEA_THISCALL* CThing__vslot37_t)(uint32_t);
static const bea_guard<CThing__vslot37_t> CThing__vslot37 = {(CThing__vslot37_t)0x004f3710};

static void BEA_THISCALL ap_00418100(CBuilding * this_)
{
  if ((*(int *)(this_ + 0x178) != 0) && (*(int *)(*(int *)(this_ + 0x178) + 0x2c) == 1)) {
    return;
  }
  CThing__vslot37(bea_arg((CThing *)this_));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00418100, ap_00418100));
