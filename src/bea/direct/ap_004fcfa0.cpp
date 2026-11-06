// auto-ported from 004fcfa0_FUN_004fcfa0.c (FUN_004fcfa0, 55 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};

static void BEA_THISCALL ap_004fcfa0(void * this_)
{
  int *piVar1;
  
  FUN_00401000(bea_arg((void *)((int)this_ + 0x144)), bea_arg(0));
  while (BEA_LOOP_GUARD(((piVar1 = *(int **)((int)this_ + 0x18c), piVar1 != (int *)0x0 &&
         (piVar1 = (int *)*piVar1, piVar1 != (int *)0x0))))) {
    FUN_004e5bd0(bea_arg((int *)((int)this_ + 0x18c)), bea_arg(piVar1));
    bea_vcall<uint32_t>(piVar1, 0x8);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fcfa0, ap_004fcfa0));
