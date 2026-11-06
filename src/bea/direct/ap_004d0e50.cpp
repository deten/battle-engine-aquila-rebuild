// auto-ported from 004d0e50_vslot0.c (CPauseMenu::vslot0, 406 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef char CPauseMenu;
#define DAT_008a9ac0 GLOBAL_AT(int, 0x008a9ac0)
#define _DAT_008a9acc GLOBAL_AT(int, 0x008a9acc)
#define DAT_0083d448 GLOBAL_AT(int, 0x0083d448)
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
typedef undefined4 (BEA_THISCALL* FUN_0042e4b0_t)(uint32_t);
static const bea_guard<FUN_0042e4b0_t> FUN_0042e4b0 = {(FUN_0042e4b0_t)0x0042e4b0};
typedef uint32_t (BEA_THISCALL* FUN_0042e6e0_t)(uint32_t);
static const bea_guard<FUN_0042e6e0_t> FUN_0042e6e0 = {(FUN_0042e6e0_t)0x0042e6e0};
typedef uint32_t (BEA_CDECL* FUN_00468770_t)(int, ...);
static const bea_guard<FUN_00468770_t> FUN_00468770 = {(FUN_00468770_t)0x00468770};
typedef undefined4 (BEA_THISCALL* FUN_004705d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004705d0_t> FUN_004705d0 = {(FUN_004705d0_t)0x004705d0};

static undefined4 BEA_THISCALL ap_004d0e50(CPauseMenu * this_, int param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (*(short *)(param_1 + 4) == 2000) {
    iVar2 = DAT_008a9ac0;
    if (*(int *)(this_ + 8) != 0) {
      if ((*(int *)(this_ + 0x38) == 0x7a211) && (_DAT_008a9acc = 6, DAT_008a9ac0 < 4)) {
        DAT_008a9ac0 = 9;
      }
      iVar2 = DAT_008a9ac0;
      if ((*(int *)(this_ + 0x38) == 0xcada9) && (_DAT_008a9acc = 4, DAT_008a9ac0 < 4)) {
        iVar2 = 9;
      }
    }
    DAT_008a9ac0 = iVar2;
    if (*(int *)(this_ + 0x3c) != 0) {
      if (DAT_0083d448 == 0) {
        _DAT_008a9acc = 7;
        if (iVar2 < 4) {
          DAT_008a9ac0 = 9;
        }
      }
      else {
        _DAT_008a9acc = 6;
        if (iVar2 < 4) {
          DAT_008a9ac0 = 9;
          return iVar2;
        }
      }
    }
  }
  else {
    iVar2 = *(short *)(param_1 + 4) + -0x7d1;
    if (iVar2 == 0) {
      iVar2 = FUN_00468770(2);
      iVar1 = *(int *)(this_ + 8);
      if (iVar1 != 0) {
        *(undefined1 *)(iVar1 + 8) = 0;
        iVar6 = 0;
        do {
          iVar3 = FUN_004705d0(bea_arg(&DAT_008a9a98), bea_arg(iVar6));
          iVar2 = 0;
          if (iVar3 != 0) {
            pvVar4 = (void *)FUN_004705d0(bea_arg(&DAT_008a9a98), bea_arg(iVar6));
            iVar2 = FUN_0042e4b0(bea_arg(pvVar4));
            if (iVar2 == iVar1) {
              pvVar4 = (void *)FUN_004705d0(bea_arg(&DAT_008a9a98), bea_arg(iVar6));
              iVar2 = FUN_0042e6e0(bea_arg(pvVar4));
            }
          }
          iVar6 = iVar6 + 1;
        } while (BEA_LOOP_GUARD((iVar6 < 2)));
        if (*(int **)(this_ + 8) != (int *)0x0) {
          iVar2 = bea_vcall<uint32_t>(*(int **)(this_ + 8), 0x4, 1);
          *(undefined4 *)(this_ + 8) = 0;
        }
      }
      iVar1 = *(int *)(this_ + 0x3c);
      if (iVar1 != 0) {
        *(undefined1 *)(iVar1 + 8) = 0;
        iVar6 = 0;
        do {
          iVar3 = FUN_004705d0(bea_arg(&DAT_008a9a98), bea_arg(iVar6));
          iVar2 = 0;
          if (iVar3 != 0) {
            pvVar4 = (void *)FUN_004705d0(bea_arg(&DAT_008a9a98), bea_arg(iVar6));
            iVar2 = FUN_0042e4b0(bea_arg(pvVar4));
            if (iVar2 == iVar1) {
              pvVar4 = (void *)FUN_004705d0(bea_arg(&DAT_008a9a98), bea_arg(iVar6));
              iVar2 = FUN_0042e6e0(bea_arg(pvVar4));
            }
          }
          iVar6 = iVar6 + 1;
        } while (BEA_LOOP_GUARD((iVar6 < 2)));
        if (*(int **)(this_ + 0x3c) != (int *)0x0) {
          uVar5 = bea_vcall<uint32_t>(*(int **)(this_ + 0x3c), 0x4, 1);
          *(undefined4 *)(this_ + 0x3c) = 0;
          return uVar5;
        }
      }
    }
  }
  return iVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d0e50, ap_004d0e50));
