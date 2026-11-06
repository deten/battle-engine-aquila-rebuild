// auto-ported from 0047bf60_vslot69.c (CBomber::vslot69, 50 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CAirUnit;
typedef char CBomber;
typedef uint32_t (BEA_THISCALL* CAirUnit__vslot69_t)(uint32_t);
static const bea_guard<CAirUnit__vslot69_t> CAirUnit__vslot69 = {(CAirUnit__vslot69_t)0x00403760};
typedef uint32_t (BEA_THISCALL* FUN_004fd230_t)(uint32_t);
static const bea_guard<FUN_004fd230_t> FUN_004fd230 = {(FUN_004fd230_t)0x004fd230};

static void BEA_THISCALL ap_0047bf60(CBomber * this_)
{
  CAirUnit__vslot69(bea_arg((CAirUnit *)this_));
  if ((*(int *)(*(int *)(this_ + 0x164) + 0x11c) == 0) &&
     (*(int *)(*(int *)(this_ + 0x164) + 0x124) == 0)) {
    FUN_004fd230(bea_arg(this_));
    bea_vcall<uint32_t>(this_, 0x38);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047bf60, ap_0047bf60));
