// auto-ported from 00452b30_vslot1.c (CFEPCommon::vslot1, 40 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CFEPCommon;
#define DAT_0089d91c GLOBAL_AT(int, 0x0089d91c)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_00541650_t)(uint32_t);
static const bea_guard<FUN_00541650_t> FUN_00541650 = {(FUN_00541650_t)0x00541650};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_00452b30(CFEPCommon * this_)
{
  FUN_00541650(bea_arg(&DAT_0089d91c));
  if (*(int *)(this_ + 4) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)(this_ + 4)));
    *(undefined4 *)(this_ + 4) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00452b30, ap_00452b30));
