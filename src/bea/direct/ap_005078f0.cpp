// auto-ported from 005078f0_FUN_005078f0.c (FUN_005078f0, 444 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xf0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00403650_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00403650_t> FUN_00403650 = {(FUN_00403650_t)0x00403650};
typedef uint32_t (BEA_THISCALL* FUN_004062d0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004062d0_t> FUN_004062d0 = {(FUN_004062d0_t)0x004062d0};
typedef uint32_t (BEA_THISCALL* FUN_0040d320_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d320_t> FUN_0040d320 = {(FUN_0040d320_t)0x0040d320};
typedef uint32_t (BEA_THISCALL* FUN_004f8140_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004f8140_t> FUN_004f8140 = {(FUN_004f8140_t)0x004f8140};

static void BEA_THISCALL ap_005078f0(void * this_, int param_1)
{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;

  alignas(16) uint8_t bea_frame_[0xf0] = {};   // the original stack frame (emulate_frame)
  undefined4 * &local_e4 = *reinterpret_cast<undefined4 * *>(bea_frame_ + 0xf0 - 0xe4);
  undefined4 &local_dc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xf0 - 0xdc);
  undefined4 &uStack_d8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xf0 - 0xd8);
  undefined4 &uStack_d4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xf0 - 0xd4);
  undefined4 &uStack_d0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xf0 - 0xd0);
  undefined4 &uStack_cc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xf0 - 0xcc);
  int &local_c8 = *reinterpret_cast<int *>(bea_frame_ + 0xf0 - 0xc8);
  undefined4 &uStack_c4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xf0 - 0xc4);
  undefined4 (&auStack_c0)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0xf0 - 0xc0);
  undefined1 (&local_90)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0xf0 - 0x90);
  undefined4 (&auStack_60)[12] = *reinterpret_cast<undefined4 (*)[12]>(bea_frame_ + 0xf0 - 0x60);
  undefined1 (&auStack_30)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0xf0 - 0x30);
  local_c8 = *(int *)((int)this_ + 0xa0);
  if (local_c8 != 0) {
    local_e4 = (undefined4 *)((int)this_ + 0x24);
    iVar5 = 0;
    piVar4 = (int *)((int)this_ + 0x18);
    do {
      if (*piVar4 != 0) {
        bea_vcall<uint32_t>(*(int **)((int)this_ + 8), 0x12c, this_,*local_e4,&local_dc,local_90,0);
        puVar1 = (undefined4 *)*piVar4;
        if (puVar1 != (undefined4 *)0x0) {
          if (puVar1[0x12] == 0x461c4000) {
            puVar1[0x20] = local_dc;
            puVar1[0x21] = uStack_d8;
            puVar1[0x22] = uStack_d4;
            puVar1[0x23] = uStack_d0;
            puVar1[0x10] = local_dc;
            puVar1[0x11] = uStack_d8;
            puVar1[0x12] = uStack_d4;
            puVar1[0x13] = uStack_d0;
          }
          else {
            puVar1[0x10] = *puVar1;
            puVar1[0x11] = puVar1[1];
            puVar1[0x12] = puVar1[2];
            puVar1[0x13] = puVar1[3];
          }
          FUN_00403650(bea_arg(puVar1), bea_arg(&local_dc));
        }
        if (param_1 != 0) {
          iVar3 = 0;
          puVar1 = *(undefined4 **)(local_c8 + 0x5c);
          if (puVar1 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            puVar6 = (undefined4 *)*puVar1;
          }
          while (BEA_LOOP_GUARD((puVar6 != (undefined4 *)0x0))) {
            if (iVar3 == iVar5) goto LAB_00507a07;
            puVar1 = (undefined4 *)puVar1[1];
            iVar3 = iVar3 + 1;
            if (puVar1 == (undefined4 *)0x0) {
              puVar6 = (undefined4 *)0x0;
            }
            else {
              puVar6 = (undefined4 *)*puVar1;
            }
          }
          puVar6 = (undefined4 *)0x0;
LAB_00507a07:
          FUN_004f8140(bea_arg(auStack_c0), bea_arg(0), bea_arg(1), bea_arg(0));
          if (puVar6 != (undefined4 *)0x0) {
            uStack_c4 = puVar6[1];
            uStack_cc = *puVar6;
            FUN_004062d0(bea_arg(auStack_60), bea_arg(uStack_cc), bea_arg(uStack_c4), bea_arg(0));
            puVar1 = auStack_60;
            puVar6 = auStack_c0;
            for (iVar3 = 0xc; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
              *puVar6 = *puVar1;
              puVar1 = puVar1 + 1;
              puVar6 = puVar6 + 1;
            }
          }
          puVar1 = (undefined4 *)FUN_0040d320(bea_arg(local_90), bea_arg(auStack_30), bea_arg(auStack_c0));
          iVar3 = *piVar4;
          if (iVar3 != 0) {
            puVar6 = (undefined4 *)(iVar3 + 0x10);
            for (iVar2 = 0xc; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
              *puVar6 = *puVar1;
              puVar1 = puVar1 + 1;
              puVar6 = puVar6 + 1;
            }
            *(undefined4 *)(iVar3 + 0xa0) = 1;
          }
        }
      }
      iVar5 = iVar5 + 1;
      local_e4 = local_e4 + 1;
      piVar4 = piVar4 + 2;
    } while (BEA_LOOP_GUARD((iVar5 < 2)));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x005078f0, ap_005078f0));
