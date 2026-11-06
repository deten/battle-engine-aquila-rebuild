// auto-ported from 004c2d30_vslot18.c (CPDShape::vslot18, 998 bytes) by hand
// @hand-fixed 2026-10-29 from the asm: thiscall(particle p, int i, int n), ret 0xc; NOT a float return: every path leaves the x87 stack empty (0x4c310b pops the cosine) and EAX holds a by-product, reproduced per path: (float)(s*A) / -(c*A) / the stale dword for mode 0 sub 0/1/2 (0x4c30e3, 0x4c30b2, 0x4c3063), lane-1 jitter for mode 2 (0x4c2e8d), this+0x64's high half + fnstsw for mode 1 (0x4c2ff1-0x4c2ff7, emulated with the same fcom/fnstsw), 0 / mode-2 elsewhere; amplitude A: 0x4c0c70 cdecl(8) with 1.0f or (float)(_CIfmod(t, period)/period) (0x4c2de9-0x4c2df3, t = clock or clock - p+0x84), times this+0x6c; mode 0: ang = fild(i)*2pi / fidiv(n), s rounded, c unrounded; mode 1 normalises with sum (x*x + y*y) + z*z (0x4c2f4c-0x4c2f5c, class 19), C3 skips, scale k = fild(a)*A*1/128 kept unrounded (0x4c2fc1-0x4c2fdd), then z > 0 -> -z when this+0x64 != 0; lane +0x44 gets the never-written dword at entry ESP-4 ([esp+0x1c]), captured by a naked entry
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define DAT_009c6400 GLOBAL_AT(uint32_t, 0x009c6400)
#define K_ZERO  GLOBAL_AT(float, 0x005d856c)   // 0.0
#define K_ONE   GLOBAL_AT(float, 0x005d8568)   // 1.0
#define K_TWOPI GLOBAL_AT(float, 0x005d85e0)   // 2pi
#define K_128TH GLOBAL_AT(float, 0x005ddac8)   // 0.0078125
typedef float10 (BEA_THISCALL* FUN_004c10c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004c10c0_t> FUN_004c10c0 = {(FUN_004c10c0_t)0x004c10c0};
typedef float10 (BEA_CDECL* FUN_004c0c70_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004c0c70_t> FUN_004c0c70 = {(FUN_004c0c70_t)0x004c0c70};
typedef int (BEA_CDECL* FUN_0055dbfe_t)(void);                     // rand
static const bea_guard<FUN_0055dbfe_t> FUN_0055dbfe = {(FUN_0055dbfe_t)0x0055dbfe};
#define _CIfmod(a0, a1) bea_x87call2(0x0055e3ea, (float10)(a0), (float10)(a1))

static inline uint32_t ap_bits(float f) { uint32_t u; __builtin_memcpy(&u, &f, 4); return u; }
static inline float ap_f(uint32_t u) { float f; __builtin_memcpy(&f, &u, 4); return f; }

extern "C" __attribute__((used)) uint32_t BEA_CDECL ap_004c2d30_impl(int self, int p, int param_2, int param_3, uint32_t slot_m4)
    __asm__("ap_004c2d30_impl");
extern "C" __attribute__((used)) uint32_t BEA_CDECL ap_004c2d30_impl(int self, int p, int param_2, int param_3, uint32_t slot_m4)
{
  if (param_3 == -1) {
    param_3 = *(int *)(self + 0x68);
  }
  int anim = *(int *)(self + 0x70);
  volatile float A_;                                              // param_1's slot [esp+0x24]
  if (anim == 0) {
    A_ = ap_f(*(uint32_t *)(self + 0x6c));
  }
  else {
    float10 r;
    if (*(int *)(anim + 0x84) == 0) {
      r = FUN_004c0c70(0x3f800000, (uint32_t)(anim + 0x5c), (uint32_t)(anim + 0x64), (uint32_t)(anim + 0x6c), (uint32_t)(anim + 0x74),
                       *(uint32_t *)(anim + 0x7c), *(uint32_t *)(anim + 0x80), (uint32_t)p);
    }
    else {
      uint32_t tb = DAT_009c6400;
      volatile float t_ = ap_f(tb);
      float10 per = FUN_004c10c0((uint32_t)(anim + 0x88), tb, (uint32_t)p);
      volatile float period_ = (float)per;                        // [esp+0xc]
      if ((*(int *)(anim + 0x90) != 0) && (p != 0)) {
        t_ = (float)((float10)t_ - (float10)*(float *)(p + 0x84));
      }
      float period = period_;
      float t = t_;
      float10 m = _CIfmod(period, t);
      volatile float u_ = (float)(m / (float10)period);
      r = FUN_004c0c70(ap_bits(u_), (uint32_t)(anim + 0x5c), (uint32_t)(anim + 0x64), (uint32_t)(anim + 0x6c), (uint32_t)(anim + 0x74),
                       *(uint32_t *)(anim + 0x7c), *(uint32_t *)(anim + 0x80), (uint32_t)p);
    }
    A_ = (float)(r * (float10)*(float *)(self + 0x6c));
  }
  float A = A_;
  int mode = *(int *)(self + 0x5c);
  uint32_t *o = (uint32_t *)(uintptr_t)(p + 0x38);
  if (mode == 0) {
    float10 ang = ((float10)param_2 * (float10)K_TWOPI) / (float10)param_3;
    volatile float s_ = (float)fsin(ang);                         // param_3's slot
    float10 c = fcos(ang);
    int sub = *(int *)(self + 0x60);
    if (sub == 0) {
      volatile float sA = (float)((float10)s_ * (float10)A);
      volatile float ncA = (float)-(c * (float10)A);
      o[0] = 0;
      o[1] = ap_bits(sA);
      o[2] = ap_bits(ncA);
      o[3] = slot_m4;
      return ap_bits(sA);
    }
    if (sub == 1) {
      volatile float sA = (float)((float10)s_ * (float10)A);
      volatile float ncA = (float)-(c * (float10)A);
      o[0] = ap_bits(sA);
      o[1] = 0;
      o[2] = ap_bits(ncA);
      o[3] = slot_m4;
      return ap_bits(ncA);
    }
    if (sub == 2) {
      volatile float sA = (float)((float10)s_ * (float10)A);
      volatile float ncA = (float)-(c * (float10)A);
      o[0] = ap_bits(sA);
      o[1] = ap_bits(ncA);
      o[2] = 0;
      o[3] = slot_m4;
      return slot_m4;
    }
    return 0;                                                     // eax still holds mode 0
  }
  if (mode == 1) {
    int a1 = (FUN_0055dbfe() & 0xff) - 0x80;
    int a2 = (FUN_0055dbfe() & 0xff) - 0x80;
    int a3 = (FUN_0055dbfe() & 0xff) - 0x80;
    float *v = (float *)o;
    v[0] = (float)((float10)a3 * (float10)K_128TH);
    v[1] = (float)((float10)a2 * (float10)K_128TH);
    v[2] = (float)((float10)a1 * (float10)K_128TH);
    o[3] = slot_m4;
    float10 x = (float10)v[0], y = (float10)v[1], z = (float10)v[2];
    float10 L = x * x + y * y;
    L = SQRT(L + z * z);
    if (!((L == (float10)K_ZERO) || bea_isnan(L))) {              // C3 skips
      float10 R = (float10)K_ONE / L;
      v[0] = (float)(R * (float10)v[0]);
      v[1] = (float)(R * (float10)v[1]);
      v[2] = (float)(R * (float10)v[2]);
    }
    if (*(int *)(self + 0x74) != 0) {
      v[0] = (float)((float10)A * (float10)v[0]);
      v[1] = (float)((float10)A * (float10)v[1]);
      v[2] = (float)((float10)A * (float10)v[2]);
    }
    else {
      int a = (FUN_0055dbfe() & 0xff) - 0x80;
      float10 k = (float10)a * (float10)A;
      k = k * (float10)K_128TH;
      v[0] = (float)(k * (float10)v[0]);
      v[1] = (float)(k * (float10)v[1]);
      v[2] = (float)(k * (float10)v[2]);
    }
    uint32_t eaxv = *(uint32_t *)(self + 0x64);
    if (eaxv == 0) {
      return 0;
    }
    // fld z; fcom 0.0; fnstsw ax; z > 0 -> -z, else z (two fchs); fstp
    __asm__ volatile(
      "flds %[z]\n\t"
      "fcoms %[k0]\n\t"
      "fnstsw %%ax\n\t"
      "testb $0x41, %%ah\n\t"
      "je 1f\n\t"
      "fchs\n"
      "1:\n\t"
      "fchs\n\t"
      "fstps %[z]"
      : [z] "+m"(v[2]), "+a"(eaxv)
      : [k0] "m"(K_ZERO)
      : "cc", "st(7)");
    return eaxv;
  }
  if (mode == 2) {
    int a1 = (FUN_0055dbfe() & 0xff) - 0x80;
    int a2 = (FUN_0055dbfe() & 0xff) - 0x80;
    int a3 = (FUN_0055dbfe() & 0xff) - 0x80;
    volatile float J0 = (float)((float10)a3 * (float10)*(float *)(self + 0x78) * (float10)A * (float10)K_128TH);
    volatile float J1 = (float)((float10)a2 * (float10)*(float *)(self + 0x7c) * (float10)A * (float10)K_128TH);
    float10 j2 = (float10)a1 * (float10)*(float *)(self + 0x80);
    o[0] = ap_bits(J0);
    o[1] = ap_bits(J1);
    volatile float J2 = (float)(j2 * (float10)A * (float10)K_128TH);
    o[2] = ap_bits(J2);
    o[3] = slot_m4;
    return ap_bits(J1);
  }
  return (uint32_t)(mode - 2);
}

// entry: ECX = this, [esp+4..0xc] = (p, i, n).  The original stores the never-written
// dword at entry ESP-4 into p+0x44 (and returns it for mode 0 sub 2): read it first.
__attribute__((naked)) static void ap_004c2d30()
{
  __asm__ volatile(
    "movl -4(%esp), %eax\n\t"
    "pushl %eax\n\t"            // slot_m4
    "pushl 0x10(%esp)\n\t"      // n
    "pushl 0x10(%esp)\n\t"      // i
    "pushl 0x10(%esp)\n\t"      // p
    "pushl %ecx\n\t"            // this
    "call ap_004c2d30_impl\n\t"
    "addl $20, %esp\n\t"
    "ret $12");
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c2d30, ap_004c2d30));
