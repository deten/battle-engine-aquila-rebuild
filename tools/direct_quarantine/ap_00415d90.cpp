// auto-ported from 00415d90_vslot3.c (CBoatGuide::vslot3, 546 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit local_4: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char CBoatGuide;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_ERROR___Unknown_Terrain_guide_st_00623a14 ((char*)0x00623a14)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};

static undefined4 BEA_THISCALL ap_00415d90(CBoatGuide * this_)
{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined2 uVar8;
  float fVar7;
  float10 fVar9;
  float10 fVar10;
  undefined4 local_4 = 0;
  
  iVar1 = *(int *)(this_ + 0x18);
  if ((*(byte *)(iVar1 + 0x2c) & 4) != 0) {
    return iVar1;
  }
  *(undefined4 *)(iVar1 + 0x14c) = 0;
  *(undefined4 *)(iVar1 + 0x150) = 0;
  *(undefined4 *)(iVar1 + 0x154) = 0;
  *(undefined4 *)(iVar1 + 0x158) = local_4;
  iVar1 = *(int *)(this_ + 0x18);
  fVar3 = *(float *)(this_ + 8) - *(float *)(iVar1 + 0x1c);
  fVar7 = *(float *)(iVar1 + 0x114);
  iVar2 = *(int *)(this_ + 0x1c);
  fVar4 = *(float *)(this_ + 0xc) - *(float *)(iVar1 + 0x20);
  if (iVar2 == 0) {
    return iVar1;
  }
  fVar5 = fVar4 * fVar4 + fVar3 * fVar3;
  uVar6 = CONCAT22((short)((uint)iVar1 >> 0x10),
                   (ushort)(fVar5 < 0.01f) << 8 | (ushort)bea_isnan(fVar5) << 10 |
                   (ushort)(fVar5 == 0.01f) << 0xe);
  if (fVar5 < 0.01f) {
    return uVar6;
  }
  if (iVar2 != 1) {
    if (iVar2 == 2) {
      fVar9 = bea_fcast<float10>(fpatan(bea_fcast<float10>(fVar3),bea_fcast<float10>(fVar4)));
      fVar9 = -fVar9 - bea_fcast<float10>(3.1415927f);
      goto LAB_00415e7f;
    }
    if (iVar2 != 3) {
      uVar6 = FUN_00441740(&DAT_0066f580,s_ERROR___Unknown_Terrain_guide_st_00623a14);
      fVar9 = bea_fcast<float10>((fVar3 * fVar3));
      goto LAB_00415e7f;
    }
  }
  fVar9 = bea_fcast<float10>(fpatan(bea_fcast<float10>(fVar3),bea_fcast<float10>(fVar4)));
  fVar9 = -fVar9;
LAB_00415e7f:
  *(float *)(*(int *)(this_ + 0x18) + 0x120) = bea_fcast<float>(fVar9);
  uVar8 = (undefined2)((uint)uVar6 >> 0x10);
  if (fVar5 < 0.01f) {
    *(undefined4 *)(this_ + 0x1c) = 0;
    return CONCAT22(uVar8,(ushort)(fVar5 < 0.01f) << 8 | (ushort)bea_isnan(fVar5) << 10 |
                          (ushort)(fVar5 == 0.01f) << 0xe);
  }
  fVar10 = bea_fcast<float10>(fVar7);
  if ((bea_fcast<float10>(-1.5707964f) <= fVar9) || (fVar7 < 1.5707964f)) {
    if ((bea_fcast<float10>(1.5707964f) <= fVar9) && (fVar7 < -1.5707964f)) {
      fVar10 = bea_fcast<float10>(fVar7) + bea_fcast<float10>(6.2831855f);
    }
  }
  else {
    fVar10 = bea_fcast<float10>(fVar7) - bea_fcast<float10>(6.2831855f);
  }
  fVar10 = ABS(fVar9 - fVar10);
  fVar9 = bea_fcast<float10>(0.2f);
  fVar7 = bea_fcast<float>(CONCAT22(uVar8,(ushort)(fVar10 < fVar9) << 8 |
                                (ushort)(bea_isnan(fVar10) || bea_isnan(fVar9)) << 10 |
                                (ushort)(fVar10 == fVar9) << 0xe));
  if ((fVar10 >= fVar9 && (fVar10 == fVar9) == 0) &&
     (fVar7 = bea_fcast<float>(CONCAT22(uVar8,(ushort)(fVar5 < 0.1f) << 8 | (ushort)bea_isnan(fVar5) << 10 |
                                    (ushort)(fVar5 == 0.1f) << 0xe)), fVar5 < 0.1f)) {
    return fVar7;
  }
  if (*(int *)(this_ + 0x1c) != 3) {
    fVar9 = bea_fcast<float10>(bea_vcall<float10>(*(int **)(this_ + 0x18), 0x1bc));
    fVar9 = fVar9 * bea_fcast<float10>(0.2f);
    iVar1 = *(int *)(this_ + 0x18);
    *(float *)(iVar1 + 0x14c) = bea_fcast<float>((fVar9 * bea_fcast<float10>(*(float *)(iVar1 + 0x40))));
    fVar7 = bea_fcast<float>((fVar9 * bea_fcast<float10>(*(float *)(iVar1 + 0x60))));
    *(float *)(iVar1 + 0x150) = bea_fcast<float>((fVar9 * bea_fcast<float10>(*(float *)(iVar1 + 0x50))));
    *(float *)(iVar1 + 0x154) = fVar7;
    *(undefined4 *)(iVar1 + 0x158) = local_4;
  }
  return fVar7;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00415d90, ap_00415d90));
