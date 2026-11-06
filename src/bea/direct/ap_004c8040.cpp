// auto-ported from 004c8040_vslot23.c (CPDSimpleSprite::vslot23, 31 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CPDSimpleSprite;
typedef uint32_t (BEA_THISCALL* FUN_004c5d50_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004c5d50_t> FUN_004c5d50 = {(FUN_004c5d50_t)0x004c5d50};
typedef uint32_t (BEA_CDECL* FUN_004c7db0_t)(void);
static const bea_guard<FUN_004c7db0_t> FUN_004c7db0 = {(FUN_004c7db0_t)0x004c7db0};

static void BEA_THISCALL ap_004c8040(CPDSimpleSprite * this_, undefined4 param_1)
{
  FUN_004c7db0();
  if (*(int *)(this_ + 0x6c) != 0) {
    FUN_004c5d50(bea_arg(this_), bea_arg(param_1));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c8040, ap_004c8040));
