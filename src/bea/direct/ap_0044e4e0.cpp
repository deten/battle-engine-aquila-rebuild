// auto-ported from 0044e4e0_vslot95.c (CFenrir::vslot95, 102 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CFenrir;
typedef uint32_t (BEA_THISCALL* FUN_0044e300_t)(uint32_t);
static const bea_guard<FUN_0044e300_t> FUN_0044e300 = {(FUN_0044e300_t)0x0044e300};
typedef int (BEA_THISCALL* FUN_004b24d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004b24d0_t> FUN_004b24d0 = {(FUN_004b24d0_t)0x004b24d0};

static void BEA_THISCALL ap_0044e4e0(CFenrir * this_)
{
  void *this_00;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  undefined1 (&auStack_4)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x10 - 0x4);
  fVar4 = (float10)bea_vcall<float10>(this_ + 8, 0x18);
  iVar1 = bea_vcall<uint32_t>(this_ + 8, 0x1c);
  iVar2 = bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
  this_00 = (void *)**(undefined4 **)(iVar2 + 0x160);
  if (-1 < iVar1) {
    uVar3 = bea_vcall<uint32_t>(this_ + 8, 0x70);
    FUN_004b24d0(bea_arg(this_00), bea_arg((float)fVar4), bea_arg(iVar1), bea_arg(auStack_4), bea_arg(uVar3));
  }
  iVar1 = 2;
  do {
    FUN_0044e300(bea_arg(this_));
    iVar1 = iVar1 + -1;
  } while (BEA_LOOP_GUARD((iVar1 != 0)));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044e4e0, ap_0044e4e0));
