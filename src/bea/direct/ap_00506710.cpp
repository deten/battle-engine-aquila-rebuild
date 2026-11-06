// hand-ported from 00506710_FUN_00506710.c (FUN_00506710, 232 bytes)
// @hand-fixed 2026-10-29 returns ST0 (fld [node+0x9c] at 0x5067dc, fld [0x5d856c] at 0x5067ea); the EAX left beside it is overwritten by all 4 call sites in 0x406560 (eaxuse.py: unused), so float10 alone; loop restructured as the asm runs it (index = fistp([this+0x60])/100, walk the list at *0x8553ec keeping the cursor in [+8], step down one slot per miss)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define DAT_008553ec GLOBAL_AT(int *, 0x008553ec)
#define DAT_005d856c GLOBAL_AT(float, 0x005d856c)

static float10 BEA_THISCALL ap_00506710(void *this_)
{
  int n;
  int slot;
  int target;
  int i;
  int *node;
  int val;

  n = (int)(longlong)ROUND(*(float *)((int)this_ + 0x60));    // fistp qword, low dword
  n = n / 100;
  slot = n * 4 + 0xc;
  for (;;) {
    target = *(int *)(slot + *(int *)((int)this_ + 0xa4));
    i = 0;
    node = (int *)*DAT_008553ec;
    DAT_008553ec[2] = (int)node;
    val = (node == (int *)0x0) ? 0 : *node;
    while (val != 0) {
      if (i == target) {
        return (float10)*(float *)(val + 0x9c);
      }
      i = i + 1;
      node = *(int **)(DAT_008553ec[2] + 4);
      DAT_008553ec[2] = (int)node;
      val = (node == (int *)0x0) ? 0 : *node;
    }
    n = n + -1;
    slot = slot + -4;
    if (n < 0) {
      return (float10)DAT_005d856c;
    }
  }
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00506710, ap_00506710));
