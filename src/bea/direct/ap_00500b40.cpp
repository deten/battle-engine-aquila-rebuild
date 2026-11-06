// auto-ported from 00500b40_FUN_00500b40.c (FUN_00500b40, 97 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef uint32_t (BEA_STDCALL* FUN_0042d080_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042d080_t> FUN_0042d080 = {(FUN_0042d080_t)0x0042d080};
typedef uint32_t (BEA_THISCALL* FUN_004885e0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004885e0_t> FUN_004885e0 = {(FUN_004885e0_t)0x004885e0};
typedef uint32_t (BEA_THISCALL* FUN_005007f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005007f0_t> FUN_005007f0 = {(FUN_005007f0_t)0x005007f0};

static int BEA_THISCALL ap_00500b40(void * this_, int param_1)
{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)((int)this_ + 0x34) + param_1 * 2;
  if (*(int *)((int)this_ + 0x30) < iVar1) {
    FUN_005007f0(bea_arg(this_), bea_arg(iVar1));
  }
  if (*(char *)((int)this_ + 0x2c) == '\0') {
    uVar4 = 0x3e9;
    uVar3 = 0xd2;
    uVar2 = FUN_004885e0(bea_arg(*(void **)((int)this_ + 0x4c)), bea_arg((int)this_ + 0x3c));
    FUN_0042d080(bea_arg(CONCAT31((int3)((ulonglong)uVar2 >> 0x28),-1 < (int)uVar2)), bea_arg(uVar3), bea_arg(uVar4));
    *(undefined1 *)((int)this_ + 0x2c) = 1;
  }
  iVar1 = *(int *)((int)this_ + 0x34);
  *(int *)((int)this_ + 0x34) = iVar1 + param_1 * 2;
  return *(int *)((int)this_ + 0x3c) + iVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00500b40, ap_00500b40));
