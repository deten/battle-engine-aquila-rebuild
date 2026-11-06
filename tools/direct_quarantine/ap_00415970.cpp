// auto-ported from 00415970_vslot59.c (CBoat::vslot59, 210 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CBoat;
typedef char CUnit;
#define s_deployed_006239ec ((char*)0x006239ec)
#define s_deploying_006239cc ((char*)0x006239cc)
#define s_normal_006239e4 ((char*)0x006239e4)
#define s_undeploying_006239d8 ((char*)0x006239d8)
typedef undefined4 (BEA_THISCALL* CUnit__vslot59_t)(uint32_t);
static const bea_guard<CUnit__vslot59_t> CUnit__vslot59 = {(CUnit__vslot59_t)0x004fdeb0};
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};

static undefined4 BEA_THISCALL ap_00415970(CBoat * this_)
{
  int iVar1;
  void *pvVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  iVar1 = bea_vcall<uint32_t>(this_ + 8, 0x58);
  if (iVar1 == -1) {
    return 1;
  }
  pcVar4 = s_deploying_006239cc;
  pvVar2 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
  iVar1 = FUN_004aa630(bea_arg(pvVar2), bea_arg(pcVar4));
  iVar3 = bea_vcall<uint32_t>(this_ + 8, 0x58);
  if (iVar3 == iVar1) {
    iVar1 = *(int *)this_;
    uVar5 = 1;
    pvVar2 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24, s_deployed_006239ec,1);
    uVar5 = FUN_004aa630(bea_arg(pvVar2), bea_arg(uVar5));
    bea_vcall<uint32_t>(this_, 0xf0, uVar5);
    *(undefined4 *)(this_ + 0x1f0) = 1;
    return 0;
  }
  pcVar4 = s_undeploying_006239d8;
  pvVar2 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
  iVar1 = FUN_004aa630(bea_arg(pvVar2), bea_arg(pcVar4));
  iVar3 = bea_vcall<uint32_t>(this_ + 8, 0x58);
  if (iVar3 == iVar1) {
    iVar1 = *(int *)this_;
    uVar5 = 1;
    pvVar2 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24, s_normal_006239e4,1);
    uVar5 = FUN_004aa630(bea_arg(pvVar2), bea_arg(uVar5));
    bea_vcall<uint32_t>(this_, 0xf0, uVar5);
    *(undefined4 *)(this_ + 0x260) = 0;
    return 0;
  }
  uVar5 = CUnit__vslot59(bea_arg((CUnit *)this_));
  return uVar5;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00415970, ap_00415970));
