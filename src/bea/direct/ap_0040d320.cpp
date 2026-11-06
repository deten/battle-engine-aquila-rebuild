// auto-ported from 0040d320_FUN_0040d320.c (FUN_0040d320, 336 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-uninit local_4: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit local_14: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-uninit local_24: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


// 3x3 rotation product.  Hand-fixed 2026-10-27 (bug class 19): every sum in
// the asm's order - Ghidra printed the three terms of each element reversed,
// and at the x87 precision D3D leaves the order changes the rounding (a
// level-523 replay lost differently, bisected to here).  The original builds
// the result on its stack and copies it out, so param_1 may alias an input;
// the padding floats (3, 7, 11) are its stack garbage, stored as 0 here.
static float * BEA_THISCALL ap_0040d320(void * this_, float *param_1, float *param_2)
{
  const float *c = (const float *)this_;
  const float *p = param_2;
  float r[12] = {};
  r[8] = c[10] * p[8] + c[9] * p[4] + c[8] * p[0];
  r[9] = c[8] * p[1] + p[9] * c[10] + c[9] * p[5];
  r[10] = c[10] * p[10] + c[9] * p[6] + c[8] * p[2];
  r[4] = c[6] * p[8] + p[4] * c[5] + c[4] * p[0];
  r[5] = c[4] * p[1] + p[9] * c[6] + p[5] * c[5];
  r[6] = p[2] * c[4] + p[10] * c[6] + p[6] * c[5];
  r[0] = p[4] * c[1] + p[0] * c[0] + p[8] * c[2];
  r[1] = p[9] * c[2] + p[5] * c[1] + c[0] * p[1];
  r[2] = p[10] * c[2] + p[6] * c[1] + p[2] * c[0];
  for (int i = 0; i < 12; ++i) param_1[i] = r[i];
  return param_1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040d320, ap_0040d320));
