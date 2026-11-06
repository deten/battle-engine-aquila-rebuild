// auto-ported from 0051f470_FUN_0051f470.c (FUN_0051f470, 30 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00660620 GLOBAL_AT(int, 0x00660620)
typedef int (BEA_THISCALL* FUN_004218f0_t)(uint32_t);
static const bea_guard<FUN_004218f0_t> FUN_004218f0 = {(FUN_004218f0_t)0x004218f0};
typedef int (BEA_THISCALL* FUN_00421900_t)(uint32_t);
static const bea_guard<FUN_00421900_t> FUN_00421900 = {(FUN_00421900_t)0x00421900};

static uint32_t BEA_THISCALL ap_0051f470(void * this_)
{
  undefined4 uVar1;
  
  uVar1 = FUN_004218f0(bea_arg(&DAT_00660620));
  *(undefined4 *)this_ = uVar1;
  uVar1 = FUN_00421900(bea_arg(&DAT_00660620));
  *(undefined4 *)((int)this_ + 4) = uVar1;
  return *(uint32_t*)((char*)this_ + 0x4);
  return *(uint32_t*)((char*)this_ + 0x4);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051f470, ap_0051f470));
