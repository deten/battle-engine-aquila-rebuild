// auto-ported from 0047ec60_FUN_0047ec60.c (FUN_0047ec60, 692 bytes) by hand
// @hand-fixed 2026-10-29 from the asm: __fastcall (ECX = map, EDX = out vec4) + 1 stack arg pos, ret 4 (0x47ee22, 0x47ef11), returns out in EAX; floor (0x55dfe7) results are kept twice: fst as float for the fraction (0x47ec81, 0x47ec98) and fistp qword for the cell (0x47ec85, 0x47ec9c); range test on ix+1/iy+1 as wrapped ints; triangle choice (y-fy)+(x-fx) > 1 (test ah,0x41 at 0x47ed3a); lower: A=(h[i+1]-h[i])*s, B=(h[i+9]-h[i])*s, upper: A=((h[i+9]-h[i+10])*s)*-1 unrounded, B=(float)((h[i+1]-h[i+10])*s)*-1 (0x47ee52-0x47ee8a); L=sqrt((B*B + A*A) + 1) (0x47ed99-0x47edc5), C3 (zero or NaN) keeps (A,B,-1); out[3] is the uninitialised dword at entry ESP-4 ([esp+0x34] at 0x47edbb), captured by a naked entry before any push
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef float10 (BEA_CDECL* FUN_0055dfe7_t)(double);            // floor
static const bea_guard<FUN_0055dfe7_t> FUN_0055dfe7 = {(FUN_0055dfe7_t)0x0055dfe7};

static inline uint32_t ap_bits(float f) { uint32_t u; __builtin_memcpy(&u, &f, 4); return u; }

extern "C" __attribute__((used)) float * BEA_CDECL ap_0047ec60_impl(int map, float *out, float *pos, uint32_t slot_m4)
    __asm__("ap_0047ec60_impl");
extern "C" __attribute__((used)) float * BEA_CDECL ap_0047ec60_impl(int map, float *out, float *pos, uint32_t slot_m4)
{
  uint32_t *o = (uint32_t *)out;
  float10 flx = FUN_0055dfe7((double)pos[0]);
  volatile float fx_ = (float)flx;                               // [esp+0x10]
  int ix = (int)__builtin_llrintl(flx);
  float10 fly = FUN_0055dfe7((double)pos[1]);
  volatile float fy_ = (float)fly;                               // param slot [esp+0x3c]
  int iy = (int)__builtin_llrintl(fly);
  if ((ix < 0) || (0x1ff < (int)((uint32_t)ix + 1)) || (iy < 0) || (0x1ff < (int)((uint32_t)iy + 1))) {
    o[0] = 0;
    o[1] = 0;
    o[2] = 0x3f800000;
    return out;
  }
  int rx = ix % 8;
  int ry = iy % 8;
  float fx = fx_, fy = fy_;
  float10 s = ((float10)pos[1] - (float10)fy) + ((float10)pos[0] - (float10)fx);
  short *base = (short *)(uintptr_t)(*(int *)(map + 0x1028) + ((ix / 8) * 0x40 + iy / 8) * 0xa2);
  int i = rx + ry * 9;
  volatile float A_, B_;
  if (!(s > (float10)1.0f)) {                                     // C0|C3: not above (or unordered)
    int e = (int)base[i];
    int d1 = (int)base[i + 1] - e;
    float10 a = (float10)d1 * (float10)*(float *)(map + 0x102c);
    int d2 = (int)base[i + 9] - e;
    float10 b = (float10)d2 * (float10)*(float *)(map + 0x102c);
    B_ = (float)b;
    A_ = (float)a;
  }
  else {
    int e = (int)base[i + 10];
    int d1 = (int)base[i + 9] - e;
    int d2 = (int)base[i + 1] - e;
    float10 p = (float10)d1 * (float10)*(float *)(map + 0x102c);
    float10 q = (float10)d2 * (float10)*(float *)(map + 0x102c);
    volatile float Q_ = (float)q;
    A_ = (float)(p * (float10)-1.0f);
    float Q = Q_;
    B_ = (float)((float10)Q * (float10)-1.0f);
  }
  float A = A_, B = B_;
  float10 L = (float10)B * (float10)B + (float10)A * (float10)A;
  L = SQRT(L + (float10)1.0f);
  if ((L == (float10)0.0f) || bea_isnan(L)) {                     // C3
    o[0] = ap_bits(A);
    o[1] = ap_bits(B);
    o[2] = 0xbf800000;
  }
  else {
    float10 R = (float10)1.0f / L;
    out[0] = (float)((float10)A * R);
    out[1] = (float)((float10)B * R);
    out[2] = (float)((float10)-1.0f * R);
  }
  o[3] = slot_m4;
  return out;
}

// entry: ECX = map, EDX = out, [esp+4] = pos.  The original stores the never-written
// dword at entry ESP-4 into out[3]; read it before anything is pushed.
__attribute__((naked)) static void ap_0047ec60()
{
  __asm__ volatile(
    "movl -4(%esp), %eax\n\t"
    "pushl %eax\n\t"            // slot_m4
    "pushl 8(%esp)\n\t"         // pos
    "pushl %edx\n\t"            // out
    "pushl %ecx\n\t"            // map
    "call ap_0047ec60_impl\n\t"
    "addl $16, %esp\n\t"
    "ret $4");
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047ec60, ap_0047ec60));
