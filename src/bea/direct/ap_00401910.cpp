// auto-ported from 00401910_vslot20.c (CActor::vslot20, 145 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CActor;
typedef char CThing;
typedef uint32_t (BEA_THISCALL* CThing__vslot20_t)(uint32_t, uint32_t);
static const bea_guard<CThing__vslot20_t> CThing__vslot20 = {(CThing__vslot20_t)0x004f3ce0};
typedef undefined4 (BEA_THISCALL* FUN_00492ca0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00492ca0_t> FUN_00492ca0 = {(FUN_00492ca0_t)0x00492ca0};

static void BEA_THISCALL ap_00401910(CActor * this_, undefined4 *param_1)
{
  int iVar1;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  undefined2 &local_8 = *reinterpret_cast<undefined2 *>(bea_frame_ + 0x10 - 0x8);
  undefined2 &local_6 = *reinterpret_cast<undefined2 *>(bea_frame_ + 0x10 - 0x6);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0x4);
  if ((*(int *)(this_ + 0x18) != -1) && (this_ != (CActor *)0xfffffff4)) {
    local_8 = *(undefined2 *)(this_ + 0x14);
    local_6 = *(undefined2 *)(this_ + 0x16);
    local_4 = *(undefined4 *)(this_ + 0x18);
  }
  *(undefined4 *)(this_ + 0x8c) = *param_1;
  *(undefined4 *)(this_ + 0x90) = param_1[1];
  *(undefined4 *)(this_ + 0x94) = param_1[2];
  *(undefined4 *)(this_ + 0x98) = param_1[3];
  CThing__vslot20(bea_arg((CThing *)this_), bea_arg(param_1));
  if ((*(int *)(this_ + 0x18) != -1) && (this_ + 0xc != (CActor *)0x0)) {
    iVar1 = FUN_00492ca0(bea_arg(this_ + 0xc), bea_arg(this_ + 0x8c));
    if ((iVar1 != 0) && (*(int **)(this_ + 0x38) != (int *)0x0)) {
      bea_vcall<uint32_t>(*(int **)(this_ + 0x38), 0x14, &local_8,this_ + 0x14);
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00401910, ap_00401910));
