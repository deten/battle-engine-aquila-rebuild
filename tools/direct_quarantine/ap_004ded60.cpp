// auto-ported from 004ded60_vslot59.c (CSentinel::vslot59, 91 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CSentinel;
typedef char CUnit;
#define s_activate_00632260 ((char*)0x00632260)
#define s_inactive_0063223c ((char*)0x0063223c)
typedef int (BEA_THISCALL* CUnit__vslot22_t)(uint32_t);
static const bea_guard<CUnit__vslot22_t> CUnit__vslot22 = {(CUnit__vslot22_t)0x004fd6a0};
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};

static undefined4 BEA_THISCALL ap_004ded60(CSentinel * this_)
{
  int iVar1;
  void *pvVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  iVar1 = bea_vcall<uint32_t>(this_ + 8, 0x58);
  if (iVar1 != -1) {
    pcVar4 = s_activate_00632260;
    pvVar2 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
    iVar3 = FUN_004aa630(bea_arg(pvVar2), bea_arg(pcVar4));
    if (iVar1 == iVar3) {
      iVar1 = *(int *)this_;
      uVar5 = 1;
      pvVar2 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24, s_inactive_0063223c,1);
      uVar5 = FUN_004aa630(bea_arg(pvVar2), bea_arg(uVar5));
      bea_vcall<uint32_t>(this_, 0xf0, uVar5);
      CUnit__vslot22(bea_arg((CUnit *)this_));
    }
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ded60, ap_004ded60));
