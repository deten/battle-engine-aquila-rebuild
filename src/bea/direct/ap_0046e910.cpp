// auto-ported from 0046e910_FUN_0046e910.c (FUN_0046e910, 1382 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00662df4 GLOBAL_AT(int, 0x00662df4)
#define DAT_00679ec8 GLOBAL_AT(int, 0x00679ec8)
#define DAT_00679ec1 GLOBAL_AT(char, 0x00679ec1)
#define DAT_006605c8 GLOBAL_AT(int, 0x006605c8)
#define DAT_0089be50 GLOBAL_AT(undefined, 0x0089be50)
#define DAT_0089be58 GLOBAL_AT(int, 0x0089be58)
#define DAT_0089be64 GLOBAL_AT(int, 0x0089be64)
#define DAT_008a9d38 GLOBAL_AT(int, 0x008a9d38)
#define _DAT_00854d90 GLOBAL_AT(int, 0x00854d90)
#define DAT_00662dd4 GLOBAL_AT(int, 0x00662dd4)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
#define DAT_0066e8cc GLOBAL_AT(undefined4, 0x0066e8cc)
#define DAT_00679fc4 GLOBAL_AT(char, 0x00679fc4)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define _DAT_00679ecc GLOBAL_AT(float, 0x00679ecc)
#define _DAT_00679fd4 GLOBAL_AT(int, 0x00679fd4)
#define _DAT_00679fd8 GLOBAL_AT(int, 0x00679fd8)
#define _DAT_00679fdc GLOBAL_AT(int, 0x00679fdc)
#define _DAT_00679fe8 GLOBAL_AT(int, 0x00679fe8)
#define DAT_00679fcc GLOBAL_AT(char, 0x00679fcc)
#define _DAT_00679fd0 GLOBAL_AT(int, 0x00679fd0)
#define DAT_008a9ac0 GLOBAL_AT(int, 0x008a9ac0)
#define DAT_0089c9b0 GLOBAL_AT(int, 0x0089c9b0)
#define DAT_00679fa8 GLOBAL_AT(undefined, 0x00679fa8)
#define DAT_0089be5c GLOBAL_AT(undefined, 0x0089be5c)
typedef uint32_t (BEA_CDECL* FUN_00404bf0_t)(void);
static const bea_guard<FUN_00404bf0_t> FUN_00404bf0 = {(FUN_00404bf0_t)0x00404bf0};
typedef undefined4 (BEA_THISCALL* FUN_004080f0_t)(uint32_t);
static const bea_guard<FUN_004080f0_t> FUN_004080f0 = {(FUN_004080f0_t)0x004080f0};
typedef undefined4 (BEA_CDECL* FUN_0042d4d0_t)(void);
static const bea_guard<FUN_0042d4d0_t> FUN_0042d4d0 = {(FUN_0042d4d0_t)0x0042d4d0};
typedef uint32_t (BEA_CDECL* FUN_0042da00_t)(uint32_t);
static const bea_guard<FUN_0042da00_t> FUN_0042da00 = {(FUN_0042da00_t)0x0042da00};
typedef undefined4 (BEA_THISCALL* FUN_0042e4b0_t)(uint32_t);
static const bea_guard<FUN_0042e4b0_t> FUN_0042e4b0 = {(FUN_0042e4b0_t)0x0042e4b0};
typedef uint32_t (BEA_THISCALL* FUN_0042e610_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042e610_t> FUN_0042e610 = {(FUN_0042e610_t)0x0042e610};
typedef uint32_t (BEA_THISCALL* FUN_0042e6e0_t)(uint32_t);
static const bea_guard<FUN_0042e6e0_t> FUN_0042e6e0 = {(FUN_0042e6e0_t)0x0042e6e0};
typedef uint32_t (BEA_CDECL* FUN_00441b10_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00441b10_t> FUN_00441b10 = {(FUN_00441b10_t)0x00441b10};
typedef int (BEA_THISCALL* FUN_0044b600_t)(uint32_t);
static const bea_guard<FUN_0044b600_t> FUN_0044b600 = {(FUN_0044b600_t)0x0044b600};
typedef uint32_t (BEA_THISCALL* FUN_0044b640_t)(uint32_t);
static const bea_guard<FUN_0044b640_t> FUN_0044b640 = {(FUN_0044b640_t)0x0044b640};
typedef uint32_t (BEA_THISCALL* FUN_004705e0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004705e0_t> FUN_004705e0 = {(FUN_004705e0_t)0x004705e0};
typedef uint32_t (BEA_THISCALL* FUN_00472a90_t)(uint32_t);
static const bea_guard<FUN_00472a90_t> FUN_00472a90 = {(FUN_00472a90_t)0x00472a90};
typedef uint32_t (BEA_CDECL* FUN_004b7d90_t)(void);
static const bea_guard<FUN_004b7d90_t> FUN_004b7d90 = {(FUN_004b7d90_t)0x004b7d90};
typedef uint32_t (BEA_THISCALL* FUN_004e1300_t)(uint32_t);
static const bea_guard<FUN_004e1300_t> FUN_004e1300 = {(FUN_004e1300_t)0x004e1300};
typedef uint32_t (BEA_THISCALL* FUN_004e1330_t)(uint32_t);
static const bea_guard<FUN_004e1330_t> FUN_004e1330 = {(FUN_004e1330_t)0x004e1330};
typedef uint32_t (BEA_THISCALL* FUN_00512470_t)(uint32_t);
static const bea_guard<FUN_00512470_t> FUN_00512470 = {(FUN_00512470_t)0x00512470};
typedef f80 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};
typedef undefined1 (BEA_THISCALL* FUN_00527c50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00527c50_t> FUN_00527c50 = {(FUN_00527c50_t)0x00527c50};
typedef uint32_t (BEA_THISCALL* FUN_00546b10_t)(uint32_t);
static const bea_guard<FUN_00546b10_t> FUN_00546b10 = {(FUN_00546b10_t)0x00546b10};

static void BEA_THISCALL ap_0046e910(void * this_)
{
  float fVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  int *piVar10;
  float10 fVar11;
  float10 fVar12;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0x10);
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0xc);
  undefined4 &local_8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0x4);
  iVar7 = 0;
  iVar6 = *(int *)((int)this_ + 0x18) + 1;
  *(int *)((int)this_ + 0x18) = iVar6;
  if (DAT_00662df4 == 0) goto switchD_0046e958_caseD_f1;
  uVar4 = iVar6 + DAT_00679ec8;
  if (uVar4 < 0x2775) {
    if (uVar4 != 0x2774) {
      switch(uVar4) {
      case 0xf0:
        FUN_00441b10(bea_arg(0), bea_arg(0));
        break;
      default:
        goto switchD_0046e958_caseD_f1;
      case 0x104:
      case 0x10e:
        goto switchD_0046e958_caseD_104;
      case 0x122:
switchD_0046e958_caseD_122:
        bea_vcall<uint32_t>(*(int **)((int)this_ + 0x2f4), 0xc, *(undefined4 *)((int)this_ + 0x2b4),0x33,0x3f800000);
        goto switchD_0046e958_caseD_f1;
      case 300:
switchD_0046e958_caseD_12c:
        bea_vcall<uint32_t>(*(int **)(*(int *)((int)this_ + 0x2f4) + 8), 0xc, *(undefined4 *)((int)this_ + 0x2b4),0x2b,0x3f800000);
        goto switchD_0046e958_caseD_f1;
      case 0x136:
        goto switchD_0046e958_caseD_136;
      }
    }
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x2a4), 0xc, *(undefined4 *)((int)this_ + 0x2b4),0x38,0x3f800000);
  }
  else {
    if (0x27b0 < uVar4) {
      if (uVar4 != 0x27ba) {
        if (uVar4 == 0x4e84) {
          DAT_00662df4 = 0;
          DAT_00679ec1 = 1;
        }
        goto switchD_0046e958_caseD_f1;
      }
switchD_0046e958_caseD_136:
      bea_vcall<uint32_t>(*(int **)(*(int *)((int)this_ + 0x2f4) + 8), 0xc, *(undefined4 *)((int)this_ + 0x2b4),0x33,0x3f800000);
      DAT_00679ec8 = DAT_00679ec8 + 10000;
      goto switchD_0046e958_caseD_f1;
    }
    if (uVar4 == 0x27b0) goto switchD_0046e958_caseD_12c;
    if (uVar4 != 0x277e) {
      if (uVar4 != 0x27a6) goto switchD_0046e958_caseD_f1;
      local_c = 0x70;
      local_4 = 0x170;
      local_10 = 0xc0;
      local_8 = 0x1c0;
      FUN_00441b10(bea_arg(&local_10), bea_arg(0));
      goto switchD_0046e958_caseD_122;
    }
  }
