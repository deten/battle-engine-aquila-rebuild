// auto-ported from 00556470_FUN_00556470.c (FUN_00556470, 31 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define s_mixers_waves_tga_0065258c ((char*)0x0065258c)
typedef int * (BEA_CDECL* FUN_004f27f0_t)(undefined4, int, undefined4, int, int, undefined4, ...);
static const bea_guard<FUN_004f27f0_t> FUN_004f27f0 = {(FUN_004f27f0_t)0x004f27f0};

static uint32_t BEA_THISCALL ap_00556470(void * this_)
{
  undefined4 uVar1;
  
  uVar1 = FUN_004f27f0(s_mixers_waves_tga_0065258c,5,0,0xffffffff,1,1);
  *(undefined4 *)((int)this_ + 8) = uVar1;
  return *(uint32_t*)((char*)this_ + 0x8);
  return *(uint32_t*)((char*)this_ + 0x8);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00556470, ap_00556470));
