// auto-ported from 0044d1f0_vslot68.c (CFeature::vslot68, 23 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CActor;
typedef char CFeature;
typedef uint32_t (BEA_THISCALL* CActor__vslot68_t)(uint32_t);
static const bea_guard<CActor__vslot68_t> CActor__vslot68 = {(CActor__vslot68_t)0x00402000};

static void BEA_THISCALL ap_0044d1f0(CFeature * this_)
{
  CActor__vslot68(bea_arg((CActor *)this_));
  if (((byte)this_[0x2c] & 4) != 0) {
    bea_vcall<uint32_t>(this_, 0x38);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044d1f0, ap_0044d1f0));
