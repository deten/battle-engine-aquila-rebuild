// auto-ported from 00472a90_FUN_00472a90.c (FUN_00472a90, 59 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef int (BEA_CDECL* FUN_0042d310_t)(void);
static const bea_guard<FUN_0042d310_t> FUN_0042d310 = {(FUN_0042d310_t)0x0042d310};
typedef undefined4 (BEA_CDECL* FUN_0042d3b0_t)(void);
static const bea_guard<FUN_0042d3b0_t> FUN_0042d3b0 = {(FUN_0042d3b0_t)0x0042d3b0};

static uint32_t BEA_THISCALL ap_00472a90(void * this_)
{
  int iVar1;
  bool bVar2;
  bVar2 = *(char *)((int)this_ + 0x1c) == '\0';
  *(bool *)((int)this_ + 0x1c) = bVar2;
  if (bVar2) {
    *(undefined4 *)((int)this_ + 0x20) = 0;
    iVar1 = *(int *)((int)this_ + 0x2c);
    while (BEA_LOOP_GUARD(((iVar1 == 0 && (*(int *)((int)this_ + 0x20) < 6))))) {
      iVar1 = *(int *)((int)this_ + 0x20) + 1;
      *(int *)((int)this_ + 0x20) = iVar1;
      iVar1 = *(int *)((int)this_ + iVar1 * 4 + 0x2c);
    }
    *(undefined1 *)((int)this_ + 0x14) = 0;
    return FUN_0042d3b0();
  }
  return FUN_0042d310();
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00472a90, ap_00472a90));
