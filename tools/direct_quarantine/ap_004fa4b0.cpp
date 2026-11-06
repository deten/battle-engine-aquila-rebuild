// auto-ported from 004fa4b0_vslot77.c (CUnit::vslot77, 847 bytes) by hand
// @hand-fixed 2026-10-29 from the asm: thiscall, 4 stack args, ret 0x10 (0x4fa7fc); extraout_ST0 is vslot 0x60's float10 result (call at 0x4fa4bf), kept unrounded in ST for lanes 0-2 (lane 2 consumes it with fmulp at 0x4fa683); lanes skip on C3 (equal or unordered); lim = (float)(dt*rate) (fstp at 0x4fa4d9); angle lanes unwrap the target with the asm's C0/C0|C3 tests (0x4fa4e1-0x4fa52d), step = |c - t'|*dt*0.1f clamped when step > lim, add/sub choice and the +-pi wrap use the asm's predicates (0x4fa54a-0x4fa5b9); lane 1 subtracts only when cur > tgt (test ah,0x41 at 0x4fa5fc); matrix from float cos/sin of x, cos z, cos y and unrounded sin z, sin y, with sy*sz and sy*Cz (fst-rounded copy reused at 0x4fa7bc) kept as the asm groups them (0x4fa758-0x4fa7ed); lanes 3/7/11 of the copied 12-dword block are never written by the original ([esp+0x1c], [esp+0x2c], [esp+0x3c] = entry ESP-0x24/-0x14/-4): captured by a naked entry before any push
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define K_NHALFPI GLOBAL_AT(float, 0x005d85c8)   // -pi/2
#define K_HALFPI  GLOBAL_AT(float, 0x005d85e4)   // pi/2
#define K_TWOPI   GLOBAL_AT(float, 0x005d85e0)   // 2pi
#define K_TENTH   GLOBAL_AT(float, 0x005d85c0)   // 0.1
#define K_PI      GLOBAL_AT(float, 0x005d85e8)   // pi
#define K_NPI     GLOBAL_AT(float, 0x005d85dc)   // -pi

static inline uint32_t ap_bits(float f) { uint32_t u; __builtin_memcpy(&u, &f, 4); return u; }

// lanes 0 and 2: angle stepped toward the target the short way round
static inline void ap_angle_lane(float *cur, const float *tgt, const float *rate, float10 T)
{
  if (!((*cur < *tgt) || (*cur > *tgt))) {
    return;                                                      // C3: equal or unordered
  }
  volatile float lim_ = (float)(T * (float10)*rate);
  float10 t = (float10)*tgt;
  float10 c = (float10)*cur;
  bool done = false;
  if (!(c >= (float10)K_NHALFPI)) {                             // C0: below or unordered
    if (t > (float10)K_HALFPI) {
      t = t - (float10)K_TWOPI;
      done = true;
    }
  }
  if (!done && (c > (float10)K_HALFPI)) {
    if (!(t >= (float10)K_NHALFPI)) {
      t = t + (float10)K_TWOPI;
    }
  }
  float10 step = ABS(c - t) * T;
  step = step * (float10)K_TENTH;
  float lim = lim_;
  if (step > (float10)lim) {
    step = (float10)lim;
  }
  bool sub;
  if (!((float10)*cur >= (float10)*tgt)) {                       // C0
    sub = ((float10)*tgt - (float10)*cur) > (float10)K_PI;
  }
  else {
    sub = !(((float10)*cur - (float10)*tgt) > (float10)K_PI);
  }
  if (sub) {
    *cur = (float)((float10)*cur - step);
  }
  else {
    *cur = (float)(step + (float10)*cur);
  }
  if ((float10)*cur > (float10)K_PI) {
    *cur = (float)((float10)*cur - (float10)K_TWOPI);
  }
  else if (!((float10)*cur >= (float10)K_NPI)) {                 // C0
    *cur = (float)((float10)*cur + (float10)K_TWOPI);
  }
}

