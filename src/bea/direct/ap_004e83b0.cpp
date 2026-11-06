// auto-ported from 004e83b0_FUN_004e83b0.c (FUN_004e83b0, 300 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (4 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_0044b1d0_t)(uint32_t);
static const bea_guard<FUN_0044b1d0_t> FUN_0044b1d0 = {(FUN_0044b1d0_t)0x0044b1d0};
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef undefined4 (BEA_THISCALL* FUN_004e84e0_t)(uint32_t);
static const bea_guard<FUN_004e84e0_t> FUN_004e84e0 = {(FUN_004e84e0_t)0x004e84e0};
typedef undefined4 (BEA_THISCALL* FUN_004fd570_t)(uint32_t);
static const bea_guard<FUN_004fd570_t> FUN_004fd570 = {(FUN_004fd570_t)0x004fd570};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_004e83b0(void * this_, float param_1)
{
  undefined4 *puVar1;
  int *this_00;
  void *this_01;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  puVar1 = *(undefined4 **)((int)this_ + 0xa4);
  if (puVar1 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)*puVar1;
  }
  this_01 = (void *)bea_vcall<uint32_t>(this_, 0x124);
  while (BEA_LOOP_GUARD((this_00 = piVar4, this_00 != (int *)0x0))) {
    puVar1 = (undefined4 *)puVar1[1];
    if (puVar1 == (undefined4 *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)*puVar1;
    }
    if ((*this_00 == 0) || ((*(byte *)(*this_00 + 0x2c) & 4) != 0)) {
      FUN_004e5bd0(bea_arg((void *)((int)this_ + 0xa4)), bea_arg(this_00));
      if (this_00 != (int *)0x0) {
        FUN_0044b1d0(bea_arg(this_00));
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_00));
      }
      *(int *)((int)this_ + 0xb4) = *(int *)((int)this_ + 0xb4) + -1;
      if (((*(int *)((int)this_ + 0xbc) != 2) || (*(int *)((int)this_ + 0x110) != 0)) ||
         ((this_01 != (void *)0x0 && (iVar2 = FUN_004fd570(bea_arg(this_01)), iVar2 != 0)))) {
        *(undefined4 *)((int)this_ + 0xbc) = 0;
      }
    }
  }
  FUN_004e84e0(bea_arg(this_));
  if (param_1 != 0.0f) {
    uVar3 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
    uVar3 = uVar3 & 0x8000ffff;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xffff0000) + 1;
    }
    param_1 = (float)(int)uVar3 * 1.5258789e-05f + 1.0f + DAT_00672fd0;
    FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(0xfa1), bea_arg(this_), bea_arg(&param_1), bea_arg(0), bea_arg(0), bea_arg(0));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e83b0, ap_004e83b0));
