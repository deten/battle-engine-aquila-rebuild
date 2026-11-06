// auto-ported from 004dd7b0_vslot1.c (CRTTree::vslot1, 156 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CRTTree;
typedef char CRenderThing;
#define DAT_0089c9c8 GLOBAL_AT(int, 0x0089c9c8)
#define DAT_00662f10 GLOBAL_AT(int, 0x00662f10)
#define DAT_006321a0 GLOBAL_AT(int, 0x006321a0)
typedef uint32_t (BEA_THISCALL* CRenderThing__vslot1_t)(uint32_t, uint32_t);
static const bea_guard<CRenderThing__vslot1_t> CRenderThing__vslot1 = {(CRenderThing__vslot1_t)0x004d6a30};
typedef char * (BEA_CDECL* FUN_004888f0_t)(void *, int, int, int, int, int, int, ...);
static const bea_guard<FUN_004888f0_t> FUN_004888f0 = {(FUN_004888f0_t)0x004888f0};
typedef void * (BEA_CDECL* FUN_004aa6e0_t)(void *, undefined4, ...);
static const bea_guard<FUN_004aa6e0_t> FUN_004aa6e0 = {(FUN_004aa6e0_t)0x004aa6e0};

static int BEA_THISCALL ap_004dd7b0(CRTTree * this_, int param_1)
{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  
  CRenderThing__vslot1(bea_arg((CRenderThing *)this_), bea_arg(param_1));
  uVar1 = FUN_004aa6e0(param_1,*(undefined4 *)(param_1 + 0x408));
  *(undefined4 *)(this_ + 0x14) = uVar1;
  uVar1 = FUN_004888f0(param_1,uVar1,6,1,1,0,1);
  *(undefined4 *)(this_ + 0x18) = uVar1;
  if (*(int *)(this_ + 0x14) == 0) {
    *(int *)(DAT_0089c9c8 + 0x170) = *(int *)(DAT_0089c9c8 + 0x170) + 1;
    *(int *)(this_ + 0x14) = DAT_0089c9c8;
  }
  *(undefined4 *)(this_ + 0x24) = *(undefined4 *)(*(int *)(this_ + 0x14) + 0x164);
  *(undefined4 *)(this_ + 4) = *(undefined4 *)(*(int *)(this_ + 0x14) + 0x168);
  fVar3 = bea_fcast<float10>(fptan(bea_fcast<float10>(0.6977778077125549)));
  *(float *)(this_ + 0x2c) = bea_fcast<float>(fVar3);
  iVar2 = DAT_00662f10;
  if (DAT_00662f10 != 0) {
    DAT_006321a0 = 0x42340000;
  }
  this_[0x28] = (CRTTree)0x0;
  *(undefined4 *)(this_ + 0x1c) = 2;
  return iVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dd7b0, ap_004dd7b0));
