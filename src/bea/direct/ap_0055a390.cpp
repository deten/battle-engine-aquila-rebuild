// auto-ported from 0055a390_FUN_0055a390.c (FUN_0055a390, 24 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef uint32_t (BEA_STDCALL* FUN_00512ca0_t)(uint32_t);
static const bea_guard<FUN_00512ca0_t> FUN_00512ca0 = {(FUN_00512ca0_t)0x00512ca0};

static uint32_t BEA_THISCALL ap_0055a390(void * this_)
{
  FUN_00512ca0(bea_arg(this_));
  *(undefined4 *)((int)this_ + 8) = 0;
  *(undefined4 *)((int)this_ + 0xc) = 0;
  return (uint32_t)0;
  return (uint32_t)0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0055a390, ap_0055a390));
