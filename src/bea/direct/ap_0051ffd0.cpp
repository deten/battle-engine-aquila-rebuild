// auto-ported from 0051ffd0_vslot1.c (CFEPVirtualKeyboard::vslot1, 25 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00889008 GLOBAL_AT(int, 0x00889008)
#define DAT_0051feb0 GLOBAL_AT(int, 0x0051feb0)
#define DAT_00855bb0 GLOBAL_AT(int, 0x00855bb0)
typedef uint32_t (BEA_THISCALL* FUN_005135f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_005135f0_t> FUN_005135f0 = {(FUN_005135f0_t)0x005135f0};

static void BEA_CDECL ap_0051ffd0(void)
{
  if (DAT_00889008 == &DAT_0051feb0) {
    FUN_005135f0(bea_arg(&DAT_00855bb0), bea_arg(0));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0051ffd0, ap_0051ffd0));
