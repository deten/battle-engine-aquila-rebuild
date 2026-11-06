// auto-ported from 004dbe90_vslot13.c (CRTCutscene::vslot13, 48 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CRTCutscene;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_004dbe90(CRTCutscene * this_)
{
  if (this_[0x20] != (CRTCutscene)0x0) {
    if (*(int *)(this_ + 0x14) != 0) {
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)(this_ + 0x14)));
      *(undefined4 *)(this_ + 0x14) = 0;
    }
    this_[0x20] = (CRTCutscene)0x0;
    *(undefined4 *)(this_ + 0x24) = 0xffffffff;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dbe90, ap_004dbe90));
