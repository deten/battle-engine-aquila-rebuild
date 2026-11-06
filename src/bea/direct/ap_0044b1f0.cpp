// auto-ported from 0044b1f0_FUN_0044b1f0.c (FUN_0044b1f0, 157 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (4 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_004241e0_t)(uint32_t);
static const bea_guard<FUN_004241e0_t> FUN_004241e0 = {(FUN_004241e0_t)0x004241e0};
typedef uint32_t (BEA_THISCALL* FUN_00465570_t)(uint32_t);
static const bea_guard<FUN_00465570_t> FUN_00465570 = {(FUN_00465570_t)0x00465570};
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef uint32_t (BEA_STDCALL* FUN_0055db0a_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055db0a_t> FUN_0055db0a = {(FUN_0055db0a_t)0x0055db0a};

static void BEA_THISCALL ap_0044b1f0(void * this_)
{
  void *pvVar1;
  void *this_00;
  int iVar2;
  int local_4;
  
  *(undefined4 *)((int)this_ + 4) = 0;
  pvVar1 = (void *)((int)this_ + 0x30);
  local_4 = 3;
  do {
    iVar2 = 200;
    this_00 = pvVar1;
    do {
      FUN_004e5c60(bea_arg(this_00));
      this_00 = (void *)((int)this_00 + 0x30);
      iVar2 = iVar2 + -1;
    } while (BEA_LOOP_GUARD((iVar2 != 0)));
    pvVar1 = (void *)((int)pvVar1 + 0x10);
    local_4 = local_4 + -1;
  } while (BEA_LOOP_GUARD((local_4 != 0)));
  if (*(void **)((int)this_ + 0x25b0) != (void *)0x0) {
    FUN_004241e0(bea_arg(*(void **)((int)this_ + 0x25b0)));
    pvVar1 = *(void **)((int)this_ + 0x25b0);
    if (pvVar1 != (void *)0x0) {
      FUN_00465570(bea_arg(pvVar1));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(pvVar1));
    }
    *(undefined4 *)((int)this_ + 0x25b0) = 0;
  }
  iVar2 = *(int *)((int)this_ + 0x2c);
  if (iVar2 != 0) {
    FUN_0055db0a(bea_arg(iVar2), bea_arg(0x14), bea_arg(*(undefined4 *)(iVar2 + -4)), bea_arg(((void*)0x004de230)));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar2 + -4));
  }
  *(undefined4 *)((int)this_ + 0x2c) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044b1f0, ap_0044b1f0));
