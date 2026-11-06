// auto-ported from 005492d0_FUN_005492d0.c (FUN_005492d0, 64 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define s____Memory_Deltas____006510b4 ((char*)0x006510b4)
#define s____End_Deltas____0065109c ((char*)0x0065109c)
typedef uint32_t (BEA_CDECL* CRenderThing__vslot3_t)(undefined4, ...);
static const bea_guard<CRenderThing__vslot3_t> CRenderThing__vslot3 = {(CRenderThing__vslot3_t)0x0040c640};
typedef uint32_t (BEA_THISCALL* FUN_004a25c0_t)(uint32_t);
static const bea_guard<FUN_004a25c0_t> FUN_004a25c0 = {(FUN_004a25c0_t)0x004a25c0};

static uint32_t BEA_THISCALL ap_005492d0(void * this_)
{
  CRenderThing__vslot3(s____Memory_Deltas____006510b4);
  FUN_004a25c0(bea_arg((void *)((int)this_ + 0x214)));
  FUN_004a25c0(bea_arg((void *)((int)this_ + 0xae0)));
  FUN_004a25c0(bea_arg((void *)((int)this_ + 0x13ac)));
  return CRenderThing__vslot3(s____End_Deltas____0065109c);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005492d0, ap_005492d0));
