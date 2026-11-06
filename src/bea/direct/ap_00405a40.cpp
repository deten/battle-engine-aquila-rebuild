// auto-ported from 00405a40_FUN_00405a40.c (FUN_00405a40, 822 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_004102a0_t)(uint32_t);
static const bea_guard<FUN_004102a0_t> FUN_004102a0 = {(FUN_004102a0_t)0x004102a0};
typedef uint32_t (BEA_THISCALL* FUN_00412cf0_t)(uint32_t);
static const bea_guard<FUN_00412cf0_t> FUN_00412cf0 = {(FUN_00412cf0_t)0x00412cf0};
typedef uint32_t (BEA_THISCALL* FUN_0044b1d0_t)(uint32_t);
static const bea_guard<FUN_0044b1d0_t> FUN_0044b1d0 = {(FUN_0044b1d0_t)0x0044b1d0};
typedef uint32_t (BEA_THISCALL* FUN_004cb050_t)(uint32_t);
static const bea_guard<FUN_004cb050_t> FUN_004cb050 = {(FUN_004cb050_t)0x004cb050};
typedef uint32_t (BEA_THISCALL* FUN_004cb0b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cb0b0_t> FUN_004cb0b0 = {(FUN_004cb0b0_t)0x004cb0b0};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};
typedef uint32_t (BEA_THISCALL* FUN_004f84e0_t)(uint32_t);
static const bea_guard<FUN_004f84e0_t> FUN_004f84e0 = {(FUN_004f84e0_t)0x004f84e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static uint32_t BEA_THISCALL ap_00405a40(void * this_)
{
  undefined4 *puVar1;
  int *piVar2;
  void *pvVar3;
  undefined1 *puStack_8;
  int local_4;
  *(undefined ***)this_ = ((void*)0x005d89c4);
  *(undefined ***)((int)this_ + 8) = ((void*)0x005d894c);
  local_4 = 0xc;
  while (BEA_LOOP_GUARD(((puVar1 = *(undefined4 **)((int)this_ + 0x620), puVar1 != (undefined4 *)0x0 &&
         (pvVar3 = (void *)*puVar1, pvVar3 != (void *)0x0))))) {
    FUN_004e5bd0(bea_arg((int *)((int)this_ + 0x620)), bea_arg(pvVar3));
    FUN_004cb0b0(bea_arg(pvVar3), bea_arg(0));
    FUN_004cb050(bea_arg(pvVar3));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar3));
  }
  puVar1 = *(undefined4 **)((int)this_ + 0x284);
  *(undefined4 **)((int)this_ + 0x28c) = puVar1;
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
    puVar1 = *(undefined4 **)(*(int *)((int)this_ + 0x28c) + 4);
    *(undefined4 **)((int)this_ + 0x28c) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)*puVar1;
    }
  }
  puVar1 = *(undefined4 **)((int)this_ + 0x294);
  *(undefined4 **)((int)this_ + 0x29c) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = (void *)*puVar1;
  }
  while (BEA_LOOP_GUARD((pvVar3 != (void *)0x0))) {
    if (pvVar3 != (void *)0x0) {
      FUN_0044b1d0(bea_arg(pvVar3));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar3));
    }
    puVar1 = *(undefined4 **)(*(int *)((int)this_ + 0x29c) + 4);
    *(undefined4 **)((int)this_ + 0x29c) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = (void *)*puVar1;
    }
  }
  puVar1 = *(undefined4 **)((int)this_ + 0x2a4);
  *(undefined4 **)((int)this_ + 0x2ac) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = (void *)*puVar1;
  }
  while (BEA_LOOP_GUARD((pvVar3 != (void *)0x0))) {
    if (pvVar3 != (void *)0x0) {
      FUN_0044b1d0(bea_arg(pvVar3));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar3));
    }
    puVar1 = *(undefined4 **)(*(int *)((int)this_ + 0x2ac) + 4);
    *(undefined4 **)((int)this_ + 0x2ac) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      pvVar3 = (void *)*puVar1;
    }
  }
  *(undefined4 *)((int)this_ + 0x140) = 0;
  if (*(int **)((int)this_ + 0x528) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x528), 0x4, 1);
    *(undefined4 *)((int)this_ + 0x528) = 0;
  }
  pvVar3 = *(void **)((int)this_ + 0x578);
  if (pvVar3 != (void *)0x0) {
    FUN_00412cf0(bea_arg(pvVar3));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar3));
    *(undefined4 *)((int)this_ + 0x578) = 0;
  }
  pvVar3 = *(void **)((int)this_ + 0x57c);
  if (pvVar3 != (void *)0x0) {
    FUN_004102a0(bea_arg(pvVar3));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar3));
    *(undefined4 *)((int)this_ + 0x57c) = 0;
  }
  if (*(undefined4 **)((int)this_ + 0x5ec) != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(*(undefined4 **)((int)this_ + 0x5ec), 0x0, 1);
    *(undefined4 *)((int)this_ + 0x5ec) = 0;
  }
  if (*(int **)((int)this_ + 0x5f4) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x5f4), 0x4, 1);
    *(undefined4 *)((int)this_ + 0x5f4) = 0;
  }
  (*(uint8_t*)((char*)&local_4 + 0)) = 0xb;
  FUN_004e5c60(bea_arg((void *)((int)this_ + 0x620)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 10;
  FUN_004cb050(bea_arg((void *)((int)this_ + 0x5f8)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 9;
  if ((*(int *)((int)this_ + 0x5e8) != 0) &&
     (pvVar3 = *(void **)(*(int *)((int)this_ + 0x5e8) + 4), pvVar3 != (void *)0x0)) {
    FUN_004e5bd0(bea_arg(pvVar3), bea_arg((int)this_ + 0x5e8));
  }
  (*(uint8_t*)((char*)&local_4 + 0)) = 8;
  if ((*(int *)((int)this_ + 0x574) != 0) &&
     (pvVar3 = *(void **)(*(int *)((int)this_ + 0x574) + 4), pvVar3 != (void *)0x0)) {
    FUN_004e5bd0(bea_arg(pvVar3), bea_arg((int)this_ + 0x574));
  }
  (*(uint8_t*)((char*)&local_4 + 0)) = 7;
  if ((*(int *)((int)this_ + 0x4e0) != 0) &&
     (pvVar3 = *(void **)(*(int *)((int)this_ + 0x4e0) + 4), pvVar3 != (void *)0x0)) {
    FUN_004e5bd0(bea_arg(pvVar3), bea_arg((int)this_ + 0x4e0));
  }
  (*(uint8_t*)((char*)&local_4 + 0)) = 6;
  if ((*(int *)((int)this_ + 0x4cc) != 0) &&
     (pvVar3 = *(void **)(*(int *)((int)this_ + 0x4cc) + 4), pvVar3 != (void *)0x0)) {
    FUN_004e5bd0(bea_arg(pvVar3), bea_arg((int)this_ + 0x4cc));
  }
  (*(uint8_t*)((char*)&local_4 + 0)) = 5;
  if ((*(int *)((int)this_ + 0x4c8) != 0) &&
     (pvVar3 = *(void **)(*(int *)((int)this_ + 0x4c8) + 4), pvVar3 != (void *)0x0)) {
    FUN_004e5bd0(bea_arg(pvVar3), bea_arg((int)this_ + 0x4c8));
  }
  (*(uint8_t*)((char*)&local_4 + 0)) = 4;
  FUN_004e5c60(bea_arg((void *)((int)this_ + 0x2a4)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 3;
  FUN_004e5c60(bea_arg((void *)((int)this_ + 0x294)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 2;
  FUN_004e5c60(bea_arg((void *)((int)this_ + 0x284)));
  (*(uint8_t*)((char*)&local_4 + 0)) = 1;
  if ((*(int *)((int)this_ + 0x264) != 0) &&
     (pvVar3 = *(void **)(*(int *)((int)this_ + 0x264) + 4), pvVar3 != (void *)0x0)) {
    FUN_004e5bd0(bea_arg(pvVar3), bea_arg((int)this_ + 0x264));
  }
  local_4 = (uint)((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu) << 8;
  FUN_004e5c60(bea_arg((void *)((int)this_ + 0x250)));
  local_4 = 0xffffffff;
  return FUN_004f84e0(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00405a40, ap_00405a40));
