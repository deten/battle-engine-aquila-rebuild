// auto-ported from 004d05e0_FUN_004d05e0.c (FUN_004d05e0, 251 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0082b490 GLOBAL_AT(int, 0x0082b490)
typedef uint32_t (BEA_THISCALL* FUN_004bac40_t)(uint32_t);
static const bea_guard<FUN_004bac40_t> FUN_004bac40 = {(FUN_004bac40_t)0x004bac40};
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};

static uint32_t BEA_THISCALL ap_004d05e0(void * this_)
{
  undefined4 *puVar1;
  undefined1 *puStack_8;
  uint local_4;
  *(undefined ***)this_ = ((void*)0x005de6fc);
  puVar1 = *(undefined4 **)((int)this_ + 0x14);
  local_4 = 1;
  *(undefined4 **)((int)this_ + 0x1c) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)*puVar1;
  }
  while (BEA_LOOP_GUARD((puVar1 != (undefined4 *)0x0))) {
    if (puVar1 != (undefined4 *)0x0) {
      bea_vcall<uint32_t>(puVar1, 0x0, 1);
    }
    puVar1 = *(undefined4 **)(*(int *)((int)this_ + 0x1c) + 4);
    *(undefined4 **)((int)this_ + 0x1c) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = (undefined4 *)*puVar1;
    }
  }
  FUN_004e5c60(bea_arg((void *)((int)this_ + 0x14)));
  if (*(int **)((int)this_ + 8) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)((int)this_ + 8), 0x4, 1);
    *(undefined4 *)((int)this_ + 8) = 0;
  }
  if (*(int **)((int)this_ + 0x3c) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x3c), 0x4, 1);
    *(undefined4 *)((int)this_ + 0x3c) = 0;
  }
  if (*(int *)((int)this_ + 0x40) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x40) + 8)));
    *(undefined4 *)((int)this_ + 0x40) = 0;
  }
  if (*(int *)((int)this_ + 0x44) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x44) + 8)));
    *(undefined4 *)((int)this_ + 0x44) = 0;
  }
  if (DAT_0082b490 != 0) {
    FUN_004f27e0(bea_arg((void *)(DAT_0082b490 + 8)));
    DAT_0082b490 = 0;
  }
  local_4 = local_4 & 0xffffff00;
  FUN_004e5c60(bea_arg((void *)((int)this_ + 0x14)));
  local_4 = 0xffffffff;
  return FUN_004bac40(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d05e0, ap_004d05e0));
