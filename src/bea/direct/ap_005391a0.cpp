// auto-ported from 005391a0_FUN_005391a0.c (FUN_005391a0, 243 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_004241e0_t)(uint32_t);
static const bea_guard<FUN_004241e0_t> FUN_004241e0 = {(FUN_004241e0_t)0x004241e0};
typedef uint32_t (BEA_THISCALL* FUN_00465570_t)(uint32_t);
static const bea_guard<FUN_00465570_t> FUN_00465570 = {(FUN_00465570_t)0x00465570};
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};
typedef uint32_t (BEA_THISCALL* FUN_00539510_t)(uint32_t);
static const bea_guard<FUN_00539510_t> FUN_00539510 = {(FUN_00539510_t)0x00539510};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static uint32_t BEA_THISCALL ap_005391a0(void * this_)
{
  undefined4 *puVar1;
  void *this_00;
  int *piVar2;
  int iVar3;
  undefined1 *puStack_8;
  uint local_4;
  *(undefined ***)this_ = ((void*)0x005e4f54);
  iVar3 = 0;
  local_4 = 1;
  if (0 < *(int *)((int)this_ + 100)) {
    do {
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)(*(int *)((int)this_ + 4) + iVar3 * 4)));
      iVar3 = iVar3 + 1;
    } while (BEA_LOOP_GUARD((iVar3 < *(int *)((int)this_ + 100))));
  }
  puVar1 = *(undefined4 **)((int)this_ + 0x48);
  *(undefined4 **)((int)this_ + 0x50) = puVar1;
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
    puVar1 = *(undefined4 **)(*(int *)((int)this_ + 0x50) + 4);
    *(undefined4 **)((int)this_ + 0x50) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)*puVar1;
    }
  }
  FUN_004e5c60(bea_arg((void *)((int)this_ + 0x48)));
  FUN_004241e0(bea_arg((void *)((int)this_ + 4)));
  this_00 = *(void **)((int)this_ + 0x58);
  *(undefined4 *)((int)this_ + 100) = 0;
  if (this_00 != (void *)0x0) {
    FUN_00539510(bea_arg(this_00));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_00));
  }
  *(undefined4 *)((int)this_ + 0x58) = 0;
  *(undefined4 *)((int)this_ + 0x5c) = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_004e5c60(bea_arg((void *)((int)this_ + 0x48)));
  local_4 = 0xffffffff;
  return FUN_00465570(bea_arg((void *)((int)this_ + 4)));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005391a0, ap_005391a0));
