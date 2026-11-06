// auto-ported from 0051cbb0_vslot1.c (CFEPMultiplayer::vslot1, 192 bytes) by tools/autoport.py
// @autoport-mode verified
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_0089d94c GLOBAL_AT(int, 0x0089d94c)

static void BEA_THISCALL ap_0051cbb0(int this_)
{
  int iVar1;

  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  do {
    iVar4 = 0;
    iVar2 = iVar5;
    do {
      switch(iVar2) {
      case 0:
        iVar1 = 0x352;
        break;
      case 1:
        iVar1 = 0x355;
        break;
      case 2:
        iVar1 = 0x35b;
        break;
      case 3:
        iVar1 = 0x360;
        break;
      case 4:
        iVar1 = 0x361;
        break;
      case 5:
        iVar1 = 0x362;
        break;
      case 6:
        iVar1 = 0x353;
        break;
      case 7:
        iVar1 = 0x357;
        break;
      case 8:
        iVar1 = 0x35c;
        break;
      case 9:
        iVar1 = 0x35d;
        break;
      case 10:
        iVar1 = 0x35e;
        break;
      case 0xb:
        iVar1 = 0x35f;
        break;
      case 0xc:
        iVar1 = 0x354;
        break;
      case 0xd:
        iVar1 = 0x356;
        break;
      case 0xe:
        iVar1 = 0x359;
        break;
      default:
        iVar1 = -2;
      }
      if (iVar1 == DAT_0089d94c) {
        *(int *)(this_ + 0x60) = iVar4;
        *(int *)(this_ + 100) = iVar3;
        return;
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 1;
    } while (BEA_LOOP_GUARD((iVar4 < 6)));
    iVar5 = iVar5 + 6;
    iVar3 = iVar3 + 1;
    if (0x11 < iVar5) {
      *(undefined4 *)(this_ + 100) = 0;
      *(undefined4 *)(this_ + 0x60) = 0;
      return;
    }
  } while(BEA_LOOP_GUARD(( true )));
}

// @autoport-registration (verified: 79 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x0051cbb0, ap_0051cbb0));
