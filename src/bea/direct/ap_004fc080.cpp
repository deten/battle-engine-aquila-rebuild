// auto-ported from 004fc080_vslot74.c (CUnit::vslot74, 234 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CUnit;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
typedef undefined4 (BEA_THISCALL* FUN_004e3c60_t)(uint32_t);
static const bea_guard<FUN_004e3c60_t> FUN_004e3c60 = {(FUN_004e3c60_t)0x004e3c60};
typedef undefined4 (BEA_THISCALL* FUN_00506010_t)(uint32_t);
static const bea_guard<FUN_00506010_t> FUN_00506010 = {(FUN_00506010_t)0x00506010};
typedef undefined4 (BEA_THISCALL* FUN_00509f70_t)(uint32_t);
static const bea_guard<FUN_00509f70_t> FUN_00509f70 = {(FUN_00509f70_t)0x00509f70};

static undefined4 BEA_THISCALL ap_004fc080(CUnit * this_)
{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (*(void **)(this_ + 0x140) == (void *)0x0) {
    if (*(int *)(this_ + 0x144) != 0) {
      iVar2 = bea_vcall<uint32_t>(this_, 0x1cc);
      if (iVar2 != 0) {
        uVar3 = FUN_004e3c60(bea_arg(*(void **)(this_ + 0x144)));
        if (*(float *)(*(int *)(*(int *)(this_ + 0x144) + 0x3d0) + 0x38) != 0.0f) {
          fVar1 = *(float *)(*(int *)(*(int *)(this_ + 0x144) + 0x3d0) + 0x38) + DAT_00672fd0;
          *(undefined4 *)(this_ + 0x1e8) = 0;
          *(undefined4 *)(this_ + 0x168) = 2;
          *(undefined4 *)(this_ + 0x1ec) = 0;
          *(undefined4 *)(this_ + 0x1e8) = 0;
          *(float *)(this_ + 0x16c) = fVar1;
          return uVar3;
        }
        *(undefined4 *)(this_ + 0x1e8) = 1;
        *(undefined4 *)(this_ + 0x168) = 0;
      }
    }
  }
  else if (*(int *)(this_ + 0x1e8) != 0) {
    iVar2 = FUN_00509f70(bea_arg(*(void **)(this_ + 0x140)));
    if (iVar2 != 0) {
      FUN_00506010(bea_arg(*(void **)(this_ + 0x140)));
      bea_vcall<uint32_t>(this_, 0x15c);
      *(undefined4 *)(this_ + 0x1ec) = 0;
      *(undefined4 *)(this_ + 0x1e8) = 0;
      return 1;
    }
  }
  *(undefined4 *)(this_ + 0x1ec) = 0;
  *(undefined4 *)(this_ + 0x1e8) = 0;
  return uVar3;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fc080, ap_004fc080));
