// auto-ported from 004bc6d0_FUN_004bc6d0.c (FUN_004bc6d0, 506 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_THISCALL ap_004bc6d0(void * this_, uint *param_1, int *param_2)
{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar1 = *param_1;
  iVar7 = 0;
  uVar4 = uVar1;
  uVar6 = uVar1;
  uVar5 = uVar1;
  do {
    for (; BEA_LOOP_GUARD(((int)uVar4 <= (int)uVar5)); uVar4 = uVar4 + 1) {
      if ((-1 < (int)uVar4) && ((int)uVar4 < 0x100)) {
        iVar2 = *param_2;
        if ((-1 < iVar2 - iVar7) && (iVar2 - iVar7 < 0x100)) {
          uVar3 = uVar4 & 0x80000007;
          if ((int)uVar3 < 0) {
            uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
          }
          if ((*(byte *)((((int)uVar4 >> 3) * 0x100 - iVar7) + iVar2 + (int)this_) &
              (byte)(1 << ((byte)uVar3 & 0x1f))) != 0) {
            *param_1 = uVar4;
            *param_2 = *param_2 - iVar7;
            return 1;
          }
        }
        if ((-1 < iVar2 + iVar7) && (iVar2 + iVar7 < 0x100)) {
          uVar3 = uVar4 & 0x80000007;
          if ((int)uVar3 < 0) {
            uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
          }
          if ((*(byte *)(((int)uVar4 >> 3) * 0x100 + iVar2 + iVar7 + (int)this_) &
              (byte)(1 << ((byte)uVar3 & 0x1f))) != 0) {
            *param_1 = uVar4;
            *param_2 = *param_2 + iVar7;
            return 1;
          }
        }
      }
    }
    for (iVar2 = *param_2 - iVar7; BEA_LOOP_GUARD((iVar2 <= *param_2 + iVar7)); iVar2 = iVar2 + 1) {
      if ((-1 < iVar2) && (iVar2 < 0x100)) {
        if ((-1 < (int)uVar6) && ((int)uVar6 < 0x100)) {
          uVar4 = uVar6 & 0x80000007;
          if ((int)uVar4 < 0) {
            uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
          }
          if ((*(byte *)(((int)uVar6 >> 3) * 0x100 + iVar2 + (int)this_) &
              (byte)(1 << ((byte)uVar4 & 0x1f))) != 0) {
            *param_1 = uVar1 - iVar7;
            *param_2 = iVar2;
            return 1;
          }
        }
        if ((-1 < (int)uVar5) && ((int)uVar5 < 0x100)) {
          uVar4 = uVar5 & 0x80000007;
          if ((int)uVar4 < 0) {
            uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
          }
          if ((*(byte *)(((int)uVar5 >> 3) * 0x100 + iVar2 + (int)this_) &
              (byte)(1 << ((byte)uVar4 & 0x1f))) != 0) {
            *param_1 = uVar1 + iVar7;
            *param_2 = iVar2;
            return 1;
          }
        }
      }
    }
    iVar7 = iVar7 + 1;
    uVar4 = uVar6 - 1;
    uVar5 = uVar5 + 1;
    uVar6 = uVar4;
    if (0xff < iVar7) {
      return 0;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004bc6d0, ap_004bc6d0));
