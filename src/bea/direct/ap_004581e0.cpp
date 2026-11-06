// auto-ported from 004581e0_vslot1.c (CFEPDevelopment::vslot1, 69 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CFEPDevelopment;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_004581e0(CFEPDevelopment * this_)
{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(this_ + 8)) {
    do {
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)(*(int *)(this_ + 4) + iVar1 * 4)));
      iVar1 = iVar1 + 1;
    } while (BEA_LOOP_GUARD((iVar1 < *(int *)(this_ + 8))));
  }
  FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)(this_ + 4)));
  *(undefined4 *)(this_ + 4) = 0;
  *(undefined4 *)(this_ + 8) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004581e0, ap_004581e0));
