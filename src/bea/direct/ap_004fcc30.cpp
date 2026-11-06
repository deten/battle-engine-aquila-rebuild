// auto-ported from 004fcc30_vslot39.c (CUnit::vslot39, 400 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (6 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComplexThing;
typedef char CUnit;
typedef uint32_t (BEA_THISCALL* CComplexThing__vslot39_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<CComplexThing__vslot39_t> CComplexThing__vslot39 = {(CComplexThing__vslot39_t)0x004f4480};
typedef uint32_t (BEA_THISCALL* FUN_004e6640_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e6640_t> FUN_004e6640 = {(FUN_004e6640_t)0x004e6640};

static void BEA_THISCALL ap_004fcc30(CUnit * this_, int param_1, float *param_2)
{
  float fVar1;
  float fVar2;
  bool bVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  float10 fVar7;
  int cnt;      // hand fix, see below
  int n;
  
  if (*(void **)(this_ + 0x148) != (void *)0x0) {
    FUN_004e6640(bea_arg(*(void **)(this_ + 0x148)), bea_arg(this_), bea_arg(param_1));
  }
  if ((*(byte *)(param_1 + 0x34) & 0x10) != 0) {
    *(undefined4 *)(this_ + 0x248) = 1;
  }
  if (((((*(uint *)(param_1 + 0x34) & 0x100000) == 0) || (param_2 == (float *)0x0)) ||
      (*param_2 == 0.0f)) ||
     (fVar7 = bea_fcast<float10>(bea_vcall<float10>(this_, 0xb4)), fVar7 <= bea_fcast<float10>(0.0f)))
  goto LAB_004fcda9;
  // hand fix (NOTES A1-14, bug class 12): +0x80 is an integer count (`mov 0x80(%esi),%edi`),
  // Ghidra typed it through the float pointer and the port converted its bits by value
  cnt = *(int *)(param_2 + 0x20);
  bVar3 = false;
  n = cnt;
  pfVar4 = param_2;
  if (cnt < 1) {
LAB_004fccda:
    if (cnt < 2) goto LAB_004fcda9;
    fVar1 = param_2[2];
    fVar6 = param_2[3];
    fVar2 = param_2[4];
    iVar5 = 2;
    pfVar4 = param_2 + 8;
    do {
      fVar1 = fVar1 + pfVar4[-2];
      fVar6 = fVar6 + pfVar4[-1];
      fVar2 = fVar2 + *pfVar4;
      pfVar4 = pfVar4 + 4;
      iVar5 = iVar5 + -1;
    } while (((iVar5 != 0)));
    fVar1 = SQRT(fVar6 * fVar6 + fVar1 * fVar1 + fVar2 * fVar2);
    if (fVar1 != 0.0f) {
      fVar2 = fVar2 * (1.0f / fVar1);
    }
    if (fVar2 * -1.0f <= 0.69f) goto LAB_004fcda9;
  }
  else {
    do {
      if (0.89f < pfVar4[4] * -1.0f) {
        bVar3 = true;
      }
      n = n - 1;
      pfVar4 = pfVar4 + 4;
    } while (n != 0);
    if (!bVar3) goto LAB_004fccda;
  }
  bea_vcall<uint32_t>(this_, 0x118, param_1);
  bea_vcall<uint32_t>(this_, 0x110);
LAB_004fcda9:
  CComplexThing__vslot39(bea_arg((CComplexThing *)this_), bea_arg(param_1), bea_arg(param_2));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fcc30, ap_004fcc30));
