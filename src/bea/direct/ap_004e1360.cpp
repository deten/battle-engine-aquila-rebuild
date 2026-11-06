// auto-ported from 004e1360_FUN_004e1360.c (FUN_004e1360, 1177 bytes) by tools/autoport.py
// @hand-fixed 2026-10-28 compile: rewritten from the asm on the original 0xc0 frame (tmp [esp+0x10], A +0x20, B +0x30, matA +0x40, tmpmat +0x70, matB +0xa0). Float slots param_1[0x11..0x13] are stored as floats, not (int) conversions (0x4e14e9, 0x4e1675, 0x4e171a); distance sums grouped as the asm, (d2^2+d1^2)+d0^2 (0x4e15f0-0x4e1612), A[2] overwritten by P2-B2 (fst at 0x4e15f0); transform rows (m1*P1+m2*P2)+m0*P0 (0x4e16c1-0x4e1724); sin term ((s*10)^2)^2*sign via fistp qword (0x4e17c9-0x4e17dd), sign -1 for s<=0 or NaN (test ah,0x41 at 0x4e17b6)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xc0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define DAT_00663070 GLOBAL_AT(int, 0x00663070)
typedef void* (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef void* (BEA_THISCALL* FUN_00401f10_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401f10_t> FUN_00401f10 = {(FUN_00401f10_t)0x00401f10};
typedef undefined4 (BEA_THISCALL* FUN_0046f2c0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0046f2c0_t> FUN_0046f2c0 = {(FUN_0046f2c0_t)0x0046f2c0};
typedef int (BEA_THISCALL* FUN_004725d0_t)(uint32_t);
static const bea_guard<FUN_004725d0_t> FUN_004725d0 = {(FUN_004725d0_t)0x004725d0};
typedef uint32_t (BEA_THISCALL* FUN_004aa3f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa3f0_t> FUN_004aa3f0 = {(FUN_004aa3f0_t)0x004aa3f0};
typedef uint32_t (BEA_THISCALL* FUN_004b0c00_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004b0c00_t> FUN_004b0c00 = {(FUN_004b0c00_t)0x004b0c00};

static void BEA_STDCALL ap_004e1360(int *param_1, int param_2)
{
  alignas(16) uint8_t bea_frame_[0xc0] = {};   // the original stack frame (emulate_frame)
  float *tmp = reinterpret_cast<float *>(bea_frame_ + 0x00);   // [esp+0x10] local_c0
  float *vA  = reinterpret_cast<float *>(bea_frame_ + 0x10);   // [esp+0x20] local_b0
  float *vB  = reinterpret_cast<float *>(bea_frame_ + 0x20);   // [esp+0x30] local_a0
  float *mA  = reinterpret_cast<float *>(bea_frame_ + 0x30);   // [esp+0x40] local_90 (3x4)
  float *mT  = reinterpret_cast<float *>(bea_frame_ + 0x60);   // [esp+0x70] afStack_60
  float *mB  = reinterpret_cast<float *>(bea_frame_ + 0x90);   // [esp+0xa0] local_30
  float *P = reinterpret_cast<float *>(param_1 + 0x11);        // ebp = ebx+0x44
  const void *src;
  int *piVar4;
  int iVar11;

  piVar4 = (int *)FUN_0046f2c0(bea_arg(&DAT_008a9a98), bea_arg(0));
  // A = B = the vector at 0x83cfd8, matA = matB = the 3x4 at 0x83cfa8 (0x4e1376-0x4e13da)
  __builtin_memcpy(vA, reinterpret_cast<const void *>((uintptr_t)0x0083cfd8), 0x10);
  __builtin_memcpy(mA, reinterpret_cast<const void *>((uintptr_t)0x0083cfa8), 0x30);
  __builtin_memcpy(vB, reinterpret_cast<const void *>((uintptr_t)0x0083cfd8), 0x10);
  __builtin_memcpy(mB, reinterpret_cast<const void *>((uintptr_t)0x0083cfa8), 0x30);
  if (piVar4 != (int *)0x0) {
    src = (const void *)(uintptr_t)bea_vcall<uint32_t>(piVar4, 0x0, tmp);
    __builtin_memcpy(vA, src, 0x10);
    src = (const void *)(uintptr_t)bea_vcall<uint32_t>(piVar4, 0x4, mT);
    __builtin_memcpy(mA, src, 0x30);
  }
  iVar11 = FUN_004725d0(bea_arg(&DAT_008a9a98));
  if ((iVar11 != 0) && (piVar4 = (int *)FUN_0046f2c0(bea_arg(&DAT_008a9a98), bea_arg(1)), piVar4 != (int *)0x0)) {
    src = (const void *)(uintptr_t)bea_vcall<uint32_t>(piVar4, 0x0, tmp);
    __builtin_memcpy(vB, src, 0x10);
    src = (const void *)(uintptr_t)bea_vcall<uint32_t>(piVar4, 0x4, mT);
    __builtin_memcpy(mB, src, 0x30);
  }
  iVar11 = param_1[4];
  if (((iVar11 != 3) && (iVar11 != 2)) && (iVar11 != 0)) {
    if (iVar11 != 1) {
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      if (*(int *)(param_1[3] + 4) == 1) {
        P[0] = P[0] - 0.1f;                           // fsub [0x5d85c0] (0x4e14d7)
        param_1[0xd] = -10000;
      }
      else if (*(int *)(param_1[3] + 4) == 2) {
        P[0] = P[0] + 0.1f;
        param_1[0xd] = 10000;
      }
      goto LAB_004e1752;
    }
    if (param_2 == 0) goto LAB_004e1752;
  }
  if ((*param_1 == 0) || (param_1[0x20] != 0)) {
    if ((param_2 != 0) || (iVar11 == 0)) {
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
    }
  }
  else {
    src = (const void *)(uintptr_t)bea_vcall<uint32_t>(*param_1, 0xc, tmp);
    __builtin_memcpy(param_1 + 0x11, src, 0x10);
    src = (const void *)(uintptr_t)bea_vcall<uint32_t>(*param_1, 0x14, tmp);
    __builtin_memcpy(param_1 + 0x15, src, 0x10);
    __builtin_memcpy(tmp, vA, 0x10);
    __builtin_memcpy(mT, mA, 0x30);
    iVar11 = FUN_004725d0(bea_arg(&DAT_008a9a98));
    if (iVar11 != 0) {
      float10 a0 = (float10)P[0] - (float10)vA[0];
      float10 a1 = (float10)P[1] - (float10)vA[1];
      float10 a2 = (float10)P[2] - (float10)vA[2];
      float10 b0 = (float10)P[0] - (float10)vB[0];
      float10 b1 = (float10)P[1] - (float10)vB[1];
      float10 b2 = (float10)P[2] - (float10)vB[2];
      vA[2] = (float)b2;                              // fst [esp+0x28] (0x4e15f0)
      float10 sB = (b2 * (float10)vA[2] + b1 * b1) + b0 * b0;
      float10 sA = (a2 * a2 + a1 * a1) + a0 * a0;
      if (sA > sB) {                                  // fcompp; test ah,0x41 (0x4e1614-0x4e1620)
        __builtin_memcpy(tmp, vB, 0x10);
        __builtin_memcpy(mT, mB, 0x30);
      }
    }
    P[0] = P[0] - tmp[0];
    P[1] = P[1] - tmp[1];
    P[2] = P[2] - tmp[2];
    FUN_00401ec0(bea_arg(tmp), ((uint32_t *)mT)[2], ((uint32_t *)mT)[6], ((uint32_t *)mT)[10]);
    uint32_t uVar9 = FUN_004b0c00(bea_arg(mT), bea_arg(vB));
    uint32_t uVar10 = FUN_004aa3f0(bea_arg(mT), bea_arg(vA));
    FUN_00401f10(bea_arg(mA), bea_arg(uVar10), bea_arg(uVar9), bea_arg(tmp));
    tmp[0] = (float)(((float10)mA[1] * (float10)P[1] + (float10)mA[2] * (float10)P[2]) + (float10)mA[0] * (float10)P[0]);
    tmp[1] = (float)(((float10)mA[5] * (float10)P[1] + (float10)mA[6] * (float10)P[2]) + (float10)mA[4] * (float10)P[0]);
    tmp[2] = (float)(((float10)mA[9] * (float10)P[1] + (float10)mA[10] * (float10)P[2]) + (float10)mA[8] * (float10)P[0]);
    __builtin_memcpy(P, tmp, 0x10);                   // P[3] = tmp[3] too (0x4e171d-0x4e1731)
  }
LAB_004e1752:
  if (DAT_00663070 != 0) {
    P[0] = -P[0];
  }
  if (((*param_1 != 0) && (param_1[0x20] == 0)) && ((param_1[4] == 2 || (param_1[4] == 3)))) {
    __builtin_memcpy(tmp, P, 0x10);
    float10 fS = fsin(fpatan((float10)tmp[0], (float10)tmp[1]));   // fld P0; fld P1; fpatan; fsin
    vA[0] = (float)fS;                                // fst [esp+0x20]
    float10 fSign = (fS > (float10)0.0f) ? (float10)1.0f : (float10)-1.0f;
    float10 fU = (float10)vA[0] * (float10)10.0f;
    float10 fW = fU * fU;
    param_1[0xd] = (int)(uint32_t)__builtin_llrintl(fW * fW * fSign);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e1360, ap_004e1360));
