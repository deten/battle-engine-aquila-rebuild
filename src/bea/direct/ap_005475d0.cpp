// hand-ported from 005475d0_FUN_005475d0.c (FUN_005475d0, 655 bytes)
// @hand-fixed 2026-10-29 the argument slots are reused for ints: param_1's for the column index (0x5476f7 `mov [esp+0x48],ecx`, incremented at 0x547813), param_2's for the column count 1/2 (0x5476c1/0x5476cc) - Ghidra converted both through float, here they are int locals; threshold is the float 0.010000001f at 0x5d8c60 (sum dy*dy + dx*dx at 0x5475f2, commutative); floor called without bea_guard (it would round the double argument to float); 0x440eb0/0x440f80 are thiscall on 0x8aa9f0 with 4/3 stack args (ret 0x10/0xc); mark loop re-reads [0x89c9b0+0x24] per entry as at 0x5477d1
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define DAT_00650ab0 GLOBAL_AT(float, 0x00650ab0)
#define DAT_00650ab4 GLOBAL_AT(float, 0x00650ab4)
#define DAT_0089c9b0 GLOBAL_AT(int, 0x0089c9b0)
typedef float10 (BEA_CDECL* FUN_0055dfe7_t)(double);
static const FUN_0055dfe7_t FUN_0055dfe7 = (FUN_0055dfe7_t)0x0055dfe7;
typedef uint32_t (BEA_THISCALL* FUN_00440eb0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00440eb0_t> FUN_00440eb0 = {(FUN_00440eb0_t)0x00440eb0};
typedef uint32_t (BEA_THISCALL* FUN_00440f80_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00440f80_t> FUN_00440f80 = {(FUN_00440f80_t)0x00440f80};

static void BEA_STDCALL ap_005475d0(float param_1, float param_2, int param_3)
{
  float10 dx;
  float10 dy;
  uint32_t n;
  int iVar11;
  int x16, y16;
  uint32_t uVar15, uVar7;
  int iVar8, iVar14;
  int ncols, nrows;
  int col, left;
  uint32_t uVar13;
  uint32_t uVar2;
  uint32_t m;
  int g;
  int k;
  int rec;
  int e;
  int j;
  byte *pbVar5;

  dx = (float10)param_1 - (float10)DAT_00650ab0;
  dy = (float10)param_2 - (float10)DAT_00650ab4;
  if (!(dy * dy + dx * dx >= (float10)0.010000001f)) {     // fcomp; test ah,1 (less or unordered)
    return;
  }
  *(volatile uint32_t *)&DAT_00650ab4 = *(volatile uint32_t *)&param_2;     // mov: bit copies (0x547611)
  *(volatile uint32_t *)&DAT_00650ab0 = *(volatile uint32_t *)&param_1;
  n = (uint32_t)param_3;
  if (param_3 < 0) {
    n = 0u - n;
  }
  iVar11 = 1 << (n & 0x1f);
  x16 = (int)(longlong)ROUND(FUN_0055dfe7((double)((float10)param_1 * (float10)16.0f)));
  uVar15 = (uint32_t)(x16 - (iVar11 >> 1));
  y16 = (int)(longlong)ROUND(FUN_0055dfe7((double)((float10)param_2 * (float10)16.0f)));
  uVar7 = (uint32_t)(y16 - (iVar11 >> 1));
  iVar8 = (int)uVar15 >> 7;
  iVar14 = (int)uVar7 >> 7;
  if ((iVar8 < 0) || (iVar14 < 0) || (0x3f < iVar8) || (0x3f < iVar14)) {
    return;
  }
  uVar15 = uVar15 & 0x7f;
  uVar7 = uVar7 & 0x7f;
  ncols = 1;
  if ((0x80 < (int)(uVar15 + iVar11)) && (iVar8 < 0x3f)) {
    ncols = 2;
  }
  nrows = 1;
  if ((0x80 < (int)(iVar11 + uVar7)) && (iVar14 < 0x3f)) {
    nrows = 2;
  }
  do {
    if (ncols != 0) {
      uVar13 = uVar15;
      col = iVar8;
      left = ncols;
      do {
        uVar2 = (uint32_t)(col + iVar14 * 0x40);
        if (param_3 < 1) {
          FUN_00440f80(0x008aa9f0, uVar2, uVar13, uVar7);
        }
        else {
          FUN_00440eb0(0x008aa9f0, uVar2, uVar13, uVar7, (uint32_t)param_3);
        }
        g = DAT_0089c9b0;
        if (*(int *)(g + 0x30) != 0) {
          m = uVar2 & 0xffff;
          if ((*(int *)(g + 0x20) != 0) && (0 < *(int *)(g + 0x20))) {
            k = 0;
            rec = 0;
            do {
              j = 1;
              if (1 < *(int *)(*(int *)(g + 0x24) + rec + 0xc)) {
                e = 0;
                do {
                  int base = *(int *)(*(int *)(g + 0x24) + rec) + e;
                  uint32_t idx = (((uint32_t)*(ushort *)(base + 0x4a) & m) >> (*(byte *)(base + 0x34) & 0x1f)) +
                                 ((uint32_t)*(ushort *)(base + 0x48) & m);
                  pbVar5 = (byte *)(*(int *)(base + 0x40) + 1 + idx * 2);
                  *pbVar5 = *pbVar5 | 0x80;
                  e = e + 0x50;
                  j = j + 1;
                } while (j < *(int *)(*(int *)(g + 0x24) + rec + 0xc));
              }
              k = k + 1;
              rec = rec + 0x34;
            } while (k < *(int *)(g + 0x20));
          }
        }
        uVar13 = uVar13 - 0x80;
        col = col + 1;
        left = left + -1;
      } while (left != 0);
    }
    iVar14 = iVar14 + 1;
    uVar7 = uVar7 - 0x80;
    nrows = nrows + -1;
  } while (nrows != 0);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005475d0, ap_005475d0));
