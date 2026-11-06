// auto-ported from 004802f0_vslot50.c (CHiveBoss::vslot50, 66 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CHiveBoss;
typedef char CUnit;
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef undefined4 (BEA_THISCALL* CUnit__vslot50_t)(uint32_t);
static const bea_guard<CUnit__vslot50_t> CUnit__vslot50 = {(CUnit__vslot50_t)0x004fd140};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};

static undefined4 BEA_THISCALL ap_004802f0(CHiveBoss * this_)
{
  int iVar1;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  CHiveBoss * &local_4 = *reinterpret_cast<CHiveBoss * *>(bea_frame_ + 0x10 - 0x4);
  local_4 = this_;
  iVar1 = CUnit__vslot50(bea_arg((CUnit *)this_));
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(this_ + 0x74) != 0) {
    local_4 = (CHiveBoss *)0xbf800000;
    FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(5000), bea_arg(this_), bea_arg(&local_4), bea_arg(0), bea_arg(0), bea_arg(0));
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004802f0, ap_004802f0));
