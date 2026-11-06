// auto-ported from 004cbca0_FUN_004cbca0.c (FUN_004cbca0, 388 bytes) by tools/autoport.py
// @hand-fixed 2026-10-31 dt * v4c and dt * v50 rounded to float before the adds, as the asm stores them (311 replay)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_009c63f8 GLOBAL_AT(int, 0x009c63f8)
#define DAT_009c63fc GLOBAL_AT(int, 0x009c63fc)

static void BEA_STDCALL ap_004cbca0(int param_1)
{
  int iVar1;
  float fVar2;
  uint uVar3;
  
  fVar2 = bea_fcast<float>(DAT_009c63f8);
  if (DAT_009c63fc == 0) {
    for (; ((param_1 != 0)); param_1 = *(int *)(param_1 + 0x68)) {
      iVar1 = *(int *)(param_1 + 0x58);
      if (iVar1 != 0) {
        if (*(short *)(iVar1 + 0xb4) == 2) {
          bea_vcall<uint32_t>(*(int **)(param_1 + 0x5c), 0x54, param_1);
        }
        *(undefined4 *)(iVar1 + 0xa4) = 1;
        *(int *)(iVar1 + 0xa8) = param_1;
      }
      if (-1.0f < *(float *)(param_1 + 0x60)) {
        *(float *)(param_1 + 0x60) = *(float *)(param_1 + 0x60) - fVar2;
      }
      {
        // the asm keeps dt * v48 on the x87 stack but stores dt * v4c and
        // dt * v50 as floats (fstp [esp+0x10] / [esp+0x14]) before the adds
        // (4cbd0b-4cbd3f, 4cbdda-4cbe0e): only x38 adds the unrounded product
        volatile float t1 = fVar2 * *(float *)(param_1 + 0x4c);
        volatile float t2 = fVar2 * *(float *)(param_1 + 0x50);
        *(float *)(param_1 + 0x38) = fVar2 * *(float *)(param_1 + 0x48) + *(float *)(param_1 + 0x38);
        *(float *)(param_1 + 0x3c) = t1 + *(float *)(param_1 + 0x3c);
        *(float *)(param_1 + 0x40) = t2 + *(float *)(param_1 + 0x40);
      }
    }
  }
  else if (param_1 != 0) {
    do {
      iVar1 = *(int *)(param_1 + 0x58);
      if (iVar1 != 0) {
        if (*(short *)(iVar1 + 0xb4) == 2) {
          bea_vcall<uint32_t>(*(int **)(param_1 + 0x5c), 0x54, param_1);
        }
        *(undefined4 *)(iVar1 + 0xa4) = 1;
        *(int *)(iVar1 + 0xa8) = param_1;
      }
      if (-1.0f < *(float *)(param_1 + 0x60)) {
        *(float *)(param_1 + 0x60) = *(float *)(param_1 + 0x60) - fVar2;
      }
      {
        // the asm keeps dt * v48 on the x87 stack but stores dt * v4c and
        // dt * v50 as floats (fstp [esp+0x10] / [esp+0x14]) before the adds
        // (4cbd0b-4cbd3f, 4cbdda-4cbe0e): only x38 adds the unrounded product
        volatile float t1 = fVar2 * *(float *)(param_1 + 0x4c);
        volatile float t2 = fVar2 * *(float *)(param_1 + 0x50);
        *(float *)(param_1 + 0x38) = fVar2 * *(float *)(param_1 + 0x48) + *(float *)(param_1 + 0x38);
        *(float *)(param_1 + 0x3c) = t1 + *(float *)(param_1 + 0x3c);
        *(float *)(param_1 + 0x40) = t2 + *(float *)(param_1 + 0x40);
      }
      if ((*(float *)(param_1 + 0x60) <= -2.0f) || (0.0f <= *(float *)(param_1 + 0x60))) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | uVar3;
      param_1 = *(int *)(param_1 + 0x68);
    } while (((param_1 != 0)));
    return;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cbca0, ap_004cbca0));
