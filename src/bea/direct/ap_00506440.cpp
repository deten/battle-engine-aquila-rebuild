// auto-ported from 00506440_FUN_00506440.c (FUN_00506440, 232 bytes) by tools/autoport.py
// @hand-fixed 2026-10-29 returns its float in ST0 on both exits (fld [eax+0x94] at 0050650c, fld 0.0 at 0050651a) and all four call sites in 0x406560 store ST0 (fstp dword after 004068cd/00406a45/00406aa2/00406cfa): float10 return; written from the disassembly (fistp qword of +0x60, signed /100, list cursor stored at list+8 on every step)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define DAT_008553ec GLOBAL_AT(int*, 0x008553ec)

// walk the global list until the target'th entry; returns 0 when the list ends
static inline int bea_step_first(void)
{
  int *list = DAT_008553ec;
  int *node = (int *)list[0];
  list[2] = (int)node;
  return node == 0 ? 0 : *node;
}
static inline int bea_step_next(void)
{
  int *list = DAT_008553ec;
  int *node = *(int **)(list[2] + 4);
  list[2] = (int)node;
  return node == 0 ? 0 : *node;
}

static float10 BEA_THISCALL ap_00506440(uint8_t *this_)
{
  long long q = __builtin_llrintl((float10)*(float *)(this_ + 0x60));   // fistp qword (00506446)
  int n = (int)(uint32_t)q / 100;
  int off = n * 4 + 0xc;
  int target = *(int *)(off + *(int *)(this_ + 0xa4));
  int i = 0;
  int item = bea_step_first();
  while (item != 0) {
    if (i == target) {
      return (float10)*(float *)(item + 0x94);
    }
    i = i + 1;
    item = bea_step_next();
  }
  for (;;) {
    n = n - 1;                                    // 005064b8
    off = off - 4;
    if (n < 0) {
      return (float10)0.0f;
    }
    target = *(int *)(off + *(int *)(this_ + 0xa4));
    i = 0;
    item = bea_step_first();
    while (item != 0) {
      if (i == target) {
        return (float10)*(float *)(item + 0x94);
      }
      i = i + 1;
      item = bea_step_next();
    }
  }
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00506440, ap_00506440));
