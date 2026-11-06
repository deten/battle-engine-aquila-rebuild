// auto-ported from 004fcfe0_FUN_004fcfe0.c (FUN_004fcfe0, 82 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (6 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_0044b1d0_t)(uint32_t);
static const bea_guard<FUN_0044b1d0_t> FUN_0044b1d0 = {(FUN_0044b1d0_t)0x0044b1d0};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_004fcfe0(void * this_)
{
  undefined4 *puVar1;
  int *this_00;
  int *piVar2;
  
  while (BEA_LOOP_GUARD(((puVar1 = *(undefined4 **)((int)this_ + 0x19c), puVar1 != (undefined4 *)0x0 &&
         (this_00 = (int *)*puVar1, this_00 != (int *)0x0))))) {
    piVar2 = (int *)*this_00;
    if (piVar2 != (int *)0x0) {
      if ((*(byte *)((int)this_ + 0x2c) & 4) == 0) {
        bea_vcall<uint32_t>(piVar2, 0x8);
      }
      else {
        bea_vcall<uint32_t>(piVar2, 0xc8);
      }
    }
    FUN_004e5bd0(bea_arg((int *)((int)this_ + 0x19c)), bea_arg(this_00));
    FUN_0044b1d0(bea_arg(this_00));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_00));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fcfe0, ap_004fcfe0));
