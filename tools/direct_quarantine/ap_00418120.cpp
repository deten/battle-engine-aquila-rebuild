// auto-ported from 00418120_vslot59.c (CBuilding::vslot59, 372 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CBuilding;
typedef char CUnit;
#define DAT_00623bb4 GLOBAL_AT(int, 0x00623bb4)
#define DAT_00623bac GLOBAL_AT(int, 0x00623bac)
#define s_unshutting_00623b74 ((char*)0x00623b74)
#define s_closing_00623b80 ((char*)0x00623b80)
#define s_opening_00623ba4 ((char*)0x00623ba4)
#define s_shutting_00623b88 ((char*)0x00623b88)
#define s_closed_00623aec ((char*)0x00623aec)
#define s_notshut_00623ae4 ((char*)0x00623ae4)
typedef undefined4 (BEA_THISCALL* CUnit__vslot59_t)(uint32_t);
static const bea_guard<CUnit__vslot59_t> CUnit__vslot59 = {(CUnit__vslot59_t)0x004fdeb0};
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};

static undefined4 BEA_THISCALL ap_00418120(CBuilding * this_)
{
  CBuilding *pCVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  
  pCVar1 = this_ + 8;
  iVar2 = bea_vcall<uint32_t>(this_ + 8, 0x58);
  if (iVar2 == -1) {
    return 1;
  }
  pcVar5 = s_opening_00623ba4;
  pvVar3 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
  iVar2 = FUN_004aa630(bea_arg(pvVar3), bea_arg(pcVar5));
  iVar4 = bea_vcall<uint32_t>(pCVar1, 0x58);
  if (iVar4 == iVar2) {
    iVar2 = *(int *)this_;
    uVar6 = 1;
    pvVar3 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24, &DAT_00623bb4,1);
    uVar6 = FUN_004aa630(bea_arg(pvVar3), bea_arg(uVar6));
    bea_vcall<uint32_t>(this_, 0xf0, uVar6);
    *(undefined4 *)(this_ + 0x254) = 2;
    return 0;
  }
  pcVar5 = s_closing_00623b80;
  pvVar3 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
  iVar2 = FUN_004aa630(bea_arg(pvVar3), bea_arg(pcVar5));
  iVar4 = bea_vcall<uint32_t>(pCVar1, 0x58);
  if (iVar4 == iVar2) {
    iVar2 = *(int *)this_;
    uVar6 = 1;
    pvVar3 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24, s_closed_00623aec,1);
    uVar6 = FUN_004aa630(bea_arg(pvVar3), bea_arg(uVar6));
    bea_vcall<uint32_t>(this_, 0xf0, uVar6);
    *(undefined4 *)(this_ + 0x254) = 3;
    return 0;
  }
  pcVar5 = s_unshutting_00623b74;
  pvVar3 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
  iVar2 = FUN_004aa630(bea_arg(pvVar3), bea_arg(pcVar5));
  iVar4 = bea_vcall<uint32_t>(pCVar1, 0x58);
  if (iVar4 == iVar2) {
    iVar2 = *(int *)this_;
    uVar6 = 1;
    pvVar3 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24, s_notshut_00623ae4,1);
    uVar6 = FUN_004aa630(bea_arg(pvVar3), bea_arg(uVar6));
    bea_vcall<uint32_t>(this_, 0xf0, uVar6);
    *(undefined4 *)(this_ + 0x264) = 3;
    return 0;
  }
  pcVar5 = s_shutting_00623b88;
  pvVar3 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
  iVar2 = FUN_004aa630(bea_arg(pvVar3), bea_arg(pcVar5));
  iVar4 = bea_vcall<uint32_t>(pCVar1, 0x58);
  if (iVar4 == iVar2) {
    iVar2 = *(int *)this_;
    uVar6 = 1;
    pvVar3 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24, &DAT_00623bac,1);
    uVar6 = FUN_004aa630(bea_arg(pvVar3), bea_arg(uVar6));
    bea_vcall<uint32_t>(this_, 0xf0, uVar6);
    *(undefined4 *)(this_ + 0x264) = 1;
    return 0;
  }
  uVar6 = CUnit__vslot59(bea_arg((CUnit *)this_));
  return uVar6;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00418120, ap_00418120));
