// auto-ported from 004fd140_vslot50.c (CUnit::vslot50, 230 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CUnit;
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define DAT_008551c0 GLOBAL_AT(int, 0x008551c0)
#define DAT_00855228 GLOBAL_AT(int, 0x00855228)
#define DAT_008a9b8c GLOBAL_AT(int, 0x008a9b8c)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_THISCALL* FUN_004443f0_t)(uint32_t);
static const bea_guard<FUN_004443f0_t> FUN_004443f0 = {(FUN_004443f0_t)0x004443f0};
typedef uint32_t (BEA_THISCALL* FUN_004e1130_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e1130_t> FUN_004e1130 = {(FUN_004e1130_t)0x004e1130};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};
typedef undefined4 (BEA_CDECL* FUN_00511510_t)(uint32_t);
static const bea_guard<FUN_00511510_t> FUN_00511510 = {(FUN_00511510_t)0x00511510};
typedef uint32_t (BEA_THISCALL* FUN_00533660_t)(uint32_t);
static const bea_guard<FUN_00533660_t> FUN_00533660 = {(FUN_00533660_t)0x00533660};

static undefined4 BEA_THISCALL ap_004fd140(CUnit * this_)
{
  int *piVar1;
  int iVar2;
  
  if (((byte)this_[0x2c] & 4) != 0) {
    return 0;
  }
  FUN_004e1130(bea_arg(&DAT_00896988), bea_arg(this_));
  iVar2 = *(int *)(this_ + 0x164);
  this_[0x2c] = (CUnit)((byte)this_[0x2c] | 4);
  if (iVar2 != 0) {
    if (*(int *)(this_ + 0x138) == 0) {
      *(int *)(&DAT_008551c0 + *(int *)(iVar2 + 0xe0) * 4) =
           *(int *)(&DAT_008551c0 + *(int *)(iVar2 + 0xe0) * 4) + -1;
      iVar2 = FUN_00511510(bea_arg(*(undefined4 *)(this_ + 0x164)));
      iVar2 = -iVar2;
    }
    else {
      if (*(int *)(this_ + 0x138) != 1) goto LAB_004fd1d2;
      *(int *)(&DAT_00855228 + *(int *)(iVar2 + 0xe0) * 4) =
           *(int *)(&DAT_00855228 + *(int *)(iVar2 + 0xe0) * 4) + -1;
      iVar2 = FUN_00511510(bea_arg(*(undefined4 *)(this_ + 0x164)));
    }
    DAT_008a9b8c = DAT_008a9b8c + iVar2;
    this_[0x2d] = (CUnit)((byte)this_[0x2d] | 1);
  }
LAB_004fd1d2:
  if (*(void **)(this_ + 0x178) != (void *)0x0) {
    FUN_004443f0(bea_arg(*(void **)(this_ + 0x178)));
  }
  if (*(void **)(this_ + 0x74) != (void *)0x0) {
    FUN_00533660(bea_arg(*(void **)(this_ + 0x74)));
  }
  FUN_00401000(bea_arg(this_ + 0x144), bea_arg(0));
  while (BEA_LOOP_GUARD(((piVar1 = *(int **)(this_ + 0x18c), piVar1 != (int *)0x0 &&
         (piVar1 = (int *)*piVar1, piVar1 != (int *)0x0))))) {
    FUN_004e5bd0(bea_arg(this_ + 0x18c), bea_arg(piVar1));
    bea_vcall<uint32_t>(piVar1, 0x8);
  }
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004fd140, ap_004fd140));
