// auto-ported from 00544060_FUN_00544060.c (FUN_00544060, 64 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008aa908 GLOBAL_AT(undefined4*, 0x008aa908)
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};

static void BEA_THISCALL ap_00544060(void * this_)
{
  int iVar1;
  
  iVar1 = 5;
  do {
    if (*(int *)this_ != 0) {
      FUN_004f27e0(bea_arg((void *)(*(int *)this_ + 8)));
      *(int *)this_ = 0;
    }
    this_ = (void *)((int)this_ + 4);
    iVar1 = iVar1 + -1;
  } while (BEA_LOOP_GUARD((iVar1 != 0)));
  if (DAT_008aa908 != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(DAT_008aa908, 0x0, 1);
    DAT_008aa908 = (undefined4 *)0x0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00544060, ap_00544060));