extern "C" __attribute__((used)) void BEA_CDECL ap_004fa4b0_impl(void *self, float *param_1, float *param_2, float *param_3,
                                                                  uint32_t *param_4, uint32_t g1c, uint32_t g2c, uint32_t g3c)
    __asm__("ap_004fa4b0_impl");
extern "C" __attribute__((used)) void BEA_CDECL ap_004fa4b0_impl(void *self, float *param_1, float *param_2, float *param_3,
                                                                  uint32_t *param_4, uint32_t g1c, uint32_t g2c, uint32_t g3c)
{
  float10 T = bea_vcall<float10>(self, 0x60);
  ap_angle_lane(param_1, param_2, param_3, T);
  if ((param_1[1] < param_2[1]) || (param_1[1] > param_2[1])) {
    volatile float lim_ = (float)(T * (float10)param_3[1]);
    float10 step = ABS(ABS((float10)param_1[1] - (float10)param_2[1])) * T;
    step = step * (float10)K_TENTH;
    float lim = lim_;
    if (step > (float10)lim) {
      step = (float10)lim;
    }
    if ((float10)param_1[1] > (float10)param_2[1]) {
      param_1[1] = (float)((float10)param_1[1] - step);
    }
    else {
      param_1[1] = (float)(step + (float10)param_1[1]);
    }
  }
  ap_angle_lane(param_1 + 2, param_2 + 2, param_3 + 2, T);

  float10 z = (float10)param_1[2];
  float10 x = (float10)param_1[0];
  volatile float Cx = (float)fcos(x);
  volatile float Sx = (float)fsin(x);
  volatile float Cz = (float)fcos(z);
  float10 sz = fsin(z);
  float10 y = (float10)param_1[1];
  volatile float Cy = (float)fcos(y);
  float10 sy = fsin(y);
  float10 P = sy * sz;
  uint32_t M[12];
  M[0] = ap_bits((float)((float10)Cz * (float10)Cx - P * (float10)Sx));
  M[1] = ap_bits((float)-((float10)Cy * (float10)Sx));
  float10 Qx = sy * (float10)Cz;
  volatile float Q = (float)Qx;
  M[2] = ap_bits((float)(Qx * (float10)Sx + sz * (float10)Cx));
  M[3] = g1c;
  M[4] = ap_bits((float)(P * (float10)Cx + (float10)Cz * (float10)Sx));
  M[5] = ap_bits((float)((float10)Cy * (float10)Cx));
  M[6] = ap_bits((float)(sz * (float10)Sx - (float10)Q * (float10)Cx));
  M[7] = g2c;
  M[8] = ap_bits((float)-((float10)Cy * sz));
  M[9] = ap_bits((float)sy);
  M[10] = ap_bits((float)((float10)Cy * (float10)Cz));
  M[11] = g3c;
  for (int i = 0; i < 12; i++) {
    param_4[i] = M[i];
  }
}

// entry: ECX = this, [esp+4..0x10] = 4 args.  The never-written dwords at entry
// ESP-0x24, -0x14 and -4 end up in lanes 3, 7 and 11: read them before any push.
__attribute__((naked)) static void ap_004fa4b0()
{
  __asm__ volatile(
    "movl -0x24(%esp), %eax\n\t"
    "movl -0x14(%esp), %edx\n\t"
    "pushl -4(%esp)\n\t"        // g3c (address taken before the decrement)
    "pushl %edx\n\t"            // g2c
    "pushl %eax\n\t"            // g1c
    "pushl 0x1c(%esp)\n\t"      // param_4
    "pushl 0x1c(%esp)\n\t"      // param_3
    "pushl 0x1c(%esp)\n\t"      // param_2
    "pushl 0x1c(%esp)\n\t"      // param_1
    "pushl %ecx\n\t"            // this
    "call ap_004fa4b0_impl\n\t"
    "addl $32, %esp\n\t"
    "ret $16");
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fa4b0, ap_004fa4b0));
