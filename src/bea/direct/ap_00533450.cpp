// auto-ported from 00533450_FUN_00533450.c (FUN_00533450, 175 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004bac40_t)(uint32_t);
static const bea_guard<FUN_004bac40_t> FUN_004bac40 = {(FUN_004bac40_t)0x004bac40};
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};

static uint32_t BEA_THISCALL ap_00533450(void * this_)
{
  int *this_00;
  undefined4 *puVar1;
  int *piVar2;
  undefined1 *puStack_8;
  uint local_4;
  *(undefined ***)this_ = ((void*)0x005e4f08);
  local_4 = 1;
  if (*(undefined4 **)((int)this_ + 0xc) != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(*(undefined4 **)((int)this_ + 0xc), 0x0, 1);
  }
  this_00 = (int *)((int)this_ + 0x28);
  *(undefined4 *)((int)this_ + 0xc) = 0;
  puVar1 = (undefined4 *)*this_00;
  *(undefined4 **)((int)this_ + 0x30) = puVar1;
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
    puVar1 = *(undefined4 **)(*(int *)((int)this_ + 0x30) + 4);
    *(undefined4 **)((int)this_ + 0x30) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)*puVar1;
    }
  }
  FUN_004e5c60(bea_arg(this_00));
  local_4 = local_4 & 0xffffff00;
  FUN_004e5c60(bea_arg(this_00));
  local_4 = 0xffffffff;
  return FUN_004bac40(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00533450, ap_00533450));
