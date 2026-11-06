// auto-ported from 004fdad0_FUN_004fdad0.c (FUN_004fdad0, 305 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
// @hand-fixed 2026-10-28: float sums in the asm's order (bug class 19, tools/check_fp_order.py)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef int (BEA_THISCALL* FUN_00401fa0_t)(uint32_t);
static const bea_guard<FUN_00401fa0_t> FUN_00401fa0 = {(FUN_00401fa0_t)0x00401fa0};
typedef undefined4 (BEA_THISCALL* FUN_004e3c60_t)(uint32_t);
static const bea_guard<FUN_004e3c60_t> FUN_004e3c60 = {(FUN_004e3c60_t)0x004e3c60};
typedef undefined4 (BEA_THISCALL* FUN_004e43d0_t)(uint32_t);
static const bea_guard<FUN_004e43d0_t> FUN_004e43d0 = {(FUN_004e43d0_t)0x004e43d0};
typedef undefined4 (BEA_THISCALL* FUN_004e4480_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e4480_t> FUN_004e4480 = {(FUN_004e4480_t)0x004e4480};

static void BEA_THISCALL ap_004fdad0(void * this_, int param_1)
{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  void *this_00;
  
  if ((param_1 != 0) && (iVar6 = bea_vcall<uint32_t>(this_, 0x18c), iVar6 != 0)) {
    puVar1 = *(undefined4 **)((int)this_ + 0x18c);
    if (puVar1 == (undefined4 *)0x0) {
      this_00 = (void *)0x0;
    }
    else {
      this_00 = (void *)*puVar1;
    }
    while (BEA_LOOP_GUARD((this_00 != (void *)0x0))) {
      iVar6 = FUN_004e43d0(bea_arg(this_00));
      if (iVar6 != 0) {
        bVar5 = false;
        iVar6 = bea_vcall<uint32_t>(this_, 0x10c);
        if ((((iVar6 != 0) && ((*(byte *)(*(int *)((int)this_00 + 0x3d0) + 0x14) & 2) != 0)) ||
            ((iVar6 = FUN_00401fa0(bea_arg(this_)), iVar6 != 0 &&
             ((*(byte *)(*(int *)((int)this_00 + 0x3d0) + 0x14) & 1) != 0)))) ||
           (((iVar6 = bea_vcall<uint32_t>(this_, 0x10c), iVar6 == 0 &&
             (iVar6 = FUN_00401fa0(bea_arg(this_)), iVar6 == 0)) &&
            ((*(byte *)(*(int *)((int)this_00 + 0x3d0) + 0x14) & 4) != 0)))) {
          bVar5 = true;
        }
        fVar2 = *(float *)(param_1 + 0x1c) - *(float *)((int)this_ + 0x1c);
        fVar4 = *(float *)(param_1 + 0x20) - *(float *)((int)this_ + 0x20);
        fVar3 = *(float *)(param_1 + 0x24) - *(float *)((int)this_ + 0x24);
        fVar2 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
        iVar6 = FUN_004e4480(bea_arg(this_00), bea_arg(param_1));
        if (((iVar6 != 0) && (bVar5)) &&
           ((*(float *)(*(int *)((int)this_00 + 0x3d0) + 0x2c) <= fVar2 &&
            (fVar2 <= *(float *)(*(int *)((int)this_00 + 0x3d0) + 0x30))))) {
          FUN_004e3c60(bea_arg(this_00));
        }
      }
      puVar1 = (undefined4 *)puVar1[1];
      if (puVar1 == (undefined4 *)0x0) {
        this_00 = (void *)0x0;
      }
      else {
        this_00 = (void *)*puVar1;
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fdad0, ap_004fdad0));
