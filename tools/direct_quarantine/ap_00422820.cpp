// auto-ported from 00422820_vslot59.c (CCarver::vslot59, 130 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CCarver;
#define s_attack_00624438 ((char*)0x00624438)
#define s_launch_006243f8 ((char*)0x006243f8)
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};

static undefined4 BEA_THISCALL ap_00422820(CCarver * this_)
{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  
  iVar1 = bea_vcall<uint32_t>(this_ + 8, 0x58);
  if (iVar1 != -1) {
    if (*(int *)(this_ + 0x27c) == 1) {
      iVar1 = *(int *)this_;
      uVar3 = 1;
      pvVar2 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24, s_attack_00624438,1);
      uVar3 = FUN_004aa630(bea_arg(pvVar2), bea_arg(uVar3));
      bea_vcall<uint32_t>(this_, 0xf0, uVar3);
      *(undefined4 *)(this_ + 0x27c) = 3;
    }
    else if (*(int *)(this_ + 0x27c) == 2) {
      iVar1 = *(int *)this_;
      uVar3 = 1;
      pvVar2 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24, s_launch_006243f8,1);
      uVar3 = FUN_004aa630(bea_arg(pvVar2), bea_arg(uVar3));
      bea_vcall<uint32_t>(this_, 0xf0, uVar3);
      *(undefined4 *)(this_ + 0x27c) = 0;
      return 0;
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00422820, ap_00422820));
