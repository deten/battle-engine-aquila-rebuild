// auto-ported from 004c2220_vslot7.c (CPDSelector::vslot7, 117 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char CPDSelector;
typedef uint32_t (BEA_STDCALL* FUN_004f5c90_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f5c90_t> FUN_004f5c90 = {(FUN_004f5c90_t)0x004f5c90};
typedef uint32_t (BEA_STDCALL* FUN_004f5d50_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f5d50_t> FUN_004f5d50 = {(FUN_004f5d50_t)0x004f5d50};

static uint32_t BEA_THISCALL ap_004c2220(CPDSelector * this_, undefined4 param_1)
{
  FUN_004f5d50(bea_arg(0x29), bea_arg(*(undefined4 *)(this_ + 0x5c)));
  FUN_004f5d50(bea_arg(0x2a), bea_arg(*(undefined4 *)(this_ + 0x60)));
  FUN_004f5d50(bea_arg(0x2b), bea_arg(*(undefined4 *)(this_ + 100)));
  FUN_004f5d50(bea_arg(0x2c), bea_arg(*(undefined4 *)(this_ + 0x68)));
  FUN_004f5c90(bea_arg(0x2d), bea_arg(*(undefined4 *)(this_ + 0x6c)));
  FUN_004f5c90(bea_arg(0x2e), bea_arg(*(undefined4 *)(this_ + 0x70)));
  FUN_004f5c90(bea_arg(0x2f), bea_arg(*(undefined4 *)(this_ + 0x74)));
  return FUN_004f5c90(bea_arg(0x30), bea_arg(*(undefined4 *)(this_ + 0x78)));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004c2220, ap_004c2220));
