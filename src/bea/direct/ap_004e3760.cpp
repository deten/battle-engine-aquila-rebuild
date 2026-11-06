// auto-ported from 004e3760_vslot23.c (CSpawnerThing::vslot23, 64 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CSpawnerThing;
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};

static void BEA_THISCALL ap_004e3760(CSpawnerThing * this_)
{
  *(undefined4 *)(this_ + 0xa4) = 1;
  if (0 < *(int *)(this_ + 0x9c)) {
    *(undefined4 *)(this_ + 0x9c) = 0;
    *(int *)(this_ + 0x98) = *(int *)(this_ + 0x98) + 1;
    if (*(int *)(this_ + 0x7c) != 0) {
      *(undefined4 *)(*(int *)(this_ + 0x7c) + 0x80) = 0;
      FUN_00401000(bea_arg(this_ + 0x7c), bea_arg(0));
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e3760, ap_004e3760));
