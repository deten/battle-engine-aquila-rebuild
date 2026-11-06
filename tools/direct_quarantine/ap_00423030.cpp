// auto-ported from 00423030_vslot3.c (CCarverGuide::vslot3, 1119 bytes) by hand
// @hand-fixed 2026-10-29 from the asm: thiscall, no stack args; vslot 0x3c takes NO argument (Ghidra's unaff_EDI) and its float10 result is scaled *0.05f*4.0f unrounded (0x423394-0x4233a2); 0x4026b0's float is popped (0x4230d4); yaw target `a` stays unrounded in ST0 from 0x42310b to its fstp at 0x423363 (wraps, overrides, unwrap copy); pitch/yaw/turn round through their float slots; heading = -atan2(dx,dy), pitch = atan2(dz, sqrt(dy*dy + dx*dx)); dot grouped (fz*dz + fy*dy) + fx*dx (0x423304-0x42331e, class 19); turn negated when dot >= 0, +0x174 = 1.0f only when |turn| > 0.1 (NaN -> 0); +0x158 gets dword 3 of the vslot 0x6c out-buffer [esp+0x20] (main path) or the never-written [esp+0x30] (bit-4 path): the buffer's 4th dword is pre-seeded with the stale entry ESP-0x24 and the other with ESP-0x14, both captured by a naked entry; EAX as left: 0, 0x422940's high half + fnstsw (emulated), or the stale dword
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define K_ZERO    GLOBAL_AT(float, 0x005d856c)   // 0.0
#define K_TENTH   GLOBAL_AT(float, 0x005d85c0)   // 0.1
#define K_NHALFPI GLOBAL_AT(float, 0x005d85c8)   // -pi/2
#define K_HALFPI  GLOBAL_AT(float, 0x005d85e4)   // pi/2
#define K_TWOPI   GLOBAL_AT(float, 0x005d85e0)   // 2pi
#define K_PI      GLOBAL_AT(float, 0x005d85e8)   // pi
#define K_NPI     GLOBAL_AT(float, 0x005d85dc)   // -pi
#define K_FIVE    GLOBAL_AT(float, 0x005d85d8)   // 5
#define K_FIFTEEN GLOBAL_AT(float, 0x005d85d4)   // 15
#define K_FIFTY   GLOBAL_AT(float, 0x005d85d0)   // 50
#define K_TEN     GLOBAL_AT(float, 0x005d85cc)   // 10
#define K_502     GLOBAL_AT(float, 0x005d85c4)   // 502
#define K_TWENTIETH GLOBAL_AT(float, 0x005d8584) // 0.05
#define K_FOUR    GLOBAL_AT(float, 0x005d85bc)   // 4
typedef void (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};
typedef float10 (BEA_THISCALL* FUN_004026b0_t)(uint32_t);
static const bea_guard<FUN_004026b0_t> FUN_004026b0 = {(FUN_004026b0_t)0x004026b0};
typedef uint32_t (BEA_THISCALL* FUN_00422940_t)(uint32_t);
static const bea_guard<FUN_00422940_t> FUN_00422940 = {(FUN_00422940_t)0x00422940};

static inline uint32_t ap_bits(float f) { uint32_t u; __builtin_memcpy(&u, &f, 4); return u; }

extern "C" __attribute__((used)) uint32_t BEA_CDECL ap_00423030_impl(int self, uint32_t g24, uint32_t g14)
    __asm__("ap_00423030_impl");
