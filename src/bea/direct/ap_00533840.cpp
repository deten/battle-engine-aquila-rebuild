// auto-ported from 00533840_FUN_00533840.c (FUN_00533840, 95 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0089c5e0 GLOBAL_AT(int, 0x0089c5e0)
#define DAT_008a9ac0 GLOBAL_AT(int, 0x008a9ac0)
#define DAT_0089c7f4 GLOBAL_AT(int, 0x0089c7f4)
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef void * (BEA_THISCALL* FUN_00539910_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00539910_t> FUN_00539910 = {(FUN_00539910_t)0x00539910};
typedef uint32_t (BEA_THISCALL* FUN_00539980_t)(uint32_t);
static const bea_guard<FUN_00539980_t> FUN_00539980 = {(FUN_00539980_t)0x00539980};
typedef uint32_t (BEA_THISCALL* FUN_00539ae0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00539ae0_t> FUN_00539ae0 = {(FUN_00539ae0_t)0x00539ae0};

static void BEA_THISCALL ap_00533840(void * this_)
{
  if (*(int *)((int)this_ + 0x38) != 0) {
    FUN_00539910(bea_arg(&DAT_0089c5e0), bea_arg(*(int *)((int)this_ + 0x38)));
    FUN_004e5bd0(bea_arg((void *)((int)this_ + 0x28)), bea_arg(*(undefined4 *)((int)this_ + 0x38)));
    if (*(int **)((int)this_ + 0x38) != (int *)0x0) {
      bea_vcall<uint32_t>(*(int **)((int)this_ + 0x38), 0x4, 1);
    }
    *(undefined4 *)((int)this_ + 0x38) = 0;
    if (DAT_008a9ac0 == 4) {
      FUN_00539980(bea_arg(&DAT_0089c5e0));
      return;
    }
    FUN_00539ae0(bea_arg(&DAT_0089c5e0), bea_arg(DAT_0089c7f4));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00533840, ap_00533840));
