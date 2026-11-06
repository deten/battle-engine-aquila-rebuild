// auto-ported from 00457ee0_vslot11.c (CFEPDemoMain::vslot11, 56 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CFEPDemoMain;
typedef char CFEPMain;
#define _DAT_008a956c GLOBAL_AT(int, 0x008a956c)
#define DAT_0089d758 GLOBAL_AT(int, 0x0089d758)
typedef uint32_t (BEA_THISCALL* CFEPMain__vslot11_t)(uint32_t);
static const bea_guard<CFEPMain__vslot11_t> CFEPMain__vslot11 = {(CFEPMain__vslot11_t)0x004623e0};
typedef uint32_t (BEA_THISCALL* FUN_00466ae0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00466ae0_t> FUN_00466ae0 = {(FUN_00466ae0_t)0x00466ae0};

static void BEA_THISCALL ap_00457ee0(CFEPDemoMain * this_)
{
  int iVar1;
  
  iVar1 = *(int *)(this_ + 8);
  if (iVar1 == 0) {
    _DAT_008a956c = 0xc9;
    return;
  }
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      CFEPMain__vslot11(bea_arg((CFEPMain *)this_));
      return;
    }
    _DAT_008a956c = 0xffffffff;
    return;
  }
  FUN_00466ae0(bea_arg(&DAT_0089d758), bea_arg(0x11), bea_arg(0x46));
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00457ee0, ap_00457ee0));
