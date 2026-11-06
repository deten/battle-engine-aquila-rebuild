// auto-ported from 004f84e0_FUN_004f84e0.c (FUN_004f84e0, 486 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_004013d0_t)(uint32_t);
static const bea_guard<FUN_004013d0_t> FUN_004013d0 = {(FUN_004013d0_t)0x004013d0};
typedef uint32_t (BEA_THISCALL* FUN_004cb050_t)(uint32_t);
static const bea_guard<FUN_004cb050_t> FUN_004cb050 = {(FUN_004cb050_t)0x004cb050};
typedef uint32_t (BEA_THISCALL* FUN_004cb0b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cb0b0_t> FUN_004cb0b0 = {(FUN_004cb0b0_t)0x004cb0b0};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static uint32_t BEA_THISCALL ap_004f84e0(void * this_)
{
  int *this_00;
  int *this_01;
  void *pvVar1;
  undefined4 *puVar2;
  undefined1 *puStack_8;
  int local_4;
  *(undefined ***)this_ = ((void*)0x005df998);
  *(undefined ***)((int)this_ + 8) = ((void*)0x005df920);
  local_4 = 8;
  if (*(int **)((int)this_ + 0x13c) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x13c), 0x4, 1);
    *(undefined4 *)((int)this_ + 0x13c) = 0;
  }
  if (*(void **)((int)this_ + 0x1ac) != (void *)0x0) {
    FUN_004cb0b0(bea_arg(*(void **)((int)this_ + 0x1ac)), bea_arg(0));
    pvVar1 = *(void **)((int)this_ + 0x1ac);
    if (pvVar1 != (void *)0x0) {
      FUN_004cb050(bea_arg(pvVar1));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
    }
    *(undefined4 *)((int)this_ + 0x1ac) = 0;
  }
  while (BEA_LOOP_GUARD(((puVar2 = *(undefined4 **)((int)this_ + 0x1d4), puVar2 != (undefined4 *)0x0 &&
         (pvVar1 = (void *)*puVar2, pvVar1 != (void *)0x0))))) {
    FUN_004e5bd0(bea_arg((int *)((int)this_ + 0x1d4)), bea_arg(pvVar1));
    FUN_004cb0b0(bea_arg(pvVar1), bea_arg(0));
    FUN_004cb050(bea_arg(pvVar1));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
  }
  this_00 = (int *)((int)this_ + 0x1b4);
  while (BEA_LOOP_GUARD((((undefined4 *)*this_00 != (undefined4 *)0x0 &&
         (pvVar1 = *(void **)*this_00, pvVar1 != (void *)0x0))))) {
    FUN_004e5bd0(bea_arg(this_00), bea_arg(pvVar1));
    FUN_004cb0b0(bea_arg(pvVar1), bea_arg(0));
    FUN_004cb050(bea_arg(pvVar1));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
  }
  this_01 = (int *)((int)this_ + 0x1c4);
  while (BEA_LOOP_GUARD((((undefined4 *)*this_01 != (undefined4 *)0x0 &&
         (pvVar1 = *(void **)*this_01, pvVar1 != (void *)0x0))))) {
    FUN_004e5bd0(bea_arg(this_01), bea_arg(pvVar1));
    FUN_004cb0b0(bea_arg(pvVar1), bea_arg(0));
    FUN_004cb050(bea_arg(pvVar1));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
  }
  (*(uint8_t*)((char*)&local_4 + 0)) = 7;
  FUN_004e5c60(bea_arg((void *)((int)this_ + 0x1d4)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 6;
  FUN_004e5c60(bea_arg(this_01));
  (*(uint8_t*)((char*)&local_4 + 0)) = 5;
  FUN_004e5c60(bea_arg(this_00));
  (*(uint8_t*)((char*)&local_4 + 0)) = 4;
  FUN_004e5c60(bea_arg((void *)((int)this_ + 0x19c)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 3;
  FUN_004e5c60(bea_arg((void *)((int)this_ + 0x18c)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 2;
  FUN_004e5c60(bea_arg((void *)((int)this_ + 0x17c)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 1;
  if ((*(int *)((int)this_ + 0x148) != 0) &&
     (pvVar1 = *(void **)(*(int *)((int)this_ + 0x148) + 4), pvVar1 != (void *)0x0)) {
    FUN_004e5bd0(bea_arg(pvVar1), bea_arg((int)this_ + 0x148));
  }
  local_4 = (uint)((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu) << 8;
  if ((*(int *)((int)this_ + 0x144) != 0) &&
     (pvVar1 = *(void **)(*(int *)((int)this_ + 0x144) + 4), pvVar1 != (void *)0x0)) {
    FUN_004e5bd0(bea_arg(pvVar1), bea_arg((int)this_ + 0x144));
  }
  local_4 = 0xffffffff;
  return FUN_004013d0(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f84e0, ap_004f84e0));
