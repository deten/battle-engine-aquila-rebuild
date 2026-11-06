// auto-ported from 004f1ee0_vslot3.c (CTerrainGuide::vslot3, 576 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit local_4: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit extraout_var: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CTerrainGuide;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_ERROR___Unknown_Terrain_guide_st_00623a14 ((char*)0x00623a14)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};
typedef undefined4 (BEA_THISCALL* FUN_004fde10_t)(uint32_t);
static const bea_guard<FUN_004fde10_t> FUN_004fde10 = {(FUN_004fde10_t)0x004fde10};

static undefined4 BEA_THISCALL ap_004f1ee0(CTerrainGuide * this_)
{
  int *piVar1;
  void *this_00;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined2 extraout_var = 0;
  undefined2 uVar8;
  undefined4 uVar7;
  float10 fVar9;
  float10 fVar10;
  int local_4;
  
  piVar1 = *(int **)(this_ + 0x18);
  if ((*(byte *)(piVar1 + 0xb) & 4) != 0) {
    uVar7 = bea_vcall<uint32_t>(piVar1, 0x100);
    return uVar7;
  }
  piVar1[0x53] = 0;
  piVar1[0x54] = 0;
  piVar1[0x55] = 0;
  piVar1[0x56] = local_4;
  this_00 = *(void **)(this_ + 0x18);
  fVar3 = *(float *)(this_ + 8) - *(float *)((int)this_00 + 0x1c);
  fVar2 = *(float *)((int)this_00 + 0x114);
  fVar4 = *(float *)(this_ + 0xc) - *(float *)((int)this_00 + 0x20);
  if (*(int *)(this_ + 0x1c) == 0) {
    return 0;
  }
  fVar5 = fVar4 * fVar4 + fVar3 * fVar3;
  if (fVar5 < 0.01f) {
    return CONCAT22((short)((uint)*(int *)(this_ + 0x1c) >> 0x10),
                    (ushort)(fVar5 < 0.01f) << 8 | (ushort)bea_isnan(fVar5) << 10 |
                    (ushort)(fVar5 == 0.01f) << 0xe);
  }
  iVar6 = FUN_004fde10(bea_arg(this_00));
  if (iVar6 != 0) {
    return iVar6;
  }
  iVar6 = *(int *)(this_ + 0x1c);
  if (iVar6 != 1) {
    if (iVar6 == 2) {
      fVar9 = (float10)fpatan((float10)fVar3,(float10)fVar4);
      fVar9 = -fVar9 - (float10)3.1415927f;
      uVar8 = 0;
      goto LAB_004f1fe0;
    }
    if (iVar6 != 3) {
      FUN_00441740(&DAT_0066f580,s_ERROR___Unknown_Terrain_guide_st_00623a14);
      fVar9 = (float10)fVar5;
      uVar8 = extraout_var;
      goto LAB_004f1fe0;
    }
  }
  uVar8 = 0;
  fVar9 = (float10)fpatan((float10)fVar3,(float10)fVar4);
  fVar9 = -fVar9;
LAB_004f1fe0:
  *(float *)(*(int *)(this_ + 0x18) + 0x120) = (float)fVar9;
  if (fVar5 < 0.01f) {
    *(undefined4 *)(this_ + 0x1c) = 0;
    return CONCAT22(uVar8,(ushort)(fVar5 < 0.01f) << 8 | (ushort)bea_isnan(fVar5) << 10 |
                          (ushort)(fVar5 == 0.01f) << 0xe);
  }
  fVar10 = (float10)fVar2;
  if (((float10)-1.5707964f <= fVar9) || (fVar2 < 1.5707964f)) {
    if (((float10)1.5707964f <= fVar9) && (fVar2 < -1.5707964f)) {
      fVar10 = (float10)fVar2 + (float10)6.2831855f;
    }
  }
  else {
    fVar10 = (float10)fVar2 - (float10)6.2831855f;
  }
  fVar10 = ABS(fVar9 - fVar10);
  fVar9 = (float10)0.2f;
  uVar7 = CONCAT22(uVar8,(ushort)(fVar10 < fVar9) << 8 | (ushort)(bea_isnan(fVar10) || bea_isnan(fVar9)) << 10 |
                         (ushort)(fVar10 == fVar9) << 0xe);
  if ((fVar10 >= fVar9 && (fVar10 == fVar9) == 0) &&
     (uVar7 = CONCAT22(uVar8,(ushort)(fVar5 < 0.1f) << 8 | (ushort)bea_isnan(fVar5) << 10 |
                             (ushort)(fVar5 == 0.1f) << 0xe), fVar5 < 0.1f)) {
    return uVar7;
  }
  if (*(int *)(this_ + 0x1c) == 3) {
    return uVar7;
  }
  fVar9 = (float10)bea_vcall<float10>(*(int **)(this_ + 0x18), 0x1bc);
  fVar9 = fVar9 * (float10)0.2f;
  iVar6 = *(int *)(this_ + 0x18);
  *(float *)(iVar6 + 0x14c) = (float)(fVar9 * (float10)*(float *)(iVar6 + 0x40));
  *(float *)(iVar6 + 0x150) = (float)(fVar9 * (float10)*(float *)(iVar6 + 0x50));
  *(float *)(iVar6 + 0x154) = (float)(fVar9 * (float10)*(float *)(iVar6 + 0x60));
  *(int *)(iVar6 + 0x158) = local_4;
  return local_4;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f1ee0, ap_004f1ee0));
