// auto-ported from 004daab0_FUN_004daab0.c (FUN_004daab0, 159 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008551a0 GLOBAL_AT(int, 0x008551a0)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_THISCALL* FUN_00407140_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00407140_t> FUN_00407140 = {(FUN_00407140_t)0x00407140};
typedef uint32_t (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5a80_t> FUN_004e5a80 = {(FUN_004e5a80_t)0x004e5a80};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};

static void BEA_THISCALL ap_004daab0(void * this_, int param_1, int param_2)
{
  void *this_00;
  
  if ((param_1 != 0) &&
     ((*(int *)(*(int *)((int)this_ + 0xf0) + 0x48) != 0 ||
      (*(float *)(*(int *)((int)this_ + 0xf0) + 0x1c) < 0.0f)))) {
    if (param_2 != 0) {
      this_00 = *(void **)((int)this_ + 0xec);
      if ((this_00 != (void *)0x0) && ((*(byte *)((int)this_00 + 0x34) & 8) != 0)) {
        FUN_00407140(bea_arg(this_00), bea_arg(*(undefined4 *)((int)this_ + 0xe8)));
      }
      if ((*(int *)((int)this_ + 0xe8) != 0) &&
         ((*(byte *)(*(int *)((int)this_ + 0xe8) + 0x34) & 8) != 0)) {
        FUN_004e5bd0(bea_arg(&DAT_008551a0), bea_arg(this_));
      }
      FUN_00401000(bea_arg((void *)((int)this_ + 0xe8)), bea_arg(0));
    }
    FUN_00401000(bea_arg((void *)((int)this_ + 0xe8)), bea_arg(param_1));
    if ((*(byte *)(param_1 + 0x34) & 8) != 0) {
      FUN_004e5a80(bea_arg(&DAT_008551a0), bea_arg(this_));
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004daab0, ap_004daab0));
