// auto-ported from 00406020_vslot23.c (CBattleEngine::vslot23, 29 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char CBattleEngine;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_Deactivating_Battle_Engine_00623288 ((char*)0x00623288)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};

static uint32_t BEA_THISCALL ap_00406020(CBattleEngine * this_)
{
  *(undefined4 *)(this_ + 0x580) = 0;
  return FUN_00441740(&DAT_0066f580,s_Deactivating_Battle_Engine_00623288);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00406020, ap_00406020));
