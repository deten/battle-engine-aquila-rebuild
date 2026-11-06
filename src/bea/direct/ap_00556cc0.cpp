// auto-ported from 00556cc0_FUN_00556cc0.c (FUN_00556cc0, 175 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef void * (BEA_THISCALL* FUN_004f2710_t)(uint32_t);
static const bea_guard<FUN_004f2710_t> FUN_004f2710 = {(FUN_004f2710_t)0x004f2710};
typedef uint32_t (BEA_STDCALL* FUN_00512ca0_t)(uint32_t);
static const bea_guard<FUN_00512ca0_t> FUN_00512ca0 = {(FUN_00512ca0_t)0x00512ca0};

static void * BEA_THISCALL ap_00556cc0(void * this_)
{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *puStack_8;
  undefined4 local_4;
  FUN_004f2710(bea_arg((void *)((int)this_ + 8)));
  *(undefined ***)this_ = ((void*)0x005e59a0);
  *(undefined4 *)((int)this_ + 0x88) = 0;
  puVar1 = (undefined4 *)((int)this_ + 0xf8);
  iVar2 = 0x10;
  do {
    puVar1[-0x10] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (BEA_LOOP_GUARD((iVar2 != 0)));
  *(undefined4 *)((int)this_ + 0x8c) = 0;
  *(undefined4 *)((int)this_ + 0x90) = 0;
  *(undefined4 *)((int)this_ + 0x94) = 0x3f800000;
  *(undefined4 *)((int)this_ + 0x98) = 0x3f800000;
  *(undefined4 *)((int)this_ + 0x138) = 1;
  *(undefined4 *)((int)this_ + 0x150) = 1;
  *(undefined4 *)((int)this_ + 0x140) = 0;
  FUN_00512ca0(bea_arg(this_));
  *(undefined1 *)((int)this_ + 0x155) = 0;
  *(undefined2 *)((int)this_ + 0x156) = 0xffff;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00556cc0, ap_00556cc0));
