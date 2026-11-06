// auto-ported from 00402fa0_vslot66.c (CAirUnit::vslot66, 1708 bytes) by tools/autoport.py
// @hand-fixed 2026-10-29 written from the disassembly: five float vcall results Ghidra lost (slots 0xb4, 0x40, 0x124, 0x1bc, 0x16c: ST0); the glide test compares with the global float 0x6fbdfc (00403042), not the 1/3 value; speed limit k = (r*0.05)/|v| when |v| (float) > r*0.05 (0040311a-0040312d); length summed (x*x + y*y) + z*z (004030e6-004030f4); NaN-exact branches for the 0x170 step (test ah, 1 at 00403172) and the 0xf8 test (004034fc); 0x4cb3d0 gets the 16-byte struct by value as 4 dwords; EAX left void (one path returns the FPU status word, so no caller can use it; CUnit::vslot66 is void)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef uint32_t (BEA_THISCALL* FUN_00403650_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00403650_t> FUN_00403650 = {(FUN_00403650_t)0x00403650};
typedef uint32_t (BEA_THISCALL* FUN_004cb0b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cb0b0_t> FUN_004cb0b0 = {(FUN_004cb0b0_t)0x004cb0b0};
typedef uint32_t (BEA_THISCALL* FUN_004cb3d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004cb3d0_t> FUN_004cb3d0 = {(FUN_004cb3d0_t)0x004cb3d0};
typedef uint32_t (BEA_THISCALL* FUN_004fa8d0_t)(uint32_t);
static const bea_guard<FUN_004fa8d0_t> CUnit__vslot66 = {(FUN_004fa8d0_t)0x004fa8d0};
typedef uint32_t (BEA_THISCALL* FUN_004fd230_t)(uint32_t);
static const bea_guard<FUN_004fd230_t> FUN_004fd230 = {(FUN_004fd230_t)0x004fd230};

#define U32(p, k) (*reinterpret_cast<uint32_t *>((uint8_t *)(p) + (k)))
#define F32(p, k) (*reinterpret_cast<float *>((uint8_t *)(p) + (k)))

static inline void bea_copy4(void *dst, const void *src)
{
  uint32_t *d = (uint32_t *)dst;
  const uint32_t *s = (const uint32_t *)src;
  d[0] = s[0]; d[1] = s[1]; d[2] = s[2]; d[3] = s[3];
}

static void BEA_THISCALL ap_00402fa0(uint8_t *this_)
{
  // F = ESP after `sub esp, 0x84` and four pushes; locals F+0x10 .. F+0x94
  alignas(16) uint8_t bea_frame_[0x98] = {};
  uint8_t *vec_a = bea_frame_ + 0x14;     // slot 0x160 outputs (lists)
  uint8_t *mat_a = bea_frame_ + 0x34;
  uint8_t *vec_b = bea_frame_ + 0x24;     // slot 0x160 outputs (0x19)
  uint8_t *mat_b = bea_frame_ + 0x64;
  uint8_t *def = *(uint8_t **)(this_ + 0x164);

  if ((this_[0x2c] & 4) != 0) {
    float c = (float)((float10)F32(def, 0xb8) * (float10)0.33333334f);   // 00402fbf
    F32(this_, 0x12c) = c;
    F32(this_, 0x130) = c;
    F32(this_, 0x134) = c;
  }
  F32(this_, 0x7c) = (float)((float10)F32(this_, 0x14c) + (float10)F32(this_, 0x7c));
  F32(this_, 0x80) = (float)((float10)F32(this_, 0x150) + (float10)F32(this_, 0x80));
  F32(this_, 0x84) = (float)((float10)F32(this_, 0x154) + (float10)F32(this_, 0x84));
  {
    float10 r = bea_vcall<float10>(this_, 0xb4);                          // 00403020
    F32(this_, 0x84) = (float)(r + (float10)F32(this_, 0x84));
  }
  bool glide = false;
  if (U32(*(uint8_t **)(this_ + 0x164), 0x124) != 0) {
    float g = GLOBAL_AT(float, 0x006fbdfc);                               // 00403042
    float10 r = bea_vcall<float10>(this_, 0x40);
    float10 x = r * (float10)0.2f + (float10)F32(this_, 0x24);
    glide = (x > (float10)g);                                             // test ah, 0x41; jne (00403063)
  }
  if (glide) {
    F32(this_, 0x7c) = (float)((float10)F32(this_, 0x7c) * (float10)0.95f);
    F32(this_, 0x80) = (float)((float10)F32(this_, 0x80) * (float10)0.95f);
    F32(this_, 0x84) = (float)((float10)F32(this_, 0x84) * (float10)0.95f);
    if ((this_[0x2c] & 4) != 0) {
      bea_vcall<uint32_t>(this_, 0x180);
    }
  } else {
    float10 r = bea_vcall<float10>(this_, 0x124);                         // 004030af
    F32(this_, 0x7c) = (float)(r * (float10)F32(this_, 0x7c));
    F32(this_, 0x80) = (float)(r * (float10)F32(this_, 0x80));
    F32(this_, 0x84) = (float)(r * (float10)F32(this_, 0x84));
  }
  {
    float10 x = F32(this_, 0x7c), y = F32(this_, 0x80), z = F32(this_, 0x84);
    float10 len = __builtin_sqrtl((x * x + y * y) + z * z);               // 004030e6-004030f6
    float lenf = (float)len;                                              // fst [esp+0x10]
    if (len > (float10)0.0f) {                                            // test ah, 0x41 (0040310a)
      float10 m = bea_vcall<float10>(this_, 0x1bc) * (float10)0.05f;
      if ((float10)lenf > m) {                                            // fcomp st(1); test ah, 0x41 (00403128)
        float10 k = m / (float10)lenf;
        F32(this_, 0x7c) = (float)(k * (float10)F32(this_, 0x7c));
        F32(this_, 0x80) = (float)(k * (float10)F32(this_, 0x80));
        F32(this_, 0x84) = (float)(k * (float10)F32(this_, 0x84));
      }
    }
  }
  CUnit__vslot66(bea_arg(this_));                                         // 00403159
  {
    float10 up = (float10)F32(this_, 0x170) + (float10)0.1f;
    if (!(up >= (float10)F32(this_, 0x174))) {                            // fcom; test ah, 1 (00403172)
      F32(this_, 0x170) = (float)up;
    } else {
      float10 dn = (float10)F32(this_, 0x170) - (float10)0.1f;
      if (dn > (float10)F32(this_, 0x174)) {                              // test ah, 0x41 (00403195)
        F32(this_, 0x170) = (float)dn;
      } else {
        U32(this_, 0x170) = U32(this_, 0x174);
      }
    }
  }
  {
    float10 r = bea_vcall<float10>(this_, 0x16c);                         // 004031b5
    F32(this_, 0x170) = (float)(((float10)1.0f - r * (float10)0.01f) * (float10)F32(this_, 0x170));
  }

  int n = 1;                                                              // [esp+0x10]
  int *node = *(int **)(this_ + 0x25c);
  *(int **)(this_ + 0x264) = node;
  uint8_t *item = node ? (uint8_t *)*node : 0;
  while (item != 0) {
    if (F32(this_, 0x170) > 0.0f && U32(item, 4) == 0) {                  // 004031fb
      FUN_004cb3d0(bea_arg(0x9c63e8), U32(*(uint8_t **)(this_ + 0x164), 8), bea_arg(item),
                   GLOBAL_AT(uint32_t, 0x006600e0), GLOBAL_AT(uint32_t, 0x006600e4),
                   GLOBAL_AT(uint32_t, 0x006600e8), GLOBAL_AT(uint32_t, 0x006600ec), bea_arg(0), bea_arg(0));
    }
    bea_vcall<uint32_t>(this_, 0x160, (uint32_t)0x18, (uint32_t)n, vec_a, mat_a);   // 0040326c
    uint8_t *obj = *(uint8_t **)(item + 4);
    if (obj != 0) {
      if (U32(obj, 0x48) == 0x461c4000) {
        bea_copy4(obj + 0x80, vec_a);
        bea_copy4(obj + 0x40, vec_a);
      } else {
        bea_copy4(obj + 0x40, obj);
      }
      FUN_00403650(bea_arg(obj), bea_arg(vec_a));                         // 004032ed
    }
    obj = *(uint8_t **)(item + 4);
    if (obj != 0) {
      __builtin_memcpy(obj + 0x10, this_ + 0x3c, 0x30);                   // rep movsd (00403304)
      U32(obj, 0xa0) = 1;
    }
    obj = *(uint8_t **)(item + 4);
    if (obj != 0) {
      uint8_t *fx = *(uint8_t **)(obj + 0xa8);
      if (fx != 0) {
        U32(fx, 0x74) = U32(this_, 0x170);
      }
    }
    n = n + 1;
    node = *(int **)(*(uint8_t **)(this_ + 0x264) + 4);
    *(int **)(this_ + 0x264) = node;
    item = node ? (uint8_t *)*node : 0;
  }

  int m2 = 1;                                                             // ebx (0040335c)
  node = *(int **)(this_ + 0x26c);
  *(int **)(this_ + 0x274) = node;
  item = node ? (uint8_t *)*node : 0;
  while (item != 0) {
    if (bea_vcall<int>(this_, 0x1d4) == 0) {
      FUN_004cb0b0(bea_arg(item), bea_arg(0));                            // 004034c5
    } else {
      if (U32(item, 4) == 0) {
        FUN_004cb3d0(bea_arg(0x9c63e8), U32(*(uint8_t **)(this_ + 0x164), 0x14), bea_arg(item),
                     GLOBAL_AT(uint32_t, 0x006600e0), GLOBAL_AT(uint32_t, 0x006600e4),
                     GLOBAL_AT(uint32_t, 0x006600e8), GLOBAL_AT(uint32_t, 0x006600ec), bea_arg(0), bea_arg(0));
      }
      bea_vcall<uint32_t>(this_, 0x160, (uint32_t)0x17, (uint32_t)m2, vec_a, mat_a);  // 004033e6
      uint8_t *obj = *(uint8_t **)(item + 4);
      if (obj != 0) {
        if (U32(obj, 0x48) == 0x461c4000) {
          bea_copy4(obj + 0x80, vec_a);
          bea_copy4(obj + 0x40, vec_a);
          bea_copy4(obj, vec_a);
          if (U32(obj, 0xac) != 0xbf800000) {
            U32(obj, 0xac) = GLOBAL_AT(uint32_t, 0x00672fd0);
          }
        } else {
          bea_copy4(obj + 0x40, obj);
          FUN_00403650(bea_arg(obj), bea_arg(vec_a));                     // 0040349b
        }
      }
      obj = *(uint8_t **)(item + 4);
      if (obj != 0) {
        __builtin_memcpy(obj + 0x10, mat_a, 0x30);                        // rep movsd (004034b3)
        U32(obj, 0xa0) = 1;
      }
    }
    m2 = m2 + 1;
    node = *(int **)(*(uint8_t **)(this_ + 0x274) + 4);
    *(int **)(this_ + 0x274) = node;
    item = node ? (uint8_t *)*node : 0;
  }

  if (!(F32(this_, 0xf8) < 0.0f || F32(this_, 0xf8) != F32(this_, 0xf8))) {   // test ah, 1; je (004034fc)
    return;
  }
  def = *(uint8_t **)(this_ + 0x164);
  if (-(float10)F32(def, 0xc0) > (float10)F32(this_, 0xf8) && U32(def, 0x11c) == 0) {   // fchs; fcomp (00403511)
    FUN_004fd230(bea_arg(this_));
    bea_vcall<uint32_t>(this_, 0x38);
  }
  uint32_t hit = U32(this_, 0x258);
  if (hit == 0 || (this_[0x2c] & 1) != 0) return;
  bea_vcall<uint32_t>(this_, 0x160, (uint32_t)0x19, hit, vec_b, mat_b);  // 00403563
  uint8_t *obj = *(uint8_t **)(this_ + 0x254);
  if (obj == 0) return;
  if (U32(obj, 0x48) == 0x461c4000) {
    bea_copy4(obj + 0x80, vec_b);
    bea_copy4(obj + 0x40, vec_b);
    bea_copy4(obj, vec_b);
  } else {
    bea_copy4(obj + 0x40, obj);
    bea_copy4(obj, vec_b);
  }
  if (U32(obj, 0xac) != 0xbf800000) {
    U32(obj, 0xac) = GLOBAL_AT(uint32_t, 0x00672fd0);
  }
}

#undef U32
#undef F32

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00402fa0, ap_00402fa0));
