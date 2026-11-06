// auto-ported from 00497140_FUN_00497140.c (FUN_00497140, 1418 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define s_Stopincyl_0062de7c ((char*)0x0062de7c)
#define s_Sbotoutcyl_0062de4c ((char*)0x0062de4c)
#define s_Sbotincyl_0062de1c ((char*)0x0062de1c)
#define s_Wbotoutcyl_0062de34 ((char*)0x0062de34)
#define s_Ebotoutcyl_0062de40 ((char*)0x0062de40)
#define s_Etopoutcyl_0062dea0 ((char*)0x0062dea0)
#define s_Nbotincyl_0062de28 ((char*)0x0062de28)
#define s_Nmidincyl_0062dee8 ((char*)0x0062dee8)
#define s_Wmidincyl_0062dec4 ((char*)0x0062dec4)
#define s_Wtopincyl_0062de64 ((char*)0x0062de64)
#define s_Ebotincyl_0062de10 ((char*)0x0062de10)
#define s_Emidoutcyl_0062df00 ((char*)0x0062df00)
#define s_Smidincyl_0062dedc ((char*)0x0062dedc)
#define s_Nbotoutcyl_0062de58 ((char*)0x0062de58)
#define s_Emidincyl_0062ded0 ((char*)0x0062ded0)
#define s_Wbotincyl_0062de04 ((char*)0x0062de04)
#define s_Wmidoutcyl_0062def4 ((char*)0x0062def4)
#define s_Stopoutcyl_0062deac ((char*)0x0062deac)
#define s_Smidoutcyl_0062df0c ((char*)0x0062df0c)
#define s_Ntopoutcyl_0062deb8 ((char*)0x0062deb8)
#define s_Wtopoutcyl_0062de94 ((char*)0x0062de94)
#define s_Ntopincyl_0062de88 ((char*)0x0062de88)
#define s_Nmidoutcyl_0062df18 ((char*)0x0062df18)
#define s_Etopincyl_0062de70 ((char*)0x0062de70)

