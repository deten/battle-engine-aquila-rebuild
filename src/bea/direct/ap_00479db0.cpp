// auto-ported from 00479db0_FUN_00479db0.c (FUN_00479db0, 319 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
#define s_Gill_M_Left_Arm_0062ca20 ((char*)0x0062ca20)
#define s_Gill_M_Right_Arm_0062ca30 ((char*)0x0062ca30)
typedef uint32_t (BEA_THISCALL* FUN_00428cb0_t)(uint32_t);
static const bea_guard<FUN_00428cb0_t> FUN_00428cb0 = {(FUN_00428cb0_t)0x00428cb0};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};

static void BEA_THISCALL ap_00479db0(void * this_)
{
  byte bVar1;
  undefined4 *puVar2;
  void *this_00;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  bool bVar8;
  
  if (*(float *)((int)this_ + 0x26c) < DAT_00672fd0) {
    uVar3 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
    uVar3 = uVar3 & 0x8000ffff;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xffff0000) + 1;
    }
    puVar2 = *(undefined4 **)((int)this_ + 0x19c);
    if (puVar2 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = (undefined4 *)*puVar2;
    }
    while (BEA_LOOP_GUARD((puVar6 != (undefined4 *)0x0))) {
      this_00 = (void *)*puVar6;
      if (this_00 != (void *)0x0) {
        if ((float)(int)uVar3 * 1.5258789e-05f <= 0.5f) {
          pcVar7 = s_Gill_M_Left_Arm_0062ca20;
          pbVar4 = *(byte **)(*(int *)((int)this_00 + 0x164) + 0xb0);
          do {
            bVar1 = *pbVar4;
            bVar8 = bVar1 < (byte)*pcVar7;
            if (bVar1 != *pcVar7) {
LAB_00479eab:
              iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
              goto joined_r0x00479eb2;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar8 = bVar1 < (byte)pcVar7[1];
            if (bVar1 != pcVar7[1]) goto LAB_00479eab;
            pbVar4 = pbVar4 + 2;
            pcVar7 = pcVar7 + 2;
          } while (BEA_LOOP_GUARD((bVar1 != 0)));
          iVar5 = 0;
        }
        else {
          pcVar7 = s_Gill_M_Right_Arm_0062ca30;
          pbVar4 = *(byte **)(*(int *)((int)this_00 + 0x164) + 0xb0);
          do {
            bVar1 = *pbVar4;
            bVar8 = bVar1 < (byte)*pcVar7;
            if (bVar1 != *pcVar7) {
LAB_00479e6b:
              iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
              goto joined_r0x00479eb2;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar8 = bVar1 < (byte)pcVar7[1];
            if (bVar1 != pcVar7[1]) goto LAB_00479e6b;
            pbVar4 = pbVar4 + 2;
            pcVar7 = pcVar7 + 2;
          } while (BEA_LOOP_GUARD((bVar1 != 0)));
          iVar5 = 0;
        }
joined_r0x00479eb2:
        if (iVar5 == 0) {
          FUN_00428cb0(bea_arg(this_00));
        }
      }
      puVar2 = (undefined4 *)puVar2[1];
      if (puVar2 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = (undefined4 *)*puVar2;
      }
    }
    *(float *)((int)this_ + 0x26c) = DAT_00672fd0 + 2.5f;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00479db0, ap_00479db0));
