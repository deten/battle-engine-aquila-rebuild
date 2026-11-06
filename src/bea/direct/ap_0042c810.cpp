// hand-ported from 0042c810_FUN_0042c810.c (FUN_0042c810, 1832 bytes)
// @hand-fixed 2026-10-29 rewritten from the asm: every callee gets the ECX the original loads (0x88a0a8 for 0x515880/0x5158c0/0x515910/0x515940/0x515b00/0x5158e0, 0x855bb0 for 0x513bc0/0x513820/0x513930/0x513af0; Ghidra typed them cdecl/stdcall); float constants are the floats at 0x5d8578 (0.05f), 0x5d85e4, 0x5d85e0, 0x5d8604, 0x5d9644, 0x5d976c (1.001f) etc., not doubles; int divisors used by fidiv/fild exactly (0x42ca16, 0x42caf7, 0x42cb13), not rounded to float first; 0x9c68ac/0x9c690d are byte stores (0x42c938); the stack slots reused for floats (fVar12 slot -> loop t at 0x42cb99, param_2's slot -> centred x at 0x42cdc1) are separate memory floats; NaN branches per the status-word tests (0x42c869, 0x42c883, 0x42cc4d `test ah,0x40` = equal or unordered skips the 2nd vertex, 0x42ccbb loop while not greater)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define DAT_0083d448 GLOBAL_AT(int, 0x0083d448)
#define DAT_0062493c GLOBAL_AT(char, 0x0062493c)
#define DAT_0066e8c0 GLOBAL_AT(char, 0x0066e8c0)
#define DAT_009c68ac GLOBAL_AT(uint8_t, 0x009c68ac)
#define DAT_009c690d GLOBAL_AT(uint8_t, 0x009c690d)
#define DAT_005d9770 GLOBAL_AT(double, 0x005d9770)

