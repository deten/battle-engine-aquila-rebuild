// auto-ported from 00403730_vslot68.c (CAirUnit::vslot68, 46 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CActor;
typedef char CAirUnit;
typedef uint32_t (BEA_THISCALL* CActor__vslot68_t)(uint32_t);
static const bea_guard<CActor__vslot68_t> CActor__vslot68 = {(CActor__vslot68_t)0x00402000};
typedef uint32_t (BEA_THISCALL* FUN_004fd230_t)(uint32_t);
static const bea_guard<FUN_004fd230_t> FUN_004fd230 = {(FUN_004fd230_t)0x004fd230};

static void BEA_THISCALL ap_00403730(CAirUnit * this_)
{
  CActor__vslot68(bea_arg((CActor *)this_));
  if ((((byte)this_[0x2c] & 4) != 0) && (*(int *)(*(int *)(this_ + 0x164) + 0x11c) == 0)) {
    FUN_004fd230(bea_arg(this_));
    bea_vcall<uint32_t>(this_, 0x38);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00403730, ap_00403730));
