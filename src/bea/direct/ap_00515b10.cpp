// auto-ported from 00515b10_FUN_00515b10.c (FUN_00515b10, 663 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00662b2c GLOBAL_AT(int, 0x00662b2c)
#define s_Warning___deserializing_font_twi_0063e1ac ((char*)0x0063e1ac)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef void * (BEA_THISCALL* FUN_0053f730_t)(uint32_t);
static const bea_guard<FUN_0053f730_t> FUN_0053f730 = {(FUN_0053f730_t)0x0053f730};
typedef uint32_t (BEA_THISCALL* FUN_0053f770_t)(uint32_t);
static const bea_guard<FUN_0053f770_t> FUN_0053f770 = {(FUN_0053f770_t)0x0053f770};
typedef uint32_t (BEA_THISCALL* FUN_00540840_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00540840_t> FUN_00540840 = {(FUN_00540840_t)0x00540840};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_00515b10(void * this_, undefined4 param_1)
{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 *this_00;
  undefined1 *puStack_8;
  undefined4 local_4;
  if (*(int *)((int)this_ + 0x18) != 0) {
    CRenderThing__vslot3(s_Warning___deserializing_font_twi_0063e1ac);
    pvVar1 = *(void **)((int)this_ + 0x18);
    if (pvVar1 != (void *)0x0) {
      FUN_0053f770(bea_arg(pvVar1));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
      *(undefined4 *)((int)this_ + 0x18) = 0;
    }
  }
  if (*(int *)((int)this_ + 0x28) != 0) {
    CRenderThing__vslot3(s_Warning___deserializing_font_twi_0063e1ac);
    pvVar1 = *(void **)((int)this_ + 0x28);
    if (pvVar1 != (void *)0x0) {
      FUN_0053f770(bea_arg(pvVar1));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
      *(undefined4 *)((int)this_ + 0x28) = 0;
    }
  }
  if (*(int *)((int)this_ + 0x2c) != 0) {
    CRenderThing__vslot3(s_Warning___deserializing_font_twi_0063e1ac);
    pvVar1 = *(void **)((int)this_ + 0x2c);
    if (pvVar1 != (void *)0x0) {
      FUN_0053f770(bea_arg(pvVar1));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
      *(undefined4 *)((int)this_ + 0x2c) = 0;
    }
  }
  if (*(int *)((int)this_ + 0x18) != 0) {
    CRenderThing__vslot3(s_Warning___deserializing_font_twi_0063e1ac);
    pvVar1 = *(void **)((int)this_ + 0x18);
    if (pvVar1 != (void *)0x0) {
      FUN_0053f770(bea_arg(pvVar1));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
      *(undefined4 *)((int)this_ + 0x18) = 0;
    }
  }
  if (*(int *)((int)this_ + 0x1c) != 0) {
    CRenderThing__vslot3(s_Warning___deserializing_font_twi_0063e1ac);
    pvVar1 = *(void **)((int)this_ + 0x1c);
    if (pvVar1 != (void *)0x0) {
      FUN_0053f770(bea_arg(pvVar1));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
      *(undefined4 *)((int)this_ + 0x1c) = 0;
    }
  }
  if (*(int *)((int)this_ + 0x24) != 0) {
    CRenderThing__vslot3(s_Warning___deserializing_font_twi_0063e1ac);
    pvVar1 = *(void **)((int)this_ + 0x24);
    if (pvVar1 != (void *)0x0) {
      FUN_0053f770(bea_arg(pvVar1));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
      *(undefined4 *)((int)this_ + 0x24) = 0;
    }
  }
  if (*(int *)((int)this_ + 0x20) != 0) {
    CRenderThing__vslot3(s_Warning___deserializing_font_twi_0063e1ac);
    pvVar1 = *(void **)((int)this_ + 0x20);
    if (pvVar1 != (void *)0x0) {
      FUN_0053f770(bea_arg(pvVar1));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
      *(undefined4 *)((int)this_ + 0x20) = 0;
    }
  }
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x1180), bea_arg(0), bea_arg(&DAT_00662b2c), bea_arg(0));
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0053f730(bea_arg(pvVar1));
  }
  *(undefined4 *)((int)this_ + 0x18) = uVar2;
  *(undefined4 *)((int)this_ + 0x28) = 0;
  *(undefined4 *)((int)this_ + 0x2c) = 0;
  this_00 = (undefined4 *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x1180), bea_arg(0), bea_arg(&DAT_00662b2c), bea_arg(0));
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    FUN_0053f730(bea_arg(this_00));
    *this_00 = ((void*)0x005e4980);
  }
  *(undefined4 **)((int)this_ + 0x1c) = this_00;
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x1180), bea_arg(0), bea_arg(&DAT_00662b2c), bea_arg(0));
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0053f730(bea_arg(pvVar1));
  }
  *(undefined4 *)((int)this_ + 0x24) = uVar2;
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x1180), bea_arg(0), bea_arg(&DAT_00662b2c), bea_arg(0));
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0053f730(bea_arg(pvVar1));
  }
  *(undefined4 *)((int)this_ + 0x20) = uVar2;
  FUN_00540840(bea_arg(*(void **)((int)this_ + 0x18)), bea_arg(param_1));
  FUN_00540840(bea_arg(*(void **)((int)this_ + 0x1c)), bea_arg(param_1));
  FUN_00540840(bea_arg(*(void **)((int)this_ + 0x24)), bea_arg(param_1));
  FUN_00540840(bea_arg(*(void **)((int)this_ + 0x20)), bea_arg(param_1));
  *(undefined4 *)(*(int *)((int)this_ + 0x18) + 0x168) = 1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00515b10, ap_00515b10));
