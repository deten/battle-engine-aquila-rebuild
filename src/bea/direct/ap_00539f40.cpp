// auto-ported from 00539f40_FUN_00539f40.c (FUN_00539f40, 196 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};
typedef uint32_t (BEA_THISCALL* FUN_004f7440_t)(uint32_t);
static const bea_guard<FUN_004f7440_t> FUN_004f7440 = {(FUN_004f7440_t)0x004f7440};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_00539f40(void * this_)
{
  void *this_00;
  
  this_00 = *(void **)this_;
  if (this_00 != (void *)0x0) {
    FUN_004f7440(bea_arg(this_00));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_00));
    *(undefined4 *)this_ = 0;
  }
  if (*(int *)((int)this_ + 4) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 4) + 8)));
    *(undefined4 *)((int)this_ + 4) = 0;
  }
  if (*(int *)((int)this_ + 8) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 8) + 8)));
    *(undefined4 *)((int)this_ + 8) = 0;
  }
  if (*(undefined4 **)((int)this_ + 0x70) != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(*(undefined4 **)((int)this_ + 0x70), 0x0, 1);
    *(undefined4 *)((int)this_ + 0x70) = 0;
  }
  if (*(undefined4 **)((int)this_ + 0x74) != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(*(undefined4 **)((int)this_ + 0x74), 0x0, 1);
    *(undefined4 *)((int)this_ + 0x74) = 0;
  }
  if (*(int *)((int)this_ + 0x18) != 0) {
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x18)));
    *(undefined4 *)((int)this_ + 0x18) = 0;
  }
  if (*(int *)((int)this_ + 0xc) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0xc) + 8)));
    *(undefined4 *)((int)this_ + 0xc) = 0;
  }
  if (*(undefined4 **)((int)this_ + 0x78) != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(*(undefined4 **)((int)this_ + 0x78), 0x0, 1);
    *(undefined4 *)((int)this_ + 0x78) = 0;
  }
  if (*(int *)((int)this_ + 0x10) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x10) + 8)));
    *(undefined4 *)((int)this_ + 0x10) = 0;
  }
  if (*(int *)((int)this_ + 0x14) != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)((int)this_ + 0x14) + 8)));
    *(undefined4 *)((int)this_ + 0x14) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00539f40, ap_00539f40));
