// auto-ported from 0054d3f0_vslot4.c (CDXMeshVB::vslot4, 210 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CDXMeshVB;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_STDCALL* CFEPBEConfig__vslot7_t)(uint32_t);
static const bea_guard<CFEPBEConfig__vslot7_t> CFEPBEConfig__vslot7 = {(CFEPBEConfig__vslot7_t)0x00452b60};
typedef uint32_t (BEA_THISCALL* FUN_00502290_t)(uint32_t);
static const bea_guard<FUN_00502290_t> FUN_00502290 = {(FUN_00502290_t)0x00502290};
typedef undefined4 (BEA_STDCALL* FUN_00513800_t)(uint32_t);
static const bea_guard<FUN_00513800_t> FUN_00513800 = {(FUN_00513800_t)0x00513800};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static undefined4 BEA_THISCALL ap_0054d3f0(CDXMeshVB * this_)
{
  int *piVar1;
  int iVar2;
  CDXMeshVB *pCVar3;
  CDXMeshVB *pCVar4;
  
  pCVar4 = this_ + 8;
  if ((*(int **)(this_ + 8) != (int *)0x0) && (iVar2 = **(int **)(this_ + 8), iVar2 != 0)) {
    FUN_00513800(bea_arg(iVar2));
    **(undefined4 **)pCVar4 = 0;
  }
  iVar2 = 0;
  pCVar3 = pCVar4;
  if (0 < *(int *)(this_ + 0x108)) {
    do {
      if (*(int *)pCVar3 != 0) {
        piVar1 = *(int **)(*(int *)pCVar3 + 4);
        if (piVar1 != (int *)0x0) {
          bea_vcall<uint32_t>(piVar1, 0x8, piVar1);
          *(undefined4 *)(*(int *)pCVar3 + 4) = 0;
        }
        **(undefined4 **)pCVar3 = 0;
      }
      iVar2 = iVar2 + 1;
      pCVar3 = pCVar3 + 4;
    } while (BEA_LOOP_GUARD((iVar2 < *(int *)(this_ + 0x108))));
  }
  iVar2 = 0;
  if (0 < *(int *)(this_ + 0x108)) {
    do {
      if (*(int *)pCVar4 != 0) {
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)pCVar4));
        *(int *)pCVar4 = 0;
      }
      iVar2 = iVar2 + 1;
      pCVar4 = pCVar4 + 4;
    } while (BEA_LOOP_GUARD((iVar2 < *(int *)(this_ + 0x108))));
  }
  *(undefined4 *)(this_ + 0x108) = 0;
  CFEPBEConfig__vslot7(bea_arg(this_));
  if (*(void **)(this_ + 0x110) != (void *)0x0) {
    FUN_00502290(bea_arg(*(void **)(this_ + 0x110)));
    *(undefined4 *)(this_ + 0x110) = 0;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0054d3f0, ap_0054d3f0));
