// auto-ported from 004d6d10_vslot11.c (CRepairPadAI::vslot11, 236 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CRepairPadAI;
#define DAT_00704200 GLOBAL_AT(int, 0x00704200)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef int (BEA_THISCALL* FUN_00491ea0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00491ea0_t> FUN_00491ea0 = {(FUN_00491ea0_t)0x00491ea0};
typedef int (BEA_THISCALL* FUN_00492020_t)(uint32_t);
static const bea_guard<FUN_00492020_t> FUN_00492020 = {(FUN_00492020_t)0x00492020};
typedef int (BEA_THISCALL* FUN_00492c90_t)(uint32_t);
static const bea_guard<FUN_00492c90_t> FUN_00492c90 = {(FUN_00492c90_t)0x00492c90};
typedef undefined4 (BEA_THISCALL* FUN_004d6e00_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004d6e00_t> FUN_004d6e00 = {(FUN_004d6e00_t)0x004d6e00};

static undefined4 BEA_THISCALL ap_004d6d10(CRepairPadAI * this_)
{
  CRepairPadAI *this_00;
  float fVar1;
  float fVar2;
  void *this_01;
  int iVar3;
  int iVar4;
  
  this_00 = this_ + 0xc;
  FUN_00401000(bea_arg(this_00), bea_arg(0));
  iVar3 = *(int *)(this_ + 8);
  *(undefined4 *)(this_ + 0x18) = 0;
  *(undefined4 *)(this_ + 0x1c) = 0;
  this_01 = (void *)FUN_00491ea0(bea_arg(&DAT_00704200), bea_arg(*(undefined4 *)(iVar3 + 0x1c)), bea_arg(*(undefined4 *)(iVar3 + 0x20)), bea_arg(*(undefined4 *)(iVar3 + 0x24)), bea_arg(*(undefined4 *)(iVar3 + 0x28)), bea_arg(0x41000000));
  while (BEA_LOOP_GUARD((this_01 != (void *)0x0))) {
    iVar3 = FUN_00492c90(bea_arg(this_01));
    if ((((iVar3 != 0) && ((*(byte *)(iVar3 + 0x34) & 8) != 0)) &&
        (iVar4 = FUN_004d6e00(bea_arg(this_), bea_arg(iVar3)), iVar4 != 0)) &&
       (((iVar4 = *(int *)(this_ + 8), fVar1 = *(float *)(iVar4 + 0x1c) - *(float *)(iVar3 + 0x1c),
         fVar2 = *(float *)(iVar4 + 0x20) - *(float *)(iVar3 + 0x20),
         SQRT(fVar1 * fVar1 + fVar2 * fVar2) < 3.0f &&
         (*(float *)(iVar3 + 0x24) < *(float *)(iVar4 + 0x24))) &&
        (*(float *)(iVar4 + 0x24) < *(float *)(iVar3 + 0x24) + 5.0f)))) {
      FUN_00401000(bea_arg(this_00), bea_arg(iVar3));
      *(undefined4 *)(this_ + 0x1c) = 1;
      *(undefined4 *)(this_ + 0x18) = 1;
    }
    this_01 = (void *)FUN_00492020(bea_arg(&DAT_00704200));
  }
  *(undefined4 *)(this_ + 0x10) = 0;
  return *(undefined4 *)this_00;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d6d10, ap_004d6d10));
