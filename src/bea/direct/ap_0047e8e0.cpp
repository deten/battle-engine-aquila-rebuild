// auto-ported from 0047e8e0_FUN_0047e8e0.c (FUN_0047e8e0, 313 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)


static uint32_t BEA_THISCALL ap_0047e8e0(void * this_)
{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_c;
  
  uVar8 = *(uint *)((int)this_ + 0x108c);
  bVar4 = (byte)*(undefined4 *)((int)this_ + 0x1038);
  iVar1 = 1 << (bVar4 & 0x1f);
  iVar6 = 1 << ((byte)*(undefined4 *)((int)this_ + 0x103c) & 0x1f);
  *(int *)((int)this_ + 0x10bc) = iVar1;
  *(int *)((int)this_ + 0x10c4) = iVar1 + -1;
  *(int *)((int)this_ + 0x10c0) = iVar6;
  iVar6 = iVar6 + -1;
  *(int *)((int)this_ + 0x10c8) = iVar6;
  uVar3 = *(uint *)((int)this_ + 0x107c);
  *(int *)((int)this_ + 0x10cc) = iVar6 << (bVar4 & 0x1f);
  (*(uint8_t*)((char*)&local_c + 2)) = (byte)(uVar8 >> 0x10);
  iVar6 = (int)(((ulonglong)(*(uint8_t*)((char*)&local_c + 2)) << 8) / (ulonglong)((uVar3 >> 0x10 & 0xfe) + 1));
  local_c = 0x40;
  uVar2 = (uVar8 & 0xff00) / ((uVar3 >> 8 & 0xfe) + 1);
  uVar3 = ((uVar8 & 0xff) << 8) / ((uVar3 & 0xfe) + 1);
  uVar7 = uVar2 << 8;
  iVar1 = uVar3 << 8;
  piVar5 = (int *)((int)this_ + 0x10d4);
  uVar8 = iVar6 << 8;
  do {
    piVar5[-1] = (uVar8 >> 8) << 0x10;
    *piVar5 = (uVar7 >> 8) << 0xb;
    piVar5[1] = iVar1 >> 3 & 0xffffffe0;
    uVar7 = uVar7 + (0xff - uVar2) * 4;
    iVar1 = iVar1 + (0xff - uVar3) * 4;
    local_c = local_c + -1;
    piVar5 = piVar5 + 3;
    uVar8 = uVar8 + (0xff - iVar6) * 4;
  } while (BEA_LOOP_GUARD((local_c != 0)));
  *(undefined4 *)((int)this_ + 0x13d0) = *(undefined4 *)((int)this_ + 0x13c4);
  *(undefined4 *)((int)this_ + 0x13d4) = *(undefined4 *)((int)this_ + 0x13c8);
  *(undefined4 *)((int)this_ + 0x13d8) = *(undefined4 *)((int)this_ + 0x13cc);
  return *(uint32_t*)((char*)this_ + 0x13d8);
  return *(uint32_t*)((char*)this_ + 0x13d8);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0047e8e0, ap_0047e8e0));
