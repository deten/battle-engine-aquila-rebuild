// auto-ported from 004b6e50_FUN_004b6e50.c (FUN_004b6e50, 191 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef int (BEA_CDECL* FUN_0055e607_t)(uint32_t);
static const bea_guard<FUN_0055e607_t> FUN_0055e607 = {(FUN_0055e607_t)0x0055e607};

static void * BEA_THISCALL ap_004b6e50(void * this_, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, int param_5, undefined4 param_6, undefined4 param_7)
{
  uint uVar1;
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined4 *)((int)this_ + 4) = 0;
  *(undefined4 *)((int)this_ + 0x18) = param_1;
  *(undefined4 *)((int)this_ + 0x10) = param_3;
  *(undefined4 *)((int)this_ + 0x2c) = param_7;
  *(undefined4 *)((int)this_ + 8) = 0;
  *(undefined4 *)((int)this_ + 0xc) = param_2;
  *(undefined4 *)((int)this_ + 0x20) = param_4;
  *(undefined4 *)((int)this_ + 0x28) = param_6;
  *(undefined4 *)((int)this_ + 0x30) = 0;
  *(undefined4 *)((int)this_ + 0x38) = 0;
  *(undefined ***)this_ = ((void*)0x005dc6b4);
  if (param_5 != 0) {
    FUN_00401000(bea_arg((undefined4 *)((int)this_ + 0x30)), bea_arg(param_5));
    *(undefined4 *)((int)this_ + 0x38) = 1;
  }
  uVar1 = FUN_0055e607(bea_arg(param_2));
  *(undefined4 *)((int)this_ + 0x1c) = 0;
  *(undefined4 *)((int)this_ + 0x34) = 0;
  *(float *)((int)this_ + 0x14) = (float)uVar1 * 0.045454547f + 0.2f;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b6e50, ap_004b6e50));
