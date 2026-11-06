// auto-ported from 004a00a0_vslot50.c (CMech::vslot50, 122 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CGroundUnit;
typedef char CMech;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef undefined4 (BEA_THISCALL* CGroundUnit__vslot50_t)(uint32_t);
static const bea_guard<CGroundUnit__vslot50_t> CGroundUnit__vslot50 = {(CGroundUnit__vslot50_t)0x0047ce80};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef uint32_t (BEA_THISCALL* FUN_004fcfe0_t)(uint32_t);
static const bea_guard<FUN_004fcfe0_t> FUN_004fcfe0 = {(FUN_004fcfe0_t)0x004fcfe0};
typedef uint32_t (BEA_THISCALL* FUN_004fd230_t)(uint32_t);
static const bea_guard<FUN_004fd230_t> FUN_004fd230 = {(FUN_004fd230_t)0x004fd230};

static undefined4 BEA_THISCALL ap_004a00a0(CMech * this_)
{
  undefined4 uVar1;
  int iVar2;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  CMech * &local_4 = *reinterpret_cast<CMech * *>(bea_frame_ + 0x10 - 0x4);
  local_4 = this_;
  if (*(int *)(*(int *)(this_ + 0x164) + 0x130) != 0) {
    uVar1 = CGroundUnit__vslot50(bea_arg((CGroundUnit *)this_));
    FUN_004fd230(bea_arg(this_));
    bea_vcall<uint32_t>(this_, 0x38);
    return uVar1;
  }
  iVar2 = CGroundUnit__vslot50(bea_arg((CGroundUnit *)this_));
  if (iVar2 == 0) {
    return 0;
  }
  FUN_004fcfe0(bea_arg(this_));
  local_4 = (CMech *)(uintptr_t)bea_piece32((DAT_00672fd0 + 3.5f));
  FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0xfa4), bea_arg(this_), bea_arg(&local_4), bea_arg(0), bea_arg(0), bea_arg(0));
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a00a0, ap_004a00a0));
