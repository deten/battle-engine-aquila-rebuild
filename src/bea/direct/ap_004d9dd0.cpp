// auto-ported from 004d9dd0_vslot68.c (CRound::vslot68, 282 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x50: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CActor;
typedef char CRound;
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
typedef uint32_t (BEA_THISCALL* CActor__vslot68_t)(uint32_t);
static const bea_guard<CActor__vslot68_t> CActor__vslot68 = {(CActor__vslot68_t)0x00402000};
typedef int (BEA_THISCALL* FUN_00490a40_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00490a40_t> FUN_00490a40 = {(FUN_00490a40_t)0x00490a40};
// @autoport-this-assumed: this_ passed to FUN_004d9f30 (ECX = this, checked in the disassembly)
typedef uint32_t (BEA_THISCALL* FUN_004d9f30_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004d9f30_t> FUN_004d9f30 = {(FUN_004d9f30_t)0x004d9f30};

static void BEA_THISCALL ap_004d9dd0(CRound * this_)
{
  int iVar1;

  alignas(16) uint8_t bea_frame_[0x50] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_50 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x50);
  undefined4 &local_4c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x4c);
  undefined4 &local_48 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x48);
  undefined4 &local_44 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x44);
  undefined ** &local_40 = *reinterpret_cast<undefined ** *>(bea_frame_ + 0x50 - 0x40);
  undefined4 &local_3c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x3c);
  undefined4 &local_38 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x38);
  undefined4 &local_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x34);
  undefined4 &local_2c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x2c);
  undefined4 &local_28 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x28);
  undefined4 &local_24 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x24);
  undefined4 &local_20 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x20);
  undefined4 &local_1c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x1c);
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x18);
  undefined4 &local_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x14);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x10);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x50 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x4);
  if (*(float *)(*(int *)(this_ + 0xf0) + 0x30) != 0.0f) {
    CActor__vslot68(bea_arg((CActor *)this_));
    return;
  }
  if (*(int *)(*(int *)(this_ + 0xf0) + 0x60) == 0) {
    local_2c = *(undefined4 *)(this_ + 0x8c);
    local_28 = *(undefined4 *)(this_ + 0x90);
    local_40 = ((void*)0x005d8bfc);
    local_24 = *(undefined4 *)(this_ + 0x94);
    local_20 = *(undefined4 *)(this_ + 0x98);
    local_1c = *(undefined4 *)(this_ + 0x1c);
    local_18 = *(undefined4 *)(this_ + 0x20);
    local_14 = *(undefined4 *)(this_ + 0x24);
    local_10 = *(undefined4 *)(this_ + 0x28);
    iVar1 = FUN_00490a40(bea_arg(&DAT_006fadc8), bea_arg(&local_40), bea_arg(&local_50), bea_arg(0));
    if (iVar1 != 0) {
      *(undefined4 *)(this_ + 0x1c) = local_50;
      *(undefined4 *)(this_ + 0x20) = local_4c;
      *(undefined4 *)(this_ + 0x24) = local_48;
      *(undefined4 *)(this_ + 0x28) = local_44;
    }
    FUN_004d9f30(bea_arg(this_), bea_arg(1), bea_arg(0), bea_arg(0));
    bea_vcall<uint32_t>(this_, 0xc8);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d9dd0, ap_004d9dd0));
