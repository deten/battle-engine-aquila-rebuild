// auto-ported from 004c4100_vslot19.c (CPDTrail::vslot19, 506 bytes) by hand
// @hand-fixed 2026-10-29 from the asm: thiscall (ECX = trail: +0x78 jitter, +0x7c speed), 3 stack args, ret 0xc (0x4c4396); jitter lanes = fild((rand&0xff)-0x80) * [this+0x78] * 0.0078125f, rand #3 -> lane 0, #1 -> lane 2 (0x4c4145-0x4c41d6); the transform tests the DWORD at m+0xa0 (test ecx,ecx at 0x4c423b, not a float compare) and groups (r2*m[k+2] + r1*m[k+1]) + r0*m[k] (0x4c423f-0x4c42aa, class 19); lane 2's + m[2] stays unrounded in ST0 into J2 + it (0x4c42cf, 0x4c430e); both 4th lanes (+0xc, +0x1c) get the never-written dword at entry ESP-4 ([esp+0x4c] at 0x4c4324, 0x4c437d), captured by a naked entry; EAX = (lea result & 0xffff0000) | idx as left by mov ax,[esi+0x7e]
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define DAT_00829e40 GLOBAL_AT(uint32_t, 0x00829e40)
#define DAT_00829e44 GLOBAL_AT(uint32_t, 0x00829e44)
#define DAT_00829e48 GLOBAL_AT(uint32_t, 0x00829e48)
typedef int (BEA_CDECL* FUN_0055dbfe_t)(void);                     // rand
static const bea_guard<FUN_0055dbfe_t> FUN_0055dbfe = {(FUN_0055dbfe_t)0x0055dbfe};

static inline float ap_f(uint32_t u) { float f; __builtin_memcpy(&f, &u, 4); return f; }

extern "C" __attribute__((used)) uint32_t BEA_CDECL ap_004c4100_impl(int self, int param_1, float *param_2, float param_3, uint32_t slot_m4)
    __asm__("ap_004c4100_impl");
extern "C" __attribute__((used)) uint32_t BEA_CDECL ap_004c4100_impl(int self, int param_1, float *param_2, float param_3, uint32_t slot_m4)
{
  int ents = *(int *)(param_1 + 0x88);
  short i0 = *(short *)(param_1 + 0x7e);
  short n = (short)(i0 + 1);
  int flag = *(int *)(ents + 0x24 + (int)i0 * 0x28);
  *(short *)(param_1 + 0x7e) = n;
  if (*(int *)(param_1 + 0x80) <= (int)n) {
    *(short *)(param_1 + 0x7e) = 0;
  }
  volatile float J0, J1, J2;
  if (flag == 0) {
    J0 = ap_f(DAT_00829e40);
    J1 = ap_f(DAT_00829e44);
    J2 = ap_f(DAT_00829e48);
  }
  else {
    float fa = *(float *)(self + 0x78);
    int a1 = (FUN_0055dbfe() & 0xff) - 0x80;
    float fb = *(float *)(self + 0x78);
    int a2 = (FUN_0055dbfe() & 0xff) - 0x80;
    float fc = *(float *)(self + 0x78);
    int a3 = (FUN_0055dbfe() & 0xff) - 0x80;
    J0 = (float)((float10)a3 * (float10)fc * (float10)0.0078125f);
    J1 = (float)((float10)a2 * (float10)fb * (float10)0.0078125f);
    J2 = (float)((float10)a1 * (float10)fa * (float10)0.0078125f);
  }
  volatile float R0 = param_2[0], R1 = param_2[1], R2 = param_2[2];
  float *m = *(float **)(param_1 + 0x58);
  float10 r2x;
  if (m != (float *)0x0) {
    if (*(int *)(m + 0x28) != 0) {
      float r0 = R0, r1 = R1, r2 = R2;
      volatile float T0 = (float)(((float10)r2 * (float10)m[6] + (float10)r1 * (float10)m[5]) + (float10)r0 * (float10)m[4]);
      volatile float T1 = (float)(((float10)r2 * (float10)m[10] + (float10)r1 * (float10)m[9]) + (float10)r0 * (float10)m[8]);
      volatile float T2 = (float)(((float10)r2 * (float10)m[14] + (float10)r1 * (float10)m[13]) + (float10)r0 * (float10)m[12]);
      R0 = T0;
      R1 = T1;
      R2 = T2;
    }
    R0 = (float)((float10)R0 + (float10)m[0]);
    R1 = (float)((float10)R1 + (float10)m[1]);
    r2x = (float10)R2 + (float10)m[2];
  }
  else {
    r2x = (float10)R2;
  }
  volatile float E0 = (float)((float10)J0 + (float10)R0);
  int idx = (int)*(short *)(param_1 + 0x7e);
  *(int *)(ents + idx * 0x28 + 0x24) = 1;
  volatile float E1 = (float)((float10)J1 + (float10)R1);
  volatile float E2 = (float)((float10)J2 + r2x);
  idx = (int)*(short *)(param_1 + 0x7e);
  float *e = (float *)(uintptr_t)(ents + idx * 0x28);
  e[0] = E0;
  e[1] = E1;
  e[2] = E2;
  *(uint32_t *)(e + 3) = slot_m4;
  idx = (int)*(short *)(param_1 + 0x7e);
  *(float *)(ents + idx * 0x28 + 0x20) = param_3;
  float10 k = (float10)*(float *)(self + 0x7c);
  volatile float V0 = (float)((float10)J0 * k);
  volatile float V1 = (float)((float10)J1 * k);
  volatile float V2 = (float)((float10)J2 * k);
  idx = (int)*(short *)(param_1 + 0x7e);
  float *v = (float *)(uintptr_t)(ents + idx * 0x28 + 0x10);
  v[0] = V0;
  v[1] = V1;
  v[2] = V2;
  *(uint32_t *)(v + 3) = slot_m4;
  uint16_t last = *(uint16_t *)(param_1 + 0x7e);
  *(uint16_t *)(param_1 + 0x7c) = last;
  return ((uint32_t)(uintptr_t)v & 0xffff0000u) | last;
}

// entry: ECX = this, [esp+4..0xc] = 3 args.  The original stores the never-written dword
// at entry ESP-4 into both 4th lanes; read it before anything is pushed.
__attribute__((naked)) static void ap_004c4100()
{
  __asm__ volatile(
    "movl -4(%esp), %eax\n\t"
    "pushl %eax\n\t"            // slot_m4
    "pushl 0x10(%esp)\n\t"      // param_3
    "pushl 0x10(%esp)\n\t"      // param_2
    "pushl 0x10(%esp)\n\t"      // param_1
    "pushl %ecx\n\t"            // this
    "call ap_004c4100_impl\n\t"
    "addl $20, %esp\n\t"
    "ret $12");
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c4100, ap_004c4100));
