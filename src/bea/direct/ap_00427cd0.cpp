// auto-ported from 00427cd0_vslot117.c (CComponent::vslot117, 115 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComponent;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_Component_cpp_006247f8 ((char*)0x006247f8)
typedef void * (BEA_THISCALL* FUN_00495930_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00495930_t> FUN_00495930 = {(FUN_00495930_t)0x00495930};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_00427cd0(CComponent * this_)
{
  void *this_00;
  undefined4 uVar1;
  CComponent *pCVar2;
  undefined1 *puStack_8;
  undefined4 local_4;
  this_00 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x14), bea_arg(0x1b), bea_arg(s_C__dev_ONSLAUGHT2_Component_cpp_006247f8), bea_arg(0x4d));
  pCVar2 = (CComponent *)0x0;
  if (this_00 != (void *)0x0) {
    if (this_ != (CComponent *)0x0) {
      pCVar2 = this_ + 8;
    }
    uVar1 = FUN_00495930(bea_arg(this_00), bea_arg(pCVar2));
    *(undefined4 *)(this_ + 0x70) = uVar1;
    return;
  }
  *(undefined4 *)(this_ + 0x70) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00427cd0, ap_00427cd0));
