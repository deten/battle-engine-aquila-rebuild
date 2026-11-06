// auto-ported from 0053a280_FUN_0053a280.c (FUN_0053a280, 39 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00889010 GLOBAL_AT(int, 0x00889010)
typedef uint32_t (BEA_THISCALL* FUN_0053a5e0_t)(uint32_t);
static const bea_guard<FUN_0053a5e0_t> FUN_0053a5e0 = {(FUN_0053a5e0_t)0x0053a5e0};

static undefined4 BEA_THISCALL ap_0053a280(void * this_)
{
  undefined4 uVar1;
  
  uVar1 = DAT_00889010;
  DAT_00889010 = 1;
  *(undefined1 *)((int)this_ + 0x24) = 2;
  FUN_0053a5e0(bea_arg(this_));
  DAT_00889010 = uVar1;
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0053a280, ap_0053a280));
