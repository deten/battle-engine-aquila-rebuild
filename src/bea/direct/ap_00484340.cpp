// auto-ported from 00484340_FUN_00484340.c (FUN_00484340, 2315 bytes) by tools/autoport.py
// @hand-fixed 2026-10-28 compile+asm: second half rewritten from the asm (0x484517-0x484c41): the 0x40-byte table rows are byte offsets (shl 6 at 0x484361, was an int* stride of 0x100); steps computed as DAT_008a9e20*0.5 (*0.6) before the multiply and the approach sums compared unrounded (0x48452f-0x484671); colour terms use the float slots esp+0xc / esp+0x10 as the asm does (0x4846a4, 0x4846b0); fistp results kept as ints instead of the local_30 qword pieces; x87 compare flags (C0, C3, unordered) as the asm tests them; offset (1-v)*0.5 + phase rounded once (0x48495c-0x48497e)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_0089d4a0 GLOBAL_AT(int, 0x0089d4a0)
#define DAT_009c6914 GLOBAL_AT(undefined4, 0x009c6914)
#define DAT_009c73e8 GLOBAL_AT(char, 0x009c73e8)
#define DAT_0089d520 GLOBAL_AT(int, 0x0089d520)
#define DAT_009c6954 GLOBAL_AT(undefined4, 0x009c6954)
#define DAT_009c73e9 GLOBAL_AT(char, 0x009c73e9)
#define DAT_0089d5a0 GLOBAL_AT(int, 0x0089d5a0)
#define DAT_009c6994 GLOBAL_AT(undefined4, 0x009c6994)
#define DAT_009c73ea GLOBAL_AT(char, 0x009c73ea)
#define DAT_009c65c0 GLOBAL_AT(int, 0x009c65c0)
#define DAT_008a9e20 GLOBAL_AT(float, 0x008a9e20)
#define DAT_00888a40 GLOBAL_AT(float, 0x00888a40)
#define DAT_008a9d84 GLOBAL_AT(int, 0x008a9d84)
typedef undefined4 (BEA_THISCALL* FUN_0040d7c0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0040d7c0_t> FUN_0040d7c0 = {(FUN_0040d7c0_t)0x0040d7c0};
typedef undefined4 (BEA_THISCALL* FUN_0040da30_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0040da30_t> FUN_0040da30 = {(FUN_0040da30_t)0x0040da30};
typedef uint32_t (BEA_CDECL* FUN_00482090_t)(void);
static const bea_guard<FUN_00482090_t> FUN_00482090 = {(FUN_00482090_t)0x00482090};
typedef uint32_t (BEA_THISCALL* FUN_004fd500_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fd500_t> FUN_004fd500 = {(FUN_004fd500_t)0x004fd500};
typedef uint32_t (BEA_THISCALL* FUN_0053cd30_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0053cd30_t> FUN_0053cd30 = {(FUN_0053cd30_t)0x0053cd30};
typedef uint32_t (BEA_THISCALL* FUN_00551300_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00551300_t> FUN_00551300 = {(FUN_00551300_t)0x00551300};
typedef uint32_t (BEA_CDECL* FUN_00555be0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00555be0_t> FUN_00555be0 = {(FUN_00555be0_t)0x00555be0};
typedef float10 (BEA_CDECL* FUN_0055dfe7_t)(double);
static const bea_guard<FUN_0055dfe7_t> FUN_0055dfe7 = {(FUN_0055dfe7_t)0x0055dfe7};

static void BEA_THISCALL ap_00484340(void * this_)
{
  longlong lVar1;
  int iVar2;
  void *this_00;
  float fVar3;
  bool bVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  float10 fVar13;
  float10 fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;

  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)
  longlong (&local_30)[2] = *reinterpret_cast<longlong (*)[2]>(bea_frame_ + 0x30 - 0x30);
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x1c);
  float &local_18 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x18);
  float &local_14 = *reinterpret_cast<float *>(bea_frame_ + 0x30 - 0x14);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0x10);
  undefined4 &local_c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x30 - 0xc);
  FUN_00482090();
  FUN_0053cd30(bea_arg(*(void **)((int)this_ + 0x60)), bea_arg(*(undefined4 *)((int)this_ + 0x50)));
  puVar8 = (undefined4 *)((char *)&DAT_0089d4a0 + *(int *)((int)this_ + 0x58) * 0x40);
  puVar10 = &DAT_009c6914;
  for (iVar6 = 0x10; BEA_LOOP_GUARD((iVar6 != 0)); iVar6 = iVar6 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  DAT_009c73e8 = 1;
  puVar8 = (undefined4 *)((char *)&DAT_0089d520 + *(int *)((int)this_ + 0x58) * 0x40);
  puVar10 = &DAT_009c6954;
  for (iVar6 = 0x10; BEA_LOOP_GUARD((iVar6 != 0)); iVar6 = iVar6 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  DAT_009c73e9 = 1;
  puVar8 = (undefined4 *)((char *)&DAT_0089d5a0 + *(int *)((int)this_ + 0x58) * 0x40);
  puVar10 = &DAT_009c6994;
  for (iVar6 = 0x10; BEA_LOOP_GUARD((iVar6 != 0)); iVar6 = iVar6 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  DAT_009c73ea = 1;
  FUN_00482090();
  if (*(int *)((int)*(void **)((int)this_ + 0x50) + 0x4fc) != 0) {
    pfVar5 = (float *)FUN_0040da30(bea_arg(*(void **)((int)this_ + 0x50)), bea_arg(local_30));
    local_20 = *pfVar5;
    local_1c = pfVar5[1];
    local_18 = pfVar5[2];
    local_14 = pfVar5[3];
    FUN_00551300(bea_arg(&DAT_009c65c0), bea_arg(&local_10), bea_arg(&local_20), bea_arg(*(undefined4 *)((int)this_ + 0x54)));
    FUN_00555be0(bea_arg(local_10), bea_arg(local_c), bea_arg(0x3c23d70a), bea_arg(*(undefined4 *)((int)this_ + 0x110)), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0xffffffff), bea_arg(0x3f800000), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
  }
  iVar9 = 0;
  pfVar5 = (float *)FUN_0040d7c0(bea_arg(*(void **)((int)this_ + 0x50)), bea_arg(local_30));
  local_20 = *pfVar5;
  local_1c = pfVar5[1];
  local_18 = pfVar5[2];
  local_14 = pfVar5[3];
  FUN_00551300(bea_arg(&DAT_009c65c0), bea_arg(&local_10), bea_arg(&local_20), bea_arg(*(undefined4 *)((int)this_ + 0x54)));
  iVar6 = *(int *)((int)this_ + 0x50);
  iVar11 = *(int *)(iVar6 + 0x4e0);
  if ((iVar11 == 0) || (*(int *)(iVar6 + 0x4fc) != 0)) {
    iVar2 = *(int *)(iVar6 + 0x4cc);
    if ((iVar2 == 0) || ((*(byte *)(iVar2 + 0x34) & 0x10) == 0)) goto LAB_004844ef;
    iVar2 = *(int *)(iVar2 + 0x138);
    if (*(int *)(iVar6 + 0x138) == 0) {
      if (iVar2 == 0) {
        iVar9 = 1;
        goto LAB_004844ef;
      }
      if (iVar2 != 1) goto LAB_004844ef;
    }
    else {
      if (*(int *)(iVar6 + 0x138) != 1) goto LAB_004844ef;
      if (iVar2 == 1) {
        iVar9 = 1;
        goto LAB_004844ef;
      }
      if (iVar2 != 0) goto LAB_004844ef;
    }
  }
  iVar9 = 2;
LAB_004844ef:
  if (iVar11 == 0) {
    iVar11 = *(int *)(iVar6 + 0x4c8);
  }
  if (((*(int *)(iVar6 + 0x4fc) == 0) && (iVar11 != 0)) && (iVar9 == 2)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  // 0x484517: approach the target size; step = DAT_008a9e20 * 0.5 first, the sum compared unrounded
  float10 fStep, fSum, fF, fS, fU, fOff;
  float fV, fScale, fW, fOneMinus, fK255;
  int iR1, iR2, iR3, iRD, iA;
  uint uCol, uCol2;
  if (iVar9 == 0) {
    pfVar5 = (float *)((int)this_ + *(int *)((int)this_ + 0x58) * 4 + 0xd4);
    fStep = (float10)DAT_008a9e20 * (float10)0.5f;
    fSum = ((float10)1.0f - (float10)*pfVar5) * fStep + (float10)*pfVar5;
    *pfVar5 = (float)fSum;
    if (!(ABS((float10)1.0f - fSum) >= (float10)0.05f)) {
      *(uint32_t *)pfVar5 = 0x3f800000;
    }
  }
  else if (iVar9 == 1) {
    pfVar5 = (float *)((int)this_ + *(int *)((int)this_ + 0x58) * 4 + 0xd4);
    fStep = (float10)DAT_008a9e20 * (float10)0.5f;
    fSum = ((float10)4.0f - (float10)*pfVar5) * fStep + (float10)*pfVar5;
    *pfVar5 = (float)fSum;
    if (!(ABS((float10)4.0f - fSum) >= (float10)0.05f)) {
      *(uint32_t *)pfVar5 = 0x40800000;
    }
  }
  else if (iVar9 == 2) {
    pfVar5 = (float *)((int)this_ + *(int *)((int)this_ + 0x58) * 4 + 0xd4);
    fStep = (float10)DAT_008a9e20 * (float10)0.5f;
    fSum = fStep * -(float10)*pfVar5 + (float10)*pfVar5;
    *pfVar5 = (float)fSum;
    if (!(ABS(-fSum) >= (float10)0.05f)) {
      *(uint32_t *)pfVar5 = 0;
    }
  }
  // 0x4845f6: (DAT * 0.5) * 0.6
  fStep = (float10)DAT_008a9e20 * (float10)0.5f * (float10)0.6f;
  pfVar5 = (float *)((int)this_ + *(int *)((int)this_ + 0x58) * 4 + 0xe4);
  if (bVar4) {
    fSum = ((float10)0.5f - (float10)*pfVar5) * fStep + (float10)*pfVar5;
    *pfVar5 = (float)fSum;
    if (!(ABS((float10)0.5f - fSum) >= (float10)0.01f)) {
      *(uint32_t *)pfVar5 = 0x3f000000;
    }
  }
  else {
    fSum = ((float10)1.0f - (float10)*pfVar5) * fStep + (float10)*pfVar5;
    *pfVar5 = (float)fSum;
    if (!(ABS((float10)1.0f - fSum) >= (float10)0.01f)) {
      *(uint32_t *)pfVar5 = 0x3f800000;
    }
  }
  // 0x48467e: base colour; 1-f and f*255 go through float slots (esp+0xc, esp+0x10)
  iVar6 = *(int *)((int)this_ + 0x58);
  fV = *(float *)((int)this_ + iVar6 * 4 + 0xd4);
  if (fV >= 1.0f) {
    fF = ((float10)4.0f - (float10)fV) * (float10)0.33333334f;
    fOneMinus = (float)((float10)1.0f - fF);
    fK255 = (float)(fF * (float10)255.0f);
    iR1 = (int)(longlong)ROUND(fF * (float10)175.0f + (float10)fOneMinus * (float10)175.0f);
    iR2 = (int)(longlong)ROUND((float10)fOneMinus * (float10)255.0f + (float10)fK255);
    iR3 = (int)(longlong)ROUND((float10)fOneMinus * (float10)159.0f + (float10)fK255);
    uCol = (((iR1 << 0x10) + iR2) << 8) + (iR3 << 0x10) + iR3;
  }
  else {
    fOneMinus = (float)((float10)1.0f - (float10)fV);
    fK255 = (float)((float10)fV * (float10)255.0f);
    iR1 = (int)(longlong)ROUND((float10)fV * (float10)175.0f + (float10)fOneMinus * (float10)175.0f);
    iR2 = (int)(longlong)ROUND((float10)fOneMinus * (float10)255.0f + (float10)fK255);
    iR3 = (int)(longlong)ROUND((float10)fOneMinus * (float10)127.0f + (float10)fK255);
    uCol = (((iR1 << 8) + iR2) << 0x10) + (iR3 << 8) + iR3;
  }
  uVar12 = uCol;
  fScale = (float)((float10)fV * (float10)0.5f + (float10)0.5f);     // esp+0xc
  uVar7 = uVar12;
  if (fV > 1.0f) {     // 0x4847ab test ah,0x41
    iA = (int)(longlong)ROUND(((float10)4.0f - (float10)fV) * (float10)68.0f + (float10)51.0f);
    if (iA < 0) {
      iA = 0;
    }
    else if (0xff < iA) {
      iA = 0xff;
    }
    uVar7 = ((uVar12 >> 8 & 0xffff0000) * iA ^ uVar12) & 0xffffff ^ (uVar12 >> 8 & 0xff0000) * iA;
  }
  // 0x484810: fcomp 0.0; test ah,0x40 (C3: equal or unordered)
  fV = *(float *)((int)this_ + iVar6 * 4 + 0xf4);
  if ((fV < 0.0f || fV > 0.0f) || (*(int *)(*(int *)((int)this_ + 0x50) + 0x2fc) != 0)) {
    *(float *)((int)this_ + iVar6 * 4 + 0xf4) =
         (float)((float10)DAT_008a9e20 * (float10)0.25f + (float10)*(float *)((int)this_ + iVar6 * 4 + 0xf4));
  }
  pfVar5 = (float *)((int)this_ + *(int *)((int)this_ + 0x58) * 4 + 0xf4);
  if (*pfVar5 > 6.2831855f) {
    if (*(int *)(*(int *)((int)this_ + 0x50) + 0x2fc) == 0) {
      *(uint32_t *)pfVar5 = 0;
    }
    else {
      *pfVar5 = *pfVar5 - 6.2831855f;
    }
  }
  if (*(int *)(*(int *)((int)this_ + 0x50) + 0x2fc) != 0) {
    fS = (float10)*(float *)((int)this_ + *(int *)((int)this_ + 0x58) * 4 + 0xf4);
    fS = fsin(fS + fS) * (float10)0.5f + (float10)0.5f;
    fU = (float10)1.0f - fS;
    iR1 = (int)(longlong)ROUND(fU * (float10)31.0f + fS * (float10)255.0f);
    iR2 = (int)(longlong)ROUND(fS * (float10)175.0f + fU * (float10)175.0f);
    iR3 = (int)(longlong)ROUND(fS * (float10)207.0f + fU * (float10)175.0f);
    iRD = (int)(longlong)ROUND(fU * (float10)255.0f + fS * (float10)127.0f);
    uVar7 = ((((iR1 + (iR2 << 8)) << 8) + iR3) << 8) + iRD;
  }
  // 0x48492a
  iVar6 = *(int *)((int)this_ + 0x58);
  fOff = (float10)0.0f;
  if (!(*(float *)((int)this_ + iVar6 * 4 + 0xd4) >= 1.0f)) {
    fOff = ((float10)1.0f - (float10)*(float *)((int)this_ + iVar6 * 4 + 0xd4)) * (float10)0.5f;
  }
  FUN_00555be0(bea_arg(local_10), bea_arg(local_c), bea_arg(0x3c343958), bea_arg(*(undefined4 *)((int)this_ + 0x16c)), bea_arg(4), bea_arg(0), bea_arg(0x3f800000),
               bea_arg((float)(fOff + (float10)*(float *)((int)this_ + iVar6 * 4 + 0xf4))), bea_arg(uVar7), bea_arg(fScale),
               bea_arg((float)((float10)DAT_00888a40 * (float10)fScale)), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
  // 0x4849ad
  fW = *(float *)((int)this_ + *(int *)((int)this_ + 0x58) * 4 + 0xe4);
  iA = (int)(longlong)ROUND((((float10)1.0f - (float10)fW) + (float10)1.0f) * (float10)127.5f);
  if (iA < 0) {
    iA = 0;
  }
  else if (0xff < iA) {
    iA = 0xff;
  }
  uCol2 = ((uVar12 >> 8 & 0xffff0000) * iA ^ uVar12) & 0xffffff ^ (uVar12 >> 8 & 0xff0000) * iA;
  FUN_00555be0(bea_arg(local_10), bea_arg(local_c), bea_arg(0x3c343958), bea_arg(*(undefined4 *)((int)this_ + 0x170)), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(uCol2), bea_arg(fW),
               bea_arg((float)((float10)DAT_00888a40 * (float10)fW)), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
  FUN_00555be0(bea_arg(local_10), bea_arg(local_c), bea_arg(0x3c343958), bea_arg(*(undefined4 *)((int)this_ + 0x174)), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(uCol2), bea_arg(fW),
               bea_arg((float)((float10)DAT_00888a40 * (float10)fW)), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
  // 0x484aa7
  pfVar5 = (float *)((int)this_ + *(int *)((int)this_ + 0x58) * 4 + 400);
  *pfVar5 = (float)((float10)DAT_008a9e20 * (float10)0.4f + (float10)*pfVar5);
  pfVar5 = (float *)((int)this_ + *(int *)((int)this_ + 0x58) * 4 + 400);
  if (*pfVar5 >= 6.0f) {
    *pfVar5 = *pfVar5 - 6.0f;
  }
  if ((*(int *)(DAT_008a9d84 + 8) != 0) &&
     (this_00 = *(void **)(*(int *)(DAT_008a9d84 + 8) + 0x30), this_00 != (void *)0x0)) {
    if ((*(byte *)((int)this_00 + 0x34) & 0x10) == 0) {
      pfVar5 = (float *)bea_vcall<uint32_t>(((int)this_00 + 8), 0x0, local_30);
      local_20 = pfVar5[0];
      local_1c = pfVar5[1];
      local_18 = pfVar5[2];
      local_14 = pfVar5[3];
    }
    else {
      FUN_004fd500(bea_arg(this_00), bea_arg(&local_20));
    }
    iVar6 = *(int *)((int)this_ + 0x50);
    fVar13 = -fpatan((float10)local_20 - (float10)*(float *)(iVar6 + 0x1c),
                     (float10)local_1c - (float10)*(float *)(iVar6 + 0x20));
    fVar14 = (float10)*(float *)(iVar6 + 0x114);
    // 0x484b5d: C0 / C0|C3 tests (unordered counts as less-or-equal)
    if (!(fVar13 >= (float10)-1.5707964f) && (fVar14 > (float10)1.5707964f)) {
      fVar14 = fVar14 - (float10)6.2831855f;
    }
    else if ((fVar13 > (float10)1.5707964f) && !(fVar14 >= (float10)-1.5707964f)) {
      fVar14 = fVar14 + (float10)6.2831855f;
    }
    if (!(ABS(fVar13 - fVar14) >= (float10)1.5707964f)) {
      FUN_00551300(bea_arg(&DAT_009c65c0), bea_arg(&local_10), bea_arg(&local_20), bea_arg(*(undefined4 *)((int)this_ + 0x54)));
      iVar6 = (int)(longlong)ROUND(FUN_0055dfe7((double)*(float *)((int)this_ + *(int *)((int)this_ + 0x58) * 4 + 400)));
      FUN_00555be0(bea_arg(local_10), bea_arg(local_c), bea_arg(0x3c343958), bea_arg(*(undefined4 *)((int)this_ + iVar6 * 4 + 0x178)), bea_arg(4), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0xffffff00), bea_arg(0x3f800000), bea_arg(DAT_00888a40), bea_arg(0), bea_arg(0x3f800000), bea_arg(0), bea_arg(0x3f800000));
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00484340, ap_00484340));
