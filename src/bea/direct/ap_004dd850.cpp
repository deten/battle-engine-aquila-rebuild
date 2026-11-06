// auto-ported from 004dd850_vslot3.c (CRTTree::vslot3, 266 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CRTTree;
typedef char fStack_2c;
#define DAT_0089c9a4 GLOBAL_AT(int, 0x0089c9a4)
#define DAT_0089ce4c GLOBAL_AT(int, 0x0089ce4c)
#define DAT_006321a0 GLOBAL_AT(float, 0x006321a0)
#define DAT_0083cd58 GLOBAL_AT(char, 0x0083cd58)
typedef uint32_t (BEA_THISCALL* FUN_00543300_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00543300_t> FUN_00543300 = {(FUN_00543300_t)0x00543300};

static void BEA_THISCALL ap_004dd850(CRTTree * this_)
{
  int iVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;

  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)
  float &local_30 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x30);
  float &fStack_2c = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x2c);
  float &fStack_28 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x28);
  float &fStack_20 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x20);
  float &fStack_1c = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x1c);
  float &fStack_18 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x18);
  float &fStack_14 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x14);
  undefined1 (&auStack_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x30 - 0x10);
  bea_vcall<uint32_t>((&DAT_0089c9a4)[DAT_0089ce4c], 0x0, &local_30);
  pfVar3 = (float *)bea_vcall<uint32_t>(*(undefined4 **)(this_ + 8), 0x0, auStack_10);
  fStack_20 = *pfVar3;
  fStack_1c = pfVar3[1];
  local_30 = local_30 - fStack_20;
  fStack_18 = pfVar3[2];
  iVar1 = *(int *)(this_ + 8);
  fStack_14 = pfVar3[3];
  fStack_2c = fStack_2c - fStack_1c;
  fVar2 = local_30 * local_30 + fStack_2c * fStack_2c;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar1 + -8;
  }
  if (((fVar2 - DAT_006321a0 * DAT_006321a0 <= 0.0f) || (*(int *)(iVar4 + 0x48) != 0)) &&
     ((char)DAT_0083cd58 == '\0')) {
    return;
  }
  if (((fStack_18 - fStack_28) * (fStack_18 - fStack_28)) / (fVar2 + 0.01f) < *(float *)(this_ + 0x2c)
     ) {
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar1 + -8;
    }
    if (*(int *)(iVar4 + 0x48) == 0) goto LAB_004dd94e;
  }
  FUN_00543300(bea_arg(*(void **)(this_ + 0x18)), bea_arg(iVar1), bea_arg(0xff), bea_arg(0));
LAB_004dd94e:
  *(undefined4 *)(this_ + 0x20) = 1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dd850, ap_004dd850));
