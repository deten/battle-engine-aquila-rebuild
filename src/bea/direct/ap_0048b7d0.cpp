// auto-ported from 0048b7d0_FUN_0048b7d0.c (FUN_0048b7d0, 265 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef uint32_t (BEA_THISCALL* FUN_0048c3b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0048c3b0_t> FUN_0048c3b0 = {(FUN_0048c3b0_t)0x0048c3b0};

static uint32_t BEA_THISCALL ap_0048b7d0(void * this_)
{
  undefined4 *puVar1;
  void *this_00;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  void * &local_4 = *reinterpret_cast<void * *>(bea_frame_ + 0x10 - 0x4);
  puVar1 = *(undefined4 **)((int)this_ + 8);
  *(undefined4 **)((int)this_ + 0x10) = puVar1;
  local_4 = this_;
  if (puVar1 == (undefined4 *)0x0) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)*puVar1;
  }
  while (BEA_LOOP_GUARD((this_00 != (void *)0x0))) {
    FUN_0048c3b0(bea_arg(this_00), bea_arg(1));
    puVar1 = *(undefined4 **)(*(int *)((int)this_ + 0x10) + 4);
    *(undefined4 **)((int)this_ + 0x10) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      this_00 = (void *)0x0;
    }
    else {
      this_00 = (void *)*puVar1;
    }
  }
  iVar5 = 0x14;
  do {
    piVar3 = *(int **)((int)this_ + 8);
    *(int **)((int)this_ + 0x10) = piVar3;
    if (piVar3 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar3;
    }
    while (BEA_LOOP_GUARD((iVar2 != 0))) {
      puVar1 = *(undefined4 **)(iVar2 + 0x7c);
      *(undefined4 **)(iVar2 + 0x84) = puVar1;
      if (puVar1 == (undefined4 *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)*puVar1;
      }
      while (BEA_LOOP_GUARD((piVar3 != (int *)0x0))) {
        iVar4 = *(int *)(*piVar3 + 0xb0) + 1;
        if (iVar4 < *(int *)(iVar2 + 0xb0)) {
          *(int *)(iVar2 + 0xb0) = iVar4;
        }
        iVar4 = *(int *)(*piVar3 + 0xac) + 1;
        if (iVar4 < *(int *)(iVar2 + 0xac)) {
          *(int *)(iVar2 + 0xac) = iVar4;
        }
        puVar1 = *(undefined4 **)(*(int *)(iVar2 + 0x84) + 4);
        *(undefined4 **)(iVar2 + 0x84) = puVar1;
        if (puVar1 == (undefined4 *)0x0) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = (int *)*puVar1;
        }
      }
      piVar3 = *(int **)(*(int *)((int)this_ + 0x10) + 4);
      *(int **)((int)this_ + 0x10) = piVar3;
      if (piVar3 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar3;
      }
    }
    iVar5 = iVar5 + -1;
  } while (BEA_LOOP_GUARD((iVar5 != 0)));
  local_4 = (void *)(uintptr_t)bea_piece32((DAT_00672fd0 + 0.25f));
  return FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0x3e9), bea_arg(this_), bea_arg(&local_4), bea_arg(0), bea_arg(0), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0048b7d0, ap_0048b7d0));
