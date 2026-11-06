// auto-ported from 00504c40_vslot117.c (CWarspiteDome::vslot117, 161 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CWarspiteDome;
#define s_Warspite_Pulse_Laser_0063d194 ((char*)0x0063d194)

static undefined4 BEA_THISCALL ap_00504c40(CWarspiteDome * this_, int param_1)
{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
  pcVar4 = s_Warspite_Pulse_Laser_0063d194;
  pbVar2 = (byte *)**(undefined4 **)(param_1 + 0xa4);
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_00504c7e:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_00504c83;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_00504c7e;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (BEA_LOOP_GUARD((bVar1 != 0)));
  iVar3 = 0;
LAB_00504c83:
  if (iVar3 != 0) {
    return 1;
  }
  if (*(int *)(this_ + 0x264) == 0) {
    *(undefined4 *)(this_ + 0x268) = 1;
    *(undefined4 *)(this_ + 0x270) = 1;
    *(undefined4 *)(this_ + 0x278) = 1;
    *(undefined4 *)(this_ + 0x264) = 1;
    return 1;
  }
  *(undefined4 *)(this_ + 0x26c) = 1;
  *(undefined4 *)(this_ + 0x274) = 1;
  *(undefined4 *)(this_ + 0x27c) = 1;
  *(undefined4 *)(this_ + 0x264) = 0;
  return 1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00504c40, ap_00504c40));
