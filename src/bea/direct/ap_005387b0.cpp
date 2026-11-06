// auto-ported from 005387b0_FUN_005387b0.c (FUN_005387b0, 171 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_0042d9b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042d9b0_t> FUN_0042d9b0 = {(FUN_0042d9b0_t)0x0042d9b0};
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static uint32_t BEA_THISCALL ap_005387b0(void * this_)
{
  int *this_00;
  undefined4 *puVar1;
  undefined1 *puStack_8;
  undefined4 local_4;
  if (*(undefined4 **)this_ != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(*(undefined4 **)this_, 0x0, 1);
  }
  this_00 = (int *)((int)this_ + 4);
  *(undefined4 *)this_ = 0;
  puVar1 = (undefined4 *)*this_00;
  *(undefined4 **)((int)this_ + 0xc) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)*puVar1;
  }
  while (BEA_LOOP_GUARD((puVar1 != (undefined4 *)0x0))) {
    if (puVar1 != (undefined4 *)0x0) {
      if ((void *)*puVar1 != (void *)0x0) {
        FUN_0042d9b0(bea_arg((void *)*puVar1), bea_arg(puVar1));
      }
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(puVar1));
    }
    puVar1 = *(undefined4 **)(*(int *)((int)this_ + 0xc) + 4);
    *(undefined4 **)((int)this_ + 0xc) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = (undefined4 *)*puVar1;
    }
  }
  FUN_004e5c60(bea_arg(this_00));
  return FUN_004e5c60(bea_arg(this_00));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005387b0, ap_005387b0));
