// auto-ported from 004dab50_FUN_004dab50.c (FUN_004dab50, 77 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008551a0 GLOBAL_AT(int, 0x008551a0)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_THISCALL* FUN_00407140_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00407140_t> FUN_00407140 = {(FUN_00407140_t)0x00407140};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};

static uint32_t BEA_THISCALL ap_004dab50(void * this_)
{
  void *this_00;
  this_00 = *(void **)((int)this_ + 0xec);
  if ((this_00 != (void *)0x0) && ((*(byte *)((int)this_00 + 0x34) & 8) != 0)) {
    FUN_00407140(bea_arg(this_00), bea_arg(*(undefined4 *)((int)this_ + 0xe8)));
  }
  if ((*(int *)((int)this_ + 0xe8) != 0) && ((*(byte *)(*(int *)((int)this_ + 0xe8) + 0x34) & 8) != 0)
     ) {
    FUN_004e5bd0(bea_arg(&DAT_008551a0), bea_arg(this_));
  }
  return FUN_00401000(bea_arg((void *)((int)this_ + 0xe8)), bea_arg(0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dab50, ap_004dab50));
