// auto-ported from 004f2710_FUN_004f2710.c (FUN_004f2710, 114 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0083d9b0 GLOBAL_AT(int, 0x0083d9b0)
#define DAT_0083d99c GLOBAL_AT(int, 0x0083d99c)
#define s_JCLTEX___d_00632eb4 ((char*)0x00632eb4)
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static void * BEA_THISCALL ap_004f2710(void * this_)
{
  int iVar1;
  undefined4 *puVar2;
  
  *(int *)((int)this_ + 0x98) = DAT_0083d9b0;
  if (this_ == (void *)0x0) {
    DAT_0083d9b0 = 0;
  }
  else {
    DAT_0083d9b0 = (int)this_ + -8;
  }
  *(undefined4 *)((int)this_ + 0x9c) = 0;
  *(undefined4 *)((int)this_ + 0xac) = 0;
  *(undefined2 *)((int)this_ + 0xaa) = 0;
  *(undefined4 *)((int)this_ + 0x94) = 0xffffffff;
  puVar2 = this_;
  for (iVar1 = 0x20; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  FUN_0055de9b(this_,s_JCLTEX___d_00632eb4,DAT_0083d99c);
  DAT_0083d99c = DAT_0083d99c + 1;
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f2710, ap_004f2710));
