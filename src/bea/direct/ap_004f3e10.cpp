// auto-ported from 004f3e10_FUN_004f3e10.c (FUN_004f3e10, 168 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0083da30 GLOBAL_AT(short, 0x0083da30)
#define DAT_0083d9f0 GLOBAL_AT(undefined4, 0x0083d9f0)
typedef uint32_t (BEA_THISCALL* FUN_00492c60_t)(uint32_t);
static const bea_guard<FUN_00492c60_t> FUN_00492c60 = {(FUN_00492c60_t)0x00492c60};

static void * BEA_THISCALL ap_004f3e10(void * this_)
{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined4 *)((int)this_ + 4) = 0;
  *(undefined ***)this_ = ((void*)0x005df6b8);
  *(undefined ***)((int)this_ + 8) = ((void*)0x005d9540);
  FUN_00492c60(bea_arg((void *)((int)this_ + 0xc)));
  *(undefined ***)this_ = ((void*)0x005df5c8);
  *(undefined ***)((int)this_ + 8) = ((void*)0x005df550);
  *(undefined4 *)((int)this_ + 0x34) = 0;
  *(undefined2 *)((int)this_ + 0x2c) = 2;
  *(undefined4 *)((int)this_ + 0x30) = 0;
  *(undefined4 *)((int)this_ + 0x38) = 0;
  *(short *)((int)this_ + 0x2e) = DAT_0083da30;
  DAT_0083da30 = DAT_0083da30 + 1;
  *(undefined ***)this_ = ((void*)0x005df784);
  *(undefined ***)((int)this_ + 8) = ((void*)0x005df70c);
  puVar2 = &DAT_0083d9f0;
  puVar3 = (undefined4 *)((int)this_ + 0x3c);
  for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this_ + 0x70) = 0;
  *(undefined4 *)((int)this_ + 0x74) = 0;
  *(undefined4 *)((int)this_ + 0x78) = 0;
  *(undefined4 *)((int)this_ + 0x6c) = 0;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f3e10, ap_004f3e10));
