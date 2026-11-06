// auto-ported from 004d3650_vslot68.c (CPod::vslot68, 100 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit uStack_4: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CActor;
typedef char CPod;
typedef uint32_t (BEA_THISCALL* CActor__vslot68_t)(uint32_t);
static const bea_guard<CActor__vslot68_t> CActor__vslot68 = {(CActor__vslot68_t)0x00402000};

static void BEA_THISCALL ap_004d3650(CPod * this_)
{
  undefined4 uStack_4 = 0;
  
  CActor__vslot68(bea_arg((CActor *)this_));
  if (*(int *)(this_ + 0x250) == 0) {
    bea_vcall<uint32_t>(this_, 0x148);
    *(undefined4 *)(this_ + 0x250) = 1;
    *(undefined4 *)(this_ + 0x7c) = 0;
    *(undefined4 *)(this_ + 0x80) = 0;
    *(undefined4 *)(this_ + 0x84) = 0;
    *(undefined4 *)(this_ + 0x88) = uStack_4;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d3650, ap_004d3650));
