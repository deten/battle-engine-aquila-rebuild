// auto-ported from 00504d30_vslot109.c (CWarspiteDome::vslot109, 34 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CWarspiteDome;
typedef undefined4 (BEA_THISCALL* FUN_004fd760_t)(void *);
static const bea_guard<FUN_004fd760_t> FUN_004fd760 = {(FUN_004fd760_t)0x004fd760};

static uint32_t BEA_THISCALL ap_00504d30(CWarspiteDome * this_)
{
  int iVar1;
  
  iVar1 = FUN_004fd760(this_);
  if (iVar1 != 0) {
    return true;
  }
  return *(int *)(this_ + 0x168) == 0;
}

// @autoport-registration (verified: 550 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00504d30, ap_00504d30));
