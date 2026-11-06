// auto-ported from 004e8360_vslot85.c (CNormalSquad::vslot85, 33 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CNormalSquad;
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};

static void BEA_THISCALL ap_004e8360(CNormalSquad * this_, undefined4 param_1)
{
  FUN_00401000(bea_arg(this_ + 0xc4), bea_arg(param_1));
  *(undefined4 *)(this_ + 0xcc) = 1;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e8360, ap_004e8360));