static void BEA_THISCALL ap_00497140(void * this_, int param_1)
{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;
  bool bVar7;
  int local_4;
  
  local_4 = 0;
  if (*(int *)(param_1 + 0x15c) < 1) {
    *(undefined4 *)((int)this_ + 0x14) = 1;
    return;
  }
  do {
    pcVar6 = s_Nmidoutcyl_0062df18;
    iVar2 = *(int *)(*(int *)(param_1 + 0x160) + local_4 * 4);
    pbVar5 = (byte *)(iVar2 + 0xdc);
    pbVar3 = pbVar5;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_00497197:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_0049719c;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_00497197;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar4 = 0;
LAB_0049719c:
    if (iVar4 == 0) {
      *(int *)((int)this_ + 0x18) = iVar2;
    }
    pcVar6 = s_Smidoutcyl_0062df0c;
    pbVar3 = pbVar5;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_004971ce:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_004971d3;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_004971ce;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar4 = 0;
LAB_004971d3:
    if (iVar4 == 0) {
      *(int *)((int)this_ + 0x1c) = iVar2;
    }
    pcVar6 = s_Emidoutcyl_0062df00;
    pbVar3 = pbVar5;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_00497205:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_0049720a;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_00497205;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar4 = 0;
LAB_0049720a:
    if (iVar4 == 0) {
      *(int *)((int)this_ + 0x20) = iVar2;
    }
    pcVar6 = s_Wmidoutcyl_0062def4;
    pbVar3 = pbVar5;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_0049723c:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00497241;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_0049723c;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar4 = 0;
LAB_00497241:
    if (iVar4 == 0) {
      *(int *)((int)this_ + 0x24) = iVar2;
    }
    pcVar6 = s_Nmidincyl_0062dee8;
    pbVar3 = pbVar5;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_00497273:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00497278;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_00497273;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar4 = 0;
LAB_00497278:
    if (iVar4 == 0) {
      *(int *)((int)this_ + 0x28) = iVar2;
    }
    pcVar6 = s_Smidincyl_0062dedc;
    pbVar3 = pbVar5;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_004972aa:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_004972af;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_004972aa;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar4 = 0;
LAB_004972af:
    if (iVar4 == 0) {
      *(int *)((int)this_ + 0x2c) = iVar2;
    }
    pcVar6 = s_Emidincyl_0062ded0;
    pbVar3 = pbVar5;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_004972e1:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_004972e6;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_004972e1;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar4 = 0;
LAB_004972e6:
    if (iVar4 == 0) {
      *(int *)((int)this_ + 0x30) = iVar2;
    }
    pcVar6 = s_Wmidincyl_0062dec4;
    pbVar3 = pbVar5;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_00497318:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_0049731d;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_00497318;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar4 = 0;
LAB_0049731d:
    if (iVar4 == 0) {
      *(int *)((int)this_ + 0x34) = iVar2;
    }
    pcVar6 = s_Ntopoutcyl_0062deb8;
    pbVar3 = pbVar5;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_0049734f:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00497354;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_0049734f;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar4 = 0;
LAB_00497354:
    if (iVar4 == 0) {
      *(int *)((int)this_ + 0x38) = iVar2;
    }
    pcVar6 = s_Stopoutcyl_0062deac;
    pbVar3 = pbVar5;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_00497386:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_0049738b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_00497386;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar4 = 0;
LAB_0049738b:
    if (iVar4 == 0) {
      *(int *)((int)this_ + 0x3c) = iVar2;
    }
    pcVar6 = s_Etopoutcyl_0062dea0;
    pbVar3 = pbVar5;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_004973bd:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_004973c2;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_004973bd;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar4 = 0;
LAB_004973c2:
    if (iVar4 == 0) {
      *(int *)((int)this_ + 0x40) = iVar2;
    }
    pcVar6 = s_Wtopoutcyl_0062de94;
    pbVar3 = pbVar5;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_004973f4:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_004973f9;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_004973f4;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar4 = 0;
LAB_004973f9:
    if (iVar4 == 0) {
      *(int *)((int)this_ + 0x44) = iVar2;
    }
    pcVar6 = s_Ntopincyl_0062de88;
    pbVar3 = pbVar5;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_0049742b:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00497430;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_0049742b;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar4 = 0;
LAB_00497430:
    if (iVar4 == 0) {
      *(int *)((int)this_ + 0x48) = iVar2;
    }
    pcVar6 = s_Stopincyl_0062de7c;
    pbVar3 = pbVar5;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_00497462:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00497467;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_00497462;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar4 = 0;
LAB_00497467:
    if (iVar4 == 0) {
      *(int *)((int)this_ + 0x4c) = iVar2;
    }
    pcVar6 = s_Etopincyl_0062de70;
    pbVar3 = pbVar5;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_00497499:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_0049749e;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_00497499;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar4 = 0;
LAB_0049749e:
    if (iVar4 == 0) {
      *(int *)((int)this_ + 0x50) = iVar2;
    }
    pcVar6 = s_Wtopincyl_0062de64;
    pbVar3 = pbVar5;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_004974d0:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_004974d5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_004974d0;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar4 = 0;
LAB_004974d5:
    if (iVar4 == 0) {
      *(int *)((int)this_ + 0x54) = iVar2;
    }
    pcVar6 = s_Nbotoutcyl_0062de58;
    pbVar3 = pbVar5;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_00497507:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_0049750c;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_00497507;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar4 = 0;
LAB_0049750c:
    if (iVar4 == 0) {
      *(int *)((int)this_ + 0x58) = iVar2;
    }
    pcVar6 = s_Sbotoutcyl_0062de4c;
    pbVar3 = pbVar5;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_0049753e:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00497543;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_0049753e;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar4 = 0;
LAB_00497543:
    if (iVar4 == 0) {
      *(int *)((int)this_ + 0x5c) = iVar2;
    }
    pcVar6 = s_Ebotoutcyl_0062de40;
    pbVar3 = pbVar5;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_00497575:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_0049757a;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_00497575;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar4 = 0;
LAB_0049757a:
    if (iVar4 == 0) {
      *(int *)((int)this_ + 0x60) = iVar2;
    }
    pcVar6 = s_Wbotoutcyl_0062de34;
    pbVar3 = pbVar5;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_004975ac:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_004975b1;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_004975ac;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar4 = 0;
LAB_004975b1:
    if (iVar4 == 0) {
      *(int *)((int)this_ + 100) = iVar2;
    }
    pcVar6 = s_Nbotincyl_0062de28;
    pbVar3 = pbVar5;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_004975e3:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_004975e8;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_004975e3;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar4 = 0;
LAB_004975e8:
    if (iVar4 == 0) {
      *(int *)((int)this_ + 0x68) = iVar2;
    }
    pcVar6 = s_Sbotincyl_0062de1c;
    pbVar3 = pbVar5;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_0049761a:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_0049761f;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_0049761a;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar4 = 0;
LAB_0049761f:
    if (iVar4 == 0) {
      *(int *)((int)this_ + 0x6c) = iVar2;
    }
    pcVar6 = s_Ebotincyl_0062de10;
    pbVar3 = pbVar5;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_00497651:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00497656;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_00497651;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar4 = 0;
LAB_00497656:
    if (iVar4 == 0) {
      *(int *)((int)this_ + 0x70) = iVar2;
    }
    pcVar6 = s_Wbotincyl_0062de04;
    do {
      bVar1 = *pbVar5;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_00497688:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_0049768d;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_00497688;
      pbVar5 = pbVar5 + 2;
      pcVar6 = pcVar6 + 2;
    } while (BEA_LOOP_GUARD((bVar1 != 0)));
    iVar4 = 0;
LAB_0049768d:
    if (iVar4 == 0) {
      *(int *)((int)this_ + 0x74) = iVar2;
    }
    local_4 = local_4 + 1;
    if (*(int *)(param_1 + 0x15c) <= local_4) {
      *(undefined4 *)((int)this_ + 0x14) = 1;
      return;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00497140, ap_00497140));
