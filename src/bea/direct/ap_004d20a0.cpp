// auto-ported from 004d20a0_vslot68.c (CBomber::vslot68, 40 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CAirUnit;
typedef char CBomber;
typedef uint32_t (BEA_THISCALL* CAirUnit__vslot68_t)(uint32_t);
static const bea_guard<CAirUnit__vslot68_t> CAirUnit__vslot68 = {(CAirUnit__vslot68_t)0x00403730};
typedef uint32_t (BEA_THISCALL* FUN_004fd230_t)(uint32_t);
static const bea_guard<FUN_004fd230_t> FUN_004fd230 = {(FUN_004fd230_t)0x004fd230};

static void BEA_THISCALL ap_004d20a0(CBomber * this_)
{
  CAirUnit__vslot68(bea_arg((CAirUnit *)this_));
  if (*(int *)(*(int *)(this_ + 0x164) + 0x11c) == 0) {
    FUN_004fd230(bea_arg(this_));
    bea_vcall<uint32_t>(this_, 0x38);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d20a0, ap_004d20a0));
