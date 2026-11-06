// auto-ported from 004b8f00_FUN_004b8f00.c (FUN_004b8f00, 260 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00807418 GLOBAL_AT(int, 0x00807418)
typedef uint32_t (BEA_THISCALL* FUN_004bac40_t)(uint32_t);
static const bea_guard<FUN_004bac40_t> FUN_004bac40 = {(FUN_004bac40_t)0x004bac40};
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};

static uint32_t BEA_THISCALL ap_004b8f00(void * this_)
{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 *puStack_8;
  uint local_4;
  *(undefined ***)this_ = ((void*)0x005dc70c);
  puVar1 = *(undefined4 **)((int)this_ + 0x18);
  local_4 = 1;
  *(undefined4 **)((int)this_ + 0x20) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)*puVar1;
  }
  while (BEA_LOOP_GUARD((piVar2 != (int *)0x0))) {
    if (piVar2 != (int *)0x0) {
      bea_vcall<uint32_t>(piVar2, 0x4, 1);
    }
    puVar1 = *(undefined4 **)(*(int *)((int)this_ + 0x20) + 4);
    *(undefined4 **)((int)this_ + 0x20) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)*puVar1;
    }
  }
  FUN_004e5c60(bea_arg((void *)((int)this_ + 0x18)));
  *(undefined4 *)((int)this_ + 0x28) = 0;
  *(undefined4 *)((int)this_ + 0x34) = 0;
  if (DAT_00807418 != 0) {
    FUN_004f27e0(bea_arg((void *)(DAT_00807418 + 8)));
    DAT_00807418 = 0;
  }
  if (*(int *)((int)this_ + 8) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 8) + 8)));
    *(undefined4 *)((int)this_ + 8) = 0;
  }
  if (*(int *)((int)this_ + 0xc) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0xc) + 8)));
    *(undefined4 *)((int)this_ + 0xc) = 0;
  }
  if (*(int *)((int)this_ + 0x10) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x10) + 8)));
    *(undefined4 *)((int)this_ + 0x10) = 0;
  }
  if (*(int *)((int)this_ + 0x14) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x14) + 8)));
    *(undefined4 *)((int)this_ + 0x14) = 0;
  }
  local_4 = local_4 & 0xffffff00;
  FUN_004e5c60(bea_arg((void *)((int)this_ + 0x18)));
  local_4 = 0xffffffff;
  return FUN_004bac40(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b8f00, ap_004b8f00));
