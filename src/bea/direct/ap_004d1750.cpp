// auto-ported from 004d1750_FUN_004d1750.c (FUN_004d1750, 182 bytes) by tools/autoport.py
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
typedef uint32_t (BEA_THISCALL* FUN_004a4680_t)(uint32_t);
static const bea_guard<FUN_004a4680_t> FUN_004a4680 = {(FUN_004a4680_t)0x004a4680};
typedef uint32_t (BEA_THISCALL* FUN_004bac40_t)(uint32_t);
static const bea_guard<FUN_004bac40_t> FUN_004bac40 = {(FUN_004bac40_t)0x004bac40};
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static uint32_t BEA_THISCALL ap_004d1750(void * this_)
{
  undefined4 *puVar1;
  void *this_00;
  undefined1 *puStack_8;
  int local_4;
  *(undefined ***)this_ = ((void*)0x005de71c);
  puVar1 = *(undefined4 **)((int)this_ + 0x3c);
  local_4 = 2;
  *(undefined4 **)((int)this_ + 0x44) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)*puVar1;
  }
  while (BEA_LOOP_GUARD((this_00 != (void *)0x0))) {
    if (this_00 != (void *)0x0) {
      FUN_0044b1d0(bea_arg(this_00));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_00));
    }
    puVar1 = *(undefined4 **)(*(int *)((int)this_ + 0x44) + 4);
    *(undefined4 **)((int)this_ + 0x44) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      this_00 = (void *)0x0;
    }
    else {
      this_00 = (void *)*puVar1;
    }
  }
  FUN_004e5c60(bea_arg((void *)((int)this_ + 0x3c)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 1;
  FUN_004e5c60(bea_arg((void *)((int)this_ + 0x3c)));
  local_4 = (uint)((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu) << 8;
  FUN_004a4680(bea_arg((void *)((int)this_ + 0xc)));
  local_4 = 0xffffffff;
  return FUN_004bac40(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d1750, ap_004d1750));
