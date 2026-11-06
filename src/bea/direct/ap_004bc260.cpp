// auto-ported from 004bc260_FUN_004bc260.c (FUN_004bc260, 110 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00809598 GLOBAL_AT(int, 0x00809598)
#define DAT_00809dc0 GLOBAL_AT(undefined4, 0x00809dc0)
#define DAT_00829dc4 GLOBAL_AT(int, 0x00829dc4)
#define DAT_00829dc8 GLOBAL_AT(int, 0x00829dc8)
#define DAT_00630ab4 GLOBAL_AT(int, 0x00630ab4)
#define DAT_00630ab8 GLOBAL_AT(int, 0x00630ab8)

static void * BEA_THISCALL ap_004bc260(void * this_, float param_1)
{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = 0;
  DAT_00809598 = 0;
  *(float *)((int)this_ + 0x2000) = param_1 * 0.017453292f;
  puVar4 = &DAT_00809dc0;
  for (iVar2 = 0x8000; BEA_LOOP_GUARD((iVar2 != 0)); iVar2 = iVar2 + -1) {
    *puVar4 = 0xffffffff;
    puVar4 = puVar4 + 1;
  }
  DAT_00829dc4 = 0xff;
  DAT_00829dc8 = 0xff;
  DAT_00630ab4 = 0;
  DAT_00630ab8 = 0;
  do {
    puVar1 = (undefined1 *)(iVar3 + (int)this_);
    iVar2 = 0x20;
    do {
      *puVar1 = 0xff;
      puVar1 = puVar1 + 0x100;
      iVar2 = iVar2 + -1;
    } while (BEA_LOOP_GUARD((iVar2 != 0)));
    iVar3 = iVar3 + 1;
  } while (BEA_LOOP_GUARD((iVar3 < 0x100)));
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004bc260, ap_004bc260));
