// auto-ported from 004a4110_vslot1.c (CMenuMenuItem::vslot1, 232 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char CMenuMenuItem;
typedef uint32_t (BEA_CDECL* FUN_00468770_t)(int, ...);
static const bea_guard<FUN_00468770_t> FUN_00468770 = {(FUN_00468770_t)0x00468770};

static void BEA_THISCALL ap_004a4110(CMenuMenuItem * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  CMenuMenuItem CVar1;
  int iVar2;
  
  switch(param_2) {
  case 0x2a:
  case 0x36:
    FUN_00468770(0);
    iVar2 = *(int *)(this_ + 0x20);
    *(int *)(this_ + 0x20) = iVar2 + -1;
    if (iVar2 + -1 < 0) {
      *(undefined4 *)(this_ + 0x20) = 0;
    }
    this_[0x24] = (CMenuMenuItem)0x1;
    return;
  case 0x2b:
  case 0x37:
    FUN_00468770(0);
    *(int *)(this_ + 0x20) = *(int *)(this_ + 0x20) + 1;
    iVar2 = bea_vcall<uint32_t>(this_, 0x40);
    if (iVar2 <= *(int *)(this_ + 0x20)) {
      iVar2 = bea_vcall<uint32_t>(this_, 0x40);
      *(int *)(this_ + 0x20) = iVar2 + -1;
    }
    this_[0x24] = (CMenuMenuItem)0x1;
    return;
  case 0x2c:
    FUN_00468770(1);
    if ((this_[0x24] == (CMenuMenuItem)0x0) &&
       (iVar2 = bea_vcall<uint32_t>(this_, 0x40), iVar2 < 2)) {
      FUN_00468770(2);
      return;
    }
    CVar1 = this_[0x24];
    this_[0x24] = (CMenuMenuItem)((byte)CVar1 ^ 1);
    if ((((CMenuMenuItem)((byte)CVar1 ^ 1) == (CMenuMenuItem)0x0) &&
        (this_[0x25] == (CMenuMenuItem)0x0)) &&
       (iVar2 = *(int *)(this_ + 0x20), *(int *)(this_ + 0x1c) != iVar2)) {
      *(int *)(this_ + 0x1c) = iVar2;
      bea_vcall<uint32_t>(this_, 0x38, iVar2);
      return;
    }
    break;
  case 0x2e:
    if (this_[0x24] != (CMenuMenuItem)0x0) {
      FUN_00468770(2);
      this_[0x24] = (CMenuMenuItem)0x0;
      *(undefined4 *)(this_ + 0x20) = *(undefined4 *)(this_ + 0x1c);
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a4110, ap_004a4110));
