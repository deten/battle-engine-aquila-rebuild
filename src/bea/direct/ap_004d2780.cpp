// auto-ported from 004d2780_FUN_004d2780.c (FUN_004d2780, 143 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00662ab0 GLOBAL_AT(int, 0x00662ab0)
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};

static void * BEA_THISCALL ap_004d2780(void * this_, undefined4 param_1)
{
  int iVar1;
  undefined4 *puVar2;
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined4 *)((int)this_ + 4) = 0;
  *(undefined4 *)((int)this_ + 0x1c) = 0;
  *(undefined4 *)((int)this_ + 0x2c) = param_1;
  *(undefined ***)this_ = ((void*)0x005de770);
  FUN_00401000(bea_arg((undefined4 *)((int)this_ + 0x1c)), bea_arg(0));
  puVar2 = (undefined4 *)((int)this_ + 0x30);
  for (iVar1 = 7; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this_ + 0x24) = 1;
  *(undefined4 *)((int)this_ + 0x28) = 1;
  *(undefined4 *)((int)this_ + 8) = 0;
  *(undefined4 *)((int)this_ + 0xc) = 0;
  *(undefined4 *)((int)this_ + 0x10) = 0;
  *(undefined4 *)((int)this_ + 0x14) = 0;
  *(undefined4 *)((int)this_ + 0x18) = 0;
  *(undefined4 *)((int)this_ + 0x20) = (&DAT_00662ab0)[*(int *)((int)this_ + 0x2c)];
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004d2780, ap_004d2780));
