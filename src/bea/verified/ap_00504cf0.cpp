// auto-ported from 00504cf0_vslot76.c (CWarspiteDome::vslot76, 49 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CWarspiteDome;
typedef undefined4 (BEA_THISCALL* FUN_004fd760_t)(void *);
static const bea_guard<FUN_004fd760_t> FUN_004fd760 = {(FUN_004fd760_t)0x004fd760};

static undefined4 BEA_THISCALL ap_00504cf0(CWarspiteDome * this_)
{
  int iVar1;
  
  iVar1 = FUN_004fd760(this_);
  if ((iVar1 == 0) &&
     (((*(int *)(this_ + 0x168) != 0 || (*(int *)(this_ + 0x214) == 0)) &&
      (((byte)this_[0x2c] & 4) == 0)))) {
    return 0;
  }
  return 1;
}

// @autoport-registration (verified: 604 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00504cf0, ap_00504cf0));
