// auto-ported from 00403760_vslot69.c (CAirUnit::vslot69, 56 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CActor;
typedef char CAirUnit;
typedef uint32_t (BEA_THISCALL* CActor__vslot69_t)(uint32_t);
static const bea_guard<CActor__vslot69_t> CActor__vslot69 = {(CActor__vslot69_t)0x00402010};
typedef uint32_t (BEA_THISCALL* FUN_004fd230_t)(uint32_t);
static const bea_guard<FUN_004fd230_t> FUN_004fd230 = {(FUN_004fd230_t)0x004fd230};

static void BEA_THISCALL ap_00403760(CAirUnit * this_)
{
  CActor__vslot69(bea_arg((CActor *)this_));
  if (((((byte)this_[0x2c] & 4) != 0) && (*(int *)(*(int *)(this_ + 0x164) + 0x11c) == 0)) &&
     (*(int *)(*(int *)(this_ + 0x164) + 0x124) == 0)) {
    FUN_004fd230(bea_arg(this_));
    bea_vcall<uint32_t>(this_, 0x38);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00403760, ap_00403760));
