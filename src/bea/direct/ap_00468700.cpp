// hand-ported from 00468700_vslot7.c (CFrontEnd::vslot7, 38 bytes)
// @hand-fixed 2026-10-29 written from the disassembly: stdcall with one stack argument (ret 4 at 00468723, ECX never read); FUN_00523a70 takes no arguments (Ghidra's eight in_stack values: its body reads no [esp+N] argument and returns with plain ret, 00523b2c); FUN_005158e0 takes none and ignores the ECX = 0x88a0a8 the call site loads (00468712, it loads 0x888a50 itself); FUN_004d2580 is stdcall(0) and sets ECX itself (004d2584); returns 0x4d2580's EAX, which the original leaves at its ret
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef uint32_t (BEA_CDECL* FUN_00523a70_t)(void);
static const bea_guard<FUN_00523a70_t> FUN_00523a70 = {(FUN_00523a70_t)0x00523a70};
typedef uint32_t (BEA_CDECL* FUN_005158e0_t)(void);
static const bea_guard<FUN_005158e0_t> FUN_005158e0 = {(FUN_005158e0_t)0x005158e0};
typedef uint32_t (BEA_STDCALL* FUN_004d2580_t)(uint32_t);
static const bea_guard<FUN_004d2580_t> FUN_004d2580 = {(FUN_004d2580_t)0x004d2580};

static uint32_t BEA_STDCALL ap_00468700(int param_1)
{
  FUN_00523a70();
  if (param_1 != 0) {
    FUN_005158e0();
  }
  return FUN_004d2580(0u);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00468700, ap_00468700));
