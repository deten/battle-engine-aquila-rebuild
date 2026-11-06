// auto-ported from 004179a0_vslot40.c (CBuilding::vslot40, 127 bytes) by tools/autoport.py
// @hand-fixed 2026-10-29 VC6 pushed slot 0xf0's trailing arguments (1, 0) before evaluating Find(GetAnimSet(), name): slot 0x24 takes none, FUN_004aa630 the name, slot 0xf0 (index, 1, 0) (pattern found by a hand-port helper on 0x446d70)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CBuilding;
typedef char CUnit;
#define DAT_00672fd0 GLOBAL_AT(int, 0x00672fd0)
#define s_shutting_00623b88 ((char*)0x00623b88)
typedef uint32_t (BEA_THISCALL* CUnit__vslot40_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<CUnit__vslot40_t> CUnit__vslot40 = {(CUnit__vslot40_t)0x004f9a90};
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};

static void BEA_THISCALL ap_004179a0(CBuilding * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  int iVar1;
  void *this_00;
  undefined4 uVar2;
  char *pcVar3;
  
  *(undefined4 *)(this_ + 0x268) = DAT_00672fd0;
  if ((*(int *)(this_ + 0x260) != 0) && (*(int *)(this_ + 0x264) == 3)) {
    iVar1 = *(int *)this_;
    pcVar3 = s_shutting_00623b88;
    this_00 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);   // slot 0x24 takes no argument (0x4de070: mov eax,[ecx+0x14]; ret)
    uVar2 = FUN_004aa630(bea_arg(this_00), bea_arg(s_shutting_00623b88));
    bea_vcall<uint32_t>(this_, 0xf0, uVar2, 1, 0)   /* the two pushes before the name are slot 0xf0's */;
    *(undefined4 *)(this_ + 0x264) = 0;
  }
  if ((*(int *)(this_ + 0x178) != 0) || (((byte)this_[0x2c] & 4) == 0)) {
    CUnit__vslot40(bea_arg((CUnit *)this_), bea_arg(param_1), bea_arg(param_2), bea_arg(param_3), bea_arg(param_4));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004179a0, ap_004179a0));
