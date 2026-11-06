// auto-ported from 00447d50_FUN_00447d50.c (FUN_00447d50, 501 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char BEA_THISCALL;
#define DAT_00704200 GLOBAL_AT(int, 0x00704200)
#define DAT_00855298 GLOBAL_AT(int, 0x00855298)
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};
typedef int (BEA_THISCALL* FUN_00491ea0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00491ea0_t> FUN_00491ea0 = {(FUN_00491ea0_t)0x00491ea0};
typedef int (BEA_THISCALL* FUN_00492020_t)(uint32_t);
static const bea_guard<FUN_00492020_t> FUN_00492020 = {(FUN_00492020_t)0x00492020};
typedef int (BEA_THISCALL* FUN_00492c90_t)(uint32_t);
static const bea_guard<FUN_00492c90_t> FUN_00492c90 = {(FUN_00492c90_t)0x00492c90};

static undefined4 BEA_THISCALL ap_00447d50(void * this_)
{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  void *this_00;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  uint uStack_10;
  int iStack_c;
  
  pfVar1 = (float *)((int)this_ + 0x280);
  fVar11 = (float10)bea_vcall<float10>(this_, 0x40);
  this_00 = (void *)FUN_00491ea0(bea_arg(&DAT_00704200), bea_arg(*pfVar1), bea_arg(*(undefined4 *)((int)this_ + 0x284)), bea_arg(*(undefined4 *)((int)this_ + 0x288)), bea_arg(*(undefined4 *)((int)this_ + 0x28c)), bea_arg((float)(fVar11 + fVar11)));
  iVar4 = DAT_00855298;
  while (BEA_LOOP_GUARD((DAT_00855298 = iVar4, this_00 != (void *)0x0))) {
    piVar5 = (int *)FUN_00492c90(bea_arg(this_00));
    if (((*(byte *)(piVar5 + 0xd) & 0x10) != 0) && (piVar5 != this_)) {
      fVar11 = (float10)FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(piVar5 + 7));
      if (fVar11 - (float10)(float)piVar5[9] < (float10)5.0f) {
        fVar2 = (float)piVar5[7] - *pfVar1;
        fVar3 = (float)piVar5[8] - *(float *)((int)this_ + 0x284);
        fVar11 = (float10)bea_vcall<float10>(this_, 0x40);
        fVar12 = (float10)bea_vcall<float10>(this_, 0x40);
        fVar13 = (float10)bea_vcall<float10>(piVar5, 0x40);
        fVar14 = (float10)bea_vcall<float10>(piVar5, 0x40);
        uStack_10 = (uint)((float10)(fVar2 * fVar2 + fVar3 * fVar3) <=
                          fVar14 * (float10)(float)fVar13 +
                          (float10)(float)(fVar12 * (float10)(float)fVar11));
        if ((float)uStack_10 + 25.0f != 0.0f) {
          return 0;
        }
      }
    }
    this_00 = (void *)FUN_00492020(bea_arg(&DAT_00704200));
    iVar4 = DAT_00855298;
  }
  if ((*(int *)((int)this_ + 0x27c) != 2) && (*(int *)((int)this_ + 0x27c) != 3)) {
    fVar11 = (float10)bea_vcall<float10>(this_, 0x40);
    iStack_c = (int)(longlong)ROUND(fVar11);
    iVar10 = iStack_c + 3 >> 1;
    iStack_c = (int)(longlong)ROUND(*pfVar1);
    iVar8 = iStack_c >> 1;
    iStack_c = (int)(longlong)ROUND(*(float *)((int)this_ + 0x284));
    for (iVar9 = (iStack_c >> 1) - iVar10; BEA_LOOP_GUARD((iVar9 < (iStack_c >> 1) + iVar10)); iVar9 = iVar9 + 1) {
      if (((-1 < iVar9) && (iVar9 < 0x100)) && (uVar6 = iVar8 - iVar10, (int)uVar6 < iVar8 + iVar10)
         ) {
        do {
          if ((-1 < (int)uVar6) && ((int)uVar6 < 0x100)) {
            uVar7 = uVar6 & 0x80000007;
            if ((int)uVar7 < 0) {
              uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
            }
            if ((*(byte *)(((int)uVar6 >> 3) * 0x100 + iVar9 + iVar4) &
                (byte)(1 << ((byte)uVar7 & 0x1f))) == 0) {
              return 0;
            }
          }
          uVar6 = uVar6 + 1;
        } while (BEA_LOOP_GUARD(((int)uVar6 < iVar8 + iVar10)));
      }
    }
  }
  return 1;
}

// @autoport-registration
// superseded by src/bea/lifted/lift_00447d50.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
