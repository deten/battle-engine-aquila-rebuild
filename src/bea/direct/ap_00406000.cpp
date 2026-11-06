// auto-ported from 00406000_vslot22.c (CBattleEngine::vslot22, 29 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char CBattleEngine;
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_Activating_Battle_Engine_0062326c ((char*)0x0062326c)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};

static uint32_t BEA_THISCALL ap_00406000(CBattleEngine * this_)
{
  *(undefined4 *)(this_ + 0x580) = 1;
  return FUN_00441740(&DAT_0066f580,s_Activating_Battle_Engine_0062326c);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00406000, ap_00406000));
