// auto-ported from 00550220_FUN_00550220.c (FUN_00550220, 165 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define DAT_009c64d4 GLOBAL_AT(char, 0x009c64d4)
typedef uint32_t (BEA_THISCALL* FUN_00500fa0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00500fa0_t> FUN_00500fa0 = {(FUN_00500fa0_t)0x00500fa0};
typedef uint32_t (BEA_THISCALL* FUN_005010e0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005010e0_t> FUN_005010e0 = {(FUN_005010e0_t)0x005010e0};
typedef uint32_t (BEA_THISCALL* FUN_00513a50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513a50_t> FUN_00513a50 = {(FUN_00513a50_t)0x00513a50};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef undefined4 (BEA_THISCALL* FUN_00558690_t)(uint32_t);
static const bea_guard<FUN_00558690_t> FUN_00558690 = {(FUN_00558690_t)0x00558690};

static void BEA_THISCALL ap_00550220(void * this_)
{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)((int)this_ + 0x198) == 0) {
    return;
  }
  uVar2 = FUN_00558690(bea_arg(*(void **)((int)this_ + 0x194)));
  FUN_00513a50(bea_arg(&DAT_00855bb0), bea_arg(0), bea_arg(uVar2));
  iVar1 = *(int *)((int)this_ + 400);
  if (iVar1 == 1) {
    FUN_00513bc0(bea_arg(0x13), bea_arg(2));
    uVar2 = 2;
  }
  else if (iVar1 == 2) {
    FUN_00513bc0(bea_arg(0x13), bea_arg(5));
    uVar2 = 6;
  }
  else {
    if (iVar1 != 3) goto LAB_00550298;
    FUN_00513bc0(bea_arg(0x13), bea_arg(2));
    uVar2 = 6;
  }
  FUN_00513bc0(bea_arg(0x14), bea_arg(uVar2));
LAB_00550298:
  *(undefined4 *)((int)this_ + 0x19c) = 0xffffffff;
  if (DAT_009c64d4 == '\0') {
    FUN_00500fa0(bea_arg(*(void **)((int)this_ + 0x198)), bea_arg(1), bea_arg(0), bea_arg(0));
    return;
  }
  FUN_005010e0(bea_arg(*(void **)((int)this_ + 0x198)), bea_arg(1), bea_arg(0), bea_arg(0));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00550220, ap_00550220));
