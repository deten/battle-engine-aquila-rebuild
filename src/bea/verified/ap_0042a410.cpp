// auto-ported from 0042a410_FUN_0042a410.c (FUN_0042a410, 73 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef undefined4 (BEA_CDECL* FUN_00515b00_t)(void);
static const bea_guard<FUN_00515b00_t> FUN_00515b00 = {(FUN_00515b00_t)0x00515b00};

static uint32_t BEA_THISCALL ap_0042a410(void * this_)
{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)this_ = 0;
  iVar1 = FUN_00515b00();
  *(int *)((int)this_ + 0x2388) = iVar1 + -0x100;
  uVar2 = FUN_00515b00();
  *(undefined4 *)((int)this_ + 0x2384) = uVar2;
  iVar1 = FUN_00515b00();
  *(int *)((int)this_ + 0xb3cc) = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
  return *(uint32_t*)((char*)this_ + 0xb3cc);
  return *(uint32_t*)((char*)this_ + 0xb3cc);
}

// @autoport-registration (verified: 3588 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0042a410, ap_0042a410));
