// auto-ported from 004b7ca0_FUN_004b7ca0.c (FUN_004b7ca0, 232 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004b7b80_t)(uint32_t);
static const bea_guard<FUN_004b7b80_t> FUN_004b7b80 = {(FUN_004b7b80_t)0x004b7b80};
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef void * (BEA_THISCALL* FUN_004e58a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e58a0_t> FUN_004e58a0 = {(FUN_004e58a0_t)0x004e58a0};
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};

static uint32_t BEA_THISCALL ap_004b7ca0(void * this_, int param_1)
{
  int *piVar1;
  bool bVar2;
  int iVar3;
  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_1c)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x20 - 0x1c);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x20 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x4);
  FUN_004e5840(bea_arg(local_1c));
  piVar1 = *(int **)((int)this_ + 0xc);
  bVar2 = false;
  *(int **)((int)this_ + 0x14) = piVar1;
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar1;
  }
  if (iVar3 != 0) {
    do {
      if ((*(int *)(param_1 + 0x2c) < *(int *)(iVar3 + 0x2c)) && (!bVar2)) {
        FUN_004e5b20(bea_arg(local_1c), bea_arg(param_1));
        bVar2 = true;
      }
      FUN_004e5b20(bea_arg(local_1c), bea_arg(iVar3));
      piVar1 = *(int **)(*(int *)((int)this_ + 0x14) + 4);
      *(int **)((int)this_ + 0x14) = piVar1;
      if (piVar1 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar1;
      }
    } while (BEA_LOOP_GUARD((iVar3 != 0)));
    if (bVar2) goto LAB_004b7d3c;
  }
  FUN_004e5b20(bea_arg(local_1c), bea_arg(param_1));
LAB_004b7d3c:
  FUN_004e58a0(bea_arg((void *)((int)this_ + 0xc)), bea_arg(local_1c));
  if ((*(int *)((int)this_ + 0x18) == 1) && (*(int *)((int)this_ + 0x30) == 1)) {
    FUN_004b7b80(bea_arg(this_));
  }
  return FUN_004e5c60(bea_arg(local_1c));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b7ca0, ap_004b7ca0));
