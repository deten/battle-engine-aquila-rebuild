// auto-ported from 004dd1e0_vslot17.c (CRTMesh::vslot17, 389 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit local_4: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CRTMesh;
typedef undefined4 (BEA_THISCALL* FUN_004aa5e0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa5e0_t> FUN_004aa5e0 = {(FUN_004aa5e0_t)0x004aa5e0};
typedef uint32_t (BEA_THISCALL* FUN_004b0fb0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004b0fb0_t> FUN_004b0fb0 = {(FUN_004b0fb0_t)0x004b0fb0};
typedef float10 (BEA_CDECL* FUN_0055dfe7_t)(double);
static const bea_guard<FUN_0055dfe7_t> FUN_0055dfe7 = {(FUN_0055dfe7_t)0x0055dfe7};

static undefined4 * BEA_THISCALL ap_004dd1e0(CRTMesh * this_, undefined4 *param_1, undefined4 *param_2, undefined4 *param_3, int *param_4)
{
  int iVar1;
  void *this_00;
  float10 fVar2;
  int local_10;
  undefined4 local_4 = 0;
  
  if (*(int *)(this_ + 0x14) == 0) goto LAB_004dd29e;
  if ((param_4 == (int *)0x0) || (*(int *)(*(int *)(this_ + 0x14) + 0x14) == 0)) {
LAB_004dd241:
    local_10 = 0;
  }
  else {
    iVar1 = bea_vcall<uint32_t>(param_4, 0x1c);
    if (iVar1 < 0) goto LAB_004dd241;
    iVar1 = *(int *)(*(int *)(this_ + 0x14) + 0x18) + iVar1 * 0x24;
    fVar2 = (float10)bea_vcall<float10>(param_4, 0x18);
    fVar2 = (float10)FUN_0055dfe7((double)(fVar2 * (float10)*(int *)(iVar1 + 0x1c)));
    local_10 = (int)(longlong)ROUND(fVar2);
    local_10 = local_10 + *(int *)(iVar1 + 0x14);
  }
  this_00 = (void *)FUN_004aa5e0(bea_arg(*(void **)(this_ + 0x14)), bea_arg(local_10));
  if (this_00 != (void *)0x0) {
    local_10 = local_10 % *(int *)((int)this_00 + 0xb8);
    FUN_004b0fb0(bea_arg(this_00), bea_arg(local_10), bea_arg(0), bea_arg(0), bea_arg(param_4), bea_arg(param_1), bea_arg(param_2), bea_arg(0), bea_arg(1), bea_arg(0));
    *param_3 = *(undefined4 *)
                (*(int *)((int)this_00 + 0xcc) +
                (uint)*(byte *)(*(int *)((int)this_00 + 0xc4) + local_10) * 4);
    return param_3;
  }
LAB_004dd29e:
  *param_1 = 0x3f800000;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = local_4;
  param_1[4] = 0;
  param_1[5] = 0x3f800000;
  param_1[6] = 0;
  param_1[7] = local_4;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x3f800000;
  param_1[0xb] = local_4;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_3 = 0x42b40000;
  return param_3;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dd1e0, ap_004dd1e0));
