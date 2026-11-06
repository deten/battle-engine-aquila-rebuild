// auto-ported from 004dbe50_vslot12.c (CRTCutscene::vslot12, 58 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char CRTCutscene;
typedef void * (BEA_CDECL* FUN_004aa6e0_t)(undefined4, undefined4, ...);
static const bea_guard<FUN_004aa6e0_t> FUN_004aa6e0 = {(FUN_004aa6e0_t)0x004aa6e0};

static int BEA_THISCALL ap_004dbe50(CRTCutscene * this_)
{
  uint32_t eax_in = 0;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = (uint)(byte)(this_[0x20]);
  if (this_[0x20] == (CRTCutscene)0x0) {
    iVar1 = *(int *)(this_ + 0x18);
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        uVar2 = FUN_004aa6e0(*(undefined4 *)(*(int *)(this_ + 0x1c) + iVar3 * 4),1);
        *(undefined4 *)(*(int *)(this_ + 0x14) + iVar3 * 4) = uVar2;
        iVar1 = *(int *)(this_ + 0x18);
        iVar3 = iVar3 + 1;
      } while (BEA_LOOP_GUARD((iVar3 < iVar1)));
    }
    this_[0x20] = (CRTCutscene)0x1;
  }
  return iVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dbe50, ap_004dbe50));
