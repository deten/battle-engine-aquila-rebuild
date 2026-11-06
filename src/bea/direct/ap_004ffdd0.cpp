// auto-ported from 004ffdd0_FUN_004ffdd0.c (FUN_004ffdd0, 38 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_THISCALL* FUN_004fb840_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fb840_t> FUN_004fb840 = {(FUN_004fb840_t)0x004fb840};

static uint32_t BEA_THISCALL ap_004ffdd0(void * this_, undefined4 param_1, undefined4 param_2)
{
  FUN_00401000(bea_arg((void *)((int)this_ + 0xc)), bea_arg(param_1));
  FUN_004fb840(bea_arg(*(void **)((int)this_ + 8)), bea_arg(param_1));
  *(undefined4 *)((int)this_ + 0x10) = param_2;
  return *(uint32_t*)((char*)this_ + 0x10);
  return *(uint32_t*)((char*)this_ + 0x10);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ffdd0, ap_004ffdd0));
