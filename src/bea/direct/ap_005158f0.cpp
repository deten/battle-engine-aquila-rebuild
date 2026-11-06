// auto-ported from 005158f0_FUN_005158f0.c (FUN_005158f0, 29 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
typedef uint32_t (BEA_THISCALL* FUN_00423720_t)(uint32_t);
static const bea_guard<FUN_00423720_t> FUN_00423720 = {(FUN_00423720_t)0x00423720};
typedef uint32_t (BEA_CDECL* FUN_00441b80_t)(void);
static const bea_guard<FUN_00441b80_t> FUN_00441b80 = {(FUN_00441b80_t)0x00441b80};
typedef uint32_t (BEA_THISCALL* FUN_00512630_t)(uint32_t);
static const bea_guard<FUN_00512630_t> FUN_00512630 = {(FUN_00512630_t)0x00512630};

static uint32_t BEA_THISCALL ap_005158f0(void * this_, undefined4 param_1)
{
  if (*(void **)this_ != (void *)0x0) {
    FUN_00423720(bea_arg(*(void **)this_));
  }
  FUN_00441b80();
  return FUN_00512630(bea_arg(&DAT_00855bb0));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005158f0, ap_005158f0));
