// auto-ported from 00402030_vslot18.c (CActor::vslot18, 41 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CActor;
typedef char CThing;
typedef uint32_t (BEA_THISCALL* CThing__vslot18_t)(uint32_t);
static const bea_guard<CThing__vslot18_t> CThing__vslot18 = {(CThing__vslot18_t)0x004f3c50};

static CActor * BEA_THISCALL ap_00402030(CActor * this_)
{
  CThing__vslot18(bea_arg((CThing *)this_));
  *(undefined4 *)(this_ + 0x8c) = *(undefined4 *)(this_ + 0x1c);
  *(undefined4 *)(this_ + 0x90) = *(undefined4 *)(this_ + 0x20);
  *(undefined4 *)(this_ + 0x94) = *(undefined4 *)(this_ + 0x24);
  *(undefined4 *)(this_ + 0x98) = *(undefined4 *)(this_ + 0x28);
  return this_ + 0x1c;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00402030, ap_00402030));
