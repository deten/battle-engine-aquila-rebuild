// auto-ported from 004fc3c0_vslot75.c (CUnit::vslot75, 276 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CUnit;
typedef uint32_t (BEA_THISCALL* FUN_0044a850_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044a850_t> FUN_0044a850 = {(FUN_0044a850_t)0x0044a850};
typedef uint32_t (BEA_THISCALL* FUN_0044a930_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0044a930_t> FUN_0044a930 = {(FUN_0044a930_t)0x0044a930};

static void BEA_THISCALL ap_004fc3c0(CUnit * this_, void *param_1, undefined4 param_2, float *param_3, undefined4 *param_4, undefined4 param_5)
{
  int *piVar1;
  void *pvVar2;
  float *pfVar3;
  undefined4 *puVar4;
  int iVar5;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_40)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x40 - 0x40);
  undefined1 (&local_30)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0x40 - 0x30);
  piVar1 = *(int **)(this_ + 0x17c);
  if (piVar1 == (int *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)*piVar1;
  }
  while(BEA_LOOP_GUARD(( true ))) {
    if (pvVar2 == (void *)0x0) {
      pfVar3 = (float *)FUN_0044a850(bea_arg(param_1), bea_arg(local_40));
      *param_3 = *pfVar3;
      param_3[1] = pfVar3[1];
      param_3[2] = pfVar3[2];
      param_3[3] = pfVar3[3];
      puVar4 = (undefined4 *)FUN_0044a930(bea_arg(param_1), bea_arg(local_30));
      for (iVar5 = 0xc; BEA_LOOP_GUARD((iVar5 != 0)); iVar5 = iVar5 + -1) {
        *param_4 = *puVar4;
        puVar4 = puVar4 + 1;
        param_4 = param_4 + 1;
      }
      return;
    }
    if (pvVar2 == param_1) break;
    piVar1 = (int *)piVar1[1];
    if (piVar1 == (int *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = (void *)*piVar1;
    }
  }
  if (*(int *)(this_ + 0x164) != 0) {
    bea_vcall<uint32_t>(this_, 0x160, *(undefined4 *)((int)pvVar2 + 0xac),param_2,param_3,param_4)
    ;
  }
  if (*param_3 != 0.0f) {
    return;
  }
  if (param_3[1] != 0.0f) {
    return;
  }
  if (param_3[2] != 0.0f) {
    return;
  }
  pfVar3 = (float *)FUN_0044a850(bea_arg(param_1), bea_arg(local_40));
  *param_3 = *pfVar3;
  param_3[1] = pfVar3[1];
  param_3[2] = pfVar3[2];
  param_3[3] = pfVar3[3];
  puVar4 = (undefined4 *)FUN_0044a930(bea_arg(param_1), bea_arg(local_30));
  for (iVar5 = 0xc; BEA_LOOP_GUARD((iVar5 != 0)); iVar5 = iVar5 + -1) {
    *param_4 = *puVar4;
    puVar4 = puVar4 + 1;
    param_4 = param_4 + 1;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fc3c0, ap_004fc3c0));
