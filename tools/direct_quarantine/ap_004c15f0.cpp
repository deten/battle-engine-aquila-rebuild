// auto-ported from 004c15f0_vslot22.c (CPDSimpleSprite::vslot22, 539 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CPDSimpleSprite;
#define DAT_009c63f8 GLOBAL_AT(float, 0x009c63f8)
#define DAT_009c63fc GLOBAL_AT(int, 0x009c63fc)
#define DAT_009c6400 GLOBAL_AT(int, 0x009c6400)
typedef float10 (BEA_CDECL* FUN_004c0c70_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004c0c70_t> FUN_004c0c70 = {(FUN_004c0c70_t)0x004c0c70};
typedef float10 (BEA_THISCALL* FUN_004c10c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004c10c0_t> FUN_004c10c0 = {(FUN_004c10c0_t)0x004c10c0};
#define _CIfmod(a0, a1) bea_x87call2(0x0055e3ea, (float10)(a0), (float10)(a1))

static int BEA_THISCALL ap_004c15f0(CPDSimpleSprite * this_)
{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint32_t eax_in = 0;
  int *piVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int *piVar15;
  float local_20;
  float local_1c;
  float local_14;
  float local_10;
  
  fVar5 = DAT_009c63f8;
  piVar6 = *(int **)(this_ + 0x58);
  if (piVar6 != (int *)0x0) {
    if (*(int *)(this_ + 0x68) == 0) {
      local_10 = 0.0f;
    }
    else {
      local_10 = DAT_009c63f8 * 0.003f;
    }
    if ((*(int *)(this_ + 0x94) == 0x3f800000) || (DAT_009c63fc == 0)) {
      local_1c = 1.0f;
    }
    else {
      local_1c = *(float *)(this_ + 0x94);
    }
    iVar2 = *(int *)(this_ + 0x70);
    local_14 = 0.0f;
    if (iVar2 != 0) {
      local_14 = 1.0f;
    }
    do {
      local_20 = bea_fcast<float>(DAT_009c6400);
      iVar7 = *(int *)(this_ + 0x60);
      if (iVar7 == 0) {
        fVar8 = (float10)*(float *)(this_ + 0x5c);
      }
      else {
        piVar15 = piVar6;
        if (*(int *)(iVar7 + 0x84) == 0) {
          uVar14 = *(undefined4 *)(iVar7 + 0x80);
          uVar13 = *(undefined4 *)(iVar7 + 0x7c);
          iVar12 = iVar7 + 0x74;
          iVar11 = iVar7 + 0x6c;
          iVar10 = iVar7 + 100;
          iVar7 = iVar7 + 0x5c;
          fVar9 = ((float10)*(int *)(this_ + 0x70) - (float10)(float)piVar6[0x18]) /
                  (float10)*(int *)(this_ + 0x70);
        }
        else {
          fVar8 = (float10)FUN_004c10c0(bea_arg((void *)(iVar7 + 0x88)), bea_arg(DAT_009c6400), bea_arg(piVar6));
          if ((*(int *)(iVar7 + 0x90) != 0) && (piVar6 != (int *)0x0)) {
            local_20 = local_20 - (float)piVar6[0x21];
          }
          uVar14 = *(undefined4 *)(iVar7 + 0x80);
          uVar13 = *(undefined4 *)(iVar7 + 0x7c);
          iVar12 = iVar7 + 0x74;
          iVar11 = iVar7 + 0x6c;
          iVar10 = iVar7 + 100;
          iVar7 = iVar7 + 0x5c;
          fVar9 = _CIfmod((float10)(float)fVar8,(float10)local_20);
          fVar9 = fVar9 / (float10)(float)fVar8;
        }
        fVar8 = (float10)FUN_004c0c70(bea_arg((float)fVar9), bea_arg(iVar7), bea_arg(iVar10), bea_arg(iVar11), bea_arg(iVar12), bea_arg(uVar13), bea_arg(uVar14), bea_arg(piVar15))
        ;
        fVar8 = fVar8 * (float10)*(float *)(this_ + 0x5c);
      }
      piVar6[0x1d] = bea_piece32((float)((((float10)*(int *)(this_ + 0x70) - (float10)(float)piVar6[0x18]) *
                                   (fVar8 * (float10)*(float *)(this_ + 100) - fVar8) *
                                   (float10)(1.0f / (float)iVar2) + fVar8) * (float10)local_14));
      piVar6[0x14] = bea_piece32((local_10 + (float)piVar6[0x14]));
      piVar6[0x12] = bea_piece32((local_1c * (float)piVar6[0x12]));
      piVar6[0x13] = bea_piece32((local_1c * (float)piVar6[0x13]));
      piVar6[0x14] = bea_piece32((local_1c * (float)piVar6[0x14]));
      piVar6 = (int *)*piVar6;
    } while (((piVar6 != (int *)0x0)));
    if (*(int *)(this_ + 0x80) != 0) {
      piVar6 = *(int **)(this_ + 0x58);
      do {
        bea_vcall<uint32_t>(*(int **)(this_ + 0x80), 0x34, piVar6);
        piVar6 = (int *)*piVar6;
      } while (((piVar6 != (int *)0x0)));
    }
    eax_in = 0;
    if (*(int *)(this_ + 0xa4) != 0) {
      fVar1 = *(float *)(this_ + 0xb0);
      piVar6 = *(int **)(this_ + 0x58);
      fVar4 = (float)((*(int *)(this_ + 0xa8) - *(int *)(this_ + 0x8c)) + 1);
      eax_in = *(int *)(this_ + 0xa4);
      do {
        fVar3 = fVar5 * fVar1 + (float)piVar6[0x1e];
        piVar6[0x1e] = bea_piece32(fVar3);
        eax_in = CONCAT22((short)((uint)eax_in >> 0x10),
                          (ushort)(fVar3 < fVar4) << 8 | (ushort)(bea_isnan(fVar3) || bea_isnan(fVar4)) << 10 |
                          (ushort)(fVar3 == fVar4) << 0xe);
        if (fVar3 >= fVar4) {
          piVar6[0x1e] = 0;
        }
        piVar6 = (int *)*piVar6;
      } while (((piVar6 != (int *)0x0)));
    }
  }
  return eax_in;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c15f0, ap_004c15f0));
