// hand-ported from 005545d0_FUN_005545d0.c (FUN_005545d0, 377 bytes)
// @hand-fixed 2026-10-29 written from the disassembly: thiscall with ONE stack argument (ret 4); Ghidra's in_stack_00000008 float is param_1's own slot reused as a float temp f ([esp+0x34]: 0x47eb80's height at 0055460b, then |pos.z - f| clamped to 1.0 when not > 1.0 (fabs/fst/fcomp, test ah,0x41 at 00554617-0055462e, a step Ghidra lost), then (vslot40 / f) * 0.5 [* 0.5]); param_1's slot 0x40 takes no argument and returns ST0 (Ghidra's unaff_EDI); the 0.1 test and the scale tests use the unrounded ST0 values (fst then fcomp); distance summed (dz*dz + dx*dx) + dy*dy (005546a2-005546b5, class 19), * 255 / this+8 and fistp qword (low dword); the sub-object's slot 0 writes 3 or 4 dwords, so the same 16-byte buffer [esp+0x20] serves the three calls that use it and the camera's (its 4th dword reaches 0x554750 as the camera wrote it); 0x554750 gets (vec 4 dwords, f bits, alpha), ret 0x18
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};
typedef uint32_t (BEA_THISCALL* FUN_00554750_t)(void *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00554750_t> FUN_00554750 = {(FUN_00554750_t)0x00554750};

#define U32(p, k) (*reinterpret_cast<uint32_t *>((uint8_t *)(p) + (k)))
#define F32(p, k) (*reinterpret_cast<float *>((uint8_t *)(p) + (k)))

static inline uint32_t bits_of(float f) { uint32_t u; memcpy(&u, &f, 4); return u; }

static void BEA_THISCALL ap_005545d0(uint8_t *this_, uint8_t *param_1)
{
  if (GLOBAL_AT(uint8_t, 0x0089d680) != 0) {
    return;
  }
  alignas(4) uint8_t buf10[16];                                          // [esp+0x10]
  alignas(4) uint8_t buf20[16];                                          // [esp+0x20]
  volatile float f;                                                      // param_1's slot [esp+0x34]
  uint8_t *sub = param_1 + 8;

  uint8_t *pos = bea_vcall<uint8_t *>(sub, 0, (uint8_t *)buf10);         // 005545f7
  f = (float)FUN_0047eb80(0x006fadc8u, (uint32_t)(uintptr_t)pos);       // fstp [esp+0x34]
  pos = bea_vcall<uint8_t *>(sub, 0, (uint8_t *)buf20);                  // 00554612
  {
    float10 d = __builtin_fabsl((float10)F32(pos, 8) - (float10)f);
    f = (float)d;                                                        // fst
    if (!(d > (float10)1.0f)) {                                          // test ah, 0x41; je
      f = 1.0f;
    }
  }
  float10 q = bea_vcall<float10>(param_1, 0x40);                         // 0055463b
  q = (q / (float10)f) * (float10)0.5f;
  f = (float)q;
  if ((U32(param_1, 0x34) & 0x2000000) != 0) {
    q = q * (float10)0.5f;
    f = (float)q;
  }
  if (!(q > (float10)0.1f)) {                                            // test ah, 0x41; jne
    return;
  }
  void *cam = (void *)(uintptr_t)GLOBAL_AT(uint32_t, 0x0089c9a4 + GLOBAL_AT(int, 0x0089ce4c) * 4);
  uint8_t *e = bea_vcall<uint8_t *>(cam, 0, (uint8_t *)buf20);           // 00554683
  uint8_t *a = bea_vcall<uint8_t *>(sub, 0, (uint8_t *)buf10);           // 00554690
  int64_t k;
  {
    float10 dx = (float10)F32(a, 0) - (float10)F32(e, 0);
    float10 dy = (float10)F32(a, 4) - (float10)F32(e, 4);
    float10 dz = (float10)F32(a, 8) - (float10)F32(e, 8);
    float10 s = __builtin_sqrtl((dz * dz + dx * dx) + dy * dy);
    float10 t = (s * (float10)255.0f) / (float10)F32(this_, 8);
    __asm__("fistpll %0" : "=m"(k) : "t"(t) : "st");                    // fistp qword [esp+0x10]
  }
  int v = (int)(0xffu - (uint32_t)k);
  if (v > 0xff) {
    v = 0xff;
  } else if (v <= 0) {
    return;
  }
  if (this_[0x704] != 0) {
    int n = (int)U32(this_, 0x5bc);
    uint8_t *p = this_ + 0x10c;
    for (int i = 0; i < n; ++i) {
      if (U32(p, 0) == (uint32_t)(uintptr_t)param_1) {
        return;
      }
      p += 0x20;
    }
  }
  uint32_t fb = bits_of(f);                                              // mov edx, [esp+0x34]
  uint8_t *w = bea_vcall<uint8_t *>(sub, 0, (uint8_t *)buf20);           // 0055471b
  FUN_00554750(this_, U32(w, 0), U32(w, 4), U32(w, 8), U32(w, 0xc), fb, (uint32_t)v);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005545d0, ap_005545d0));
