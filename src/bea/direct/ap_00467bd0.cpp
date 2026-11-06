// hand-ported from 00467bd0_FUN_00467bd0.c (FUN_00467bd0, 1517 bytes)
// @hand-fixed 2026-10-29 rewritten from the asm: param_3 is an int flag (`mov ebp,[esp+0x30]; test ebp,ebp` at 0x467bde/0x467bf1), its slot then holds the scale (0x467cdf, 0x467d8c, 0x467ffe) - a float local here, not (int) of a float; all constants are the floats at 0x5d85e8/0x5dbb80/0x5d85f8/0x5db4b8/0x5d8cb4/0x5dbb78/0x5db4ac/0x5d85fc/0x5dbb6c/... (Ghidra printed doubles); clamped values stay extended where the asm keeps them on the x87 (fcom/fst at 0x467c30/0x467c36, the angle from the unrounded u at 0x468002), the 0.8..1 path re-reads the stored float (0x467dbf); 0x465710 is a thiscall on 0x515a70's result (ECX at 0x4681ad, conv_overrides.csv) with 10 stack args; NaN branches per `test ah,1` (less or unordered)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define DAT_0089d8d8 GLOBAL_AT(uint32_t, 0x0089d8d8)
#define DAT_0089d8cc GLOBAL_AT(uint32_t, 0x0089d8cc)
#define DAT_0089d8d0 GLOBAL_AT(uint32_t, 0x0089d8d0)
#define DAT_008a9570 GLOBAL_AT(float, 0x008a9570)
typedef uint32_t (BEA_CDECL* FUN_005563d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t,
                                              uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005563d0_t> FUN_005563d0 = {(FUN_005563d0_t)0x005563d0};
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef uint32_t (BEA_THISCALL* FUN_00540680_t)(uint32_t, uint32_t, int *);
static const bea_guard<FUN_00540680_t> FUN_00540680 = {(FUN_00540680_t)0x00540680};
typedef uint32_t (BEA_THISCALL* FUN_00465710_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t,
                                                uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00465710_t> FUN_00465710 = {(FUN_00465710_t)0x00465710};

static inline uint32_t bits_of(float f) { uint32_t u; memcpy(&u, &f, 4); return u; }
static inline uint32_t vbits(const volatile float &f) { return *(const volatile uint32_t *)&f; }

// fcom 0 / `test ah,1` -> 0.0 (also for NaN); fcom 1 / `test ah,0x41` -> 1.0; else the unrounded value
static inline float10 clamp01(float10 v)
{
  if (!(v >= (float10)0.0f)) return (float10)0.0f;
  if (v > (float10)1.0f) return (float10)1.0f;
  return v;
}
static inline int clamp255(int c)
{
  if (c < 0) return 0;
  if (0xff < c) return 0xff;
  return c;
}

static void BEA_STDCALL ap_00467bd0(uint32_t param_1, float param_2, int param_3)
{
  volatile float yoff;    // [esp+0x08]
  volatile float f5;      // [esp+0x14]: (p2-0.8)*5, later the y of the second sprite
  volatile float scale;   // param_3's slot
  volatile float angle;   // [esp+0x04]
  volatile float s105;    // [esp+0x0c]
  int local_8[2];         // [esp+0x1c], [esp+0x20]
  float10 v;
  float10 q;
  int c;
  uint32_t color;
  uint32_t self;
  float10 p2 = (float10)param_2;

  yoff = 0.0f;
  if (!(p2 >= (float10)1.0f) && (param_3 != 0)) {
    if (!(p2 >= (float10)0.5f)) {
      return;
    }
    yoff = (float)(fsin(p2 * (float10)3.1415927f) * (float10)-200.0f);
  }
  v = (p2 - (float10)0.8f) * (float10)5.0000005f;
  f5 = (float)v;
  c = clamp255((int)(longlong)ROUND(clamp01(v) * (float10)255.0f));
  FUN_005563d0(0x43c30000, bits_of((float)((float10)yoff + (float10)79.0f)), 0x3ea8f5c3, DAT_0089d8d8,
               ((uint32_t)c * 0x7f << 0x10) & 0xff000000u, 0x3f800000, 0x3f800000, 4, 0, 0x3f800000, 0);
  c = 0xff;
  *(volatile uint32_t *)&scale = 0x3fa00000;    // 1.25f
  angle = 0.0f;
  if (!((float10)param_2 >= (float10)1.0f) && (param_3 == 0)) {
    if (!((float10)param_2 >= (float10)0.3f)) {
      c = 0;
    }
    else if (!((float10)param_2 >= (float10)0.7f)) {
      v = clamp01(((float10)param_2 - (float10)0.3f) * (float10)2.5000002f);
      c = clamp255((int)(longlong)ROUND(v * (float10)255.0f));
      scale = (float)v;
      angle = (float)-(((float10)1.0f - v) * (float10)0.3f);
    }
    else if (!((float10)param_2 >= (float10)0.8f)) {
      *(volatile uint32_t *)&scale = 0x3f800000;
    }
    else {
      scale = (float)(clamp01((float10)f5) * (float10)0.25f + (float10)1.0f);
    }
  }
  s105 = (float)((float10)scale * (float10)1.05f);
  q = fsin((float10)DAT_008a9570 * (float10)0.01f) * (float10)6.0f;
  FUN_005563d0(bits_of((float)(q + (float10)395.0f)), bits_of((float)((q + (float10)yoff) + (float10)74.0f)),
               0x3eb33333, DAT_0089d8cc, ((uint32_t)c * 0x3f << 0x10) & 0xff000000u, vbits(s105), vbits(s105), 4,
               0, 0x3f800000, vbits(angle));
  f5 = (float)((float10)yoff + (float10)69.0f);
  color = (uint32_t)c * 0xff << 0x10;
  FUN_005563d0(0x43c30000, vbits(f5), 0x3e99999a, DAT_0089d8cc, (~color & 0xffffffu) ^ color, vbits(scale),
               vbits(scale), 4, 0, 0x3f800000, vbits(angle));
  c = 0xff;
  angle = 0.0f;
  if (!((float10)param_2 >= (float10)1.0f) && (param_3 == 0) && ((float10)param_2 >= (float10)0.3f)) {
    if (!((float10)param_2 >= (float10)0.7f)) {
      v = clamp01(((float10)param_2 - (float10)0.3f) * (float10)2.5000002f);
      c = clamp255((int)(longlong)ROUND(v * (float10)255.0f));
      scale = (float)v;
      angle = (float)-(((float10)1.0f - v) * (float10)0.3f);
    }
    else if (!((float10)param_2 >= (float10)0.9f)) {
      *(volatile uint32_t *)&scale = 0x3f800000;
    }
    else {
      v = (float10)1.0f - clamp01(((float10)param_2 - (float10)0.9f) * (float10)9.999998f);
      c = clamp255((int)(longlong)ROUND(v * (float10)255.0f));
      scale = (float)v;
      angle = (float)-(((float10)1.0f - v) * (float10)0.3f);
    }
    s105 = (float)((float10)scale * (float10)1.05f);
    q = fsin((float10)DAT_008a9570 * (float10)0.01f) * (float10)6.0f;
    FUN_005563d0(bits_of((float)(q + (float10)395.0f)), bits_of((float)((q + (float10)yoff) + (float10)74.0f)),
                 0x3eb33333, DAT_0089d8d0, ((uint32_t)c * 0x3f << 0x10) & 0xff000000u, vbits(s105), vbits(s105),
                 4, 0, 0x3f800000, vbits(angle));
    color = (uint32_t)c * 0xff << 0x10;
    FUN_005563d0(0x43c30000, vbits(f5), 0x3e99999a, DAT_0089d8d0, (~color & 0xffffffu) ^ color, vbits(scale),
                 vbits(scale), 4, 0, 0x3f800000, vbits(angle));
  }
  // 0x4680c9
  color = 0xff7f7f7f;
  if (param_3 == 0) {
    c = clamp255((int)(longlong)ROUND(clamp01(((float10)param_2 - (float10)0.9f) * (float10)9.999998f) *
                                      (float10)255.0f));
    color = (((uint32_t)c * 0xff << 0x10) & 0xff000000u) ^ 0x7f7f7f;
  }
  self = FUN_00515a70(0x0088a0a8, 0);
  FUN_00540680(self, param_1, local_8);
  {
    uint32_t a2 = bits_of((float)((float10)f5 - (float10)4.0f));
    uint32_t a1 = bits_of((float)((float10)390.0f - (float10)local_8[0] * (float10)0.5f));
    self = FUN_00515a70(0x0088a0a8, 0);
    FUN_00465710(self, a1, a2, 0x3dcccccd, 0x3f800000, 0x3f800000, color, param_1, 0x447a0000, 0, 0);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00467bd0, ap_00467bd0));
