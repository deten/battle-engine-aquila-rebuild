// auto-ported from 004f3f00_FUN_004f3f00.c (FUN_004f3f00, 199 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_00492c70_t)(uint32_t);
static const bea_guard<FUN_00492c70_t> FUN_00492c70 = {(FUN_00492c70_t)0x00492c70};
typedef uint32_t (BEA_THISCALL* FUN_004bac40_t)(uint32_t);
static const bea_guard<FUN_004bac40_t> FUN_004bac40 = {(FUN_004bac40_t)0x004bac40};

static uint32_t BEA_THISCALL ap_004f3f00(void * this_)
{
  undefined1 *puStack_8;
  undefined4 local_4;
  *(undefined ***)this_ = ((void*)0x005df784);
  *(undefined ***)((int)this_ + 8) = ((void*)0x005df70c);
  local_4 = 0;
  if (*(int **)((int)this_ + 0x74) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x74), 0x4, 1);
  }
  *(undefined4 *)((int)this_ + 0x74) = 0;
  if (*(int **)((int)this_ + 0x6c) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x6c), 0x4, 1);
  }
  *(undefined4 *)((int)this_ + 0x6c) = 0;
  if (*(int **)((int)this_ + 0x70) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x70), 0x4, 1);
    *(undefined4 *)((int)this_ + 0x70) = 0;
  }
  *(undefined ***)this_ = ((void*)0x005df5c8);
  *(undefined ***)((int)this_ + 8) = ((void*)0x005df550);
  local_4 = 2;
  if (*(int **)((int)this_ + 0x38) != (int *)0x0) {
    bea_vcall<uint32_t>(*(int **)((int)this_ + 0x38), 0x4, 1);
  }
  if (*(undefined4 **)((int)this_ + 0x30) != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(*(undefined4 **)((int)this_ + 0x30), 0x0, 1);
  }
  *(undefined4 *)((int)this_ + 0x38) = 0;
  *(undefined4 *)((int)this_ + 0x30) = 0;
  local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),1);
  FUN_00492c70(bea_arg((void *)((int)this_ + 0xc)));
  local_4 = 0xffffffff;
  return FUN_004bac40(bea_arg(this_));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f3f00, ap_004f3f00));
