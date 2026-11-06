// auto-ported from 00465710_FUN_00465710.c (FUN_00465710, 650 bytes) by hand
// @hand-fixed 2026-10-29 from the asm: thiscall (ECX kept at [esp+8] at 0x465721 and reloaded for 0x540010; every caller sets ECX = 0x515a70's result), 10 stack args (ret 0x28 at 0x465997), void (all callers ignore EAX); Ghidra's in_stack_27xx are the stack args (arg6 colour, arg7 text, arg8 t, arg9 flag); t stays unrounded in ST0 through the whole loop (fld at 0x46578f, fsub 0.01f at 0x4658d3, no store), and the fade factors f=(t-0.25)*4 and g=(1-f)*255 stay in ST(2)/ST(1) unrounded (0x4657ee-0x465817), fimul by the alpha int (0x4658ae); NaN/below-zero exits via test ah,1 (0x46579e); one 0x2710-byte frame image (text 0x7d0, alpha array, colour array) keeps the original layout; 0x540010 (thiscall, ret 0x24) gets arg1+1/arg2+1 rounded by fstp (0x46593e/0x465953), then arg1/arg2 as bit copies
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define C_0    GLOBAL_AT(float, 0x005d856c)   // 0.0
#define C_025  GLOBAL_AT(float, 0x005d858c)   // 0.25
#define C_4    GLOBAL_AT(float, 0x005d85bc)   // 4.0
#define C_255  GLOBAL_AT(float, 0x005d8c70)   // 255.0
#define C_05   GLOBAL_AT(float, 0x005d85ec)   // 0.5
#define C_1    GLOBAL_AT(float, 0x005d8568)   // 1.0
#define C_15   GLOBAL_AT(float, 0x005d85d4)   // 15.0
#define C_K    GLOBAL_AT(float, 0x005db754)   // 0.06896552
#define C_001  GLOBAL_AT(float, 0x005d8574)   // 0.01
typedef uint32_t (BEA_THISCALL* FUN_00540010_t)(void *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00540010_t> FUN_00540010 = {(FUN_00540010_t)0x00540010};

static void BEA_THISCALL ap_00465710(void * this_, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5,
                                     uint32_t color, short * text, float t_in, int flag, uint32_t a10)
{
  uint8_t fr[0x2710];                                 // [esp+0x20] .. entry ESP
  short *buf = (short *)fr;                           // [esp+0x20], 1000 wide chars
  uint32_t *A = (uint32_t *)(fr + 0x7d0);             // [esp+0x7f0]
  uint32_t *B = (uint32_t *)(fr + 0x1770);            // [esp+0x1790]

  short c = text[0];
  int n = 0;
  if (c != 0) {                                       // 0x465736 loop
    const short *p = text + 1;
    short s;
    do {
      s = *p;
      n = n + 1;
      p = p + 1;
    } while (s != 0);
  }
  uint32_t hi = color >> 24;
  short *d = buf;
  if (c != 0) {                                       // 0x465761 loop
    do {
      *d = c;
      c = text[(d - buf) + 1];
      d = d + 1;
    } while (c != 0);
  }
  *d = 0;
  if (n > 1000) {
    n = 1000;
  }
  uint32_t acc = 0;
  if (n <= 0) {
    return;
  }
  float10 t = (float10)t_in;                          // fld [esp+0x2750], kept in ST0
  int i = 0;
  for (;;) {
    if (!(t >= (float10)C_0)) {                       // C0 (below or unordered)
      buf[i] = 0;
      break;
    }
    uint32_t v;
    if (!(t >= (float10)C_025)) {
      int k = (int)__builtin_llrintl(t * (float10)C_4 * (float10)C_255);
      v = ((((uint32_t)k * hi) >> 8) << 24) + 0xffffff;
    }
    else if (!(t >= (float10)C_05)) {
      float10 f = (t - (float10)C_025) * (float10)C_4;
      float10 g = ((float10)C_1 - f) * (float10)C_255;
      uint32_t e = (uint32_t)(int)__builtin_llrintl((float10)(int)((color >> 16) & 0xff) * f + g);
      e = e + (hi << 8);
      e = e << 8;
      e = e + (uint32_t)(int)__builtin_llrintl((float10)(int)((color >> 8) & 0xff) * f + g);
      e = e << 8;
      e = e + (uint32_t)(int)__builtin_llrintl((float10)(int)(color & 0xff) * f + g);
      v = e;
    }
    else if (flag == 0) {
      v = color;
    }
    else if (!(t >= (float10)C_15)) {
      float10 w = ((float10)C_1 - (t - (float10)C_05) * (float10)C_K) * (float10)(int)hi;
      v = ((uint32_t)(int)__builtin_llrintl(w) << 24) + (color & 0xffffff);
    }
    else {
      v = 0;
    }
    B[i] = v;
    t = t - (float10)C_001;                           // 0x4658d3, unrounded
    A[i] = (hi << 24) & v;
    acc = acc | v;
    i = i + 1;
    if (i >= n) {
      break;
    }
  }
  if (acc != 0) {
    float x2 = (float)(bea_fcast<float10>(a2) + (float10)C_1);
    float x1 = (float)(bea_fcast<float10>(a1) + (float10)C_1);
    FUN_00540010(this_, bea_arg(x1), bea_arg(x2), a3, a4, a5, color, (uint32_t)(uintptr_t)buf, a10, (uint32_t)(uintptr_t)A);
    FUN_00540010(this_, a1, a2, a3, a4, a5, color, (uint32_t)(uintptr_t)buf, a10, (uint32_t)(uintptr_t)B);
  }
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00465710, ap_00465710));
