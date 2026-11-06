// auto-ported from 004fd760_FUN_004fd760.c (FUN_004fd760, 60 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_0050a290_t)(void *);
static const bea_guard<FUN_0050a290_t> FUN_0050a290 = {(FUN_0050a290_t)0x0050a290};

static undefined4 BEA_THISCALL ap_004fd760(void * this_)
{
  undefined4 *puVar1;
  int iVar2;
  void *this_00;
  
  puVar1 = *(undefined4 **)((int)this_ + 0x17c);
  if (puVar1 == (undefined4 *)0x0) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)*puVar1;
  }
  while(BEA_LOOP_GUARD( true )) {
    if (this_00 == (void *)0x0) {
      return 0;
    }
    iVar2 = FUN_0050a290(this_00);
    if (iVar2 != 0) break;
    puVar1 = (undefined4 *)puVar1[1];
    if (puVar1 == (undefined4 *)0x0) {
      this_00 = (void *)0x0;
    }
    else {
      this_00 = (void *)*puVar1;
    }
  }
  return 1;
}

// @autoport-registration (verified: 54 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004fd760, ap_004fd760));
