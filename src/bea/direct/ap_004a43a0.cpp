// auto-ported from 004a43a0_vslot1.c (CScaleMenuItem::vslot1, 174 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char CScaleMenuItem;
typedef uint32_t (BEA_CDECL* FUN_00468770_t)(int, ...);
static const bea_guard<FUN_00468770_t> FUN_00468770 = {(FUN_00468770_t)0x00468770};

static void BEA_THISCALL ap_004a43a0(CScaleMenuItem * this_, undefined4 param_1, int param_2, undefined4 param_3)
{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if (param_2 == 0x2c) {
    if (*(int **)(this_ + 0x34) != (int *)0x0) {
      bea_vcall<uint32_t>(*(int **)(this_ + 0x34), 0x18, this_);
    }
    *(undefined4 *)(this_ + 0x28) = *(undefined4 *)(this_ + 0x24);
  }
  else if (param_2 == 0x36) {
    iVar1 = *(int *)(this_ + 0x24);
    *(int *)(this_ + 0x24) = iVar1 + -1;
    if (iVar1 + -1 < 0) {
      *(undefined4 *)(this_ + 0x24) = 0;
      bVar2 = true;
    }
    else {
      bea_vcall<uint32_t>(this_, 0x38);
      FUN_00468770(0);
      bVar2 = true;
    }
  }
  else if (param_2 == 0x37) {
    iVar1 = *(int *)(this_ + 0x24);
    *(int *)(this_ + 0x24) = iVar1 + 1;
    if (*(int *)(this_ + 0x2c) < iVar1 + 1) {
      *(int *)(this_ + 0x24) = *(int *)(this_ + 0x2c);
      bVar2 = true;
    }
    else {
      bea_vcall<uint32_t>(this_, 0x38);
      FUN_00468770(0);
      bVar2 = true;
    }
  }
  if ((this_[0x30] != (CScaleMenuItem)0x0) && (bVar2)) {
    if (*(int **)(this_ + 0x34) != (int *)0x0) {
      bea_vcall<uint32_t>(*(int **)(this_ + 0x34), 0x18, this_);
    }
    *(undefined4 *)(this_ + 0x28) = *(undefined4 *)(this_ + 0x24);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a43a0, ap_004a43a0));
