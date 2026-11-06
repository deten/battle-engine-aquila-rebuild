// auto-ported from 0042d8e0_FUN_0042d8e0.c (FUN_0042d8e0, 203 bytes) by tools/autoport.py
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
typedef uint32_t (BEA_THISCALL* FUN_00547d90_t)(uint32_t);
static const bea_guard<FUN_00547d90_t> FUN_00547d90 = {(FUN_00547d90_t)0x00547d90};
typedef undefined4 (BEA_THISCALL* FUN_00548c00_t)(uint32_t);
static const bea_guard<FUN_00548c00_t> FUN_00548c00 = {(FUN_00548c00_t)0x00548c00};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static uint32_t BEA_THISCALL ap_0042d8e0(void * this_)
{
  undefined4 *puVar1;
  undefined1 *puStack_8;
  uint local_4;
  *(undefined ***)this_ = ((void*)0x005d977c);
  local_4 = 1;
  if ((*(char *)((int)this_ + 0x161) != '\0') || (*(char *)((int)this_ + 0x160) != '\0')) {
    FUN_00548c00(bea_arg((void *)((int)this_ + 0x2c)));
  }
  puVar1 = *(undefined4 **)((int)this_ + 4);
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
  FUN_004e5c60(bea_arg((void *)((int)this_ + 4)));
  local_4 = local_4 & 0xffffff00;
  FUN_00547d90(bea_arg((void *)((int)this_ + 0x2c)));
  local_4 = 0xffffffff;
  return FUN_004e5c60(bea_arg((void *)((int)this_ + 4)));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042d8e0, ap_0042d8e0));
