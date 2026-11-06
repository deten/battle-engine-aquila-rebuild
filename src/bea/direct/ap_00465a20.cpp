// auto-ported from 00465a20_FUN_00465a20.c (FUN_00465a20, 489 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x1c0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00629b00 GLOBAL_AT(int, 0x00629b00)
typedef int16_t* (BEA_CDECL* FUN_004f7bf0_t)(uint32_t);
static const bea_guard<FUN_004f7bf0_t> FUN_004f7bf0 = {(FUN_004f7bf0_t)0x004f7bf0};
typedef undefined4 (BEA_THISCALL* FUN_00540680_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00540680_t> FUN_00540680 = {(FUN_00540680_t)0x00540680};
typedef int (BEA_CDECL* FUN_0055e607_t)(uint32_t);
static const bea_guard<FUN_0055e607_t> FUN_0055e607 = {(FUN_0055e607_t)0x0055e607};
typedef short * (BEA_CDECL* FUN_0055e64e_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055e64e_t> FUN_0055e64e = {(FUN_0055e64e_t)0x0055e64e};
typedef short * (BEA_CDECL* FUN_0055eb00_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055eb00_t> FUN_0055eb00 = {(FUN_0055eb00_t)0x0055eb00};

static int BEA_THISCALL ap_00465a20(void * this_, undefined2 *param_1, int param_2, float param_3)
{
  short *psVar1;
  short sVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;

  alignas(16) uint8_t bea_frame_[0x1c0] = {};   // the original stack frame (emulate_frame)
  int &local_1bc = *reinterpret_cast<int *>(bea_frame_ + 0x1c0 - 0x1bc);
  undefined2 * &local_1b8 = *reinterpret_cast<undefined2 * *>(bea_frame_ + 0x1c0 - 0x1b8);
  int &local_1b4 = *reinterpret_cast<int *>(bea_frame_ + 0x1c0 - 0x1b4);
  short &local_1a8 = *reinterpret_cast<short *>(bea_frame_ + 0x1c0 - 0x1a8);
  short &local_1a6 = *reinterpret_cast<short *>(bea_frame_ + 0x1c0 - 0x1a6);
  short &local_1a4 = *reinterpret_cast<short *>(bea_frame_ + 0x1c0 - 0x1a4);
  short &local_1a2 = *reinterpret_cast<short *>(bea_frame_ + 0x1c0 - 0x1a2);
  void * &local_19c = *reinterpret_cast<void * *>(bea_frame_ + 0x1c0 - 0x19c);
  int (&local_198)[2] = *reinterpret_cast<int (*)[2]>(bea_frame_ + 0x1c0 - 0x198);
  undefined2 (&local_190)[200] = *reinterpret_cast<undefined2 (*)[200]>(bea_frame_ + 0x1c0 - 0x190);
  local_19c = this_;
  iVar3 = FUN_0055e607(bea_arg(param_2));
  iVar10 = 0;
  local_1b4 = 0;
  local_1bc = 0;
  iVar7 = 0x28;
  puVar4 = param_1;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 100;
    iVar7 = iVar7 + -1;
  } while (BEA_LOOP_GUARD((iVar7 != 0)));
  uVar5 = FUN_004f7bf0(bea_arg(&DAT_00629b00));
  FUN_0055e64e(bea_arg(&local_1a8), bea_arg(uVar5));
  iVar7 = 0;
  if (0 < iVar3) {
    local_1b8 = param_1;
    iVar8 = 0;
    do {
      psVar1 = (short *)(param_2 + local_1b4 * 2);
      psVar6 = psVar1;
      for (iVar7 = 0; BEA_LOOP_GUARD((((iVar7 + local_1b4 != iVar3 &&
           (((((*psVar6 != 0x20 || (iVar9 = iVar7 + 1 + local_1b4, iVar3 <= iVar9)) ||
              (sVar2 = *(short *)(param_2 + iVar9 * 2), sVar2 == local_1a8)) ||
             ((sVar2 == local_1a6 || (sVar2 == local_1a4)))) || (sVar2 == local_1a2)))) &&
          (iVar7 < 99)))); iVar7 = iVar7 + 1) {
        psVar6 = psVar6 + 1;
      }
      FUN_0055eb00(bea_arg(local_190), bea_arg(local_1b8), bea_arg(iVar10));
      FUN_0055eb00(bea_arg(local_190 + iVar10), bea_arg(psVar1), bea_arg(iVar7));
      local_190[iVar7 + iVar10] = 0;
      FUN_00540680(bea_arg(local_19c), bea_arg(local_190), bea_arg(local_198));
      iVar9 = iVar8;
      iVar7 = local_1bc;
      puVar4 = local_1b8;
      if (param_3 <= (float)local_198[0]) {
        if (iVar10 != 0) {
          psVar6 = param_1 + iVar8 + iVar10 + -1;
          do {
            if (*psVar6 != 0x20) break;
            iVar10 = iVar10 + -1;
            psVar6 = psVar6 + -1;
          } while (BEA_LOOP_GUARD((iVar10 != 0)));
        }
        iVar7 = iVar8 + iVar10;
        iVar10 = 0;
        param_1[iVar7] = 0;
        iVar9 = iVar8 + 100;
        iVar7 = local_1bc + 1;
        puVar4 = local_1b8 + 100;
        if (3999 < iVar8 + 100) {
          iVar9 = iVar8;
          iVar7 = local_1bc;
          puVar4 = local_1b8;
        }
      }
      local_1b8 = puVar4;
      local_1bc = iVar7;
      if ((*psVar1 != 0x20) || (iVar10 != 0)) {
        iVar7 = iVar9 + iVar10;
        iVar10 = iVar10 + 1;
        param_1[iVar7] = *psVar1;
      }
      local_1b4 = local_1b4 + 1;
      iVar7 = local_1bc;
      iVar8 = iVar9;
    } while (BEA_LOOP_GUARD((local_1b4 < iVar3)));
  }
  param_1[iVar10 + iVar7 * 100] = 0;
  return iVar7 + 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00465a20, ap_00465a20));
