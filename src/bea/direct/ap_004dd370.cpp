// auto-ported from 004dd370_vslot18.c (CRTMesh::vslot18, 131 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CRTMesh;
typedef undefined4 (BEA_THISCALL* FUN_004aa5e0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa5e0_t> FUN_004aa5e0 = {(FUN_004aa5e0_t)0x004aa5e0};
typedef float10 (BEA_CDECL* FUN_0055dfe7_t)(double);
static const bea_guard<FUN_0055dfe7_t> FUN_0055dfe7 = {(FUN_0055dfe7_t)0x0055dfe7};

static undefined4 BEA_THISCALL ap_004dd370(CRTMesh * this_, int *param_1)
{
  int iVar1;
  float10 fVar2;
  int iStack_8;
  
  if (*(int *)(this_ + 0x14) == 0) {
    return 0;
  }
  if (((param_1 == (int *)0x0) || (*(int *)(*(int *)(this_ + 0x14) + 0x14) == 0)) ||
     (iVar1 = bea_vcall<uint32_t>(param_1, 0x1c), iVar1 < 0)) {
    iStack_8 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(this_ + 0x14) + 0x18) + iVar1 * 0x24;
    fVar2 = (float10)bea_vcall<float10>(param_1, 0x18);
    fVar2 = (float10)FUN_0055dfe7((double)(fVar2 * (float10)*(int *)(iVar1 + 0x1c)));
    iStack_8 = (int)(longlong)ROUND(fVar2);
    iStack_8 = iStack_8 + *(int *)(iVar1 + 0x14);
  }
  iVar1 = FUN_004aa5e0(bea_arg(*(void **)(this_ + 0x14)), bea_arg(iStack_8));
  if (iVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(iVar1 + 0x88);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dd370, ap_004dd370));
