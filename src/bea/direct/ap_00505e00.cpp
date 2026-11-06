// auto-ported from 00505e00_FUN_00505e00.c (FUN_00505e00, 353 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_008553ec GLOBAL_AT(undefined4*, 0x008553ec)
typedef uint32_t (BEA_THISCALL* FUN_004f8140_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f8140_t> FUN_004f8140 = {(FUN_004f8140_t)0x004f8140};
typedef uint32_t (BEA_STDCALL* FUN_0055dc20_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055dc20_t> FUN_0055dc20 = {(FUN_0055dc20_t)0x0055dc20};

static void * BEA_THISCALL ap_00505e00(void * this_, undefined4 param_1, undefined4 param_2)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_40 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x40);
  undefined4 (&local_3c)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0x40 - 0x3c);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x40 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x4);
  *(undefined4 *)((int)this_ + 4) = 0;
  *(undefined ***)this_ = ((void*)0x005d8824);
  local_4 = 0;
  FUN_0055dc20(bea_arg((int)this_ + 0x14), bea_arg(8), bea_arg(2), bea_arg(((void*)0x00456830)), bea_arg(((void*)0x004cb050)));
  *(undefined4 *)((int)this_ + 0x2c) = 0;
  *(undefined4 *)((int)this_ + 0xa8) = param_2;
  local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),2);
  *(undefined ***)this_ = ((void*)0x005dfc94);
  *(undefined4 *)((int)this_ + 100) = 0xc3480000;
  *(undefined4 *)((int)this_ + 0x60) = 0;
  *(undefined4 *)((int)this_ + 0x68) = 0;
  *(undefined4 *)((int)this_ + 0x70) = 0xffffffff;
  *(undefined4 *)((int)this_ + 0x74) = 0xffffffff;
  *(undefined4 *)((int)this_ + 0x6c) = 0;
  *(undefined4 *)((int)this_ + 0x7c) = 0;
  *(undefined4 *)((int)this_ + 0x78) = 0;
  *(undefined4 *)((int)this_ + 0xa4) = param_1;
  FUN_004f8140(bea_arg(local_3c), bea_arg(0), bea_arg(0), bea_arg(0));
  puVar5 = local_3c;
  puVar6 = (undefined4 *)((int)this_ + 0x30);
  for (iVar3 = 0xc; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)((int)this_ + 0x84) = 0xbf800000;
  *(undefined4 *)((int)this_ + 0x80) = 0;
  *(undefined4 *)((int)this_ + 0x88) = 0xbf800000;
  *(undefined4 *)((int)this_ + 0x94) = 0;
  *(undefined4 *)((int)this_ + 0x98) = 0;
  *(undefined4 *)((int)this_ + 0x8c) = 0xbf800000;
  *(undefined4 *)((int)this_ + 0x90) = local_40;
  iVar4 = 0;
  iVar3 = *(int *)(*(int *)((int)this_ + 0xa4) + 0xc + *(int *)((int)this_ + 0x68) * 4);
  piVar1 = (int *)*DAT_008553ec;
  DAT_008553ec[2] = (int)piVar1;
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  while (BEA_LOOP_GUARD((iVar2 != 0))) {
    if (iVar4 == iVar3) goto LAB_00505f3a;
    iVar4 = iVar4 + 1;
    piVar1 = *(int **)(DAT_008553ec[2] + 4);
    DAT_008553ec[2] = (int)piVar1;
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar1;
    }
  }
  iVar2 = 0;
LAB_00505f3a:
  *(int *)((int)this_ + 0xa0) = iVar2;
  *(undefined4 *)((int)this_ + 0x9c) = 1;
  return (void *)(this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00505e00, ap_00505e00));
