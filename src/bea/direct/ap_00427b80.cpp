// auto-ported from 00427b80_vslot9.c (CComponent::vslot9, 324 bytes) by tools/autoport.py
// @hand-fixed 2026-10-29 both branches push 1, 1 (0x427c34) before the name: slot 0x24 takes no argument, FUN_004aa630 the name (Normal / Activated), slot 0xf0 (index, 1, 1) (pattern found by a hand-port helper on 0x446d70)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CComponent;
typedef char CUnit;
#define s_Normal_006247cc ((char*)0x006247cc)
#define s_Activated_006247d4 ((char*)0x006247d4)
#define s_Thunderhead_Main_Gun_006247e0 ((char*)0x006247e0)
typedef uint32_t (BEA_THISCALL* CUnit__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CUnit__vslot9_t> CUnit__vslot9 = {(CUnit__vslot9_t)0x004f86d0};
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef undefined4 (BEA_THISCALL* FUN_004aa630_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa630_t> FUN_004aa630 = {(FUN_004aa630_t)0x004aa630};

static void BEA_THISCALL ap_00427b80(CComponent * this_, int param_1)
{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  byte *pbVar6;
  bool bVar7;
  
  FUN_00401000(bea_arg(this_ + 0x26c), bea_arg(0));
  *(undefined4 *)(this_ + 0x270) = 0;
  *(undefined4 *)(this_ + 0x250) = 0;
  *(undefined4 *)(this_ + 0x254) = 0;
  bea_vcall<uint32_t>(this_, 0x1d4);
  *(undefined4 *)(param_1 + 0x7c) = 2;
  *(undefined4 *)(param_1 + 0x80) = 2;
  *(undefined4 *)(param_1 + 0x70) = 0x40100020;
  if (*(int *)(param_1 + 0x3bc) != 0) {
    pbVar6 = *(byte **)(*(int *)(param_1 + 0x3bc) + 0xb0);
    pcVar2 = s_Thunderhead_Main_Gun_006247e0;
    do {
      bVar1 = *pcVar2;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_00427c02:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00427c07;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar2[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_00427c02;
      pcVar2 = pcVar2 + 2;
      pbVar6 = pbVar6 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar3 = 0;
LAB_00427c07:
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x7c) = 0;
      *(undefined4 *)(param_1 + 0x80) = 2;
      *(undefined4 *)(param_1 + 0x78) = 1;
    }
  }
  CUnit__vslot9(bea_arg((CUnit *)this_), bea_arg(param_1));
  iVar3 = *(int *)this_;
  if (*(int *)(this_ + 0x214) == 0) {
    pcVar2 = s_Normal_006247cc;
    pvVar4 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
    uVar5 = FUN_004aa630(bea_arg(pvVar4), bea_arg(pcVar2));
    bea_vcall<uint32_t>(this_, 0xf0, uVar5, 1, 1);
    *(undefined4 *)(this_ + 0x264) = 1;
  }
  else {
    pcVar2 = s_Activated_006247d4;
    pvVar4 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
    uVar5 = FUN_004aa630(bea_arg(pvVar4), bea_arg(pcVar2));
    bea_vcall<uint32_t>(this_, 0xf0, uVar5, 1, 1);
    *(undefined4 *)(this_ + 0x264) = 0;
  }
  bea_vcall<uint32_t>(this_, 0x1dc, param_1);
  bea_vcall<uint32_t>(this_, 0x1d8);
  *(undefined4 *)(this_ + 0x278) = 99999;
  *(undefined4 *)(this_ + 0xf4) = 0;
  *(undefined4 *)(this_ + 0x268) = 0;
  *(undefined4 *)(this_ + 0x260) = 0;
  *(undefined4 *)(this_ + 0x274) = 0;
  *(undefined4 *)(this_ + 700) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00427b80, ap_00427b80));