extern "C" __attribute__((used)) uint32_t BEA_CDECL ap_00423030_impl(int self, uint32_t g24, uint32_t g14)
{
  int obj = *(int *)(self + 0x18);
  if ((*(uint8_t *)(obj + 0x2c) & 4) != 0) {
    *(uint32_t *)(obj + 0x174) = 0;
    float10 sp = bea_vcall<float10>(*(int *)(self + 0x18), 0x3c);
    float10 k = sp * (float10)K_TWENTIETH;
    k = k * (float10)K_FOUR;
    int o = *(int *)(self + 0x18);
    volatile float s0 = (float)(k * (float10)*(float *)(o + 0x40));
    volatile float s1 = (float)(k * (float10)*(float *)(o + 0x50));
    volatile float s2 = (float)(k * (float10)*(float *)(o + 0x60));
    *(uint32_t *)(o + 0x14c) = ap_bits(s0);
    *(uint32_t *)(o + 0x150) = ap_bits(s1);
    *(uint32_t *)(o + 0x154) = ap_bits(s2);
    *(uint32_t *)(o + 0x158) = g14;                                // [esp+0x30], never written
    return g14;
  }
  float dz = (float)((float10)*(float *)(self + 0x10) - (float10)*(float *)(obj + 0x24));
  float dy = (float)((float10)*(float *)(self + 0xc) - (float10)*(float *)(obj + 0x20));
  float dx = (float)((float10)*(float *)(self + 8) - (float10)*(float *)(obj + 0x1c));
  float dir[3];                                                    // [esp+0x24]
  FUN_00401ec0((uint32_t)(uintptr_t)dir, ap_bits(dx), ap_bits(dy), ap_bits(dz));
  volatile float f1 = (float)-fpatan((float10)dir[0], (float10)dir[1]);   // [esp+0x10]
  float10 hy = (float10)dir[1];
  float10 hx = (float10)dir[0];
  float10 h = hy * hy + hx * hx;
  volatile float pitch = (float)fpatan((float10)dir[2], SQRT(h));         // [esp+8]
  uint32_t buf[4];                                                 // [esp+0x14]
  buf[3] = g24;
  float *v = (float *)(uintptr_t)bea_vcall<uint32_t>(*(int *)(self + 0x18), 0x6c, buf);
  volatile float yaw0 = (float)-fpatan((float10)v[0], (float10)v[1]);     // [esp+0xc]
  v = (float *)(uintptr_t)bea_vcall<uint32_t>(*(int *)(self + 0x18), 0x6c, buf);
  (void)FUN_004026b0((uint32_t)(uintptr_t)v);
  float fwd[3];                                                    // [esp+0x34]
  {
    int o = *(int *)(self + 0x18);
    FUN_00401ec0((uint32_t)(uintptr_t)fwd, ap_bits(*(float *)(o + 0x3c)), ap_bits(*(float *)(o + 0x4c)), ap_bits(*(float *)(o + 0x5c)));
  }
  float10 a;
  int mode = *(int *)(self + 0x1c);
  if (mode == 0) {
    a = (float10)yaw0 + (float10)K_HALFPI;
    *(volatile uint32_t *)&pitch = 0;
  }
  else {
    a = (float10)f1;
    if (mode == 2) {
      a = a - (float10)K_PI;
    }
  }
  if (a > (float10)K_PI) {
    a = a - (float10)K_TWOPI;
  }
  if (!(a >= (float10)K_NPI)) {
    a = a + (float10)K_TWOPI;
  }
  if ((float10)pitch > (float10)K_PI) {
    pitch = (float)((float10)pitch - (float10)K_TWOPI);
  }
  if (!((float10)pitch >= (float10)K_NPI)) {
    pitch = (float)((float10)pitch + (float10)K_TWOPI);
  }
  obj = *(int *)(self + 0x18);
  if (*(int *)(*(int *)(obj + 0x13c) + 0x20) != 2) {
    int tgt = *(int *)(self + 0x2c);
    if (tgt != 0) {
      float10 d = (float10)*(float *)(tgt + 0x24) - (float10)*(float *)(obj + 0x24);
      *(volatile uint32_t *)&pitch = 0xbf860a92;
      if (!(d > (float10)K_ZERO)) {
        *(volatile uint32_t *)&pitch = 0x3f860a92;
      }
    }
    float d20 = *(float *)(self + 0x20);
    if (!((float10)d20 >= (float10)K_FIVE)) {
      *(volatile uint32_t *)&pitch = 0xbf490fdb;
    }
    else if (!((float10)d20 >= (float10)K_FIFTEEN) && ((float10)pitch > (float10)K_ZERO)) {
      *(volatile uint32_t *)&pitch = 0;
    }
    else if ((float10)*(float *)(self + 0x20) > (float10)K_FIFTY) {
      *(volatile uint32_t *)&pitch = 0x3f490fdb;
    }
    int m = *(int *)(obj + 0x244);
    if ((m != 1) && (m != 2)) {
      if (!((float10)*(float *)(obj + 0x1c) >= (float10)K_TEN)) {
        a = (float10)K_NHALFPI;
      }
      else if ((float10)*(float *)(obj + 0x1c) > (float10)K_502) {
        a = (float10)K_HALFPI;
      }
      else if (!((float10)*(float *)(obj + 0x20) >= (float10)K_TEN)) {
        a = (float10)K_ZERO;
      }
      else if ((float10)*(float *)(obj + 0x20) > (float10)K_502) {
        a = (float10)K_PI;
      }
    }
  }
  float10 a2 = a;
  bool done = false;
  if (!((float10)yaw0 >= (float10)K_NHALFPI)) {
    if (a > (float10)K_HALFPI) {
      a2 = a - (float10)K_TWOPI;
      done = true;
    }
  }
  if (!done && ((float10)yaw0 > (float10)K_HALFPI)) {
    if (!(a >= (float10)K_NHALFPI)) {
      a2 = a + (float10)K_TWOPI;
    }
  }
  float10 turn = ABS((float10)yaw0 - a2);
  if (turn > (float10)K_HALFPI) {
    turn = (float10)K_HALFPI;
  }
  float10 dot = (float10)fwd[2] * (float10)dir[2] + (float10)fwd[1] * (float10)dir[1];
  dot = dot + (float10)fwd[0] * (float10)dir[0];
  if (dot >= (float10)K_ZERO) {                                    // C0 clear
    turn = -turn;
  }
  volatile float turnf = (float)turn;                              // [esp+0xc]
  if (ABS((float10)turnf) > (float10)K_TENTH) {
    *(uint32_t *)(obj + 0x174) = 0x3f800000;
  }
  else {
    *(uint32_t *)(obj + 0x174) = 0;
  }
  {
    volatile float af = (float)a;
    int o = *(int *)(self + 0x18);
    *(uint32_t *)(o + 0x120) = ap_bits(af);
    *(uint32_t *)(o + 0x124) = ap_bits(pitch);
    *(uint32_t *)(o + 0x128) = ap_bits(turnf);
  }
  float10 sp = bea_vcall<float10>(*(int *)(self + 0x18), 0x3c);
  float10 k = sp * (float10)K_TWENTIETH;
  k = k * (float10)K_FOUR;
  {
    int o = *(int *)(self + 0x18);
    volatile float s0 = (float)(k * (float10)*(float *)(o + 0x40));
    volatile float s1 = (float)(k * (float10)*(float *)(o + 0x50));
    volatile float s2 = (float)(k * (float10)*(float *)(o + 0x60));
    *(uint32_t *)(o + 0x14c) = ap_bits(s0);
    *(uint32_t *)(o + 0x150) = ap_bits(s1);
    *(uint32_t *)(o + 0x154) = ap_bits(s2);
    *(uint32_t *)(o + 0x158) = buf[3];                             // [esp+0x20]
  }
  int pv = *(int *)(self + 0x18);
  uint32_t r = FUN_00422940((uint32_t)pv);
  if (r == 0) {
    return 0;
  }
  int o2 = *(int *)(self + 0x18);
  // fld [o2+0x11c]; fadd pi/2; fcom pi; fnstsw ax; > pi -> fsub 2pi; fstp [pv+0x128]
  __asm__ volatile(
    "flds %[src]\n\t"
    "fadds %[hp]\n\t"
    "fcoms %[pi]\n\t"
    "fnstsw %%ax\n\t"
    "testb $0x41, %%ah\n\t"
    "jne 1f\n\t"
    "fsubs %[tp]\n"
    "1:\n\t"
    "fstps %[dst]"
    : [dst] "=m"(*(float *)(pv + 0x128)), "+a"(r)
    : [src] "m"(*(float *)(o2 + 0x11c)), [hp] "m"(K_HALFPI), [pi] "m"(K_PI), [tp] "m"(K_TWOPI)
    : "cc", "st(7)");
  return r;
}

// entry: ECX = this, no stack arguments.  Read the stale dwords at entry ESP-0x24 and
// ESP-0x14 (the original's [esp+0x20] / [esp+0x30]) before anything is pushed.
__attribute__((naked)) static void ap_00423030()
{
  __asm__ volatile(
    "movl -0x24(%esp), %eax\n\t"
    "movl -0x14(%esp), %edx\n\t"
    "pushl %edx\n\t"            // g14
    "pushl %eax\n\t"            // g24
    "pushl %ecx\n\t"            // this
    "call ap_00423030_impl\n\t"
    "addl $12, %esp\n\t"
    "ret");
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00423030, ap_00423030));
