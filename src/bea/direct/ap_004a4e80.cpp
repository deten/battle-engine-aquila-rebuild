// auto-ported from 004a4e80_FUN_004a4e80.c (FUN_004a4e80, 165 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};

static uint32_t BEA_THISCALL ap_004a4e80(void * this_)
{
  undefined4 *puVar1;
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined ***)this_ = ((void*)0x005dc650);
  puVar1 = *(undefined4 **)((int)this_ + 8);
  *(undefined4 **)((int)this_ + 0x10) = puVar1;
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
    puVar1 = *(undefined4 **)(*(int *)((int)this_ + 0x10) + 4);
    *(undefined4 **)((int)this_ + 0x10) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = (undefined4 *)*puVar1;
    }
  }
  FUN_004e5c60(bea_arg((void *)((int)this_ + 8)));
  if (*(int *)((int)this_ + 0x24) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x24) + 8)));
    *(undefined4 *)((int)this_ + 0x24) = 0;
  }
  return FUN_004e5c60(bea_arg((void *)((int)this_ + 8)));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a4e80, ap_004a4e80));
