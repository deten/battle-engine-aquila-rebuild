// auto-ported from 00441490_FUN_00441490.c (FUN_00441490, 279 bytes) by hand
// @hand-fixed 2026-10-29 from the asm: cdecl with 3 float stack args (plain ret at 0x4415a6, ECX unused: xor cl,cl is a flag); distance sum grouped (c*c + b*b) + a*a as the asm (0x4414cc-0x4414dc, class 19); dx stays in ST0 unrounded, dy is stored to a float local (0x4414b4) and compared from it; wrap tests: dx > K, !(dx >= -K) (test ah,1 at 0x441513), dy > K, -K > dy; 2K is K+K; +0x24 = fstp of 0x47eb80's ST0 (fastcall ecx=0x6fadc8, edx=pos); vslot 0x50(pos); 0x492ca0 thiscall on this+0xc
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0066eb78 GLOBAL_AT(int*, 0x0066eb78)
#define _DAT_006282fc GLOBAL_AT(float, 0x006282fc)
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};
typedef undefined4 (BEA_THISCALL* FUN_00492ca0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00492ca0_t> FUN_00492ca0 = {(FUN_00492ca0_t)0x00492ca0};

static void BEA_CDECL ap_00441490(float param_1, float param_2, float param_3)
{
  int *piVar1 = DAT_0066eb78;
  while (BEA_LOOP_GUARD(piVar1 != (int *)0x0)) {
    float *a1 = (float *)(piVar1 + 7);
    bool moved = false;                                          // cl
    float10 dx = (float10)a1[0] - (float10)param_1;              // kept in ST0
    volatile float dy_ = (float)((float10)a1[1] - (float10)param_2);   // [esp+8]: rounded through memory
    float dy = dy_;
    float10 a = (float10)a1[0] - (float10)param_1;
    float10 b = (float10)a1[1] - (float10)param_2;
    float10 c = (float10)a1[2] - (float10)param_3;
    float10 s = c * c + b * b;
    s = s + a * a;
    *(float *)(piVar1 + 0x20) = (float)SQRT(s);
    if (dx > (float10)_DAT_006282fc) {
      float10 k = (float10)_DAT_006282fc;
      k = k + k;
      moved = true;
      a1[0] = (float)((float10)a1[0] - k);
    }
    {
      float10 nk = -(float10)_DAT_006282fc;
      if (!(dx >= nk)) {                                         // C0: below or unordered
        float10 k = (float10)_DAT_006282fc;
        k = k + k;
        moved = true;
        a1[0] = (float)(k + (float10)a1[0]);
      }
    }
    bool hit;
    if ((float10)dy > (float10)_DAT_006282fc) {
      float10 k = (float10)_DAT_006282fc;
      k = k + k;
      moved = true;
      a1[1] = (float)((float10)a1[1] - k);
    }
    if (-(float10)_DAT_006282fc > (float10)dy) {
      float10 k = (float10)_DAT_006282fc;
      k = k + k;
      a1[1] = (float)(k + (float10)a1[1]);
      hit = true;
    }
    else {
      hit = moved;
    }
    if (hit) {
      float10 h = FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(a1));
      *(float *)(piVar1 + 9) = (float)h;
      bea_vcall<uint32_t>(piVar1, 0x50, a1);
      if ((piVar1[6] != -1) && (piVar1 + 3 != (int *)0x0)) {
        FUN_00492ca0(bea_arg(piVar1 + 3), bea_arg(a1));
      }
    }
    piVar1 = (int *)piVar1[0x1f];
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00441490, ap_00441490));
