// auto-ported from 0047eb80_FUN_0047eb80.c (FUN_0047eb80, 212 bytes) by hand
// @hand-fixed 2026-10-29 from the asm: __fastcall (ECX = map object, EDX = position, plain ret), float10 return in ST0; x and y are rounded to float by fstp (0x47eb92, 0x47eba9) and their BITS are used as integers (no fistp: Ghidra's (int)/(uint) casts are reinterpretations), index ((ux>>11&0x3f)*64 + (uy>>11&0x3f))*9 + (uy>>8&7))*9 + (ux>>8&7) with sar; bilinear blend of shorts in int, then fild * [map+0x102c] (0x47ec3b-0x47ec3f); outside: fld 0.0f [0x5d856c]
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define AP_K_EPS 0.0019530858844518661f     // [0x5dbdf0] 0x3afffeb0
#define AP_K_BIAS 49152.0f                  // [0x5dbdec]

static float10 BEA_FASTCALL ap_0047eb80(int param_1, float *param_2)
{
  volatile float fx = (float)(((float10)param_2[0] - (float10)AP_K_EPS) + (float10)AP_K_BIAS);
  volatile float fy = (float)(((float10)param_2[1] - (float10)AP_K_EPS) + (float10)AP_K_BIAS);
  float tx = fx, ty = fy;
  int ux, uy;
  __builtin_memcpy(&ux, &tx, 4);
  __builtin_memcpy(&uy, &ty, 4);
  if (((uy | ux) & 0x3e0000) != 0) {
    return (float10)0.0f;
  }
  int idx = (((ux >> 0xb) & 0x3f) << 6) + ((uy >> 0xb) & 0x3f);
  idx = idx * 9 + ((uy >> 8) & 7);
  idx = idx * 9 + ((ux >> 8) & 7);
  short *p = (short *)(uintptr_t)(*(int *)(param_1 + 0x1028) + idx * 2);
  int frx = ux & 0xff;
  int fry = uy & 0xff;
  int a = (int)p[0];
  int v0 = (((int)p[1] - a) * frx >> 8) + a;
  int c = (int)p[9];
  int v1 = (((int)p[10] - c) * frx >> 8) - v0 + c;
  int r = (v1 * fry >> 8) + v0;
  return (float10)r * (float10)*(float *)(param_1 + 0x102c);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047eb80, ap_0047eb80));
