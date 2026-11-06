// auto-ported from 004fd7e0_FUN_004fd7e0.c (FUN_004fd7e0, 76 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef bool (BEA_THISCALL* FUN_004e4420_t)(void *);
static const bea_guard<FUN_004e4420_t> FUN_004e4420 = {(FUN_004e4420_t)0x004e4420};
typedef undefined4 (BEA_THISCALL* FUN_004e4430_t)(void *);
static const bea_guard<FUN_004e4430_t> FUN_004e4430 = {(FUN_004e4430_t)0x004e4430};

static undefined4 BEA_THISCALL ap_004fd7e0(void * this_)
{
  undefined4 *puVar1;
  int iVar2;
  void *this_00;
  
  puVar1 = *(undefined4 **)((int)this_ + 0x18c);
  if (puVar1 == (undefined4 *)0x0) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)*puVar1;
  }
  while(BEA_LOOP_GUARD( true )) {
    if (this_00 == (void *)0x0) {
      return 1;
    }
    iVar2 = FUN_004e4430(this_00);
    if ((iVar2 == 0) || (iVar2 = FUN_004e4420(this_00), iVar2 != 0)) break;
    puVar1 = (undefined4 *)puVar1[1];
    if (puVar1 == (undefined4 *)0x0) {
      this_00 = (void *)0x0;
    }
    else {
      this_00 = (void *)*puVar1;
    }
  }
  return 0;
}

// @autoport-registration (verified: 258 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004fd7e0, ap_004fd7e0));
