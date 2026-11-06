// auto-ported from 0049f820_vslot9.c (CMech::vslot9, 276 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CGroundUnit;
typedef char CMech;
#define DAT_0062e0d8 GLOBAL_AT(int, 0x0062e0d8)
typedef uint32_t (BEA_THISCALL* CGroundUnit__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CGroundUnit__vslot9_t> CGroundUnit__vslot9 = {(CGroundUnit__vslot9_t)0x0047c730};
typedef undefined4 (BEA_THISCALL* FUN_004aa8a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa8a0_t> FUN_004aa8a0 = {(FUN_004aa8a0_t)0x004aa8a0};

static int BEA_THISCALL ap_0049f820(CMech * this_, int param_1)
{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  void *this_00;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  undefined1 (&auStack_10)[8] = *reinterpret_cast<undefined1 (*)[8]>(bea_frame_ + 0x10 - 0x10);
  float &fStack_8 = *reinterpret_cast<float *>(bea_frame_ + 0x10 - 0x8);
  CGroundUnit__vslot9(bea_arg((CGroundUnit *)this_), bea_arg(param_1));
  bea_vcall<uint32_t>(this_, 0xf0, 1,1,0);
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x3bc) + 0xb8);
  *(undefined4 *)(this_ + 300) = uVar1;
  *(undefined4 *)(this_ + 0x130) = uVar1;
  *(undefined4 *)(this_ + 0x134) = uVar1;
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x3bc) + 200);
  *(undefined4 *)(this_ + 0x100) = uVar1;
  *(undefined4 *)(this_ + 0x104) = uVar1;
  *(undefined4 *)(this_ + 0x108) = *(undefined4 *)(*(int *)(param_1 + 0x3bc) + 0xd0);
  bea_vcall<uint32_t>(this_, 0x1dc);
  bea_vcall<uint32_t>(this_, 0x1d8, param_1);
  bea_vcall<uint32_t>(this_, 0x1d4, param_1);
  iVar2 = bea_vcall<uint32_t>(this_, 0x168, auStack_10);
  *(undefined4 *)(this_ + 0x264) = 0;
  *(undefined4 *)(this_ + 0x268) = 0;
  *(float *)(this_ + 0x260) = fStack_8 - *(float *)(this_ + 0x24);
  if (*(int **)(this_ + 0x30) != (int *)0x0) {
    iVar3 = bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
    iVar2 = 0;
    if (iVar3 != 0) {
      if (*(int **)(this_ + 0x30) == (int *)0x0) {
        this_00 = (void *)0x0;
      }
      else {
        this_00 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
      }
      iVar2 = FUN_004aa8a0(bea_arg(this_00), bea_arg(&DAT_0062e0d8));
      if (iVar2 != 0) {
        *(undefined4 *)(this_ + 0x268) = *(undefined4 *)(*(int *)(iVar2 + 0xfc) + 0x18);
      }
    }
  }
  return iVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0049f820, ap_0049f820));
