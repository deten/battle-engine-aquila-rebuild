// auto-ported from 004d2fe0_vslot0.c (CPlayer::vslot0, 57 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CPlayer;
typedef uint32_t (BEA_THISCALL* FUN_004d28c0_t)(uint32_t);
static const bea_guard<FUN_004d28c0_t> FUN_004d28c0 = {(FUN_004d28c0_t)0x004d28c0};
typedef uint32_t (BEA_THISCALL* FUN_004d29c0_t)(uint32_t);
static const bea_guard<FUN_004d29c0_t> FUN_004d29c0 = {(FUN_004d29c0_t)0x004d29c0};

static void BEA_THISCALL ap_004d2fe0(CPlayer * this_, int param_1)
{
  if (((*(short *)(param_1 + 4) == 4000) && (*(int *)(this_ + 0x1c) != 0)) &&
     (*(int *)(this_ + 0x24) == 0)) {
    if (*(int *)(this_ + 0x28) == 1) {
      FUN_004d28c0(bea_arg(this_));
    }
    if (*(int *)(this_ + 0x28) == 2) {
      FUN_004d29c0(bea_arg(this_));
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d2fe0, ap_004d2fe0));
