// auto-ported from 00456850_vslot1.c (CFEPDebriefing::vslot1, 73 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CFEPDebriefing;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef uint32_t (BEA_STDCALL* FUN_0055db0a_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055db0a_t> FUN_0055db0a = {(FUN_0055db0a_t)0x0055db0a};

static void BEA_THISCALL ap_00456850(CFEPDebriefing * this_)
{
  int iVar1;
  
  iVar1 = *(int *)(this_ + 0x20);
  if (iVar1 != 0) {
    FUN_0055db0a(bea_arg(iVar1), bea_arg(8), bea_arg(*(undefined4 *)(iVar1 + -4)), bea_arg(((void*)0x004cb050)));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(iVar1 + -4));
  }
  *(undefined4 *)(this_ + 0x20) = 0;
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)(this_ + 0x24)));
  *(undefined4 *)(this_ + 0x24) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00456850, ap_00456850));
