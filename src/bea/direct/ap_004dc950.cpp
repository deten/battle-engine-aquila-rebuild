// auto-ported from 004dc950_FUN_004dc950.c (FUN_004dc950, 414 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0083cd5c GLOBAL_AT(int, 0x0083cd5c)
#define DAT_0083cd60 GLOBAL_AT(int, 0x0083cd60)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_004cb050_t)(uint32_t);
static const bea_guard<FUN_004cb050_t> FUN_004cb050 = {(FUN_004cb050_t)0x004cb050};
typedef uint32_t (BEA_THISCALL* FUN_004cb0b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cb0b0_t> FUN_004cb0b0 = {(FUN_004cb0b0_t)0x004cb0b0};
typedef uint32_t (BEA_THISCALL* FUN_004dcb00_t)(uint32_t);
static const bea_guard<FUN_004dcb00_t> FUN_004dcb00 = {(FUN_004dcb00_t)0x004dcb00};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_004dc950(void * this_)
{
  void *pvVar1;
  int iVar2;
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined ***)this_ = ((void*)0x005deb1c);
  if (*(int *)((int)this_ + 0x48) != 0) {
    *(undefined4 *)(*(int *)((int)this_ + 0x48) + 0x44) = *(undefined4 *)((int)this_ + 0x44);
  }
  if (*(int *)((int)this_ + 0x44) != 0) {
    *(undefined4 *)(*(int *)((int)this_ + 0x44) + 0x48) = *(undefined4 *)((int)this_ + 0x48);
  }
  if (DAT_0083cd5c == this_) {
    DAT_0083cd5c = *(void **)((int)this_ + 0x48);
  }
  if (DAT_0083cd60 == this_) {
    DAT_0083cd60 = *(void **)((int)this_ + 0x48);
  }
  iVar2 = 0;
  if (0 < *(int *)((int)this_ + 0x28)) {
    do {
      pvVar1 = *(void **)(*(int *)((int)this_ + 0x30) + iVar2 * 4);
      if (pvVar1 != (void *)0x0) {
        FUN_004cb0b0(bea_arg(pvVar1), bea_arg(0));
        pvVar1 = *(void **)(*(int *)((int)this_ + 0x30) + iVar2 * 4);
        if (pvVar1 != (void *)0x0) {
          FUN_004cb050(bea_arg(pvVar1));
          FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
        }
        *(undefined4 *)(*(int *)((int)this_ + 0x30) + iVar2 * 4) = 0;
      }
      iVar2 = iVar2 + 1;
    } while (BEA_LOOP_GUARD((iVar2 < *(int *)((int)this_ + 0x28))));
  }
  pvVar1 = *(void **)((int)this_ + 0xc);
  if (pvVar1 != (void *)0x0) {
    FUN_004dcb00(bea_arg(pvVar1));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
    *(undefined4 *)((int)this_ + 0xc) = 0;
  }
  if (*(int *)((int)this_ + 0x1c) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x1c)));
    *(undefined4 *)((int)this_ + 0x1c) = 0;
  }
  iVar2 = *(int *)((int)this_ + 0x14);
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x170) = *(int *)(iVar2 + 0x170) + -1;
    *(undefined4 *)((int)this_ + 0x14) = 0;
  }
  if (*(int *)((int)this_ + 0x30) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x30)));
    *(undefined4 *)((int)this_ + 0x30) = 0;
  }
  if (*(int *)((int)this_ + 0x38) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x38)));
    *(undefined4 *)((int)this_ + 0x38) = 0;
  }
  if (*(int *)((int)this_ + 0x40) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x40)));
    *(undefined4 *)((int)this_ + 0x40) = 0;
  }
  if (*(int *)((int)this_ + 0x2c) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x2c)));
    *(undefined4 *)((int)this_ + 0x2c) = 0;
  }
  if (*(int *)((int)this_ + 0x3c) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x3c)));
    *(undefined4 *)((int)this_ + 0x3c) = 0;
  }
  if (*(int *)((int)this_ + 0x34) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x34)));
    *(undefined4 *)((int)this_ + 0x34) = 0;
  }
  *(undefined ***)this_ = ((void*)0x005deaac);
  if (*(undefined4 **)((int)this_ + 0x10) != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(*(undefined4 **)((int)this_ + 0x10), 0x0, 1);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dc950, ap_004dc950));
