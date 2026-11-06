// auto-ported from 0044d390_FUN_0044d390.c (FUN_0044d390, 459 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
typedef int (BEA_THISCALL* FUN_00465a20_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00465a20_t> FUN_00465a20 = {(FUN_00465a20_t)0x00465a20};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};

static int BEA_THISCALL ap_0044d390(void * this_, undefined4 param_1, undefined4 param_2, float param_3, undefined4 param_4, undefined4 param_5, void *param_6, uint param_7, uint param_8, undefined4 param_9, int param_10, undefined4 param_11)
{
  float fVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)((int)this_ + 0x1f8c) != 0) {
    return 0;
  }
  *(undefined4 *)((int)this_ + 4) = param_1;
  *(undefined4 *)((int)this_ + 0x1fa0) = 0xffffffff;
  *(undefined4 *)((int)this_ + 0x1fa4) = 0xffffffff;
  *(undefined4 *)((int)this_ + 8) = param_2;
  *(float *)((int)this_ + 0x1f84) = (float)param_7;
  *(undefined4 *)((int)this_ + 0x1f90) = param_9;
  *(float *)((int)this_ + 0xc) = param_3;
  *(float *)((int)this_ + 0x1f78) = (float)param_8;
  *(void **)((int)this_ + 0x1f5c) = param_6;
  *(int *)((int)this_ + 0x1f98) = param_10;
  *(undefined4 *)((int)this_ + 0x1f94) = 0;
  *(undefined4 *)((int)this_ + 0x14) = param_4;
  *(undefined4 *)((int)this_ + 0x1f9c) = param_11;
  *(undefined4 *)((int)this_ + 0x1f88) = 0;
  *(undefined4 *)((int)this_ + 0x1f7c) = 0;
  *(undefined4 *)((int)this_ + 0x1f80) = 0;
  if (param_8 == 0) {
    *(undefined4 *)((int)this_ + 0x1f80) = 1;
    *(undefined4 *)((int)this_ + 0x18) = 0xff;
  }
  iVar2 = FUN_00465a20(bea_arg(param_6), bea_arg((int)this_ + 0x1c), bea_arg(param_5), bea_arg(param_3 - 16.0f));
  *(int *)((int)this_ + 0x1f64) = iVar2;
  iVar3 = *(int *)((int)param_6 + 0x54);
  *(int *)((int)this_ + 0x1f60) = iVar3;
  fVar1 = (float)iVar3 * (float)iVar2 + 16.0f;
  *(float *)((int)this_ + 0x10) = fVar1;
  if (*(int *)((int)this_ + 0x1f90) != 0) {
    *(undefined4 *)((int)this_ + 0x1f98) = 0;
    *(undefined4 *)((int)this_ + 0x1f8c) = 1;
    *(float *)((int)this_ + 0x10) = fVar1 + 32.0f;
    return *(int *)((int)this_ + 0x1f90);
  }
  if (param_10 != 1) {
    if (param_10 == 2) {
      iVar2 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
      iVar3 = *(int *)((int)this_ + 0x1f98);
      *(float *)((int)this_ + 0x10) =
           (float)(*(int *)(iVar2 + 0x54) * 2) + *(float *)((int)this_ + 0x10);
      if (iVar3 == 2) {
        *(undefined4 *)((int)this_ + 0x1fa0) = 0;
        *(undefined4 *)((int)this_ + 0x1f8c) = 1;
        return 2;
      }
      goto LAB_0044d547;
    }
    if (param_10 + -3 != 0) {
      *(undefined4 *)((int)this_ + 0x1f8c) = 1;
      return param_10 + -3;
    }
  }
  iVar3 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
  *(float *)((int)this_ + 0x10) = (float)*(int *)(iVar3 + 0x54) + *(float *)((int)this_ + 0x10);
LAB_0044d547:
  *(undefined4 *)((int)this_ + 0x1f8c) = 1;
  return iVar3;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044d390, ap_0044d390));
