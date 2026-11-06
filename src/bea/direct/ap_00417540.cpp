// auto-ported from 00417540_vslot36.c (CBuilding::vslot36, 77 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CBuilding;
typedef char CThing;
#define DAT_009c8010 GLOBAL_AT(int, 0x009c8010)
#define DAT_00660540 GLOBAL_AT(int, 0x00660540)
typedef uint32_t (BEA_THISCALL* CThing__vslot36_t)(uint32_t, uint32_t);
static const bea_guard<CThing__vslot36_t> CThing__vslot36 = {(CThing__vslot36_t)0x004f36d0};
typedef uint32_t (BEA_THISCALL* FUN_004ebfb0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004ebfb0_t> FUN_004ebfb0 = {(FUN_004ebfb0_t)0x004ebfb0};

static void BEA_THISCALL ap_00417540(CBuilding * this_, undefined4 param_1)
{
  if ((*(int *)(this_ + 0x178) != 0) || (((byte)this_[0x2c] & 4) == 0)) {
    CThing__vslot36(bea_arg((CThing *)this_), bea_arg(param_1));
    FUN_004ebfb0(bea_arg(&DAT_009c8010), bea_arg(this_), bea_arg(0));
    if ((0 < DAT_00660540) && (DAT_00660540 = DAT_00660540 + -1, 0 < DAT_00660540)) {
      bea_vcall<uint32_t>(this_, 0xd0);
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00417540, ap_00417540));
