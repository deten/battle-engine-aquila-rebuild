// auto-ported from 00467200_FUN_00467200.c (FUN_00467200, 1893 bytes) by hand
// @hand-fixed 2026-10-29 from the asm: thiscall, 2 stack args (ret 8 at 0x467962), void; arg2 is an int id (ebx, 0x467205) whose slot the asm reuses for the float scale s (fstp [esp+0x28] at 0x467293/0x4672ae); jump tables 0x467968/0x467980 give cases 7-11,13,14,16,17,19; 0x452fd0 gets ECX=0x89da08 (thiscall, ret 4); all clamps follow the asm's C0 / C0|C3 tests (NaN -> 0); fades stay unrounded in ST until fst/fistp (0x4673bd-0x4673f3, 0x467503-0x467570, 0x467681-0x467787); the cos branch rounds cos through s (fst 0x467497) before fabs/sqrt (sqrt skipped on zero or NaN, test ah,0x40); sin/cos of time*0.01 share one unrounded angle; the final 0x5563d0 call uses the s saved after the first draw (mov [esp+0x1c] at 0x467648, read back at 0x4678b0), not the one changed by the second; 0x5563d0 is cdecl 11, 0x513bc0/0x513930 on ECX 0x855bb0, 0x550d50 on 0x9c65c0
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define C_0     GLOBAL_AT(float, 0x005d856c)   // 0.0
#define C_1     GLOBAL_AT(float, 0x005d8568)   // 1.0
#define C_m1    GLOBAL_AT(float, 0x005d8be0)   // -1.0
#define C_075   GLOBAL_AT(float, 0x005d8bc4)   // 0.75
#define C_4     GLOBAL_AT(float, 0x005d85bc)   // 4.0
#define C_02    GLOBAL_AT(float, 0x005d8604)   // 0.2
#define C_05    GLOBAL_AT(float, 0x005d85ec)   // 0.5
#define C_06    GLOBAL_AT(float, 0x005d8bb8)   // 0.6
#define C_07    GLOBAL_AT(float, 0x005d8bec)   // 0.7
#define C_09    GLOBAL_AT(float, 0x005d8bb0)   // 0.9
#define C_333   GLOBAL_AT(float, 0x005dbb60)   // 3.3333333
#define C_10    GLOBAL_AT(float, 0x005dbb5c)   // 10.000004
#define C_5     GLOBAL_AT(float, 0x005db4b8)   // 5.0000005
#define C_255   GLOBAL_AT(float, 0x005d8c70)   // 255.0
#define C_03    GLOBAL_AT(float, 0x005d8cb4)   // 0.3
#define C_PI    GLOBAL_AT(float, 0x005d85e8)   // 3.1415927
#define C_14    GLOBAL_AT(float, 0x005db4b4)   // 1.4
#define C_125   GLOBAL_AT(float, 0x005db4b0)   // 1.25
#define C_105   GLOBAL_AT(float, 0x005db4ac)   // 1.05
#define C_001   GLOBAL_AT(float, 0x005d85fc)   // 0.01
#define C_3     GLOBAL_AT(float, 0x005d8cc0)   // 3.0
#define C_353   GLOBAL_AT(float, 0x005dbb58)   // 353.0
#define C_6     GLOBAL_AT(float, 0x005d8be8)   // 6.0
#define C_333b  GLOBAL_AT(float, 0x005dbb54)   // 333.0
typedef uint32_t (BEA_CDECL* FUN_004679a0_t)(int);
static const bea_guard<FUN_004679a0_t> FUN_004679a0 = {(FUN_004679a0_t)0x004679a0};
typedef void (BEA_THISCALL* FUN_00452fd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00452fd0_t> FUN_00452fd0 = {(FUN_00452fd0_t)0x00452fd0};
typedef uint32_t (BEA_CDECL* FUN_005563d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005563d0_t> FUN_005563d0 = {(FUN_005563d0_t)0x005563d0};
typedef void (BEA_THISCALL* FUN_00513bc0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef void (BEA_THISCALL* FUN_00513930_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00513930_t> FUN_00513930 = {(FUN_00513930_t)0x00513930};
typedef void (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};

static inline uint32_t fbits(float f) { uint32_t u; __builtin_memcpy(&u, &f, 4); return u; }

// fcom 0 / test ah,1 -> 0.0; fcom 1 / test ah,0x41 -> 1.0 when greater (the asm's clamp blocks)
static inline float10 clamp01(float10 v)
{
  if (!(v >= (float10)C_0)) {
    return (float10)C_0;
  }
  if (v > (float10)C_1) {
    return (float10)C_1;
  }
  return v;
}

static inline int clamp255(int a)
{
  if (a < 0) {
    return 0;
  }
  if (a > 0xff) {
    return 0xff;
  }
  return a;
}

// 0x46757a-0x46762c and 0x46778b-0x46783e
static void draw_pair(uint32_t dev, int a, volatile float *s, uint32_t kb)
{
  volatile float s105 = (float)((float10)*s * (float10)C_105);
  float10 ang = (float10)GLOBAL_AT(float, 0x008a9570) * (float10)C_001;
  uint32_t col = ((uint32_t)(a * 0x3f) << 0x10) & 0xff000000u;
  float y = (float)(fcos(ang) * (float10)C_3 + (float10)C_353);
  float x = (float)(fsin(ang) * (float10)C_6 + (float10)C_333b);
  FUN_005563d0(fbits(x), fbits(y), 0x3eb33333u, GLOBAL_AT(uint32_t, dev), col, fbits(s105), fbits(s105), 4u, 0u, 0x3f800000u, kb);
  uint32_t v = (uint32_t)(a * 0xff) << 0x10;
  uint32_t col2 = (~v & 0xffffffu) ^ v;
  uint32_t sb = fbits(*s);
  FUN_005563d0(0x43a40000u, 0x43ab8000u, 0x3e4ccccdu, GLOBAL_AT(uint32_t, dev), col2, sb, sb, 4u, 0u, 0x3f800000u, kb);
}

static void BEA_THISCALL ap_00467200(void * this_, float t, int id)
{
  char *s_ = (char *)this_;
  int ebp = 0x17;
  if (*(int *)(s_ + 0x1f8) == -1) {
    int e = *(int *)(s_ + 0x200);
    if (e == id) {
      e = *(int *)(s_ + 0x1fc);
    }
    ebp = e;
    switch (ebp) {
    case 7: case 8: case 9: case 10: case 0xb: case 0xd: case 0xe: case 0x10: case 0x11: case 0x13:
      if ((FUN_004679a0(id) != 0) && (id > ebp)) {
        return;
      }
      break;
    default:
      break;
    }
  }
  volatile float s;                                         // the arg2 slot
  if ((id == 5) || (id == 6) || (id == 0xf)) {
    s = 1.0f;
  }
  else {
    s = (float)clamp01(((float10)t - (float10)C_075) * (float10)C_4);
  }
  FUN_00452fd0((uint32_t)0x0089da08, fbits(s));
  switch (id) {
  case 7: case 8: case 9: case 10: case 0xb: case 0xd: case 0xe: case 0x10: case 0x11: case 0x13:
    if ((ebp != 0xd) && (ebp != 0x11) && (id != 0xd) && (id != 0x11)) {
      t = 1.0f;
    }
    break;
  default:
    break;
  }
  int a = 0xff;
  if ((ebp == 0xd) || (ebp == 0x11) || (id == 0xd) || (id == 0x11)) {
    s = 1.4f;
  }
  else {
    int g = *(int *)(s_ + 0x1f8);
    if (g == 0xd) {
      s = 1.4f;
    }
    else {
      s = 1.25f;
      if (g == 0x11) {
        s = 1.4f;
      }
    }
  }
  volatile float k = 0.0f;                                  // [esp+0x10]
  if (!((float10)t >= (float10)C_1)) {                      // test ah,1 / je 0x46757a
    if (id == 0) {
      if (!((float10)t >= (float10)C_02)) {
        a = 0;
      }
      if (!((float10)t >= (float10)C_05)) {
        float10 f = clamp01(((float10)t - (float10)C_02) * (float10)C_333);
        a = clamp255((int)__builtin_llrintl(f * (float10)C_255));
        s = (float)f;                                       // fst [esp+0x2c]
        k = (float)(-(f * (float10)C_03));
      }
      else if (!((float10)t >= (float10)C_06)) {
        s = 1.0f;
      }
      else if (!((float10)t >= (float10)C_07)) {
        float10 g = clamp01(((float10)t - (float10)C_06) * (float10)C_10);
        s = (float)(((float10)s - (float10)C_1) * g + (float10)C_1);
      }
    }
    else if (ebp == 0xd) {
      float10 c = fcos((float10)t * (float10)C_PI);
      s = (float)c;                                         // fst [esp+0x2c]
      float10 sign = (!(c >= (float10)C_0)) ? (float10)C_m1 : (float10)C_1;
      float10 r = ABS((float10)s);
      if (!((r == (float10)C_0) || (r != r))) {             // test ah,0x40
        r = SQRT(r);
      }
      float10 m = (sign * r) * (float10)C_05 + (float10)C_05;
      float10 p = ((float10)C_1 - m) * (float10)C_14;
      s = (float)(p + m * (float10)C_125);
    }
    else {
      float10 x = (float10)t - (float10)C_05;
      x = x + x;
      float10 h = (float10)C_1 - clamp01(x);               // fsubr 1.0
      a = clamp255((int)__builtin_llrintl(((float10)C_1 - h) * (float10)C_255));
      s = (float)(h * (float10)C_14 + (float10)C_125);
      k = (float)(-h);
    }
  }
  draw_pair(0x0089d8dc, a, &s, fbits(k));
  float sv = s;                                             // [esp+0x1c] at 0x467648
  a = 0xff;
  k = 0.0f;
  if (!((float10)t >= (float10)C_1) && (id == 0)) {
    int draw = 1;
    if (!((float10)t >= (float10)C_05)) {
      float10 f = clamp01(((float10)t - (float10)C_02) * (float10)C_333);
      a = clamp255((int)__builtin_llrintl(f * (float10)C_255));
      s = (float)f;                                         // fst [esp+0x2c] at 0x46777b
      k = (float)(-(f * (float10)C_03));
    }
    else if (!((float10)t >= (float10)C_07)) {
      s = 1.0f;
    }
    else if (!((float10)t >= (float10)C_09)) {
      float10 h = (float10)C_1 - clamp01(((float10)t - (float10)C_07) * (float10)C_5);
      a = clamp255((int)__builtin_llrintl(h * (float10)C_255));
      s = (float)h;
      k = (float)(-(h * (float10)C_03));
    }
    else {
      draw = 0;
    }
    if (draw) {
      draw_pair(0x0089d8e0, a, &s, fbits(k));
    }
  }
  if (((float10)t > (float10)C_075) || (ebp == 0xd) || (ebp == 0x11)) {
    FUN_00513bc0(0x00855bb0u, 0x13u, 1u);
    FUN_00513bc0(0x00855bb0u, 0x14u, 2u);
    FUN_00513930(0x00855bb0u, 0u, 1u, 3u);
    FUN_00513930(0x00855bb0u, 0u, 2u, 3u);
    FUN_00550d50(0x009c65c0u, 0u, 0u);
    uint32_t svb = fbits(sv);
    FUN_005563d0(0x43a40000u, 0x43ab8000u, 0x3dcccccdu, GLOBAL_AT(uint32_t, 0x0089d8e4), 0xffffffffu, svb, svb, 4u, 0u, 0x3f800000u, 0u);
    FUN_005563d0(0x41200000u, 0x43700000u, 0x3dcccccdu, GLOBAL_AT(uint32_t, 0x0089d834), 0xffffffffu, 0x40000000u, 0x41700000u, 4u, 0u, 0x3f800000u, 0u);
    FUN_00513bc0(0x00855bb0u, 0x13u, 5u);
    FUN_00513bc0(0x00855bb0u, 0x14u, 6u);
    FUN_00513930(0x00855bb0u, 0u, 1u, 1u);
    FUN_00513930(0x00855bb0u, 0u, 2u, 1u);
    FUN_00550d50(0x009c65c0u, 0u, 0u);
  }
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00467200, ap_00467200));
