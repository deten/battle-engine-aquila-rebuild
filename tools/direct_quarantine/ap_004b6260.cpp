// auto-ported from 004b6260_FUN_004b6260.c (FUN_004b6260, 230 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x60: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (5 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef undefined4 (BEA_THISCALL* FUN_004b4cd0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004b4cd0_t> FUN_004b4cd0 = {(FUN_004b4cd0_t)0x004b4cd0};
typedef uint32_t (BEA_CDECL* FUN_004b5ad0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004b5ad0_t> FUN_004b5ad0 = {(FUN_004b5ad0_t)0x004b5ad0};
typedef uint32_t (BEA_CDECL* FUN_004b5e80_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004b5e80_t> FUN_004b5e80 = {(FUN_004b5e80_t)0x004b5e80};

static void BEA_CDECL ap_004b6260(undefined4 *param_1, undefined4 *param_2, int param_3, undefined4 param_4, int param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
{
  alignas(16) uint8_t bea_frame_[0x60] = {};   // the original stack frame (emulate_frame)

  undefined4 &local_14 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x14);
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x18);
  undefined4 &local_1c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x1c);
  undefined4 &local_20 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x20);
  undefined4 &local_24 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x24);
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 &local_54 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x54);
  undefined4 &local_50 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x50);
  undefined4 &local_4c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x4c);
  undefined4 &local_48 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x48);
  undefined4 &local_44 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x44);
  undefined4 &local_40 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x40);
  undefined4 &local_3c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x3c);
  undefined4 &local_38 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x38);
  undefined4 &local_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x34);
  undefined4 &local_30 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x30);
  undefined4 &local_2c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x2c);
  undefined4 &local_28 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x28);
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  while(BEA_LOOP_GUARD(( true ))) {
    if (param_3 == 0) {
      return;
    }
    if (0 < *(int *)(param_3 + 0x15c)) {
      if ((param_5 == 0) || (*(void **)(param_5 + 0xc) == (void *)0x0)) {
        uVar6 = **(undefined4 **)(param_3 + 0x160);
        puVar3 = param_2;
        puVar4 = (undefined4 *)&local_54;
        uVar8 = param_4;
        iVar7 = param_5;
        uVar5 = param_6;
        uVar9 = param_8;
        for (iVar2 = 0xc; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        FUN_004b5ad0(bea_arg(*param_1), bea_arg(param_1[1]), bea_arg(param_1[2]), bea_arg(param_1[3]), bea_arg(local_54), bea_arg(local_50), bea_arg(local_4c), bea_arg(local_48), bea_arg(local_44), bea_arg(local_40), bea_arg(local_3c), bea_arg(local_38), bea_arg(local_34), bea_arg(local_30), bea_arg(local_2c), bea_arg(local_28), bea_arg(uVar6), bea_arg(uVar8), bea_arg(iVar7), bea_arg(uVar5), bea_arg(uVar9));
      }
      else {
        uVar5 = 0x4b629b;
        FUN_004b4cd0(bea_arg(*(void **)(param_5 + 0xc)), bea_arg(param_3), bea_arg(param_4), bea_arg(param_5), bea_arg(1));
        puVar3 = param_2;
        puVar4 = (undefined4 *)&local_50;
        iVar7 = param_3;
        uVar6 = param_4;
        iVar2 = param_5;
        uVar8 = param_8;
        for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        local_54 = param_1[3];
        FUN_004b5e80(bea_arg(*param_1), bea_arg(param_1[1]), bea_arg(param_1[2]), bea_arg(local_54), bea_arg(local_50), bea_arg(local_4c), bea_arg(local_48), bea_arg(local_44), bea_arg(local_40), bea_arg(local_3c), bea_arg(local_38), bea_arg(local_34), bea_arg(local_30), bea_arg(local_2c), bea_arg(local_28), bea_arg(local_24), bea_arg(local_20), bea_arg(local_1c), bea_arg(local_18), bea_arg(local_14));
      }
    }
    if ((char)param_7 == '\0') break;
    param_3 = *(int *)(param_3 + 8);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b6260, ap_004b6260));
