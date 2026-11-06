// auto-ported from 004ebbc0_FUN_004ebbc0.c (FUN_004ebbc0, 55 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define s_Force_a__re_build_of_the_static_s_00632988 ((char*)0x00632988)
#define s_BuildStaticShadows_00632974 ((char*)0x00632974)
typedef undefined4 (BEA_THISCALL* FUN_0042af80_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042af80_t> FUN_0042af80 = {(FUN_0042af80_t)0x0042af80};

static uint32_t BEA_THISCALL ap_004ebbc0(void * this_)
{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_0042af80(bea_arg(&DAT_00663498), bea_arg(s_BuildStaticShadows_00632974), bea_arg(s_Force_a__re_build_of_the_static_s_00632988), bea_arg(((void*)0x004ebbb0)), bea_arg(0));
  puVar2 = (undefined4 *)((int)this_ + 0x18);
  for (iVar1 = 0x1000; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this_ + 0x4018) = 0;
  *(undefined4 *)((int)this_ + 4) = 0;
  return (uint32_t)0;
  return (uint32_t)0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ebbc0, ap_004ebbc0));
