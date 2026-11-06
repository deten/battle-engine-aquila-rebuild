// auto-ported from 00419a60_FUN_00419a60.c (FUN_00419a60, 145 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004bac40_t)(uint32_t);
static const bea_guard<FUN_004bac40_t> FUN_004bac40 = {(FUN_004bac40_t)0x004bac40};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};

static void BEA_THISCALL ap_00419a60(void * this_)
{
  int iVar1;
  void *this_00;
  undefined1 *puStack_8;
  int local_4;
  *(undefined ***)this_ = ((void*)0x005d92a8);
  *(undefined4 *)((int)this_ + 4U) = ((void*)0x005d9298);
  local_4 = 2;
  if (*(undefined4 **)((int)this_ + 0x10) != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(*(undefined4 **)((int)this_ + 0x10), 0x0, 1);
  }
  *(undefined4 *)((int)this_ + 0x10) = 0;
  (*(uint8_t*)((char*)&local_4 + 0)) = 1;
  iVar1 = *(int *)((int)this_ + 0xc);
  if ((iVar1 != 0) && (this_00 = *(void **)(iVar1 + 4), this_00 != (void *)0x0)) {
    FUN_004e5bd0(bea_arg(this_00), bea_arg((int *)((int)this_ + 0xc)));
  }
  local_4 = (uint)((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu) << 8;
  FUN_004bac40(bea_arg((void *)(-(uint)(this_ != (void *)0x0) & (int)this_ + 4U)));
  *(undefined ***)this_ = ((void*)0x005d9260);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00419a60, ap_00419a60));
