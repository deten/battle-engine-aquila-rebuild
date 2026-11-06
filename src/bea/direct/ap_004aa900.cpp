// auto-ported from 004aa900_FUN_004aa900.c (FUN_004aa900, 54 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004ae2b0_t)(uint32_t);
static const bea_guard<FUN_004ae2b0_t> FUN_004ae2b0 = {(FUN_004ae2b0_t)0x004ae2b0};

static void BEA_THISCALL ap_004aa900(void * this_)
{
  int iVar1;
  
  if ((*(int *)((int)this_ + 0x160) != 0) && (iVar1 = 0, 0 < *(int *)((int)this_ + 0x15c))) {
    do {
      FUN_004ae2b0(bea_arg(*(void **)(*(int *)((int)this_ + 0x160) + iVar1 * 4)));
      iVar1 = iVar1 + 1;
    } while (BEA_LOOP_GUARD((iVar1 < *(int *)((int)this_ + 0x15c))));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004aa900, ap_004aa900));
