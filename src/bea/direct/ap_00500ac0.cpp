// auto-ported from 00500ac0_FUN_00500ac0.c (FUN_00500ac0, 126 bytes) by tools/autoport.py
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

static uint32_t BEA_THISCALL ap_00500ac0(void * this_, undefined4 *param_1, uint param_2)
{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar1 = param_2 * 2;
  iVar2 = *(int *)((int)this_ + 0x34) + uVar1;
  if (*(int *)((int)this_ + 0x30) < iVar2) {
    FUN_005007f0(bea_arg(this_), bea_arg(iVar2));
  }
  if (*(char *)((int)this_ + 0x2c) == '\0') {
    uVar6 = 0x3e9;
    uVar5 = 0xd2;
    iVar2 = FUN_004885e0(bea_arg(*(void **)((int)this_ + 0x4c)), bea_arg((int)this_ + 0x3c));
    FUN_0042d080(bea_arg(CONCAT31((int3)((uint)iVar2 >> 8),-1 < iVar2)), bea_arg(uVar5), bea_arg(uVar6));
    *(undefined1 *)((int)this_ + 0x2c) = 1;
  }
  puVar4 = (undefined4 *)(*(int *)((int)this_ + 0x3c) + *(int *)((int)this_ + 0x34));
  for (uVar3 = (param_2 & 0x7fffffff) >> 1; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *puVar4 = *param_1;
    param_1 = param_1 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar3 = uVar1 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar4 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  *(uint *)((int)this_ + 0x34) = *(int *)((int)this_ + 0x34) + uVar1;
  return *(uint32_t*)((char*)this_ + 0x34);
  return *(uint32_t*)((char*)this_ + 0x34);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00500ac0, ap_00500ac0));
