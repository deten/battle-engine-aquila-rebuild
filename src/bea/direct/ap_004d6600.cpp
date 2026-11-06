// auto-ported from 004d6600_FUN_004d6600.c (FUN_004d6600, 170 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_0044b1d0_t)(uint32_t);
static const bea_guard<FUN_0044b1d0_t> FUN_0044b1d0 = {(FUN_0044b1d0_t)0x0044b1d0};
typedef uint32_t (BEA_THISCALL* FUN_004bac40_t)(uint32_t);
static const bea_guard<FUN_004bac40_t> FUN_004bac40 = {(FUN_004bac40_t)0x004bac40};
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static uint32_t BEA_THISCALL ap_004d6600(void * this_)
{
  int *piVar1;
  int iVar2;
  undefined1 *puStack_8;
  uint local_4;
  *(undefined ***)this_ = ((void*)0x005d8810);
  piVar1 = *(int **)((int)this_ + 0x1c);
  local_4 = 1;
  *(int **)((int)this_ + 0x24) = piVar1;
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  while (BEA_LOOP_GUARD((iVar2 != 0))) {
    if (iVar2 != 0) {
      FUN_0044b1d0(bea_arg((void *)(iVar2 + 0xc)));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar2));
    }
    piVar1 = *(int **)(*(int *)((int)this_ + 0x24) + 4);
    *(int **)((int)this_ + 0x24) = piVar1;
    if (piVar1 == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *piVar1;
    }
  }
  FUN_004e5c60(bea_arg((void *)((int)this_ + 0x1c)));
  local_4 = local_4 & 0xffffff00;
  FUN_004e5c60(bea_arg((void *)((int)this_ + 0x1c)));
  local_4 = 0xffffffff;
  return FUN_004bac40(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d6600, ap_004d6600));
