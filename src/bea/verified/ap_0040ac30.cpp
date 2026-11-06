// auto-ported from 0040ac30_vslot14.c (CMCBattleEngine::vslot14, 17 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef char BEA_THISCALL;
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
typedef undefined4 (BEA_THISCALL* FUN_004725d0_t)(void *);
static const bea_guard<FUN_004725d0_t> FUN_004725d0 = {(FUN_004725d0_t)0x004725d0};

// returns the full EAX (NOTES A1-8 rule 13; was bool)
static uint32_t BEA_CDECL ap_0040ac30(void)
{
  int iVar1;
  
  iVar1 = FUN_004725d0(&DAT_008a9a98);
  return iVar1 != 0;
}

// @autoport-registration (verified: 375 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0040ac30, ap_0040ac30));
