// auto-ported from 004289b0_vslot59.c (CComponent::vslot59, 405 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComponent;
typedef char CUnit;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define s_Normal_006247cc ((char*)0x006247cc)
#define s_normal_006239e4 ((char*)0x006239e4)
#define s_Deactivated_006248c8 ((char*)0x006248c8)
#define s_retract_006248e0 ((char*)0x006248e0)
#define s_Activated_006247d4 ((char*)0x006247d4)
#define s_Activate_00623e14 ((char*)0x00623e14)
#define PTR_DAT_006248e8 GLOBAL_AT(void*, 0x006248e8)
typedef int (BEA_THISCALL* CUnit__vslot22_t)(uint32_t);
static const bea_guard<CUnit__vslot22_t> CUnit__vslot22 = {(CUnit__vslot22_t)0x004fd6a0};
typedef undefined4 (BEA_THISCALL* CUnit__vslot23_t)(uint32_t);
static const bea_guard<CUnit__vslot23_t> CUnit__vslot23 = {(CUnit__vslot23_t)0x004fd700};
typedef undefined4 (BEA_THISCALL* CUnit__vslot59_t)(uint32_t);
static const bea_guard<CUnit__vslot59_t> CUnit__vslot59 = {(CUnit__vslot59_t)0x004fdeb0};
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};

static undefined4 BEA_THISCALL ap_004289b0(CComponent * this_)
{
  CComponent *pCVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined4 uVar6;
  char *pcVar7;
  
  pCVar1 = this_ + 8;
  iVar2 = bea_vcall<uint32_t>(this_ + 8, 0x58);
  if (iVar2 == -1) {
    return 1;
  }
  ppuVar5 = &PTR_DAT_006248e8;
  pvVar3 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
  iVar2 = FUN_004aa630(bea_arg(pvVar3), bea_arg(ppuVar5));
  iVar4 = bea_vcall<uint32_t>(pCVar1, 0x58);
  if (iVar4 == iVar2) {
    iVar2 = *(int *)this_;
    uVar6 = 0;
    pvVar3 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24, s_retract_006248e0,1);
    uVar6 = FUN_004aa630(bea_arg(pvVar3), bea_arg(uVar6));
    bea_vcall<uint32_t>(this_, 0xf0, uVar6);
    *(undefined4 *)(this_ + 700) = 0;
    return 0;
  }
  pcVar7 = s_retract_006248e0;
  pvVar3 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
  iVar2 = FUN_004aa630(bea_arg(pvVar3), bea_arg(pcVar7));
  iVar4 = bea_vcall<uint32_t>(pCVar1, 0x58);
  if (iVar4 == iVar2) {
    iVar2 = *(int *)this_;
    uVar6 = 1;
    pvVar3 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24, s_normal_006239e4,1);
    uVar6 = FUN_004aa630(bea_arg(pvVar3), bea_arg(uVar6));
    bea_vcall<uint32_t>(this_, 0xf0, uVar6);
    return 0;
  }
  pcVar7 = s_Activate_00623e14;
  pvVar3 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
  iVar2 = FUN_004aa630(bea_arg(pvVar3), bea_arg(pcVar7));
  iVar4 = bea_vcall<uint32_t>(pCVar1, 0x58);
  if (iVar4 == iVar2) {
    iVar2 = *(int *)this_;
    uVar6 = 1;
    pvVar3 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24, s_Activated_006247d4,1);
    uVar6 = FUN_004aa630(bea_arg(pvVar3), bea_arg(uVar6));
    bea_vcall<uint32_t>(this_, 0xf0, uVar6);
    *(undefined4 *)(this_ + 0x264) = 0;
    *(float *)(this_ + 0x268) = DAT_00672fd0;
    CUnit__vslot22(bea_arg((CUnit *)this_));
    return 0;
  }
  pcVar7 = s_Deactivated_006248c8;
  pvVar3 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
  iVar2 = FUN_004aa630(bea_arg(pvVar3), bea_arg(pcVar7));
  iVar4 = bea_vcall<uint32_t>(pCVar1, 0x58);
  if (iVar4 == iVar2) {
    iVar2 = *(int *)this_;
    uVar6 = 1;
    pvVar3 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24, s_Normal_006247cc,1);
    uVar6 = FUN_004aa630(bea_arg(pvVar3), bea_arg(uVar6));
    bea_vcall<uint32_t>(this_, 0xf0, uVar6);
    *(undefined4 *)(this_ + 0x264) = 1;
    *(float *)(this_ + 0x268) = DAT_00672fd0 + 2.0f;
    CUnit__vslot23(bea_arg((CUnit *)this_));
    return 0;
  }
  uVar6 = CUnit__vslot59(bea_arg((CUnit *)this_));
  return uVar6;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004289b0, ap_004289b0));
