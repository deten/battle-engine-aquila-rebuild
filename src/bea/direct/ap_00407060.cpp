// auto-ported from 00407060_FUN_00407060.c (FUN_00407060, 223 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_0044b1d0_t)(uint32_t);
static const bea_guard<FUN_0044b1d0_t> FUN_0044b1d0 = {(FUN_0044b1d0_t)0x0044b1d0};
typedef uint32_t (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5a80_t> FUN_004e5a80 = {(FUN_004e5a80_t)0x004e5a80};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_00407060(void * this_, int param_1)
{
  undefined4 *puVar1;
  float fVar2;
  int *this_00;
  int *piVar3;
  
  if (param_1 != 0) {
    puVar1 = *(undefined4 **)((int)this_ + 0x294);
    *(undefined4 **)((int)this_ + 0x29c) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      this_00 = (int *)0x0;
    }
    else {
      this_00 = (int *)*puVar1;
    }
    if (this_00 != (int *)0x0) {
      while ((((DAT_00672fd0 <= bea_fcast<float>(this_00[2]) || (*this_00 != param_1))))) {
        puVar1 = *(undefined4 **)(*(int *)((int)this_ + 0x29c) + 4);
        *(undefined4 **)((int)this_ + 0x29c) = puVar1;
        if (puVar1 == (undefined4 *)0x0) {
          this_00 = (int *)0x0;
        }
        else {
          this_00 = (int *)*puVar1;
        }
        if (this_00 == (int *)0x0) {
          return;
        }
      }
      FUN_004e5bd0(bea_arg((void *)((int)this_ + 0x294)), bea_arg(this_00));
      puVar1 = *(undefined4 **)((int)this_ + 0x2a4);
      *(undefined4 **)((int)this_ + 0x2ac) = puVar1;
      if (puVar1 == (undefined4 *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)*puVar1;
      }
      while((( true ))) {
        if (piVar3 == (int *)0x0) {
          FUN_004e5a80(bea_arg((void *)((int)this_ + 0x2a4)), bea_arg(this_00));
          fVar2 = DAT_00672fd0;
          this_00[1] = bea_piece32(DAT_00672fd0);
          this_00[2] = bea_piece32(fVar2 + 0.5f);
          return;
        }
        if (*piVar3 == param_1) break;
        puVar1 = *(undefined4 **)(*(int *)((int)this_ + 0x2ac) + 4);
        *(undefined4 **)((int)this_ + 0x2ac) = puVar1;
        if (puVar1 == (undefined4 *)0x0) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = (int *)*puVar1;
        }
      }
      if (this_00 != (int *)0x0) {
        FUN_0044b1d0(bea_arg(this_00));
        FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_00));
      }
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00407060, ap_00407060));
