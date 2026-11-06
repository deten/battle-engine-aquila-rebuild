// auto-ported from 00465cf0_vslot0.c (CDXBitmapFont::vslot0, 223 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char CDXBitmapFont;
#define DAT_00679a52 GLOBAL_AT(int, 0x00679a52)
#define DAT_00679a4f GLOBAL_AT(int, 0x00679a4f)
#define DAT_006799f4 GLOBAL_AT(char, 0x006799f4)
#define DAT_006799d4 GLOBAL_AT(undefined4, 0x006799d4)
#define DAT_00679af4 GLOBAL_AT(int, 0x00679af4)

static uint BEA_THISCALL ap_00465cf0(CDXBitmapFont * this_, undefined4 param_1)
{
  ushort uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (*(int *)(this_ + 0x168) != 0) {
    if ((ushort)param_1 == 0xbf) {
      (*(uint16_t*)((char*)&param_1 + 0)) = 0xa1;
    }
    else if ((ushort)param_1 == 0xa1) {
      (*(uint16_t*)((char*)&param_1 + 0)) = 0xbf;
    }
  }
  if (*(int *)(this_ + 0x16c) != 0) {
    if ((ushort)param_1 == 0x5b) {
      return (uint)DAT_00679a52;
    }
    if ((ushort)param_1 == 0x5e) {
      return (uint)DAT_00679a4f;
    }
  }
  if ((ushort)param_1 < 0x100) {
    return (uint)*(byte *)((int)&DAT_006799f4 + (uint)(ushort)param_1);
  }
  puVar3 = &DAT_006799d4;
  uVar1 = (ushort)DAT_006799d4;
  uVar2 = DAT_006799d4;
  while (BEA_LOOP_GUARD((uVar1 != 0))) {
    if ((ushort)uVar2 == (ushort)param_1) {
      return (uint)*(byte *)((int)puVar3 + 2);
    }
    uVar1 = *(ushort *)(puVar3 + 1);
    uVar2 = (uint)uVar1;
    puVar3 = puVar3 + 1;
  }
  if ((ushort)param_1 != 0x2019) {
    if ((ushort)param_1 != 0x2013) {
      return DAT_00679af4 & 0xff;
    }
    uVar2 = bea_vcall<uint32_t>(this_, 0x0, 0x2d);
    return uVar2;
  }
  uVar2 = bea_vcall<uint32_t>(this_, 0x0, 0x27);
  return uVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00465cf0, ap_00465cf0));
