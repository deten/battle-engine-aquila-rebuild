// hand-ported from 004d11d0_FUN_004d11d0.c (FUN_004d11d0, 1011 bytes)
// @hand-fixed 2026-10-29 written from the asm: 0x523a70 takes NO argument (nothing pushed at 004d15ad, it is a plain `ret`; Ghidra's 8 unaff_ arguments are phantoms); slot 0x38 of [0x82b48c] gets slot 0x3c's EAX through the vtable read before it (004d11e4); 0x4e5c90 takes one argument ([this+0x24], ret 4) and the earlier `push esi` (004d1548) is 0x4a4810's argument; the returned value is 0x4a4810's first EAX, or the zeroed slot [esp+0x1c] (004d11e0/004d157d) when t <= 0.4, masked by [this+0x24] != 0 (004d15b2). Floats: t rounds through [esp+0xc] (004d137a), its *480 goes through fistp qword (llrint, 004d1389); the second t for this+0x10 != 0 is (float)(clock - [+0x2c]) (004d143f); the 1.2f / 0 defaults and ((t*5)*1.1)+0.1 or min(t,0.4)-0.2 follow 004d1451-004d14ad (test ah,1 = below or unordered); the +0x34 reset fires on equal OR unordered (test ah,0x40 at 004d141b); the -OFF argument is fchs'd (004d14da)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef int (BEA_CDECL* FUN_004dd770_t)(void);
static const bea_guard<FUN_004dd770_t> FUN_004dd770 = {(FUN_004dd770_t)0x004dd770};
typedef float10 (BEA_THISCALL* FUN_005159e0_t)(uint32_t);
static const bea_guard<FUN_005159e0_t> FUN_005159e0 = {(FUN_005159e0_t)0x005159e0};
typedef uint32_t (BEA_STDCALL* FUN_00513bc0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00513bc0_t> FUN_00513bc0 = {(FUN_00513bc0_t)0x00513bc0};
typedef uint32_t (BEA_STDCALL* stdcall3_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<stdcall3_t> FUN_00513930 = {(stdcall3_t)0x00513930};
static const bea_guard<stdcall3_t> FUN_00513820 = {(stdcall3_t)0x00513820};
typedef uint32_t (BEA_THISCALL* FUN_00550d50_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00550d50_t> FUN_00550d50 = {(FUN_00550d50_t)0x00550d50};
typedef uint32_t (BEA_CDECL* FUN_00555be0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t,
                                             uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00555be0_t> FUN_00555be0 = {(FUN_00555be0_t)0x00555be0};
typedef uint32_t (BEA_THISCALL* thiscall1_t)(uint32_t, uint32_t);
static const bea_guard<thiscall1_t> FUN_004e5c90 = {(thiscall1_t)0x004e5c90};
static const bea_guard<thiscall1_t> FUN_004a4810 = {(thiscall1_t)0x004a4810};
typedef uint32_t (BEA_CDECL* FUN_00523a70_t)(void);
static const bea_guard<FUN_00523a70_t> FUN_00523a70 = {(FUN_00523a70_t)0x00523a70};

typedef uint32_t (BEA_THISCALL* vget_t)(uint32_t);
typedef uint32_t (BEA_THISCALL* vset_t)(uint32_t, uint32_t);

#define U32(p, k) (*reinterpret_cast<uint32_t *>((uint8_t *)(p) + (k)))
#define F32(p, k) (*reinterpret_cast<float *>((uint8_t *)(p) + (k)))

static inline uint32_t fbits(float f) { uint32_t u; memcpy(&u, &f, 4); return u; }

static uint32_t BEA_THISCALL ap_004d11d0(uint8_t *this_)
{
  const uint32_t clk = 0x0088a0a8u;
  const uint32_t rs = 0x00855bb0u;   // ECX of the 0x513xxx calls; none of them reads it
  (void)rs;
  uint32_t keep = 0;                                                            // [esp+0x1c]
  {
    uint32_t dev = GLOBAL_AT(uint32_t, 0x0082b48c);
    void **vt = *(void ***)(uintptr_t)dev;                                      // mov edi, [ecx]
    unsigned short ex = bea_x87_expect();
    uint32_t v = ((vget_t)vt[0x3c / 4])(dev);                                   // 004d11e6
    bea_x87_rebalance(ex);
    dev = GLOBAL_AT(uint32_t, 0x0082b48c);
    ex = bea_x87_expect();
    ((vset_t)vt[0x38 / 4])(dev, v);                                             // 004d11f0
    bea_x87_rebalance(ex);
  }
  {
    int m = FUN_004dd770();                                                     // 004d11f3
    if (m == 0 || m == 1 || m == 2) {
      bea_vcall<uint32_t>(GLOBAL_AT(uint32_t, 0x0082b488), 0x38, (uint32_t)m);
    }
  }
  if (U32(this_, 0x10) == 0) {
    float10 s30 = (float10)F32(this_, 0x30);
    U32(this_, 0x34) = 0;                                                       // 004d1237
    if (!(s30 >= (float10)0.0f)) {                                             // test ah, 1
      return 0;
    }
    float10 r = FUN_005159e0(clk) - (float10)F32(this_, 0x30);
    if (r > (float10)0.4f) {                                                   // test ah, 0x41
      return 0;
    }
  }
  FUN_00513bc0(0x13u, 5u);
  FUN_00513bc0(0x14u, 6u);
  GLOBAL_AT(uint8_t, 0x009c68ac) = 0;
  GLOBAL_AT(uint8_t, 0x009c690d) = 1;
  GLOBAL_AT(uint8_t, 0x009c68ad) = 0;
  GLOBAL_AT(uint8_t, 0x009c6910) = 1;
  FUN_00513930(0u, 1u, 3u);
  FUN_00513930(0u, 2u, 3u);
  FUN_00513bc0(0x17u, 4u);
  FUN_00513820(0u, 2u, 2u);
  FUN_00513820(0u, 3u, 0u);
  FUN_00513820(0u, 1u, 4u);
  FUN_00513bc0(0xfu, 1u);
  FUN_00513bc0(0x18u, 8u);
  FUN_00513bc0(0x1bu, 1u);
  FUN_00513bc0(0xeu, 0u);
  FUN_00513bc0(7u, 0u);
  FUN_00550d50(0x009c65c0u, 0u, 0u);                                            // 004d1346

  volatile float t;                                                             // [esp+0xc]
  if (U32(this_, 0x10) != 0) {
    t = (float)(FUN_005159e0(clk) - (float10)F32(this_, 0x28));                 // 004d135a
  } else {
    volatile float s14 = (float)((float10)F32(this_, 0x30) + (float10)0.4f);  // 004d136d
    float10 r = FUN_005159e0(clk);
    t = (float)((float10)s14 - r);                                              // fsubr
  }
  int alpha = (int)__builtin_llrintl((float10)t * (float10)480.0f);              // fistp qword (004d1389)
  if (alpha > 0xc0) {
    alpha = 0xc0;
  }
  if (U32(this_, 0x48) != 0) {
    alpha = 0xc0;
  }
  uint32_t colour = ((uint32_t)alpha << 24) + 0x101010u;
  FUN_00513bc0(0x17u, 8u);
  if (GLOBAL_AT(uint8_t, 0x0082b4e8) == 0 &&
      (U32(this_, 0x10) != 0 || U32(this_, 0x48) == 0)) {
    FUN_00555be0(0xc1200000u, 0xc1200000u, 0x3c23d70au, GLOBAL_AT(uint32_t, 0x0082b490), 0u, 0u,
                 0x3f800000u, 0u, colour, 0x42480000u, 0x42200000u, 0u, 0x3f800000u, 0u, 0x3f800000u);
  }
  {
    float10 s34 = (float10)F32(this_, 0x34);
    if (!(s34 < (float10)0.0f) && !(s34 > (float10)0.0f)) {                   // C3: equal or unordered
      F32(this_, 0x34) = (float)FUN_005159e0(clk);                              // 004d142a
    }
  }
  if (U32(this_, 0x10) != 0) {
    t = (float)(FUN_005159e0(clk) - (float10)F32(this_, 0x2c));                 // 004d143f
  }
  FUN_00513bc0(0x17u, 4u);
  volatile float scale = 1.2f;                                                  // 0x3f99999a
  volatile float off = 0.0f;
  {
    float10 tt = (float10)t;
    if (!(tt >= (float10)0.2f)) {                                              // test ah, 1 (004d1471)
      scale = (float)((tt * (float10)5.0f) * (float10)1.1f + (float10)0.1f);
    } else {
      float10 m = tt;
      if ((float10)t > (float10)0.4f) {                                        // test ah, 0x41 (004d149a)
        m = (float10)0.4f;
      }
      off = (float)(m - (float10)0.2f);
    }
  }
  if (GLOBAL_AT(uint8_t, 0x0082b4e8) == 0 && U32(this_, 0x24) == 0) {
    float o = off;
    uint32_t sc = fbits(scale);
    FUN_00555be0(0x43a00000u, 0x43700000u, 0x3b83126fu, U32(this_, 0x40), 4u, 0u, 0x3f800000u,
                 fbits(-o), 0xffffffffu, sc, sc, 0u, 0x3f800000u, 0u, 0x3f800000u);
    FUN_00555be0(0x43a00000u, 0x43700000u, 0x3b83126fu, U32(this_, 0x44), 4u, 0u, 0x3f800000u,
                 fbits(off), 0xffffffffu, sc, sc, 0u, 0x3f800000u, 0u, 0x3f800000u);
  }
  if ((float10)t > (float10)0.4f) {                                            // 004d1540
    uint32_t self = (uint32_t)(uintptr_t)this_;
    uint32_t p = FUN_004e5c90(self + 0x14, U32(this_, 0x24));                   // 004d154d
    keep = FUN_004a4810(p, self);
    if (U32(this_, 8) != 0) {
      FUN_004a4810(U32(this_, 8) + 0xc, self);
    }
    if (U32(this_, 0x3c) != 0) {
      FUN_004a4810(U32(this_, 0x3c) + 0xc, self);
    }
  }
  FUN_00513bc0(0xeu, 1u);
  FUN_00513bc0(7u, 1u);
  if (GLOBAL_AT(uint8_t, 0x0082b4e8) == 0 && alpha == 0xc0) {
    FUN_00523a70();                                                             // 004d15ad
  }
  return (U32(this_, 0x24) != 0) ? keep : 0u;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d11d0, ap_004d11d0));
