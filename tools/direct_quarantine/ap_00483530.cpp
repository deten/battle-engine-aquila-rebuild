// auto-ported from 00483530_FUN_00483530.c (FUN_00483530, 3570 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @hand-fixed 2026-10-28 check_fild: local_320 (float width max) also holds an int colour byte: stored with mov [esp+0x24] at 0x483ad4/0x483f8e/0x48409f and read with mov at 0x483fba/0x4840e3/0x48421a, no fild/fistp -> *(int *)&local_320 instead of (float)/(int) conversions
// @autoport-frame 0x340: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
// @hand-fixed 2026-10-28 check_dat_arith: (&DAT_00855050)/(&DAT_00855070) + iVar2 (0x22c/0x24c step 4) are byte offsets ([esi+0x855070] at 0x48379b, [ebx+0x855050]/[ebx+0x855070] at 0x48396f/0x4839e4/0x4839f5/0x483a2f/0x483af3/0x483b4c) -> ((uint8_t *)&DAT_x)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_00855090 GLOBAL_AT(int, 0x00855090)
#define DAT_008a9e20 GLOBAL_AT(float, 0x008a9e20)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_00855070 GLOBAL_AT(int, 0x00855070)
#define DAT_00855050 GLOBAL_AT(int, 0x00855050)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_006245cc GLOBAL_AT(char, 0x006245cc)
#define DAT_0062d320 GLOBAL_AT(int, 0x0062d320)
#define DAT_0062d318 GLOBAL_AT(int, 0x0062d318)
#define DAT_0062d348 GLOBAL_AT(char, 0x0062d348)
#define DAT_009c68ac GLOBAL_AT(char, 0x009c68ac)
#define DAT_009c690d GLOBAL_AT(char, 0x009c690d)
#define s__d___d__0062d324 ((char*)0x0062d324)
#define s__d_d__d_d__d_d_0062d32c ((char*)0x0062d32c)
#define s__d_d__d_d_0062d33c ((char*)0x0062d33c)
typedef uint32_t (BEA_STDCALL* FUN_00465710_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00465710_t> FUN_00465710 = {(FUN_00465710_t)0x00465710};
typedef uint32_t (BEA_THISCALL* FUN_00482210_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00482210_t> FUN_00482210 = {(FUN_00482210_t)0x00482210};
typedef int16_t* (BEA_CDECL* FUN_004f7bf0_t)(uint32_t);
static const bea_guard<FUN_004f7bf0_t> FUN_004f7bf0 = {(FUN_004f7bf0_t)0x004f7bf0};
typedef float10 (BEA_THISCALL* FUN_0050d760_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0050d760_t> FUN_0050d760 = {(FUN_0050d760_t)0x0050d760};
typedef undefined4 (BEA_CDECL* FUN_00515940_t)(void);
static const bea_guard<FUN_00515940_t> FUN_00515940 = {(FUN_00515940_t)0x00515940};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef undefined4 (BEA_THISCALL* FUN_00540680_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00540680_t> FUN_00540680 = {(FUN_00540680_t)0x00540680};
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static void BEA_THISCALL ap_00483530(void * this_)
{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int v2;
  int v1;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  float10 fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  char *p1;
  int *piVar20;
  undefined4 uVar21;

  alignas(16) uint8_t bea_frame_[0x340] = {};   // the original stack frame (emulate_frame)
  int &local_334 = *reinterpret_cast<int *>(bea_frame_ + 0x340 - 0x334);
  float &local_32c = *reinterpret_cast<float *>(bea_frame_ + 0x340 - 0x32c);
  float &local_328 = *reinterpret_cast<float *>(bea_frame_ + 0x340 - 0x328);
  float &local_320 = *reinterpret_cast<float *>(bea_frame_ + 0x340 - 0x320);
  float &local_314 = *reinterpret_cast<float *>(bea_frame_ + 0x340 - 0x314);
  int (&local_30c)[2] = *reinterpret_cast<int (*)[2]>(bea_frame_ + 0x340 - 0x30c);
  int &local_304 = *reinterpret_cast<int *>(bea_frame_ + 0x340 - 0x304);
  undefined1 (&local_300)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x340 - 0x300);
  undefined1 (&local_200)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x340 - 0x200);
  undefined1 (&local_100)[256] = *reinterpret_cast<undefined1 (*)[256]>(bea_frame_ + 0x340 - 0x100);
  bVar1 = false;
  if (*(int *)((int)this_ + 0x94) != 0x3f800000) {
    iVar2 = 0x20c;
    do {
      if (*(int *)((int)&DAT_00855090 + iVar2) != 0) {
        fVar11 = *(float *)((int)this_ + 0x94) + 0.1f;
        *(float *)((int)this_ + 0x94) = fVar11;
        if (1.0f < fVar11) {
          *(undefined4 *)((int)this_ + 0x94) = 0x3f800000;
        }
        goto LAB_0048370d;
      }
      iVar2 = iVar2 + 4;
    } while (BEA_LOOP_GUARD((iVar2 < 0x21c)));
  }
  if (*(float *)((int)this_ + 0x94) != 0.0f) {
    iVar2 = 0x20c;
    do {
      if (*(int *)((int)&DAT_00855090 + iVar2) != 0) goto LAB_0048364c;
      iVar2 = iVar2 + 4;
    } while (BEA_LOOP_GUARD((iVar2 < 0x21c)));
    if (*(float *)((int)this_ + 0x98) <= 0.0f) {
      fVar11 = *(float *)((int)this_ + 0x94) - 0.1f;
      *(float *)((int)this_ + 0x94) = fVar11;
      if (fVar11 < 0.0f) {
        *(undefined4 *)((int)this_ + 0x94) = 0;
      }
      goto LAB_0048370d;
    }
    fVar11 = -*(float *)((int)this_ + 0x98) * 0.3f + *(float *)((int)this_ + 0x98);
    *(float *)((int)this_ + 0x98) = fVar11;
    if (ABS(-fVar11) < 0.5f) {
      *(undefined4 *)((int)this_ + 0x98) = 0;
    }
    bVar1 = true;
  }
LAB_0048364c:
  pfVar8 = (float *)((int)this_ + 0x68);
  iVar5 = 0;
  iVar2 = 0x20c;
  pfVar7 = pfVar8;
  do {
    if ((*(int *)((int)&DAT_00855090 + iVar2) == 0) && (*pfVar7 != 0.0f)) {
      pfVar8 = (float *)((int)this_ + iVar5 * 0xc + 0x68);
      fVar11 = *pfVar8 - DAT_008a9e20 * 0.2f;
      *pfVar8 = fVar11;
      if (fVar11 < 0.0f) {
        *pfVar8 = 0.0f;
      }
      goto LAB_0048370d;
    }
    iVar2 = iVar2 + 4;
    iVar5 = iVar5 + 1;
    pfVar7 = pfVar7 + 3;
  } while (BEA_LOOP_GUARD((iVar2 < 0x21c)));
  iVar5 = 0;
  iVar2 = 0x20c;
  do {
    if ((*(int *)((int)&DAT_00855090 + iVar2) != 0) && (*pfVar8 < 1.0f)) {
      pfVar8 = (float *)((int)this_ + iVar5 * 0xc + 0x68);
      fVar11 = DAT_008a9e20 * 0.2f + *pfVar8;
      *pfVar8 = fVar11;
      if (1.0f < fVar11) {
        *pfVar8 = 1.0f;
        *(undefined4 *)((int)this_ + (iVar5 * 3 + 0x1b) * 4) = 0xbf800000;
      }
      break;
    }
    iVar2 = iVar2 + 4;
    iVar5 = iVar5 + 1;
    pfVar8 = pfVar8 + 3;
  } while (BEA_LOOP_GUARD((iVar2 < 0x21c)));
LAB_0048370d:
  if (*(float *)((int)this_ + 0x94) != 0.0f) {
    fVar11 = *(float *)((int)this_ + 0x94);
    if (1.0f <= fVar11) {
      local_314 = 43.0;
      local_328 = 0.0f;
      local_320 = 0.0f;
      pfVar8 = (float *)((int)this_ + 0x68);
      iVar2 = 0x22c;
      do {
        iVar5 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
        local_328 = (float)*(int *)(iVar5 + 0x54) * *pfVar8 + local_328;
        if (*(int *)(((uint8_t *)&DAT_00855070) + iVar2) != 0) {
          uVar15 = *(undefined4 *)((int)&DAT_00855090 + iVar2);
          piVar20 = local_30c;
          pvVar3 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
          FUN_00540680(bea_arg(pvVar3), bea_arg(uVar15), bea_arg(piVar20));
          if (local_320 < (float)local_30c[0]) {
            local_320 = (float)local_30c[0];
          }
        }
        iVar2 = iVar2 + 4;
        pfVar8 = pfVar8 + 3;
      } while (BEA_LOOP_GUARD((iVar2 < 0x23c)));
      if ((local_328 != 0.0f) && (!bVar1)) {
        iVar2 = FUN_00515940();
        iVar5 = FUN_00515940();
        fVar11 = ((float)((0x4b - iVar2) + iVar5) + local_320) - 5.0f;
        fVar12 = (fVar11 - *(float *)((int)this_ + 0x98)) * 0.3f + *(float *)((int)this_ + 0x98);
        *(float *)((int)this_ + 0x98) = fVar12;
        if (ABS(fVar11 - fVar12) < 0.5f) {
          *(float *)((int)this_ + 0x98) = fVar11;
        }
      }
      fVar11 = *(float *)((int)this_ + 0x98);
      iVar2 = FUN_00515940();
      FUN_00482210(bea_arg(this_), bea_arg((float)(iVar2 + -0x5a) - fVar11 * 0.5f), bea_arg((local_328 + 5.0f) * 0.6f + 40.0f), bea_arg(fVar11), bea_arg(local_328 + 5.0f), bea_arg(*(undefined4 *)((int)this_ + 0x94)));
      if (*(int *)((int)this_ + 0xb0) == 0) {
        fVar11 = *(float *)((int)this_ + 0xac) - DAT_008a9e20 * 0.1f;
        *(float *)((int)this_ + 0xac) = fVar11;
        if (fVar11 < 0.4f) {
          *(undefined4 *)((int)this_ + 0xac) = 0x3ecccccd;
          *(undefined4 *)((int)this_ + 0xb0) = 1;
        }
      }
      else {
        fVar11 = DAT_008a9e20 * 0.1f + *(float *)((int)this_ + 0xac);
        *(float *)((int)this_ + 0xac) = fVar11;
        if (1.0f < fVar11) {
          *(undefined4 *)((int)this_ + 0xac) = 0x3f800000;
          *(undefined4 *)((int)this_ + 0xb0) = 0;
        }
      }
      iVar5 = 0;
      iVar2 = 0x24c;
      pfVar8 = (float *)((int)this_ + 100);
      do {
        if ((pfVar8[1] != 1.0f) || (*(int *)(((uint8_t *)&DAT_00855050) + iVar2) == 0)) goto LAB_004842d0;
        fVar10 = (float10)FUN_0050d760(bea_arg(&DAT_00855090), bea_arg(iVar5));
        if (fVar10 != (float10)pfVar8[2]) {
          fVar10 = (float10)FUN_0050d760(bea_arg(&DAT_00855090), bea_arg(iVar5));
          pfVar8[2] = (float)fVar10;
          *pfVar8 = DAT_00672fd0;
        }
        local_32c = DAT_00672fd0 - *pfVar8;
        if (0.0f <= local_32c) {
          if (1.0f < local_32c) {
            local_32c = 1.0f;
          }
        }
        else {
          local_32c = 0.0f;
        }
        if (*(int *)(((uint8_t *)&DAT_00855050) + iVar2) == 3) {
          local_32c = 1.0f;
        }
        uVar15 = *(undefined4 *)(((uint8_t *)&DAT_00855070) + iVar2);
        piVar20 = local_30c;
        pvVar3 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
        FUN_00540680(bea_arg(pvVar3), bea_arg(uVar15), bea_arg(piVar20));
        if (*(float *)((int)this_ + 0x98) < (float)local_30c[0] - 5.0f) goto LAB_004842d0;
        bVar1 = false;
        switch(*(undefined4 *)(((uint8_t *)&DAT_00855050) + iVar2)) {
        case 1:
          fVar10 = (float10)FUN_0050d760(bea_arg(&DAT_00855090), bea_arg(iVar5));
          local_334 = (int)(longlong)ROUND(fVar10);
          p1 = &DAT_006245cc;
          goto override_prt_483a68_def26044;
        case 2:
          local_334 = (int)(longlong)ROUND(*(float *)((int)&DAT_00855090 + iVar2));
          iVar4 = local_334;
          fVar10 = (float10)FUN_0050d760(bea_arg(&DAT_00855090), bea_arg(iVar5));
          local_334 = (int)(longlong)ROUND(fVar10);
          FUN_0055de9b(local_300,s__d___d__0062d324,local_334,iVar4);
          fVar10 = (float10)FUN_0050d760(bea_arg(&DAT_00855090), bea_arg(iVar5));
          local_334 = (int)(longlong)ROUND(fVar10);
          FUN_0055de9b(local_100,&DAT_0062d320,local_334);
          local_334 = (int)(longlong)ROUND(*(float *)((int)&DAT_00855090 + iVar2));
          FUN_0055de9b(local_200,&DAT_0062d318,local_334);
          fVar10 = (float10)FUN_0050d760(bea_arg(&DAT_00855090), bea_arg(iVar5));
          if ((float10)1.0f < ABS(fVar10 - (float10)*(float *)((int)&DAT_00855090 + iVar2))) break;
LAB_00483f18:
          local_32c = *(float *)((int)this_ + 0xac);
          bVar1 = true;
          local_328 = (1.0f - local_32c) * 255.0f;
          local_334 = (int)(longlong)ROUND(local_32c * 255.0f + local_328);
          iVar9 = local_334 * 0x100;
          local_334 = (int)(longlong)ROUND(local_32c * 95.0f + local_328);
          local_304 = local_334;
          iVar4 = local_334 + iVar9;
          local_334 = (int)(longlong)ROUND(local_32c * 64.0f + local_328);
          *(int *)&local_320 = local_334;
          iVar4 = iVar4 * 0x100 + local_334;
          local_334 = (int)(longlong)ROUND(local_32c * -48.0f);
          local_334 = iVar4 * 0x100 - local_334;
          goto LAB_00483af3;
        case 3:
          fVar10 = (float10)FUN_0050d760(bea_arg(&DAT_00855090), bea_arg(iVar5));
          local_334 = (int)(longlong)ROUND(fVar10);
          iVar4 = local_334 % 10;
          fVar10 = (float10)FUN_0050d760(bea_arg(&DAT_00855090), bea_arg(iVar5));
          local_334 = (int)(longlong)ROUND(fVar10);
          iVar9 = (local_334 / 10) % 6;
          fVar10 = (float10)FUN_0050d760(bea_arg(&DAT_00855090), bea_arg(iVar5));
          local_334 = (int)(longlong)ROUND(fVar10);
          iVar6 = (local_334 / 0x3c) % 10;
          fVar10 = (float10)FUN_0050d760(bea_arg(&DAT_00855090), bea_arg(iVar5));
          local_334 = (int)(longlong)ROUND(fVar10);
          FUN_0055de9b(local_300,s__d_d__d_d_0062d33c,local_334 / 600,iVar6,iVar9,iVar4);
          break;
        case 4:
          fVar10 = (float10)FUN_0050d760(bea_arg(&DAT_00855090), bea_arg(iVar5));
          local_334 = (int)(longlong)ROUND(fVar10);
          p1 = &DAT_0062d348;
override_prt_483a68_def26044:
          FUN_0055de9b(local_300,p1,local_334);
          break;
        case 5:
          local_334 = (int)(longlong)ROUND(*(float *)((int)&DAT_00855090 + iVar2));
          iVar4 = local_334;
          fVar10 = (float10)FUN_0050d760(bea_arg(&DAT_00855090), bea_arg(iVar5));
          local_334 = (int)(longlong)ROUND(fVar10);
          FUN_0055de9b(local_300,s__d___d__0062d324,local_334,iVar4);
          fVar10 = (float10)FUN_0050d760(bea_arg(&DAT_00855090), bea_arg(iVar5));
          local_334 = (int)(longlong)ROUND(fVar10);
          FUN_0055de9b(local_100,&DAT_0062d320,local_334);
          local_334 = (int)(longlong)ROUND(*(float *)((int)&DAT_00855090 + iVar2));
          FUN_0055de9b(local_200,&DAT_0062d318,local_334);
          fVar10 = (float10)FUN_0050d760(bea_arg(&DAT_00855090), bea_arg(iVar5));
          if (ABS(fVar10 - (float10)*(float *)((int)&DAT_00855090 + iVar2)) <=
              (float10)*(float *)((int)&DAT_00855090 + iVar2) * (float10)0.1f) goto LAB_00483f18;
          break;
        case 6:
          fVar10 = (float10)FUN_0050d760(bea_arg(&DAT_00855090), bea_arg(iVar5));
          local_334 = (int)(longlong)ROUND(fVar10 * (float10)100.0f);
          iVar4 = local_334 % 10;
          fVar10 = (float10)FUN_0050d760(bea_arg(&DAT_00855090), bea_arg(iVar5));
          local_334 = (int)(longlong)ROUND(fVar10 * (float10)10.0f);
          iVar9 = local_334 % 10;
          fVar10 = (float10)FUN_0050d760(bea_arg(&DAT_00855090), bea_arg(iVar5));
          local_334 = (int)(longlong)ROUND(fVar10);
          iVar6 = local_334 % 10;
          fVar10 = (float10)FUN_0050d760(bea_arg(&DAT_00855090), bea_arg(iVar5));
          local_334 = (int)(longlong)ROUND(fVar10);
          v2 = (local_334 / 10) % 6;
          fVar10 = (float10)FUN_0050d760(bea_arg(&DAT_00855090), bea_arg(iVar5));
          local_334 = (int)(longlong)ROUND(fVar10);
          v1 = (local_334 / 0x3c) % 10;
          fVar10 = (float10)FUN_0050d760(bea_arg(&DAT_00855090), bea_arg(iVar5));
          local_334 = (int)(longlong)ROUND(fVar10);
          FUN_0055de9b(local_300,s__d_d__d_d__d_d_0062d32c,local_334 / 600,v1,v2,iVar6,iVar9,iVar4);
        }
        local_328 = (1.0f - local_32c) * 255.0f;
        local_334 = (int)(longlong)ROUND(local_32c * 255.0f + local_328);
        iVar9 = local_334 * 0x100;
        local_334 = (int)(longlong)ROUND(local_32c * 95.0f + local_328);
        local_304 = local_334;
        iVar4 = local_334 + iVar9;
        local_334 = (int)(longlong)ROUND(local_32c * 64.0f + local_328);
        iVar4 = iVar4 * 0x100 + local_334;
        *(int *)&local_320 = local_334;
        local_334 = (int)(longlong)ROUND(local_32c * 48.0f + local_328);
        local_334 = iVar4 * 0x100 + local_334;
LAB_00483af3:
        uVar15 = *(undefined4 *)(((uint8_t *)&DAT_00855070) + iVar2);
        uVar21 = 0;
        uVar19 = 1;
        uVar17 = 0x3f800000;
        uVar14 = 0x3f800000;
        uVar18 = 0x3f800000;
        uVar16 = 0x3c03126f;
        fVar12 = local_314;
        iVar4 = FUN_00515940();
        fVar11 = (float)(iVar4 + -0xa5) - (float)local_30c[0];
        FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
        FUN_00465710(bea_arg(fVar11), bea_arg(fVar12), bea_arg(uVar16), bea_arg(uVar18), bea_arg(uVar14), bea_arg(local_334), bea_arg(uVar15), bea_arg(uVar17), bea_arg(uVar19), bea_arg(uVar21));
        fVar11 = local_314;
        if ((*(int *)(((uint8_t *)&DAT_00855050) + iVar2) == 2) || (*(int *)(((uint8_t *)&DAT_00855050) + iVar2) == 5)) {
          if (bVar1) {
            local_32c = *(float *)((int)this_ + 0xac);
            local_328 = (1.0f - local_32c) * 255.0f;
            local_334 = (int)(longlong)ROUND(local_32c * 255.0f + local_328);
            iVar9 = local_334 * 0x100;
            local_334 = (int)(longlong)ROUND(local_32c * 64.0f + local_328);
            *(int *)&local_320 = local_334;
            iVar4 = local_334 + iVar9;
            local_334 = (int)(longlong)ROUND(local_32c * 95.0f + local_328);
            iVar4 = local_334 + iVar4 * 0x100;
            local_334 = (int)(longlong)ROUND(local_32c * -32.0f);
            local_334 = iVar4 * 0x100 - local_334;
          }
          else {
            local_334 = (int)(longlong)ROUND(local_32c * 32.0f + local_328);
            local_334 = ((*(int *)&local_320 + iVar9) * 0x100 + local_304) * 0x100 + local_334;
          }
          piVar20 = local_30c;
          uVar15 = FUN_004f7bf0(bea_arg(local_300));
          pvVar3 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
          FUN_00540680(bea_arg(pvVar3), bea_arg(uVar15), bea_arg(piVar20));
          uVar21 = 0;
          uVar19 = 1;
          uVar17 = 0x3f800000;
          uVar15 = FUN_004f7bf0(bea_arg(local_100));
          uVar14 = 0x3f800000;
          uVar18 = 0x3f800000;
          uVar16 = 0x3c03126f;
          fVar13 = local_314;
          iVar4 = FUN_00515940();
          fVar12 = (float)(iVar4 + -0x55) - (float)local_30c[0];
          FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
          FUN_00465710(bea_arg(fVar12), bea_arg(fVar13), bea_arg(uVar16), bea_arg(uVar18), bea_arg(uVar14), bea_arg(local_334), bea_arg(uVar15), bea_arg(uVar17), bea_arg(uVar19), bea_arg(uVar21));
          if (bVar1) {
            fVar12 = *(float *)((int)this_ + 0xac);
            fVar13 = (1.0f - fVar12) * 255.0f;
            local_334 = (int)(longlong)ROUND(fVar12 * 255.0f + fVar13);
            iVar4 = local_334 * 0x100;
            local_334 = (int)(longlong)ROUND(fVar12 * 111.0f + fVar13);
            iVar4 = iVar4 + local_334;
            local_334 = (int)(longlong)ROUND(fVar12 * 64.0f + fVar13);
            iVar4 = iVar4 * 0x100 + local_334;
            local_334 = (int)(longlong)ROUND(fVar12 * -32.0f);
            local_334 = iVar4 * 0x100 - local_334;
          }
          else {
            local_334 = (int)(longlong)ROUND(local_32c * 111.0f + local_328);
            iVar9 = local_334 + iVar9;
            local_334 = (int)(longlong)ROUND(local_32c * 32.0f + local_328);
            local_334 = (iVar9 * 0x100 + *(int *)&local_320) * 0x100 + local_334;
          }
          piVar20 = local_30c;
          uVar15 = FUN_004f7bf0(bea_arg(local_200));
          pvVar3 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
          FUN_00540680(bea_arg(pvVar3), bea_arg(uVar15), bea_arg(piVar20));
          uVar21 = 0;
          uVar19 = 1;
          uVar17 = 0x3f800000;
          uVar15 = FUN_004f7bf0(bea_arg(local_200));
          uVar14 = 0x3f800000;
          uVar18 = 0x3f800000;
          uVar16 = 0x3c03126f;
          iVar4 = FUN_00515940();
        }
        else {
          if (bVar1) {
            fVar12 = *(float *)((int)this_ + 0xac);
            fVar13 = (1.0f - fVar12) * 255.0f;
            local_334 = (int)(longlong)ROUND(fVar12 * 255.0f + fVar13);
            iVar4 = local_334 * 0x100;
            local_334 = (int)(longlong)ROUND(fVar12 * 64.0f + fVar13);
            iVar4 = iVar4 + local_334;
            local_334 = (int)(longlong)ROUND(fVar12 * 95.0f + fVar13);
            iVar4 = iVar4 * 0x100 + local_334;
            local_334 = (int)(longlong)ROUND(fVar12 * -32.0f);
            local_334 = iVar4 * 0x100 - local_334;
          }
          else {
            local_334 = (int)(longlong)ROUND(local_32c * 32.0f + local_328);
            local_334 = ((iVar9 + *(int *)&local_320) * 0x100 + local_304) * 0x100 + local_334;
          }
          piVar20 = local_30c;
          uVar15 = FUN_004f7bf0(bea_arg(local_300));
          pvVar3 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
          FUN_00540680(bea_arg(pvVar3), bea_arg(uVar15), bea_arg(piVar20));
          uVar21 = 0;
          uVar19 = 1;
          uVar17 = 0x3f800000;
          uVar15 = FUN_004f7bf0(bea_arg(local_300));
          uVar14 = 0x3f800000;
          uVar18 = 0x3f800000;
          uVar16 = 0x3c03126f;
          iVar4 = FUN_00515940();
        }
        fVar12 = (float)(iVar4 + -0x55) - (float)local_30c[0];
        FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
        FUN_00465710(bea_arg(fVar12), bea_arg(fVar11), bea_arg(uVar16), bea_arg(uVar18), bea_arg(uVar14), bea_arg(local_334), bea_arg(uVar15), bea_arg(uVar17), bea_arg(uVar19), bea_arg(uVar21));
LAB_004842d0:
        iVar4 = FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
        iVar2 = iVar2 + 4;
        iVar5 = iVar5 + 1;
        local_314 = (float)*(int *)(iVar4 + 0x54) * pfVar8[1] + local_314;
        pfVar8 = pfVar8 + 3;
      } while (BEA_LOOP_GUARD((iVar2 < 0x25c)));
    }
    else {
      uVar18 = 0;
      uVar16 = 0;
      uVar15 = 0x42200000;
      iVar2 = FUN_00515940();
      FUN_00482210(bea_arg(this_), bea_arg((float)(iVar2 + -0x5a)), bea_arg(uVar15), bea_arg(uVar16), bea_arg(uVar18), bea_arg(fVar11));
    }
  }
  DAT_009c68ac = 0;
  DAT_009c690d = 1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00483530, ap_00483530));
