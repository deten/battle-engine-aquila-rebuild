// auto-ported from 0044b930_vslot9.c (CExplosion::vslot9, 1445 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x50: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComplexThing;
typedef char CExplosion;
typedef char fStack_34;
#define DAT_006fbdfc GLOBAL_AT(float, 0x006fbdfc)
#define DAT_00855090 GLOBAL_AT(int, 0x00855090)
#define DAT_009c63e8 GLOBAL_AT(int, 0x009c63e8)
#define DAT_006755f8 GLOBAL_AT(int, 0x006755f8)
#define DAT_006755fc GLOBAL_AT(int, 0x006755fc)
#define DAT_00675600 GLOBAL_AT(int, 0x00675600)
#define DAT_00675604 GLOBAL_AT(int, 0x00675604)
#define DAT_00672fd0 GLOBAL_AT(int, 0x00672fd0)
#define DAT_0083d9c0 GLOBAL_AT(undefined4, 0x0083d9c0)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define DAT_0089c9a0 GLOBAL_AT(int, 0x0089c9a0)
typedef uint32_t (BEA_THISCALL* CComplexThing__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CComplexThing__vslot9_t> CComplexThing__vslot9 = {(CComplexThing__vslot9_t)0x004f3fd0};
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_THISCALL* FUN_00403650_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00403650_t> FUN_00403650 = {(FUN_00403650_t)0x00403650};
typedef uint32_t (BEA_THISCALL* FUN_0044a610_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044a610_t> FUN_0044a610 = {(FUN_0044a610_t)0x0044a610};
typedef uint32_t (BEA_THISCALL* FUN_004cb040_t)(uint32_t);
static const bea_guard<FUN_004cb040_t> FUN_004cb040 = {(FUN_004cb040_t)0x004cb040};
typedef uint32_t (BEA_THISCALL* FUN_004cb050_t)(uint32_t);
static const bea_guard<FUN_004cb050_t> FUN_004cb050 = {(FUN_004cb050_t)0x004cb050};
typedef uint32_t (BEA_THISCALL* FUN_004cb3d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004cb3d0_t> FUN_004cb3d0 = {(FUN_004cb3d0_t)0x004cb3d0};
typedef uint32_t (BEA_THISCALL* FUN_004e1940_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e1940_t> FUN_004e1940 = {(FUN_004e1940_t)0x004e1940};
typedef undefined4 * (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5a80_t> FUN_004e5a80 = {(FUN_004e5a80_t)0x004e5a80};
#define _CIasin(a0) bea_x87call1(0x0055dcb0, (float10)(a0))

static void BEA_THISCALL ap_0044b930(CExplosion * this_, float param_1)
{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  float *pfVar4;
  undefined4 *puVar5;
  float fVar6;
  int iVar7;
  undefined4 uVar8;
  CExplosion *pCVar9;
  float10 extraout_ST0;
  float10 fVar10;

  alignas(16) uint8_t bea_frame_[0x50] = {};   // the original stack frame (emulate_frame)
  int &iStack_44 = *reinterpret_cast<int *>(bea_frame_ + 0x50 - 0x44);
  undefined4 * &puStack_40 = *reinterpret_cast<undefined4 * *>(bea_frame_ + 0x50 - 0x40);
  float &fStack_3c = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x3c);
  float &fStack_38 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x38);
  float &fStack_34 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x34);
  float &fStack_28 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x28);
  float &fStack_24 = *reinterpret_cast<float *>(bea_frame_ + 0x50 - 0x24);
  undefined1 (&auStack_1c)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x50 - 0x1c);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x50 - 0x8);
  undefined4 &uStack_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x50 - 0x4);
  iVar7 = bea_piece32(param_1);
  FUN_00401000(bea_arg(this_ + 0x90), bea_arg(*(undefined4 *)(bea_piece32(param_1) + 0x3d4)));
  if (DAT_006fbdfc + 1.5f <= *(float *)(bea_piece32(param_1) + 0xc)) {
    FUN_004e5a80(bea_arg(&DAT_00855090), bea_arg(this_));
    bea_vcall<uint32_t>(this_, 0x38);
    return;
  }
  *(undefined4 *)(bea_piece32(param_1) + 0x6c) = *(undefined4 *)(bea_piece32(param_1) + 0x3c4);
  iVar1 = *(int *)(bea_piece32(param_1) + 0x3bc);
  *(uint *)(bea_piece32(param_1) + 0x70) = *(uint *)(bea_piece32(param_1) + 0x70) | 0x1000000;
  *(int *)(this_ + 0x84) = iVar1;
  uVar8 = 0;
  if ((*(int **)(bea_piece32(param_1) + 0x3c4) == (int *)0x0) || (*(int *)(bea_piece32(param_1) + 0x3c8) == 0)) {
    *(undefined4 *)(this_ + 0x80) = *(undefined4 *)(iVar1 + 0x34);
  }
  else {
    extraout_ST0 = bea_fcast<float10>(bea_vcall<float10>(*(int **)(bea_piece32(param_1) + 0x3c4), 0x40));
    *(float *)(this_ + 0x80) = bea_fcast<float>(extraout_ST0);
  }
  *(undefined4 *)(this_ + 0x8c) = *(undefined4 *)(bea_piece32(param_1) + 0xa0);
  if ((*(float *)(this_ + 0x80) <= 0.0f) || (*(float *)(*(int *)(this_ + 0x84) + 0x38) <= 0.0015)) {
    this_[0x2c] = (CExplosion)((byte)this_[0x2c] & 0xfd);
    *(undefined4 *)(bea_piece32(param_1) + 0x70) = 0xffffffff;
  }
  *(undefined4 *)(bea_piece32(param_1) + 0x84) = 0;
  *(undefined4 *)(bea_piece32(param_1) + 0x80) = 1;
  *(undefined4 *)(bea_piece32(param_1) + 0x88) = 0;
  *(undefined4 *)(bea_piece32(param_1) + 0x90) = 1;
  *(undefined4 *)(this_ + 0x88) = *(undefined4 *)(bea_piece32(param_1) + 0x3c0);
  if (3.0f < *(float *)(this_ + 0x80)) {
    *(undefined4 *)(this_ + 0x7c) = 0;
  }
  else {
    *(undefined4 *)(this_ + 0x7c) = *(undefined4 *)(this_ + 0x80);
  }
  CComplexThing__vslot9(bea_arg((CComplexThing *)this_), bea_arg(param_1));
  switch(*(int *)(this_ + 0x88)) {
  case 0:
    uVar8 = **(undefined4 **)(this_ + 0x84);
    break;
  case 1:
    uVar8 = *(undefined4 *)(*(int *)(this_ + 0x84) + 8);
    break;
  case 2:
    uVar8 = *(undefined4 *)(*(int *)(this_ + 0x84) + 4);
    break;
  case 3:
    uVar8 = *(undefined4 *)(*(int *)(this_ + 0x84) + 0xc);
  }
  puVar5 = *(undefined4 **)(this_ + 0x84);
  if ((((int)puVar5[0xf] < 2) || (iVar1 = *(int *)(bea_piece32(param_1) + 0x3c4), iVar1 == 0)) ||
     (*(int *)(bea_piece32(param_1) + 0x3cc) == 0)) {
    if (*(int *)(this_ + 0x88) == 2) {
      *(float *)(this_ + 0x24) = DAT_006fbdfc - 0.15f;
    }
    puStack_40 = (undefined4 *)0x0;
    FUN_004cb040(bea_arg(&iStack_44));
    FUN_004cb3d0(bea_arg(&DAT_009c63e8), bea_arg(uVar8), bea_arg(&iStack_44), bea_arg(DAT_006755f8), bea_arg(DAT_006755fc), bea_arg(DAT_00675600), bea_arg(DAT_00675604), bea_arg(0), bea_arg(*(undefined4 *)(bea_piece32(param_1) + 0x3d0)));
    pCVar9 = this_ + 0x1c;
    if (puStack_40 != (undefined4 *)0x0) {
      if (puStack_40[0x12] == 0x461c4000) {
        puStack_40[0x20] = *(undefined4 *)pCVar9;
        puStack_40[0x21] = *(undefined4 *)(this_ + 0x20);
        puStack_40[0x22] = *(undefined4 *)(this_ + 0x24);
        puStack_40[0x23] = *(undefined4 *)(this_ + 0x28);
        puStack_40[0x10] = puStack_40[0x20];
        puStack_40[0x11] = puStack_40[0x21];
        puStack_40[0x12] = puStack_40[0x22];
        puStack_40[0x13] = puStack_40[0x23];
        *puStack_40 = *(undefined4 *)pCVar9;
        puStack_40[1] = *(undefined4 *)(this_ + 0x20);
        puStack_40[2] = *(undefined4 *)(this_ + 0x24);
        puStack_40[3] = *(undefined4 *)(this_ + 0x28);
        if (puStack_40[0x2b] != -0x40800000) {
          puStack_40[0x2b] = DAT_00672fd0;
        }
      }
      else {
        puStack_40[0x10] = *puStack_40;
        puStack_40[0x11] = puStack_40[1];
        puStack_40[0x12] = puStack_40[2];
        puStack_40[0x13] = puStack_40[3];
        FUN_00403650(bea_arg(puStack_40), bea_arg(pCVar9));
      }
      if (puStack_40 != (undefined4 *)0x0) {
        pCVar9 = this_ + 0x3c;
        puVar5 = puStack_40 + 4;
        for (iVar7 = 0xc; BEA_LOOP_GUARD((iVar7 != 0)); iVar7 = iVar7 + -1) {
          *puVar5 = *(undefined4 *)pCVar9;
          pCVar9 = pCVar9 + 4;
          puVar5 = puVar5 + 1;
        }
        puStack_40[0x28] = 1;
      }
    }
    FUN_004cb050(bea_arg(&iStack_44));
  }
  else {
    if ((*(uint *)(iVar1 + 0x34) & 0x80000000) == 0) {
      puVar3 = &DAT_0083d9c0;
    }
    else {
      puVar3 = (undefined4 *)(iVar1 + 0x3c);
    }
    fStack_34 = bea_fcast<float>(puVar3[9]);
    fVar6 = SQRT(bea_fcast<float>(puVar3[1]) * bea_fcast<float>(puVar3[1]) +
                 bea_fcast<float>(puVar3[5]) * bea_fcast<float>(puVar3[5]) + fStack_34 * fStack_34);
    if (fVar6 <= 0.0f) {
      param_1 = 0.0f;
    }
    else {
      fVar10 = _CIasin(bea_fcast<float10>(fStack_34) / bea_fcast<float10>(fVar6));
      param_1 = bea_fcast<float>(fVar10);
    }
    iStack_44 = 0;
    if (0 < (int)puVar5[0xf]) {
      do {
        switch(*(undefined4 *)(this_ + 0x88)) {
        case 0:
          uVar8 = *puVar5;
          break;
        case 1:
          uVar8 = puVar5[2];
          break;
        case 2:
          uVar8 = puVar5[1];
          break;
        case 3:
          uVar8 = puVar5[3];
        }
        piVar2 = *(int **)(*(int *)(iVar7 + 0x3c4) + 0x30);
        if (piVar2 == (int *)0x0) {
          fStack_3c = *(float *)(iVar7 + 4);
          fStack_38 = *(float *)(iVar7 + 8);
          fStack_34 = *(float *)(iVar7 + 0xc);
          fVar6 = *(float *)(iVar7 + 0x10);
        }
        else {
          pfVar4 = (float *)bea_vcall<uint32_t>(piVar2, 0x20, auStack_1c,0);
          fStack_3c = *pfVar4;
          fStack_38 = pfVar4[1];
          fStack_34 = pfVar4[2];
          fVar6 = pfVar4[3];
        }
        if (DAT_006fbdfc < fStack_34) {
          fVar10 = bea_fcast<float10>(fcos(bea_fcast<float10>(param_1) + bea_fcast<float10>(1.5707964f)));
          if (bea_fcast<float10>(0.0f) < ABS(fVar10)) {
            fVar10 = -((bea_fcast<float10>(fStack_34) - bea_fcast<float10>(DAT_006fbdfc)) / ABS(fVar10));
            if ((*(uint *)(*(int *)(iVar7 + 0x3c4) + 0x34) & 0x80000000) == 0) {
              puVar5 = &DAT_0083d9c0;
            }
            else {
              puVar5 = (undefined4 *)(*(int *)(iVar7 + 0x3c4) + 0x3c);
            }
            uVar8 = *(undefined4 *)(*(int *)(this_ + 0x84) + 4);
            fStack_28 = bea_fcast<float>((fVar10 * bea_fcast<float10>(bea_fcast<float>(puVar5[5]))));
            fStack_24 = bea_fcast<float>((fVar10 * bea_fcast<float10>(bea_fcast<float>(puVar5[9]))));
            fStack_3c = bea_fcast<float>((fVar10 * bea_fcast<float10>(bea_fcast<float>(puVar5[1])) + bea_fcast<float10>(fStack_3c)));
            fStack_38 = fStack_38 + fStack_28;
            fStack_34 = (fStack_24 + fStack_34) - 0.15f;
          }
        }
        FUN_004cb3d0(bea_arg(&DAT_009c63e8), bea_arg(uVar8), bea_arg(0), bea_arg(fStack_3c), bea_arg(fStack_38), bea_arg(fStack_34), bea_arg(fVar6), bea_arg(0), bea_arg(0));
        puVar5 = *(undefined4 **)(this_ + 0x84);
        iStack_44 = iStack_44 + 1;
      } while (BEA_LOOP_GUARD((iStack_44 < (int)puVar5[0xf])));
    }
  }
  switch(*(undefined4 *)(this_ + 0x88)) {
  case 0:
  case 1:
  case 3:
    iVar7 = *(int *)(*(int *)(this_ + 0x84) + 0x10);
    break;
  case 2:
    iVar7 = *(int *)(*(int *)(this_ + 0x84) + 0x14);
    break;
  default:
    goto switchD_0044bde1_default;
  }
  if (iVar7 != 0) {
    FUN_004e1940(bea_arg(&DAT_00896988), bea_arg(iVar7), bea_arg(this_), bea_arg(0x3f333333), bea_arg(1), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(0xbf800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(1), bea_arg(0));
  }
switchD_0044bde1_default:
  if (*(int *)(*(int *)(this_ + 0x84) + 0x4c) != -1) {
    param_1 = *(float *)(this_ + 0x80) + *(float *)(this_ + 0x80);
    if (param_1 < 4.0f) {
      param_1 = 4.0f;
    }
    FUN_0044a610(bea_arg(&DAT_0089c9a0), bea_arg(this_ + 0x1c), bea_arg(*(int *)(*(int *)(this_ + 0x84) + 0x4c)), bea_arg(param_1));
  }
  if ((*(float *)(*(int *)(this_ + 0x84) + 0x38) <= 0.0f) || (*(float *)(this_ + 0x80) <= 3.0f)) {
    bea_vcall<uint32_t>(this_, 0x38);
  }
  else {
    bea_vcall<uint32_t>(this_, 0x108);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044b930, ap_0044b930));
