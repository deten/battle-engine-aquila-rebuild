// auto-ported from 0054ef70_FUN_0054ef70.c (FUN_0054ef70, 274 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static undefined4 BEA_THISCALL ap_0054ef70(void * this_, uint param_1, uint param_2, uint param_3, uint param_4)
{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  undefined4 uStack_4;
  
  uVar1 = (param_4 & 0xff) - (uint)*(byte *)((int)this_ + 3);
  uVar5 = (int)uVar1 >> 0x1f;
  uVar2 = (param_3 & 0xff) - (uint)*(byte *)((int)this_ + 2);
  uVar6 = (int)uVar2 >> 0x1f;
  uVar11 = param_2 & 0xff;
  uVar3 = uVar11 - *(byte *)((int)this_ + 1);
  uVar7 = (int)uVar3 >> 0x1f;
  uStack_4 = 0;
  (*(uint8_t*)((char*)&uStack_4 + 3)) = 0;
  param_2 = 1;
  uVar4 = (param_1 & 0xff) - (uint)*(byte *)this_;
  uVar8 = (int)uVar4 >> 0x1f;
  uVar3 = ((uVar1 ^ uVar5) - uVar5) + ((uVar2 ^ uVar6) - uVar6) + ((uVar3 ^ uVar7) - uVar7) +
          ((uVar4 ^ uVar8) - uVar8);
  uVar1 = *(uint *)((int)this_ + 0x400);
  uVar2 = uVar1;
  if (1 < uVar1) {
    pbVar12 = (byte *)((int)this_ + 6);
    do {
      uVar2 = (param_1 & 0xff) - (uint)pbVar12[-2];
      uVar7 = (int)uVar2 >> 0x1f;
      uVar4 = (param_4 & 0xff) - (uint)pbVar12[1];
      uVar8 = (int)uVar4 >> 0x1f;
      uVar5 = uVar11 - pbVar12[-1];
      uVar9 = (int)uVar5 >> 0x1f;
      uVar6 = (param_3 & 0xff) - (uint)*pbVar12;
      uVar10 = (int)uVar6 >> 0x1f;
      uVar2 = ((uVar2 ^ uVar7) - uVar7) + ((uVar4 ^ uVar8) - uVar8) + ((uVar5 ^ uVar9) - uVar9) +
              ((uVar6 ^ uVar10) - uVar10);
      if (uVar2 < uVar3) {
        uStack_4 = param_2 << 0x18;
        uVar3 = uVar2;
      }
      uVar2 = param_2 + 1;
      pbVar12 = pbVar12 + 4;
      param_2 = uVar2;
    } while (BEA_LOOP_GUARD((uVar2 < uVar1)));
  }
  return CONCAT31((int3)(uVar2 >> 8),(*(uint8_t*)((char*)&uStack_4 + 3)));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0054ef70, ap_0054ef70));
