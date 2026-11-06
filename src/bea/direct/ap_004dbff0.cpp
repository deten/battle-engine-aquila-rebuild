// auto-ported from 004dbff0_vslot17.c (CRTCutscene::vslot17, 411 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit uStack_4: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CRTCutscene;
typedef undefined4 (BEA_THISCALL* FUN_004aa5e0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa5e0_t> FUN_004aa5e0 = {(FUN_004aa5e0_t)0x004aa5e0};
typedef uint32_t (BEA_THISCALL* FUN_004b0fb0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004b0fb0_t> FUN_004b0fb0 = {(FUN_004b0fb0_t)0x004b0fb0};
typedef float10 (BEA_CDECL* FUN_0055dfe7_t)(double);
static const bea_guard<FUN_0055dfe7_t> FUN_0055dfe7 = {(FUN_0055dfe7_t)0x0055dfe7};

static undefined4 BEA_THISCALL ap_004dbff0(CRTCutscene * this_, undefined4 *param_1, undefined4 *param_2, undefined4 *param_3, int *param_4)
{
  double dVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  float10 fVar5;
  int iStack_10;
  undefined4 uStack_4 = 0;
  
  pvVar3 = (void *)bea_vcall<uint32_t>(this_, 0x24);
  if (pvVar3 == (void *)0x0) goto LAB_004dc0c4;
  if ((param_4 == (int *)0x0) || (*(int *)((int)pvVar3 + 0x14) == 0)) {
LAB_004dc069:
    iStack_10 = 0;
  }
  else {
    iVar4 = bea_vcall<uint32_t>(param_4, 0x1c);
    if (iVar4 < 0) goto LAB_004dc069;
    iVar4 = *(int *)((int)pvVar3 + 0x18) + iVar4 * 0x24;
    fVar5 = (float10)bea_vcall<float10>(param_4, 0x18);
    dVar1 = (double)(fVar5 * (float10)*(int *)(iVar4 + 0x1c));
    fVar5 = (float10)FUN_0055dfe7(dVar1);
    iStack_10 = (int)(longlong)ROUND(fVar5);
    iStack_10 = iStack_10 + *(int *)(iVar4 + 0x14);
    FUN_0055dfe7(dVar1);
  }
  pvVar3 = (void *)FUN_004aa5e0(bea_arg(pvVar3), bea_arg(iStack_10));
  if (pvVar3 != (void *)0x0) {
    iStack_10 = iStack_10 % *(int *)((int)pvVar3 + 0xb8);
    FUN_004b0fb0(bea_arg(pvVar3), bea_arg(iStack_10), bea_arg(iStack_10), bea_arg(0), bea_arg(param_4), bea_arg(param_1), bea_arg(param_2), bea_arg(0), bea_arg(1), bea_arg(0));
    uVar2 = *(undefined4 *)
             (*(int *)((int)pvVar3 + 0xcc) +
             (uint)*(byte *)(*(int *)((int)pvVar3 + 0xc4) + iStack_10) * 4);
    *param_3 = uVar2;
    return uVar2;
  }
LAB_004dc0c4:
  *param_1 = 0x3f800000;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = uStack_4;
  param_1[4] = 0;
  param_1[5] = 0x3f800000;
  param_1[6] = 0;
  param_1[7] = uStack_4;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x3f800000;
  param_1[0xb] = uStack_4;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_3 = 0x42b40000;
  return param_2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dbff0, ap_004dbff0));