switchD_0046e958_caseD_104:
  bea_vcall<uint32_t>(*(int **)((int)this_ + 0x2f4), 0xc, *(undefined4 *)((int)this_ + 0x2b4),0x2a,0x3f800000);
switchD_0046e958_caseD_f1:
  DAT_006605c8 = DAT_006605c8 + 1;
  FUN_004b7d90();
  if (1 < *(int *)((int)this_ + 0x28)) {
    bVar2 = false;
    if (0 < *(int *)((int)this_ + 0x29c)) {
      puVar9 = &DAT_0089be50;
      piVar10 = (int *)((int)this_ + 0x2b4);
      do {
        if ((*piVar10 != 0) && (cVar3 = FUN_00527c50(bea_arg(puVar9), bea_arg(*piVar10), bea_arg(1)), cVar3 != '\0')) {
          bVar2 = true;
        }
        iVar7 = iVar7 + 1;
        piVar10 = piVar10 + 1;
        puVar9 = puVar9 + 0xc;
      } while (BEA_LOOP_GUARD((iVar7 < *(int *)((int)this_ + 0x29c))));
      if ((((bVar2) &&
           (iVar6 = FUN_0042e4b0(bea_arg(*(void **)((int)this_ + 0x2b4))),
           iVar6 == *(int *)((int)this_ + 0x2a4))) && (*(int *)((int)this_ + 0x2c) != 0)) &&
         (((DAT_0089be58 == 0 && (DAT_0089be64 == 0)) &&
          ((DAT_008a9d38 < 0x352 ||
           ((899 < DAT_008a9d38 ||
            (iVar6 = FUN_0042e4b0(bea_arg(*(void **)((int)this_ + 0x2b8))),
            iVar6 == *(int *)((int)this_ + 0x2a8))))))))) {
        *(undefined4 *)((int)this_ + 0x2c) = 0;
      }
    }
    _DAT_00854d90 = *(uint *)((int)this_ + 0x18) & 7;
  }
  if (((*(int *)((int)this_ + 0x2c) == 0) || (*(int *)((int)this_ + 0x9cc) == 1)) &&
     (DAT_00662dd4 == 0)) {
    FUN_0044b600(bea_arg(&DAT_00672fc8));
    FUN_0042d4d0();
    iVar6 = 0;
    if (0 < *(int *)((int)this_ + 0x29c)) {
      puVar8 = &DAT_0066e8cc;
      piVar10 = (int *)((int)this_ + 0x2b4);
      do {
        if (*piVar10 != 0) {
          if (*(void **)(piVar10[-4] + 0x1c) != (void *)0x0) {
            uVar5 = FUN_004080f0(bea_arg(*(void **)(piVar10[-4] + 0x1c)));
            *puVar8 = uVar5;
          }
          bea_vcall<uint32_t>(*piVar10, 0x8);
        }
        iVar6 = iVar6 + 1;
        puVar8 = puVar8 + 1;
        piVar10 = piVar10 + 1;
      } while (BEA_LOOP_GUARD((iVar6 < *(int *)((int)this_ + 0x29c))));
    }
    if (DAT_00679fc4 == '\0') {
      FUN_0042da00(bea_arg(0));
    }
    FUN_00512470(bea_arg(&DAT_00855bb0));
    FUN_0044b640(bea_arg(&DAT_00672fc8));
    FUN_00404bf0();
  }
  else if ((*(int *)((int)this_ + 0x28) < 10) && (iVar6 = 0, 0 < *(int *)((int)this_ + 0x29c))) {
    piVar10 = (int *)((int)this_ + 0x2b4);
    do {
      if ((int *)*piVar10 != (int *)0x0) {
        bea_vcall<uint32_t>(*piVar10, 0x8);
      }
      iVar6 = iVar6 + 1;
      piVar10 = piVar10 + 1;
    } while (BEA_LOOP_GUARD((iVar6 < *(int *)((int)this_ + 0x29c))));
  }
  if ((*(int *)((int)this_ + 0x100) != 0) && (*(int *)((int)this_ + 0x2c) == 0)) {
    FUN_004e1330(bea_arg(&DAT_00896988));
    *(undefined4 *)((int)this_ + 0x100) = 0;
  }
  if ((*(int *)((int)this_ + 0x100) == 0) && (*(int *)((int)this_ + 0x2c) == 1)) {
    FUN_004e1300(bea_arg(&DAT_00896988));
    *(undefined4 *)((int)this_ + 0x100) = 1;
  }
  iVar6 = *(int *)((int)this_ + 0x28);
  *(undefined4 *)((int)this_ + 0x9cc) = 0;
  if ((iVar6 == 5) && (0.0f <= *(float *)((int)this_ + 0x48))) {
    fVar1 = *(float *)((int)this_ + 0x48) - 0.05f;
    *(float *)((int)this_ + 0x48) = fVar1;
    if ((fVar1 <= 0.05f) &&
       ((DAT_0089be58 != 0 ||
        (((0x351 < DAT_008a9d38 && (DAT_008a9d38 < 900)) && (DAT_0089be64 != 0)))))) {
      *(undefined4 *)((int)this_ + 0x48) = 0x3d4ccccd;
    }
    if (((*(int *)((int)this_ + 0x30) == 0x2e5) || (*(int *)((int)this_ + 0x30) == 0x2e6)) ||
       (*(float *)((int)this_ + 0x48) < 0.0f)) {
      *(undefined4 *)((int)this_ + 0x34) = 1;
    }
  }
  if (((iVar6 == 4) || (iVar6 == 6)) || ((iVar6 == 7 || (iVar6 == 8)))) {
    if (*(float *)((int)this_ + 0x48) <= 0.15f) {
      if (*(int *)((int)this_ + 0x2c) == 0) {
        *(undefined4 *)((int)this_ + 0x394) = 1;
      }
    }
    else {
      fVar11 = (float10)FUN_005159e0(bea_arg(&DAT_0088a0a8));
      if (((fVar11 <= (float10)_DAT_00679ecc) || ((float10)5.0f <= fVar11 - (float10)_DAT_00679ecc))
         || (fVar12 = (float10)*(float *)((int)this_ + 0x48) - (fVar11 - (float10)_DAT_00679ecc),
            fVar12 <= (float10)0.10000001f)) {
        fVar12 = (float10)*(float *)((int)this_ + 0x48) - (float10)0.05f;
      }
      *(float *)((int)this_ + 0x48) = (float)fVar12;
      _DAT_00679ecc = (float)fVar11;
    }
    if ((*(float *)((int)this_ + 0x48) <= 1.5f) && (DAT_00679fc4 == '\0')) {
      _DAT_00679fd4 = 0;
      _DAT_00679fd8 = 0;
      _DAT_00679fdc = 0;
      _DAT_00679fe8 = 0;
      DAT_00679fcc = 0;
      _DAT_00679fd0 = 0x46;
      if (*(int *)((int)this_ + 0x9d0) == 1) {
        if (1 < DAT_008a9ac0) {
          *(undefined4 *)((int)this_ + 0x9d0) = 0;
          FUN_004705e0(bea_arg(this_), bea_arg(0), bea_arg(*(undefined4 *)((int)this_ + 0x2d4)), bea_arg(1));
          FUN_0042e6e0(bea_arg(*(void **)((int)this_ + 0x2b4)));
          *(uint *)((int)this_ + 0x2c) = (uint)(*(int *)((int)this_ + 0x9e0) == 1);
        }
        FUN_00546b10(bea_arg(DAT_0089c9b0));
      }
      puVar9 = (undefined *)FUN_0042e4b0(bea_arg(*(void **)((int)this_ + 0x2b4)));
      if (puVar9 == &DAT_0089be50) {
        FUN_0042e6e0(bea_arg(*(void **)((int)this_ + 0x2b4)));
        FUN_0042e610(bea_arg(*(void **)((int)this_ + 0x2b4)), bea_arg(&DAT_00679fa8));
        puVar9 = &DAT_0089be50;
      }
      else {
        puVar9 = (undefined *)FUN_0042e4b0(bea_arg(*(void **)((int)this_ + 0x2b4)));
        if (puVar9 == &DAT_0089be5c) {
          FUN_0042e6e0(bea_arg(*(void **)((int)this_ + 0x2b4)));
          FUN_0042e610(bea_arg(*(void **)((int)this_ + 0x2b4)), bea_arg(&DAT_00679fa8));
          puVar9 = &DAT_0089be5c;
        }
        else {
          puVar9 = &DAT_00679fa8;
        }
      }
      FUN_0042e610(bea_arg(*(void **)((int)this_ + 0x2b4)), bea_arg(puVar9));
      FUN_00472a90(bea_arg(&DAT_00679fa8));
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0046e910, ap_0046e910));
