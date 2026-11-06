// auto-ported from 0044d6f0_FUN_0044d6f0.c (FUN_0044d6f0, 1644 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_009c68ac GLOBAL_AT(char, 0x009c68ac)
#define DAT_009c690d GLOBAL_AT(char, 0x009c690d)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
typedef uint32_t (BEA_THISCALL* FUN_0044dd60_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044dd60_t> FUN_0044dd60 = {(FUN_0044dd60_t)0x0044dd60};
typedef uint32_t (BEA_THISCALL* FUN_004659a0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004659a0_t> FUN_004659a0 = {(FUN_004659a0_t)0x004659a0};
typedef uint32_t (BEA_STDCALL* FUN_00466e70_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00466e70_t> FUN_00466e70 = {(FUN_00466e70_t)0x00466e70};
typedef uint32_t (BEA_STDCALL* FUN_00467010_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00467010_t> FUN_00467010 = {(FUN_00467010_t)0x00467010};
typedef uint32_t (BEA_STDCALL* FUN_004670b0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004670b0_t> FUN_004670b0 = {(FUN_004670b0_t)0x004670b0};
typedef uint32_t (BEA_CDECL* FUN_00468770_t)(int, ...);
static const bea_guard<FUN_00468770_t> FUN_00468770 = {(FUN_00468770_t)0x00468770};
typedef undefined * (BEA_CDECL* FUN_0046a2a0_t)(undefined4, undefined4, ...);
static const bea_guard<FUN_0046a2a0_t> FUN_0046a2a0 = {(FUN_0046a2a0_t)0x0046a2a0};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef uint (BEA_CDECL* FUN_00523cc0_t)(float, float, float, float, ...);
static const bea_guard<FUN_00523cc0_t> FUN_00523cc0 = {(FUN_00523cc0_t)0x00523cc0};
typedef uint (BEA_CDECL* FUN_00523d40_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00523d40_t> FUN_00523d40 = {(FUN_00523d40_t)0x00523d40};
typedef undefined4 (BEA_THISCALL* FUN_00540680_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00540680_t> FUN_00540680 = {(FUN_00540680_t)0x00540680};

static undefined4 BEA_THISCALL ap_0044d6f0(void * this_)
{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int *piVar17;
  undefined4 uVar18;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  int &local_20 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x20);
  int &local_14 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x14);
  int &local_8 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x8);
  int &local_4 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x4);
  if (*(int *)((int)this_ + 0x1f8c) == 0) {
    return 0;
  }
  iVar10 = *(int *)((int)this_ + 0x18);
  fVar12 = *(float *)((int)this_ + 0xc) * 0.5f;
  fVar13 = *(float *)((int)this_ + 4) - fVar12;
  uVar8 = ((*(uint *)((int)this_ + 0x1f68) >> 0x18) * iVar10 >> 8) << 0x18 |
          *(uint *)((int)this_ + 0x1f68) & 0xffffff;
  fVar12 = fVar12 + *(float *)((int)this_ + 4);
  fVar1 = *(float *)((int)this_ + 0x10) * 0.5f;
  uVar11 = ((*(uint *)((int)this_ + 0x1f6c) >> 0x18) * iVar10 & 0xffffff00) << 0x10 |
           *(uint *)((int)this_ + 0x1f6c) & 0xffffff;
  fVar2 = *(float *)((int)this_ + 8) - fVar1;
  fVar1 = fVar1 + *(float *)((int)this_ + 8);
  uVar5 = ((*(uint *)((int)this_ + 0x1f74) >> 0x18) * iVar10 >> 8) << 0x18 |
          *(uint *)((int)this_ + 0x1f74) & 0xffffff;
  DAT_009c68ac = 0;
  DAT_009c690d = 1;
  uVar9 = ((*(uint *)((int)this_ + 0x1f70) >> 0x18) * iVar10 & 0xffffff00) << 0x10 |
          *(uint *)((int)this_ + 0x1f70) & 0xffffff;
  if (*(int *)this_ != 0) {
    FUN_00467010(bea_arg(fVar13), bea_arg(fVar2), bea_arg(fVar12), bea_arg(fVar1), bea_arg(*(undefined4 *)((int)this_ + 0x14)), bea_arg(uVar8));
    iVar10 = *(int *)((int)this_ + 0x1f98);
    if ((((iVar10 == 1) || (iVar10 == 3)) || (iVar10 == 4)) &&
       (cVar4 = FUN_00523cc0(fVar13,fVar2,fVar12,fVar1), cVar4 != '\0')) {
      FUN_0044dd60(bea_arg(this_), bea_arg(0x2c), bea_arg(0x3f800000));
    }
    FUN_00466e70(bea_arg(fVar13), bea_arg(fVar2), bea_arg(fVar12), bea_arg(fVar1), bea_arg(uVar5), bea_arg(0x40000000), bea_arg(*(undefined4 *)((int)this_ + 0x14)));
  }
  local_20 = 0;
  if (0 < *(int *)((int)this_ + 0x1f64)) {
    local_14 = (int)this_ + 0x1c;
    do {
      FUN_00540680(bea_arg(*(void **)((int)this_ + 0x1f5c)), bea_arg(local_14), bea_arg(&local_8));
      FUN_004659a0(bea_arg(*(void **)((int)this_ + 0x1f5c)), bea_arg(*(float *)((int)this_ + 4) - (float)(local_8 / 2)), bea_arg((float)(*(int *)((int)this_ + 0x1f60) * local_20) + fVar2 + 8.0f), bea_arg(uVar11), bea_arg(local_14), bea_arg(0), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(0x3f800000));
      local_20 = local_20 + 1;
      local_14 = local_14 + 200;
    } while (BEA_LOOP_GUARD((local_20 < *(int *)((int)this_ + 0x1f64))));
  }
  if (*(int *)((int)this_ + 0x1f90) != 0) {
    fVar2 = fVar2 + *(float *)((int)this_ + 0x10);
    uVar6 = FUN_004670b0(bea_arg(*(float *)((int)this_ + 0xc) * 0.05f + fVar13), bea_arg(fVar2 - 24.0f), bea_arg(*(float *)((int)this_ + 0xc) * 0.95f + fVar13), bea_arg(fVar2 - 8.0f), bea_arg(*(undefined4 *)((int)this_ + 0x1f94)), bea_arg(0x3f800000), bea_arg(*(undefined4 *)((int)this_ + 0x14)), bea_arg(uVar5), bea_arg(uVar8), bea_arg(uVar9));
    return uVar6;
  }
  iVar10 = *(int *)((int)this_ + 0x1f98);
  if (iVar10 != 1) {
    if (iVar10 == 2) {
      piVar17 = &local_8;
      uVar6 = FUN_0046a2a0(0x1c - (uint)(*(int *)((int)this_ + 0x1fa0) != 0),0);
      pvVar7 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
      FUN_00540680(bea_arg(pvVar7), bea_arg(uVar6), bea_arg(piVar17));
      fVar1 = (*(float *)((int)this_ + 4) - (float)(local_8 / 2)) - 4.0f;
      fVar3 = (float)((1 - *(int *)((int)this_ + 0x1fa0)) * local_4) +
              (float)(*(int *)((int)this_ + 0x1f60) * *(int *)((int)this_ + 0x1f64)) + fVar2 + 8.0f;
      FUN_00467010(bea_arg(fVar1), bea_arg(fVar3), bea_arg((float)local_8 + fVar1 + 8.0f), bea_arg((float)local_4 + fVar3), bea_arg(*(undefined4 *)((int)this_ + 0x14)), bea_arg(uVar9));
      iVar10 = 0;
      uVar5 = 1;
      do {
        fVar1 = (float)(int)(uVar5 * local_4) +
                (float)(*(int *)((int)this_ + 0x1f60) * *(int *)((int)this_ + 0x1f64)) + fVar2 + 8.0f;
        cVar4 = FUN_00523d40(bea_arg(fVar13), bea_arg(fVar1), bea_arg(fVar12), bea_arg((float)local_4 + fVar1));
        if (cVar4 != '\0') {
          *(int *)((int)this_ + 0x1fa0) = iVar10;
          break;
        }
        cVar4 = FUN_00523cc0(fVar13,fVar1,fVar12,(float)local_4 + fVar1);
        if (cVar4 != '\0') {
          FUN_00468770(1);
          *(int *)((int)this_ + 0x1fa0) = iVar10;
          *(int *)((int)this_ + 0x1fa4) = iVar10;
          *(undefined4 *)((int)this_ + 0x1f7c) = 0;
          *(undefined4 *)((int)this_ + 0x1f80) = 2;
          *(undefined4 *)((int)this_ + 0x1fa8) = 0xfffffffe;
          break;
        }
        iVar10 = iVar10 + 1;
        uVar5 = uVar5 - 1;
      } while (BEA_LOOP_GUARD((uVar5 < 0x80000000)));
      piVar17 = &local_8;
      uVar6 = FUN_0046a2a0(0x1b,0);
      pvVar7 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
      FUN_00540680(bea_arg(pvVar7), bea_arg(uVar6), bea_arg(piVar17));
      uVar18 = 0x3f800000;
      uVar16 = 0x3f800000;
      uVar15 = 0x3f800000;
      uVar14 = 0;
      uVar6 = FUN_0046a2a0(0x1b,0);
      fVar12 = (float)(*(int *)((int)this_ + 0x1f60) * *(int *)((int)this_ + 0x1f64)) + fVar2 + 8.0f;
      fVar13 = *(float *)((int)this_ + 4) - (float)(local_8 / 2);
      uVar5 = uVar11;
      pvVar7 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
      FUN_004659a0(bea_arg(pvVar7), bea_arg(fVar13), bea_arg(fVar12), bea_arg(uVar5), bea_arg(uVar6), bea_arg(uVar14), bea_arg(uVar15), bea_arg(uVar16), bea_arg(uVar18));
      piVar17 = &local_8;
      uVar6 = FUN_0046a2a0(0x1c,0);
      pvVar7 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
      FUN_00540680(bea_arg(pvVar7), bea_arg(uVar6), bea_arg(piVar17));
      uVar18 = 0x3f800000;
      uVar16 = 0x3f800000;
      uVar15 = 0x3f800000;
      uVar14 = 0;
      uVar6 = FUN_0046a2a0(0x1c,0);
      fVar12 = (float)(*(int *)((int)this_ + 0x1f60) * *(int *)((int)this_ + 0x1f64)) + (float)local_4
      ;
      goto LAB_0044dd3a;
    }
    if (iVar10 + -3 != 0) {
      return iVar10 + -3;
    }
  }
  piVar17 = &local_8;
  uVar6 = FUN_0046a2a0(0x1d,0);
  pvVar7 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
  FUN_00540680(bea_arg(pvVar7), bea_arg(uVar6), bea_arg(piVar17));
  fVar12 = (*(float *)((int)this_ + 4) - (float)(local_8 / 2)) - 4.0f;
  fVar13 = (float)(*(int *)((int)this_ + 0x1f60) * *(int *)((int)this_ + 0x1f64)) + fVar2 + 8.0f;
  FUN_00467010(bea_arg(fVar12), bea_arg(fVar13), bea_arg((float)local_8 + fVar12 + 8.0f), bea_arg((float)local_4 + fVar13), bea_arg(*(undefined4 *)((int)this_ + 0x14)), bea_arg(uVar9));
  uVar18 = 0x3f800000;
  uVar16 = 0x3f800000;
  uVar15 = 0x3f800000;
  uVar14 = 0;
  uVar6 = FUN_0046a2a0(0x1d,0);
  fVar12 = (float)(*(int *)((int)this_ + 0x1f60) * *(int *)((int)this_ + 0x1f64));
LAB_0044dd3a:
  fVar13 = fVar12 + fVar2 + 8.0f;
  fVar12 = *(float *)((int)this_ + 4) - (float)(local_8 / 2);
  pvVar7 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(0));
  uVar6 = FUN_004659a0(bea_arg(pvVar7), bea_arg(fVar12), bea_arg(fVar13), bea_arg(uVar11), bea_arg(uVar6), bea_arg(uVar14), bea_arg(uVar15), bea_arg(uVar16), bea_arg(uVar18));
  return uVar6;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044d6f0, ap_0044d6f0));
