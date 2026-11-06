// hand-ported from 00509c80_FUN_00509c80.c (FUN_00509c80, 439 bytes)
// @hand-fixed 2026-10-29 returns ST0 on every path (0x509ce2 tail result of 0x5099a0, fld at 0x509de7/0x509e0d/0x509e1b/0x509e29); its one caller 0x40acc0 overwrites EAX (eaxuse.py), so float10 alone; 0x5099a0 gets the 4 argument dwords copied as they are (0x509cc0-0x509cdf); `fcomp; test ah,0x40; jne` at 0x509ca5 skips that call for zero AND for NaN, so the test is (p < 0 || p > 0); constants read from 0x5d8c6c / 0x5d856c as the asm does; control flow follows the asm (0x509d48 step-down via 0x509e40, 0x509d72 fallback scan of slots 0xc..0x1c)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define DAT_008553ec GLOBAL_AT(int *, 0x008553ec)
#define DAT_005d856c GLOBAL_AT(float, 0x005d856c)
#define DAT_005d8c6c GLOBAL_AT(float, 0x005d8c6c)
typedef int (BEA_THISCALL* FUN_00406d20_t)(void *);
static const bea_guard<FUN_00406d20_t> FUN_00406d20 = {(FUN_00406d20_t)0x00406d20};
typedef int (BEA_THISCALL* FUN_00406d30_t)(void *);
static const bea_guard<FUN_00406d30_t> FUN_00406d30 = {(FUN_00406d30_t)0x00406d30};
typedef int (BEA_CDECL* FUN_00509e40_t)(uint32_t);
static const bea_guard<FUN_00509e40_t> FUN_00509e40 = {(FUN_00509e40_t)0x00509e40};
typedef float10 (BEA_THISCALL* FUN_005099a0_t)(void *, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005099a0_t> FUN_005099a0 = {(FUN_005099a0_t)0x005099a0};

static float10 BEA_THISCALL ap_00509c80(void *this_, uint32_t param_1, uint32_t param_2, uint32_t param_3, uint32_t param_4)
{
  int *piVar1;
  int iVar5;
  int n;
  int slot;
  int target;
  int i;
  int node;
  int c;
  float10 p;

  if ((*(int *)((int)this_ + 0xa0) != 0) &&
      (iVar5 = *(int *)(*(int *)((int)this_ + 0xa0) + 0x18), iVar5 != 0)) {
    p = (float10)*(float *)(iVar5 + 0x3c) * (float10)DAT_005d8c6c;
    if (((p < (float10)DAT_005d856c) || (p > (float10)DAT_005d856c)) &&
        (*(int *)(iVar5 + 0x50) == 0) && (*(int *)(iVar5 + 0x6c) == 0)) {
      return FUN_005099a0(this_, param_1, param_2, param_3, param_4);
    }
  }
  n = (int)(longlong)ROUND(*(float *)((int)this_ + 0x60));    // fistp qword, low dword
  n = n / 100;
  slot = n * 4 + 0xc;
  target = *(int *)(slot + *(int *)((int)this_ + 0xa4));
  i = 0;
  node = FUN_00406d20(DAT_008553ec);
  while (node != 0) {
    if (i == target) goto found;
    i = i + 1;
    node = FUN_00406d30(DAT_008553ec);
  }
  for (;;) {
    n = n + -1;
    slot = slot + -4;
    if (n < 0) break;
    node = FUN_00509e40(*(uint32_t *)(slot + *(int *)((int)this_ + 0xa4)));
    if (node != 0) goto found;
  }
  // 0x509d72: nothing at or below the index; scan slots 0xc..0x1c from the top of the list
  for (slot = 0xc; slot < 0x20; slot = slot + 4) {
    target = *(int *)(slot + *(int *)((int)this_ + 0xa4));
    i = 0;
    piVar1 = (int *)*DAT_008553ec;
    DAT_008553ec[2] = (int)piVar1;
    node = (piVar1 == (int *)0x0) ? 0 : *piVar1;
    while (node != 0) {
      if (i == target) goto found;
      i = i + 1;
      piVar1 = *(int **)(DAT_008553ec[2] + 4);
      DAT_008553ec[2] = (int)piVar1;
      node = (piVar1 == (int *)0x0) ? 0 : *piVar1;
    }
  }
  node = 0;
found:
  if ((node == 0) || (c = *(int *)(node + 0x18), c == 0)) {
    return (float10)DAT_005d856c;
  }
  if (*(int *)(c + 0x50) != 0) {
    return (float10)*(float *)(node + 0x78);
  }
  if (((float10)*(float *)(c + 0x28) > (float10)DAT_005d856c) && (*(int *)(c + 0x48) != 0)) {
    return (float10)*(float *)(node + 0x9c);
  }
  return (float10)*(float *)(c + 0x2c) * (float10)*(float *)(c + 0x24);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00509c80, ap_00509c80));
