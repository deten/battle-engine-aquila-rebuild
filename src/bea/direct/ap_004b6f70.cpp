// auto-ported from 004b6f70_FUN_004b6f70.c (FUN_004b6f70, 489 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_00629b00 GLOBAL_AT(int, 0x00629b00)
typedef int16_t* (BEA_CDECL* FUN_004f7bf0_t)(uint32_t);
static const bea_guard<FUN_004f7bf0_t> FUN_004f7bf0 = {(FUN_004f7bf0_t)0x004f7bf0};
typedef int (BEA_CDECL* FUN_0055e607_t)(uint32_t);
static const bea_guard<FUN_0055e607_t> FUN_0055e607 = {(FUN_0055e607_t)0x0055e607};
typedef short * (BEA_CDECL* FUN_0055e64e_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055e64e_t> FUN_0055e64e = {(FUN_0055e64e_t)0x0055e64e};

static undefined2 * BEA_THISCALL ap_004b6f70(void * this_, undefined2 *param_1, int param_2, int param_3)
{
  short sVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined2 *puVar10;
  int iVar11;
  int iVar12;
  short *psVar13;
  int iVar14;
  int iVar15;

  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)
  int &local_28 = *reinterpret_cast<int *>(bea_frame_ + 0x30 - 0x28);
  int &local_24 = *reinterpret_cast<int *>(bea_frame_ + 0x30 - 0x24);
  short &local_c = *reinterpret_cast<short *>(bea_frame_ + 0x30 - 0xc);
  short &local_a = *reinterpret_cast<short *>(bea_frame_ + 0x30 - 0xa);
  short &local_8 = *reinterpret_cast<short *>(bea_frame_ + 0x30 - 0x8);
  short &local_6 = *reinterpret_cast<short *>(bea_frame_ + 0x30 - 0x6);
  iVar2 = *(int *)((int)this_ + 0xc);
  iVar3 = *(int *)((int)this_ + 0x1c);
  iVar6 = FUN_0055e607(bea_arg(iVar2));
  iVar14 = 0;
  iVar6 = iVar6 + *(int *)((int)this_ + 0x34);
  iVar15 = 0;
  local_24 = 0;
  uVar7 = FUN_004f7bf0(bea_arg(&DAT_00629b00));
  FUN_0055e64e(bea_arg(&local_c), bea_arg(uVar7));
  iVar11 = 8;
  puVar8 = param_1;
  do {
    *(undefined1 *)puVar8 = 0;
    *(undefined1 *)((int)puVar8 + 1) = 0;
    puVar8 = puVar8 + 0x56;
    iVar11 = iVar11 + -1;
  } while (BEA_LOOP_GUARD((iVar11 != 0)));
  iVar11 = iVar3 + *(int *)((int)this_ + 0x34);
  if (0 < iVar11) {
    local_28 = 0;
    do {
      iVar9 = 0;
      if (iVar15 < iVar3) {
        bVar4 = false;
        psVar13 = (short *)(iVar2 + iVar15 * 2);
        do {
          if (iVar6 <= iVar9 + iVar15) {
            bVar4 = true;
          }
          if (((*psVar13 == 0x20) &&
              ((iVar12 = iVar9 + 1 + iVar15, iVar6 <= iVar12 ||
               ((((sVar1 = *(short *)(iVar2 + iVar12 * 2), sVar1 != local_c && (sVar1 != local_a))
                 && (sVar1 != local_8)) && (sVar1 != local_6)))))) || (bVar4)) goto LAB_004b7071;
          iVar9 = iVar9 + 1;
          psVar13 = psVar13 + 1;
        } while (BEA_LOOP_GUARD(((*(int *)((int)this_ + 0x34) == 0) || (iVar9 + iVar15 < iVar3))));
        iVar9 = iVar9 + *(int *)((int)this_ + 0x34);
      }
      else {
        iVar9 = (iVar3 - iVar15) + 5;
      }
LAB_004b7071:
      iVar12 = local_28;
      iVar5 = local_24;
      if (param_2 <= iVar9 + iVar14) {
        iVar9 = local_28 + iVar14;
        iVar14 = 0;
        param_1[iVar9] = 0;
        iVar12 = local_28 + 0x56;
        iVar5 = local_24 + 1;
        if (param_3 <= local_24 + 1) {
          iVar9 = 7;
          puVar8 = param_1;
          do {
            iVar12 = 0x55;
            puVar10 = puVar8;
            do {
              *puVar10 = puVar10[0x56];
              puVar10 = puVar10 + 1;
              iVar12 = iVar12 + -1;
            } while (BEA_LOOP_GUARD((iVar12 != 0)));
            puVar8 = puVar8 + 0x56;
            iVar9 = iVar9 + -1;
            iVar12 = local_28;
            iVar5 = local_24;
          } while (BEA_LOOP_GUARD((iVar9 != 0)));
        }
      }
      local_24 = iVar5;
      local_28 = iVar12;
      sVar1 = *(short *)(iVar2 + iVar15 * 2);
      if ((sVar1 != 0x20) || (iVar14 != 0)) {
        if (iVar15 < iVar3) {
          iVar9 = local_28 + iVar14;
          iVar14 = iVar14 + 1;
          param_1[iVar9] = sVar1;
        }
        else {
          iVar9 = local_28 + iVar14;
          iVar14 = iVar14 + 1;
          param_1[iVar9] = 0x2e;
        }
      }
      iVar15 = iVar15 + 1;
    } while (BEA_LOOP_GUARD((iVar15 < iVar11)));
  }
  param_1[iVar14 + local_24 * 0x56] = 0;
  return (undefined2 *)(param_1);
  return (undefined2 *)(param_1);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b6f70, ap_004b6f70));
