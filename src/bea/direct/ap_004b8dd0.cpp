// auto-ported from 004b8dd0_FUN_004b8dd0.c (FUN_004b8dd0, 114 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00807418 GLOBAL_AT(int, 0x00807418)
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};

static void * BEA_THISCALL ap_004b8dd0(void * this_)
{  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined4 *)((int)this_ + 4) = 0;
  *(undefined ***)this_ = ((void*)0x005dc72c);
  FUN_004e5840(bea_arg((void *)((int)this_ + 0x18)));
  *(undefined4 *)((int)this_ + 0x28) = 0;
  *(undefined ***)this_ = ((void*)0x005dc70c);
  *(undefined4 *)((int)this_ + 0x2c) = 0;
  *(undefined4 *)((int)this_ + 0x30) = 0;
  *(undefined4 *)((int)this_ + 0x38) = 0;
  *(undefined4 *)((int)this_ + 0x3c) = 0;
  DAT_00807418 = 0;
  *(undefined4 *)((int)this_ + 8) = 0;
  *(undefined4 *)((int)this_ + 0xc) = 0;
  *(undefined4 *)((int)this_ + 0x10) = 0;
  *(undefined4 *)((int)this_ + 0x14) = 0;
  *(undefined4 *)((int)this_ + 0x34) = 0;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b8dd0, ap_004b8dd0));
