// auto-ported from 005453d0_FUN_005453d0.c (FUN_005453d0, 31 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define s_clouds_shadow_tga_00650e88 ((char*)0x00650e88)
typedef int * (BEA_CDECL* FUN_004f27f0_t)(undefined4, int, undefined4, int, int, undefined4, ...);
static const bea_guard<FUN_004f27f0_t> FUN_004f27f0 = {(FUN_004f27f0_t)0x004f27f0};

static uint32_t BEA_THISCALL ap_005453d0(void * this_)
{
  undefined4 uVar1;
  
  uVar1 = FUN_004f27f0(s_clouds_shadow_tga_00650e88,4,0,0xffffffff,1,1);
  *(undefined4 *)((int)this_ + 0x38) = uVar1;
  return *(uint32_t*)((char*)this_ + 0x38);
  return *(uint32_t*)((char*)this_ + 0x38);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005453d0, ap_005453d0));
