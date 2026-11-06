// auto-ported from 004d0ff0_FUN_004d0ff0.c (FUN_004d0ff0, 177 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define DAT_008a9d38 GLOBAL_AT(int, 0x008a9d38)
typedef int (BEA_THISCALL* FUN_004725d0_t)(uint32_t);
static const bea_guard<FUN_004725d0_t> FUN_004725d0 = {(FUN_004725d0_t)0x004725d0};
typedef int (BEA_THISCALL* FUN_00472670_t)(uint32_t);
static const bea_guard<FUN_00472670_t> FUN_00472670 = {(FUN_00472670_t)0x00472670};
typedef int (BEA_THISCALL* FUN_00472690_t)(uint32_t);
static const bea_guard<FUN_00472690_t> FUN_00472690 = {(FUN_00472690_t)0x00472690};
typedef uint32_t (BEA_THISCALL* FUN_004a4630_t)(uint32_t);
static const bea_guard<FUN_004a4630_t> FUN_004a4630 = {(FUN_004a4630_t)0x004a4630};
typedef uint32_t (BEA_THISCALL* FUN_004a4dd0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004a4dd0_t> FUN_004a4dd0 = {(FUN_004a4dd0_t)0x004a4dd0};
typedef void* (BEA_THISCALL* FUN_004e5c90_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5c90_t> FUN_004e5c90 = {(FUN_004e5c90_t)0x004e5c90};
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};

static uint32_t BEA_THISCALL ap_004d0ff0(void * this_, int param_1)
{
  void *pvVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  *(undefined4 *)((int)this_ + 0xc) = 0;
  *(undefined4 *)((int)this_ + 0x10) = 1;
  *(undefined4 *)((int)this_ + 0x38) = 0;
  fVar3 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
  *(float *)((int)this_ + 0x28) = (float)fVar3;
  fVar3 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
  *(float *)((int)this_ + 0x2c) = (float)fVar3;
  *(undefined4 *)((int)this_ + 0x24) = 0;
  pvVar1 = (void *)FUN_004e5c90(bea_arg((void *)((int)this_ + 0x14)), bea_arg(0));
  FUN_004a4630(bea_arg(pvVar1));
  *(uint *)((int)this_ + 0x48) = (uint)(param_1 == 0);
  iVar2 = FUN_00472670(bea_arg(&DAT_008a9a98));
  if (iVar2 == 0) {
    iVar2 = FUN_00472690(bea_arg(&DAT_008a9a98));
    if (iVar2 != 0) goto LAB_004d1075;
    iVar2 = FUN_004725d0(bea_arg(&DAT_008a9a98));
    if (iVar2 == 0) goto LAB_004d1075;
  }
  else {
LAB_004d1075:
    if (DAT_008a9d38 < 900) {
      uVar5 = 1;
      goto LAB_004d1087;
    }
  }
  uVar5 = 0;
LAB_004d1087:
  uVar4 = 0x3fc4f9;
  pvVar1 = (void *)FUN_004e5c90(bea_arg((void *)((int)this_ + 0x14)), bea_arg(0));
  return FUN_004a4dd0(bea_arg(pvVar1), bea_arg(uVar4), bea_arg(uVar5));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d0ff0, ap_004d0ff0));
