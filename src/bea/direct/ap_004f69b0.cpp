// auto-ported from 004f69b0_FUN_004f69b0.c (FUN_004f69b0, 228 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008406b8 GLOBAL_AT(undefined4, 0x008406b8)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
#define s_C__dev_ONSLAUGHT2_tree_cpp_00633a84 ((char*)0x00633a84)
typedef uint32_t (BEA_THISCALL* FUN_0044b2d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b2d0_t> FUN_0044b2d0 = {(FUN_0044b2d0_t)0x0044b2d0};
typedef void * (BEA_THISCALL* FUN_004f5f60_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f5f60_t> FUN_004f5f60 = {(FUN_004f5f60_t)0x004f5f60};
typedef uint32_t (BEA_THISCALL* FUN_004f6b80_t)(uint32_t);
static const bea_guard<FUN_004f6b80_t> FUN_004f6b80 = {(FUN_004f6b80_t)0x004f6b80};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_004f69b0(void * this_, undefined4 param_1)
{
  void *this_00;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float10 fVar4;
  undefined4 uVar5;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  undefined4 (&local_3c)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0x40 - 0x3c);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x40 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x4);
  if (*(int *)((int)this_ + 0x48) == 0) {
    puVar2 = &DAT_008406b8 + *(int *)((int)this_ + 0x40) * 0xc;
    puVar3 = local_3c;
    for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    this_00 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0xc0), bea_arg(7), bea_arg(s_C__dev_ONSLAUGHT2_tree_cpp_00633a84), bea_arg(0xf0));
    if (this_00 == (void *)0x0) {
      iVar1 = 0;
    }
    else {
      uVar5 = param_1;
      fVar4 = (float10)bea_vcall<float10>(this_, 0x40);
      iVar1 = FUN_004f5f60(bea_arg(this_00), bea_arg(local_3c), bea_arg((float)(fVar4 + fVar4)), bea_arg(uVar5));
    }
    *(int *)((int)this_ + 0x48) = iVar1;
    *(undefined4 *)(iVar1 + 0xbc) = 0xbf800000;
    param_1 = 0x3f000000;
    FUN_0044b2d0(bea_arg(&DAT_00672fc8), bea_arg(&param_1), bea_arg(0xbb9), bea_arg(this_), bea_arg(0), bea_arg(0), bea_arg(0));
    FUN_004f6b80(bea_arg(this_));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f69b0, ap_004f69b0));
