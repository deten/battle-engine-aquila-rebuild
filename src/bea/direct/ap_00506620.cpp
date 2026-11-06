// auto-ported from 00506620_FUN_00506620.c (FUN_00506620, 232 bytes) by hand
// @hand-fixed 2026-10-29 from the asm: thiscall, no stack args, plain ret; returns the float at item+0x98 (fld at 0x5066ec) or 0.0f [0x5d856c] in ST0; EAX at ret is not used by the only callers (0x406724, 0x406a25, 0x406ce4, 0x406f45 all fcos then fnstsw ax), so float10 only; index = low dword of fistp qword of this+0x60 (0x506626) / 100 (signed, magic 0x51eb851f); the shared list cursor DAT_008553ec+8 is written on every step as the asm does
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_008553ec GLOBAL_AT(int*, 0x008553ec)
#define DAT_005d856c GLOBAL_AT(float, 0x005d856c)

static float10 BEA_THISCALL ap_00506620(void * this_)
{
  const int self = (int)(uintptr_t)this_;
  int n = (int)__builtin_llrintl((float10)*(float *)(self + 0x60));
  int q = n / 100;
  int off = q * 4 + 0xc;
  for (;;) {
    int target = *(int *)(off + *(int *)(self + 0xa4));
    int *L = DAT_008553ec;
    int *cur = (int *)(uintptr_t)L[0];
    L[2] = (int)(uintptr_t)cur;
    int item = (cur == (int *)0x0) ? 0 : *cur;
    int i = 0;
    while (BEA_LOOP_GUARD(item != 0)) {
      if (i == target) {
        return (float10)*(float *)(item + 0x98);
      }
      i = i + 1;
      L = DAT_008553ec;
      cur = *(int **)(L[2] + 4);
      L[2] = (int)(uintptr_t)cur;
      item = (cur == (int *)0x0) ? 0 : *cur;
    }
    q = q - 1;
    off = off - 4;
    if (q < 0) {
      return (float10)DAT_005d856c;
    }
  }
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00506620, ap_00506620));
