// auto-ported from 00442660_FUN_00442660.c (FUN_00442660, 145 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00855180 GLOBAL_AT(int, 0x00855180)
typedef uint32_t (BEA_THISCALL* FUN_004bac40_t)(uint32_t);
static const bea_guard<FUN_004bac40_t> FUN_004bac40 = {(FUN_004bac40_t)0x004bac40};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};

static uint32_t BEA_THISCALL ap_00442660(void * this_)
{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 *puStack_8;
  uint local_4;
  *(undefined ***)this_ = ((void*)0x005db02c);
  local_4 = 1;
  FUN_004e5bd0(bea_arg(&DAT_00855180), bea_arg(this_));
  puVar1 = *(undefined4 **)((int)this_ + 0x24);
  if (puVar1 == (undefined4 *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)*puVar1;
  }
  while (BEA_LOOP_GUARD((piVar2 != (int *)0x0))) {
    bea_vcall<uint32_t>(piVar2, 0x4, 1);
    puVar1 = (undefined4 *)puVar1[1];
    if (puVar1 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)*puVar1;
    }
  }
  local_4 = local_4 & 0xffffff00;
  FUN_004e5c60(bea_arg((void *)((int)this_ + 0x24)));
  local_4 = 0xffffffff;
  return FUN_004bac40(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00442660, ap_00442660));
