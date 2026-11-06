// auto-ported from 004cbe30_FUN_004cbe30.c (FUN_004cbe30, 149 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004cae50_t)(uint32_t);
static const bea_guard<FUN_004cae50_t> FUN_004cae50 = {(FUN_004cae50_t)0x004cae50};

static undefined4 BEA_THISCALL ap_004cbe30(void * this_)
{
  undefined4 uVar1;
  void *this_00;
  void *pvVar2;
  
  this_00 = *(void **)this_;
  uVar1 = 0;
  *(undefined4 *)((int)this_ + 0x1c) = 0;
  if (this_00 == (void *)0x0) {
    return 0;
  }
  do {
    if (*(int *)((int)this_00 + 100) == 0) {
      pvVar2 = *(void **)((int)this_00 + 0x68);
      uVar1 = 1;
      *(int *)((int)this_ + 0x1c) = *(int *)((int)this_ + 0x1c) + 1;
    }
    else {
      if (*(int *)((int)this_00 + 0x6c) == 0) {
        *(undefined4 *)this_ = *(undefined4 *)((int)this_00 + 0x68);
      }
      else {
        *(undefined4 *)(*(int *)((int)this_00 + 0x6c) + 0x68) = *(undefined4 *)((int)this_00 + 0x68)
        ;
      }
      if (*(int *)((int)this_00 + 0x68) != 0) {
        *(undefined4 *)(*(int *)((int)this_00 + 0x68) + 0x6c) = *(undefined4 *)((int)this_00 + 0x6c)
        ;
      }
      pvVar2 = *(void **)((int)this_00 + 0x68);
      if (*(int *)((int)this_00 + 0x6c) == 0) {
        *(undefined4 *)this_ = *(undefined4 *)((int)this_00 + 0x68);
      }
      else {
        *(undefined4 *)(*(int *)((int)this_00 + 0x6c) + 0x68) = *(undefined4 *)((int)this_00 + 0x68)
        ;
      }
      if (*(int *)((int)this_00 + 0x68) != 0) {
        *(undefined4 *)(*(int *)((int)this_00 + 0x68) + 0x6c) = *(undefined4 *)((int)this_00 + 0x6c)
        ;
      }
      FUN_004cae50(bea_arg(this_00));
      *(undefined4 *)((int)this_00 + 0x68) = *(undefined4 *)((int)this_ + 8);
      *(void **)((int)this_ + 8) = this_00;
    }
    this_00 = pvVar2;
  } while (BEA_LOOP_GUARD((pvVar2 != (void *)0x0)));
  return uVar1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cbe30, ap_004cbe30));
