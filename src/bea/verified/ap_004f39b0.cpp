// auto-ported from 004f39b0_FUN_004f39b0.c (FUN_004f39b0, 13 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef char BEA_CDECL;
typedef void (BEA_CDECL* CRenderThing__vslot3_t)(void);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};

static void BEA_THISCALL ap_004f39b0(void * this_)
{
  if (*(int *)((int)this_ + 0x30) != 0) {
    CRenderThing__vslot3();
    return;
  }
  return;
}

// @autoport-registration (verified: 2579 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x004f39b0, ap_004f39b0));
