// auto-ported from 0054e500_FUN_0054e500.c (FUN_0054e500, 361 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(char, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_DXPalletizer_c_00651d60 ((char*)0x00651d60)
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void * BEA_THISCALL ap_0054e500(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  byte *pbVar9;
  
  bVar8 = (byte)param_5;
  for (; BEA_LOOP_GUARD((-1 < (char)(byte)param_5)); (*(uint8_t*)((char*)&param_5 + 0)) = (byte)param_5 - 1) {
    bVar8 = bVar8 - 1;
    bVar7 = (byte)param_1 >> ((byte)param_5 & 0x1f);
    bVar2 = (byte)param_2 >> ((byte)param_5 & 0x1f);
    bVar3 = (byte)param_3 >> ((byte)param_5 & 0x1f);
    bVar4 = (byte)param_4 >> ((byte)param_5 & 0x1f);
    iVar6 = (bVar4 & 1) + ((bVar3 & 1) + ((bVar2 & 1) + (bVar7 & 1) * 2) * 2) * 2;
    piVar1 = (int *)((int)this_ + iVar6 * 4 + 0x14);
    if (*(int *)((int)this_ + iVar6 * 4 + 0x14) == 0) {
      *(undefined4 *)((int)this_ + 0xc) = 0;
      pbVar5 = (byte *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x54), bea_arg(0x5f), bea_arg(s_C__dev_ONSLAUGHT2_DXPalletizer_c_00651d60), bea_arg(0x16));
      if (pbVar5 == (byte *)0x0) {
        pbVar5 = (byte *)0x0;
      }
      else {
        pbVar5[8] = 0;
        pbVar5[9] = 0;
        pbVar5[10] = 0;
        pbVar5[0xb] = 0;
        pbVar5[0xc] = 1;
        pbVar5[0xd] = 0;
        pbVar5[0xe] = 0;
        pbVar5[0xf] = 0;
        pbVar5[4] = 0xff;
        pbVar5[5] = 0xff;
        pbVar5[6] = 0xff;
        pbVar5[7] = 0xff;
        pbVar5[0x10] = 0;
        pbVar5[0x11] = 0;
        pbVar5[0x12] = 0;
        pbVar5[0x13] = 0;
        pbVar9 = pbVar5 + 0x14;
        for (iVar6 = 0x10; BEA_LOOP_GUARD((iVar6 != 0)); iVar6 = iVar6 + -1) {
          pbVar9[0] = 0;
          pbVar9[1] = 0;
          pbVar9[2] = 0;
          pbVar9[3] = 0;
          pbVar9 = pbVar9 + 4;
        }
      }
      *piVar1 = (int)pbVar5;
      if ((char)(byte)param_5 < '\x01') {
        *pbVar5 = (byte)param_1;
        *(byte *)(*piVar1 + 1) = (byte)param_2;
        *(byte *)(*piVar1 + 2) = (byte)param_3;
        *(byte *)(*piVar1 + 3) = (byte)param_4;
      }
      else {
        *pbVar5 = bVar7 * '\x02' + '\x01' << (bVar8 & 0x1f);
        *(byte *)(*piVar1 + 1) = bVar2 * '\x02' + '\x01' << (bVar8 & 0x1f);
        *(byte *)(*piVar1 + 2) = bVar3 * '\x02' + '\x01' << (bVar8 & 0x1f);
        *(byte *)(*piVar1 + 3) = bVar4 * '\x02' + '\x01' << (bVar8 & 0x1f);
      }
    }
    this_ = (void *)*piVar1;
  }
  *(int *)((int)this_ + 8) = *(int *)((int)this_ + 8) + 1;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0054e500, ap_0054e500));