typedef float10 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};
typedef uint32_t (BEA_THISCALL* T0_t)(uint32_t);
typedef uint32_t (BEA_THISCALL* T1_t)(uint32_t, uint32_t);
typedef uint32_t (BEA_THISCALL* T2_t)(uint32_t, uint32_t, uint32_t);
typedef uint32_t (BEA_THISCALL* T3_t)(uint32_t, uint32_t, uint32_t, uint32_t);
typedef uint32_t (BEA_THISCALL* T7_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<T0_t> FUN_00515880 = {(T0_t)0x00515880};
static const bea_guard<T0_t> FUN_004eb1e0 = {(T0_t)0x004eb1e0};
static const bea_guard<T0_t> FUN_005158c0 = {(T0_t)0x005158c0};
static const bea_guard<T1_t> FUN_00515910 = {(T1_t)0x00515910};
static const bea_guard<T2_t> FUN_00513bc0 = {(T2_t)0x00513bc0};
static const bea_guard<T3_t> FUN_00513820 = {(T3_t)0x00513820};
static const bea_guard<T3_t> FUN_00513930 = {(T3_t)0x00513930};
static const bea_guard<T2_t> FUN_00550d50 = {(T2_t)0x00550d50};
static const bea_guard<T0_t> FUN_00515b00 = {(T0_t)0x00515b00};
static const bea_guard<T0_t> FUN_00515940 = {(T0_t)0x00515940};
static const bea_guard<T2_t> FUN_0051a380 = {(T2_t)0x0051a380};
static const bea_guard<T0_t> FUN_00558690 = {(T0_t)0x00558690};
static const bea_guard<T2_t> FUN_00513a50 = {(T2_t)0x00513a50};
static const bea_guard<T0_t> FUN_0051a6a0 = {(T0_t)0x0051a6a0};
static const bea_guard<T1_t> FUN_00515a70 = {(T1_t)0x00515a70};
static const bea_guard<T0_t> FUN_00540970 = {(T0_t)0x00540970};
static const bea_guard<T1_t> FUN_004f2580 = {(T1_t)0x004f2580};
static const bea_guard<T2_t> FUN_00540680 = {(T2_t)0x00540680};
static const bea_guard<T7_t> FUN_00540640 = {(T7_t)0x00540640};
static const bea_guard<T0_t> FUN_005158e0 = {(T0_t)0x005158e0};
static const bea_guard<T1_t> FUN_004d2580 = {(T1_t)0x004d2580};     // stdcall(1); it loads its own ECX
static const bea_guard<T1_t> FUN_00513af0 = {(T1_t)0x00513af0};
typedef uint32_t (BEA_CDECL* FUN_00524830_t)(uint32_t);
static const bea_guard<FUN_00524830_t> FUN_00524830 = {(FUN_00524830_t)0x00524830};
typedef uint32_t (BEA_CDECL* FUN_005563d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t,
                                              uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005563d0_t> FUN_005563d0 = {(FUN_005563d0_t)0x005563d0};
typedef uint32_t (BEA_CDECL* FUN_00555be0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t,
                                              uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t,
                                              uint32_t);
static const bea_guard<FUN_00555be0_t> FUN_00555be0 = {(FUN_00555be0_t)0x00555be0};

static inline uint32_t bits_of(float f) { uint32_t u; memcpy(&u, &f, 4); return u; }
static inline uint32_t vbits(const volatile float &f) { return *(const volatile uint32_t *)&f; }

static void BEA_THISCALL ap_0042c810(void *this_, uint32_t param_1, uint32_t param_2)
{
  char bl;
  int obj;
  int sh0, sh1;           // (short)[obj+0xb0] << [obj+0xb2], [obj+0xac] << [obj+0xb2]
  int h, w;
  uint32_t a7, a6;
  uint32_t a16, a15, a14, a13, a12, a11, a2;
  volatile float fVar14;  // [esp+0x08]: height - 55
  volatile float fVar15;  // [esp+0x0c]: height - 35
  volatile float fVar12;  // [esp+0x10]: width - 80
  volatile float wspan;   // [esp+0x18]: fVar12 - 80
  volatile float phase;   // [esp+0x1c]
  volatile float t;       // [esp+0x10] reused
  volatile float x;       // [esp+0x2c]/[esp+0x14]
  float *pv;              // [esp+0x20], set by 0x51a380
  int tsz[2];             // [esp+0x24], [esp+0x28], set by 0x540680
  volatile float cx;      // param_2's slot
  volatile float cy;      // [esp+0x14] reused
  float10 r;
  float10 s;
  int c;
  uint32_t color;
  uint32_t col2;
  uint32_t txt;
  uint32_t u;
  int iVar5;

  if (*(char *)((int)this_ + 0xb3c6) != '\0') {
    return;
  }
  bl = (char)param_2;
  if ((*(int *)this_ == 0) && (bl != '\x02') && (bl != '\x03')) {
    return;
  }
  if ((*(int *)((int)this_ + 0xb3e0) != 0x42c80000) && (bl != '\x01')) {
    r = FUN_005159e0(0x0088a0a8);
    if ((float10)*(float *)((int)this_ + 0xb3d4) + (float10)0.05f > r) {      // fcompp; test ah,0x41
      r = FUN_005159e0(0x0088a0a8);
      if (r >= (float10)*(float *)((int)this_ + 0xb3d4)) {                     // fcomp; test ah,1
        return;
      }
    }
  }
  if (bl < '\x02') {
    FUN_00515880(0x0088a0a8);
  }
  *(float *)((int)this_ + 0xb3d4) = (float)FUN_005159e0(0x0088a0a8);
  *(char *)((int)this_ + 0xb3c6) = 1;
  FUN_004eb1e0(0x0083d248);
  if (FUN_005158c0(0x0088a0a8) != 0) {
    FUN_00515910(0x0088a0a8, 0);
    FUN_00513bc0(0x00855bb0, 0x1b, 0);
    FUN_00513bc0(0x00855bb0, 0xf, 0);
    FUN_00513820(0x00855bb0, 0, 1, 4);
    FUN_00513bc0(0x00855bb0, 0x13, 5);
    FUN_00513bc0(0x00855bb0, 0x14, 6);
    FUN_00513bc0(0x00855bb0, 7, 0);
    DAT_009c68ac = 0;
    DAT_009c690d = 1;
    FUN_00513930(0x00855bb0, 0, 1, 3);
    FUN_00513930(0x00855bb0, 0, 2, 3);
    FUN_00550d50(0x009c65c0, 0, 1);
    fVar14 = (float)(int)(FUN_00515b00(0x0088a0a8) - 0x37);
    fVar15 = (float)(int)(FUN_00515b00(0x0088a0a8) - 0x23);
    fVar12 = (float)(int)(FUN_00515940(0x0088a0a8) - 0x50);
    obj = *(int *)this_;
    if (obj != 0) {
      sh0 = (int)*(short *)(obj + 0xb0) << (*(byte *)(obj + 0xb2) & 0x1f);
      sh1 = *(int *)(obj + 0xac) << (*(byte *)(obj + 0xb2) & 0x1f);
      FUN_00515940(0x0088a0a8);
      FUN_00515b00(0x0088a0a8);
      h = (int)FUN_00515b00(0x0088a0a8);
      a7 = bits_of((float)((float10)h / (float10)sh0));
      w = (int)FUN_00515940(0x0088a0a8);
      a6 = bits_of((float)((float10)w / (float10)sh1));
      FUN_005563d0(0, 0, 0x3c23d70a, *(uint32_t *)this_, 0xffffffff, a6, a7, 0, 0, 0x3f800000, 0);
      obj = *(int *)this_;
      sh0 = (int)*(short *)(obj + 0xb0) << (*(byte *)(obj + 0xb2) & 0x1f);
      sh1 = *(int *)(obj + 0xac) << (*(byte *)(obj + 0xb2) & 0x1f);
      FUN_00515940(0x0088a0a8);
      FUN_00515b00(0x0088a0a8);
      h = (int)FUN_00515b00(0x0088a0a8);
      a16 = bits_of((float)((float10)fVar15 / (float10)h));
      h = (int)FUN_00515b00(0x0088a0a8);
      a15 = bits_of((float)((float10)fVar14 / (float10)h));
      w = (int)FUN_00515940(0x0088a0a8);
      a14 = bits_of((float)((float10)fVar12 / (float10)w));
      w = (int)FUN_00515940(0x0088a0a8);
      a13 = bits_of((float)((float10)80.0f / (float10)w));
      a12 = bits_of((float)((((float10)fVar15 + (float10)4.0f) - (float10)fVar14) / (float10)sh0));
      a11 = bits_of((float)((((float10)fVar12 + (float10)4.0f) - (float10)80.0f) / (float10)sh1));
      a2 = bits_of((float)((float10)fVar14 - (float10)2.0f));
      FUN_00555be0(0x429c0000, a2, 0x3c1374bc, *(uint32_t *)this_, 0, 0, 0, 0, 0xff000000, a11, a12, a13, a14,
                   a15, a16);
    }
    // 0x42cb4f: ebx = 0x3f800000 on both paths
    r = FUN_005159e0(0x0088a0a8);
    r = bea_x87call2(0x0055e3ea, (float10)DAT_005d9770, r);     // _CIfmod: ST0 = 20.0, ST1 = the time
    phase = (float)(r * (float10)1.5707964f);
    if ((short)FUN_0051a380(0x00897a98, (uint32_t)(uintptr_t)&pv, 0x2a) != -1) {
      wspan = (float)((float10)fVar12 - (float10)80.0f);
      t = 0.0f;
      do {
        pv[2] = 0.0f;
        *(uint32_t *)(pv + 3) = 0x3f800000;
        s = fsin((float10)phase - (float10)t * (float10)6.2831855f);
        c = (int)(longlong)ROUND(((s + (float10)1.0f) * (float10)0.2f) * (float10)-255.0f);
        color = 0xff000000u - (uint32_t)c * 0x10101u;
        *(uint32_t *)(pv + 1) = vbits(fVar15);
        *(uint32_t *)(pv + 4) = color;
        x = (float)((float10)t * (float10)wspan + (float10)80.0f);
        pv[0] = x;
        w = (int)FUN_00515940(0x0088a0a8);
        pv[5] = (float)((float10)x / (float10)w);
        h = (int)FUN_00515b00(0x0088a0a8);
        pv[6] = (float)((float10)fVar15 / (float10)h);
        pv = pv + 7;
        if (((float10)fVar15 < (float10)fVar14) || ((float10)fVar15 > (float10)fVar14)) {
          pv[2] = 0.0f;
          pv[0] = x;
          *(uint32_t *)(pv + 1) = vbits(fVar14);
          *(uint32_t *)(pv + 3) = 0x3f800000;
          *(uint32_t *)(pv + 4) = color;
          w = (int)FUN_00515940(0x0088a0a8);
          pv[5] = (float)((float10)x / (float10)w);
          h = (int)FUN_00515b00(0x0088a0a8);
          pv[6] = (float)((float10)fVar14 / (float10)h);
          pv = pv + 7;
        }
        s = (float10)t + (float10)0.05f;
        t = (float)s;
      } while (!(s > (float10)1.001f));
      if (*(int *)this_ == 0) {
        u = 0;
      }
      else {
        u = FUN_00558690(*(uint32_t *)this_);
      }
      FUN_00513a50(0x00855bb0, 0, u);
      FUN_0051a6a0(0x00897a98);
    }
    FUN_00513bc0(0x00855bb0, 0x1b, 1);
    col2 = (DAT_0083d448 != 0 ? 0x5f5f5fu : 0u) + 0xffa0a0a0u;
    if ((DAT_0062493c != '\0') && (FUN_00515a70(0x0088a0a8, 0) != 0) &&
        (FUN_00540970(FUN_00515a70(0x0088a0a8, 0)) != 0)) {
      txt = FUN_004f2580(0x0083d960, (DAT_0066e8c0 != '\0' ? 0x7a65785u : 0u) + 0x3848a7u);
      if ((char)param_2 == '\x03') {
        txt = FUN_00524830(0xdc);
      }
      FUN_00540680(FUN_00515a70(0x0088a0a8, 0), txt, (uint32_t)(uintptr_t)tsz);
      iVar5 = (int)FUN_00515940(0x0088a0a8) - tsz[0];
      cx = (float)((float10)iVar5 * (float10)0.5f);
      iVar5 = (int)FUN_00515b00(0x0088a0a8) - tsz[1];
      cy = (float)((float10)iVar5 - (float10)55.0f);
      FUN_00540640(FUN_00515a70(0x0088a0a8, 0), bits_of((float)((float10)cx - (float10)1.0f)), vbits(cy),
                   0xff000000, txt, 0, 0, 0x3f800000);
      FUN_00540640(FUN_00515a70(0x0088a0a8, 0), bits_of((float)((float10)cx + (float10)1.0f)), vbits(cy),
                   0xff000000, txt, 0, 0, 0x3f800000);
      FUN_00540640(FUN_00515a70(0x0088a0a8, 0), vbits(cx), bits_of((float)((float10)cy - (float10)1.0f)),
                   0xff000000, txt, 0, 0, 0x3f800000);
      FUN_00540640(FUN_00515a70(0x0088a0a8, 0), vbits(cx), bits_of((float)((float10)cy + (float10)1.0f)),
                   0xff000000, txt, 0, 0, 0x3f800000);
      FUN_00540640(FUN_00515a70(0x0088a0a8, 0), vbits(cx), vbits(cy), col2, txt, 0, 0, 0x3f800000);
    }
    FUN_005158e0(0x0088a0a8);
    FUN_004d2580(0x0088a0a8, 0);
    FUN_00513bc0(0x00855bb0, 7, 1);
    FUN_00513bc0(0x00855bb0, 0xf, 1);
    FUN_00513af0(0x00855bb0, 0);
  }
  *(char *)((int)this_ + 0xb3c6) = 0;
  if (*(int *)((int)this_ + 0xb3e0) == 0x42c80000) {
    *(int *)((int)this_ + 0xb3e0) = 0x42c80083;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0042c810, ap_0042c810));
