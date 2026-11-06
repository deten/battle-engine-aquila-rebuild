// auto-ported from 00427210_FUN_00427210.c (FUN_00427210, 2152 bytes) by tools/autoport.py
// @hand-fixed 2026-10-28 compile: rewritten from the asm. 0x482090/0x4821b0/0x4821e0 get ecx=0x8aa4e8, 0x513bc0 ecx=0x855bb0, 0x515940/0x515b00 ecx=0x88a0a8 as the asm sets them (0x427219-0x42723f); fild of the screen size (0x427252, 0x42726e); free-slot search treats NaN as free (test ah,0x41 at 0x42734b); angle wraps loop while !(a>=0) / a>2pi as the C0 tests do (0x4273f9, 0x427430); ints for the dial slots are fistp qword low dwords and the colour is 0xff000000-c*0x10101 (0x427483-0x4274a2); the 4-way loop index switch is on an int with unsigned /360 (mul 0x6c16c16d), case 0 fimul + fistp (0x427750-0x42777a), case 1 fild qword of the unsigned (0x4277e6), then fild/fidiv by the int count (0x42786d-0x427882); last loop keeps the wrapped angle unrounded for fcos/fsin (0x42799b-0x427a28)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x50: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define DAT_008aa4e8 GLOBAL_AT(int, 0x008aa4e8)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_00897a98 GLOBAL_AT(int, 0x00897a98)
#define DAT_009c7fc8 GLOBAL_AT(char, 0x009c7fc8)
#define DAT_008a9e20 GLOBAL_AT(float, 0x008a9e20)
#define DAT_00888a40 GLOBAL_AT(float, 0x00888a40)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_0065042c GLOBAL_AT(uint32_t, 0x0065042c)
#define DAT_00855148 GLOBAL_AT(int*, 0x00855148)
#define DAT_00855140 GLOBAL_AT(int*, 0x00855140)
typedef float10 (BEA_THISCALL* CBattleEngine__vslot78_t)(uint32_t);
static const bea_guard<CBattleEngine__vslot78_t> CBattleEngine__vslot78 = {(CBattleEngine__vslot78_t)0x00406040};
typedef float10 (BEA_THISCALL* FUN_0040c630_t)(uint32_t);
static const bea_guard<FUN_0040c630_t> FUN_0040c630 = {(FUN_0040c630_t)0x0040c630};
typedef uint32_t (BEA_THISCALL* FUN_0040d660_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0040d660_t> FUN_0040d660 = {(FUN_0040d660_t)0x0040d660};
typedef int (BEA_THISCALL* FUN_004725d0_t)(uint32_t);
static const bea_guard<FUN_004725d0_t> FUN_004725d0 = {(FUN_004725d0_t)0x004725d0};
// the asm loads ecx before these even though the callees ignore it: called as thiscall to mirror that
typedef void (BEA_THISCALL* FUN_00482090_t)(uint32_t);
static const bea_guard<FUN_00482090_t> FUN_00482090 = {(FUN_00482090_t)0x00482090};
typedef void (BEA_THISCALL* FUN_004821b0_t)(uint32_t);
static const bea_guard<FUN_004821b0_t> FUN_004821b0 = {(FUN_004821b0_t)0x004821b0};
typedef void (BEA_THISCALL* FUN_004821e0_t)(uint32_t);
static const bea_guard<FUN_004821e0_t> FUN_004821e0 = {(FUN_004821e0_t)0x004821e0};
typedef int (BEA_THISCALL* FUN_004881e0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004881e0_t> FUN_004881e0 = {(FUN_004881e0_t)0x004881e0};
typedef float10 (BEA_THISCALL* FUN_004f99f0_t)(uint32_t);
static const bea_guard<FUN_004f99f0_t> FUN_004f99f0 = {(FUN_004f99f0_t)0x004f99f0};
typedef void (BEA_THISCALL* FUN_00513bc0_t)(uint32_t, uint32_t, uint32_t);   // stdcall(2) callee, same stack
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef int (BEA_THISCALL* FUN_00515940_t)(uint32_t);
static const bea_guard<FUN_00515940_t> FUN_00515940 = {(FUN_00515940_t)0x00515940};
typedef int (BEA_THISCALL* FUN_00515b00_t)(uint32_t);
static const bea_guard<FUN_00515b00_t> FUN_00515b00 = {(FUN_00515b00_t)0x00515b00};
typedef void (BEA_THISCALL* FUN_0051a510_t)(uint32_t);
static const bea_guard<FUN_0051a510_t> FUN_0051a510 = {(FUN_0051a510_t)0x0051a510};
typedef uint32_t (BEA_CDECL* FUN_00555be0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00555be0_t> FUN_00555be0 = {(FUN_00555be0_t)0x00555be0};

#define AP_TWO_PI 6.2831855f   // [0x5d85e0]

static void BEA_THISCALL ap_00427210(void * this_, int param_1)
{
  alignas(16) uint8_t bea_frame_[0x50] = {};   // the original stack frame (emulate_frame): S+Y -> bea_frame_+Y-0xc
  float *pBufA = reinterpret_cast<float *>(bea_frame_ + 0x0c);       // [esp+0x18] local_44
  float *pBufB = reinterpret_cast<float *>(bea_frame_ + 0x24);       // [esp+0x30] local_2c / local_28
  float &fDx = *reinterpret_cast<float *>(bea_frame_ + 0x34);        // [esp+0x40] local_1c
  float &fDy = *reinterpret_cast<float *>(bea_frame_ + 0x38);        // [esp+0x44] fStack_18
  uint32_t *pLocalC = reinterpret_cast<uint32_t *>(bea_frame_ + 0x44);   // [esp+0x50] local_c
  const uintptr_t self = (uintptr_t)this_;
  float fL4c;        // [esp+0x10]
  float fL34;        // [esp+0x28]
  float fAng;        // [esp+0x60] (param_1's slot, reused)
  float10 fR;
  int iSet;
  int iVar3;
  uint32_t c;

  FUN_00482090(bea_arg(&DAT_008aa4e8));
  FUN_004821b0(bea_arg(&DAT_008aa4e8));
  FUN_00513bc0(bea_arg(&DAT_00855bb0), bea_arg(0x17), bea_arg(8));
  iVar3 = FUN_00515940(bea_arg(&DAT_0088a0a8));
  fL34 = (float)((float10)iVar3 * (float10)0.5f);
  iVar3 = FUN_00515b00(bea_arg(&DAT_0088a0a8));
  iSet = 0;
  fL4c = (float)((float10)iVar3 * (float10)0.5f);
  iVar3 = FUN_004725d0(bea_arg(&DAT_008a9a98));
  if (iVar3 != 0) {
    if (*(int *)(*(int *)(param_1 + 0x574) + 0x2c) == 1) {
      fL4c = fL4c * 0.5f;
    }
    else {
      fL4c = fL4c * 1.5f;
      iSet = 1;
    }
  }
  DAT_009c7fc8 = 1;
  int obj = *(int *)(param_1 + 0x2b8);
  if (obj != 0) {
    float *pfBase = (float *)(self + (iSet * 3 + 0xf09) * 4);
    float *pf = pfBase;
    for (int n = 0x1e; n != 0; n--) {
      if (*pf > 0.0f) {
        *pf = *pf - DAT_008a9e20;
      }
      pf = pf + 6;
    }
    int *link = *(int **)(obj + 0x1c);
    *(int **)(obj + 0x24) = link;
    int *node = (link == 0) ? (int *)0 : (int *)*link;
    while (BEA_LOOP_GUARD(node != 0)) {
      int key = node[2];
      int i;
      for (i = 0; i < 0x1e; i++) {
        if (*(int *)(self + iSet * 0xc + 0x3c28 + i * 0x18) == key) break;
      }
      if (i < 0x1e) {
        *(int *)(self + (iSet + i * 2) * 0xc + 0x3c2c) = node[0];
      }
      else {
        for (i = 0; i < 0x1e; i++) {
          if (!(pfBase[i * 6] > 0.0f)) {                // C0|C3: <= 0 or NaN
            int idx = iSet + i * 2;
            *(int *)(self + idx * 0xc + 0x3c28) = key;
            *(int *)(self + idx * 0xc + 0x3c2c) = node[0];
            *(uint32_t *)(self + (idx * 3 + 0xf09) * 4) = 0x41a00000;
            break;
          }
        }
      }
      link = *(int **)(*(int *)(obj + 0x24) + 4);
      *(int **)(obj + 0x24) = link;
      node = (link == 0) ? (int *)0 : (int *)*link;
    }
    float *pHeading = (float *)(uintptr_t)FUN_0040d660(bea_arg(param_1), bea_arg(pLocalC));
    float fHeading = *pHeading;
    pf = pfBase;
    for (int n = 0x1e; n != 0; n--) {
      if (*pf > 0.0f) {
        fAng = fHeading - pf[2];
        while (BEA_LOOP_GUARD(!(fAng >= 0.0f))) fAng = fAng + AP_TWO_PI;
        while (BEA_LOOP_GUARD(fAng > AP_TWO_PI)) fAng = fAng - AP_TWO_PI;
        iVar3 = FUN_004725d0(bea_arg(&DAT_008a9a98));
        fR = (iVar3 == 0) ? (float10)111.5f : (float10)95.0f;
        c = (uint32_t)__builtin_llrintl((float10)*pf * (float10)0.05f * (float10)-255.0f);
        float fY = (float)((float10)fL4c - (float10)fcos((float10)fAng) * fR * (float10)DAT_00888a40);
        float fX = (float)((float10)fsin((float10)fAng) * fR + (float10)fL34);
        FUN_00555be0(bea_arg(fX), bea_arg(fY), 0x3a83126f, *(uint32_t *)(self + 0x3ef4), 4, 0, 0x3f800000,
                     bea_arg(fAng), 0xff000000u - c * 0x10101u, 0x3f800000, 0x3f800000, 0, 0x3f800000, 0, 0x3f800000);
      }
      pf = pf + 6;
    }
  }
  FUN_0051a510(bea_arg(&DAT_00897a98));
  {
    int *link = *(int **)(param_1 + 0x250);
    float *pe = (link == 0) ? (float *)0 : (float *)*link;
    while (BEA_LOOP_GUARD(pe != 0)) {
      fAng = pe[0];
      while (BEA_LOOP_GUARD(!(fAng >= 0.0f))) fAng = fAng + AP_TWO_PI;
      while (BEA_LOOP_GUARD(fAng > AP_TWO_PI)) fAng = fAng - AP_TWO_PI;
      iVar3 = FUN_004725d0(bea_arg(&DAT_008a9a98));
      fR = (iVar3 == 0) ? (float10)96.0f : (float10)80.0f;
      float10 fD = (float10)DAT_00672fd0 - (float10)pe[1];
      if (fD >= (float10)0.0f) {
        float10 fF = ((float10)2.0f - fD) * (float10)0.5f;
        if (fF > (float10)0.0f) {
          c = (uint32_t)__builtin_llrintl(fF * (float10)-255.0f);
          float fY = (float)((float10)fL4c - (float10)fcos((float10)fAng) * fR * (float10)DAT_00888a40);
          float fX = (float)((float10)fsin((float10)fAng) * fR + (float10)fL34);
          FUN_00555be0(bea_arg(fX), bea_arg(fY), 0x3a83126f, *(uint32_t *)(self + 0x3ef8), 4, 0, 0x3f800000,
                       bea_arg(fAng), 0xff000000u - c * 0x10101u, 0x3f800000, 0x3f800000, 0, 0x3f800000, 0, 0x3f800000);
        }
      }
      link = (int *)link[1];
      pe = (link == 0) ? (float *)0 : (float *)*link;
    }
  }
  FUN_0051a510(bea_arg(&DAT_00897a98));
  iVar3 = FUN_004725d0(bea_arg(&DAT_008a9a98));
  float fRadius = (iVar3 == 0) ? 110.0f : 100.0f;    // [esp+0x2c]
  FUN_004f99f0(bea_arg(param_1));
  CBattleEngine__vslot78(bea_arg(param_1));
  FUN_0040c630(bea_arg(param_1));
  for (int i = 0; i < 4; i++) {
    iVar3 = FUN_004881e0(bea_arg(&DAT_008aa4e8), bea_arg(0));
    if ((iVar3 == 0) && ((i == 0) || (i == 2))) continue;
    iVar3 = FUN_004881e0(bea_arg(&DAT_008aa4e8), bea_arg(1));
    if ((iVar3 == 0) && ((i == 1) || (i == 3))) continue;
    uint32_t N;
    int iSlot = 0;   // [esp+0x18]
    switch (i) {
    case 0: {
      float10 fv = FUN_004f99f0(bea_arg(param_1));
      N = DAT_0065042c;
      pBufB[1] = 0.0f;                                // mov [esp+0x34],ebp
      int t = (int)((N * 0x96) / 0x168 - (N * 0x3c) / 0x168);
      *(int *)pBufB = t;                              // [esp+0x30], fimul operand
      pBufA[0] = (float)(fv * (float10)t);
      float10 fw = CBattleEngine__vslot78(bea_arg(param_1));
      long long k = __builtin_llrintl((float10)pBufA[0] / fw);
      N = DAT_0065042c;
      iSlot = (int)((N * 0x96) / 0x168 - (uint32_t)k);
      break;
    }
    case 1: {
      N = DAT_0065042c;
      fDy = 0.0f;                                     // mov [esp+0x44],ebp: high dword of the fild qword
      float10 fpfc = (float10)*(float *)(param_1 + 0xfc);
      uint32_t t = (N * 0x168) / 0x168 - (N * 0xe1) / 0x168;
      *(uint32_t *)&fDx = t;
      pBufA[0] = (float)((float10)(long long)t * fpfc);
      float10 fw = FUN_0040c630(bea_arg(param_1));
      long long k = __builtin_llrintl((float10)pBufA[0] / fw);
      N = DAT_0065042c;
      iSlot = (int)((uint32_t)k + (N * 0xe1) / 0x168);
      break;
    }
    case 2:
      N = DAT_0065042c;
      iSlot = (int)((N * 0x96) / 0x168);
      break;
    default:   // 3
      N = DAT_0065042c;
      iSlot = (int)((N * 0xe1) / 0x168);
      break;
    }
    *(int *)pBufA = iSlot;
    pLocalC[0] = N;
    pLocalC[1] = 0;
    fAng = (float)((float10)iSlot / (float10)(int)N * (float10)AP_TWO_PI);
    float fY = (float)((float10)fL4c - (float10)fcos((float10)fAng) * (float10)fRadius * (float10)DAT_00888a40);
    float fX = (float)((float10)fsin((float10)fAng) * (float10)fRadius + (float10)fL34);
    FUN_00555be0(bea_arg(fX), bea_arg(fY), 0x3a83126f, *(uint32_t *)(self + 0x3efc), 4, 0, 0x3f800000,
                 bea_arg(fAng), 0xff1f1f1fu, 0x3f800000, 0x3f800000, 0, 0x3f800000, 0, 0x3f800000);
  }
  FUN_0051a510(bea_arg(&DAT_00897a98));
  FUN_004821e0(bea_arg(&DAT_008aa4e8));
  DAT_00855148 = DAT_00855140;
  iVar3 = (DAT_00855140 == 0) ? 0 : *DAT_00855140;
  while (BEA_LOOP_GUARD(iVar3 != 0)) {
    bea_vcall<uint32_t>(iVar3 + 8, 0x0, pBufB);
    float *pfPos = (float *)(uintptr_t)bea_vcall<uint32_t>(param_1 + 8, 0x0, pBufA);
    fDx = pBufB[0] - pfPos[0];
    fDy = pBufB[1] - pfPos[1];
    float *pHeading = (float *)(uintptr_t)FUN_0040d660(bea_arg(param_1), bea_arg(pLocalC));
    float10 fT = fpatan((float10)fDx, (float10)fDy);
    fAng = (float)((float10)*pHeading - -fT);         // fchs; fsubr [eax]; fstp [esp+0x60]
    iVar3 = FUN_004725d0(bea_arg(&DAT_008a9a98));
    fR = (iVar3 == 0) ? (float10)98.0f : (float10)82.0f;
    float10 fA = (float10)fAng;
    while (BEA_LOOP_GUARD(!(fA >= (float10)0.0f))) fA = fA + (float10)AP_TWO_PI;
    while (BEA_LOOP_GUARD(fA > (float10)AP_TWO_PI)) fA = fA - (float10)AP_TWO_PI;
    float fY = (float)((float10)fL4c - fcos(fA) * fR * (float10)DAT_00888a40);
    float fX = (float)(fsin(fA) * fR + (float10)fL34);
    FUN_00555be0(bea_arg(fX), bea_arg(fY), 0x3a83126f, *(uint32_t *)(self + 0x3f00), 4, 0, 0x3f800000,
                 0, 0xffffef1fu, 0x3f800000, 0x3f800000, 0, 0x3f800000, 0, 0x3f800000);
    DAT_00855148 = (int *)DAT_00855148[1];
    iVar3 = (DAT_00855148 == 0) ? 0 : *DAT_00855148;
  }
  FUN_0051a510(bea_arg(&DAT_00897a98));
  DAT_009c7fc8 = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00427210, ap_00427210));
