// auto-ported from 005490e0_FUN_005490e0.c (FUN_005490e0, 195 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef uint32_t (BEA_STDCALL* FUN_0042d080_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042d080_t> FUN_0042d080 = {(FUN_0042d080_t)0x0042d080};
typedef undefined4 * (BEA_THISCALL* FUN_004a1810_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004a1810_t> FUN_004a1810 = {(FUN_004a1810_t)0x004a1810};

static int BEA_THISCALL ap_005490e0(void * this_, undefined4 param_1, int param_2, undefined4 param_3, undefined4 param_4)
{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_004a1810(bea_arg(*(void **)((int)this_ + param_2 * 4 + 0x10)), bea_arg(param_1), bea_arg(param_2), bea_arg(param_3), bea_arg(param_4));
  if (iVar2 == 0) {
    iVar1 = *(int *)((int)this_ + param_2 * 4 + 0x10);
    if (iVar1 == (int)this_ + 0x214) {
      FUN_0042d080(bea_arg(0), bea_arg(0xcd), bea_arg(0xffffffff));
      return 0;
    }
    if (iVar1 == (int)this_ + 0xae0) {
      FUN_0042d080(bea_arg(0), bea_arg(0xce), bea_arg(0xffffffff));
      return 0;
    }
    if (iVar1 == (int)this_ + 0x13ac) {
      FUN_0042d080(bea_arg(0), bea_arg(0xcf), bea_arg(0xffffffff));
      return 0;
    }
    if (iVar1 == (int)this_ + 0x1c78) {
      FUN_0042d080(bea_arg(0), bea_arg(0xd0), bea_arg(0xffffffff));
    }
  }
  return iVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005490e0, ap_005490e0));
