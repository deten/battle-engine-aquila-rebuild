// auto-ported from 00500460_FUN_00500460.c (FUN_00500460, 216 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (7 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00854e00 GLOBAL_AT(int, 0x00854e00)
typedef int (BEA_THISCALL* FUN_004883f0_t)(uint32_t);
static const bea_guard<FUN_004883f0_t> FUN_004883f0 = {(FUN_004883f0_t)0x004883f0};
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};
typedef int (BEA_THISCALL* FUN_005001e0_t)(uint32_t);
static const bea_guard<FUN_005001e0_t> FUN_005001e0 = {(FUN_005001e0_t)0x005001e0};

static void BEA_THISCALL ap_00500460(void * this_)
{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  iVar1 = *(int *)this_;
  if ((iVar1 != 0) && (*(void **)(iVar1 + 0x140) == this_)) {
    *(undefined4 *)(iVar1 + 0x140) = 0;
  }
  if (*(int *)this_ != 0) {
    FUN_004f27e0(bea_arg((void *)(*(int *)this_ + 8)));
    *(undefined4 *)this_ = 0;
  }
  if (*(int *)((int)this_ + 0x40) != 0) {
    if (*(char *)((int)this_ + 0x10) != '\0') {
      FUN_005001e0(bea_arg(*(void **)((int)this_ + *(int *)((int)this_ + 0x48) * 4 + 0x40)));
      *(undefined4 *)((int)this_ + 0x38) = 0;
      *(undefined1 *)((int)this_ + 0x10) = 0;
    }
    if (*(undefined4 **)((int)this_ + 0x40) != (undefined4 *)0x0) {
      bea_vcall<uint32_t>(*(undefined4 **)((int)this_ + 0x40), 0x0, 1);
      *(undefined4 *)((int)this_ + 0x40) = 0;
    }
  }
  if (*(int *)((int)this_ + 0x44) != 0) {
    if (*(char *)((int)this_ + 0x10) != '\0') {
      FUN_005001e0(bea_arg(*(void **)((int)this_ + *(int *)((int)this_ + 0x48) * 4 + 0x40)));
      *(undefined4 *)((int)this_ + 0x38) = 0;
      *(undefined1 *)((int)this_ + 0x10) = 0;
    }
    if (*(undefined4 **)((int)this_ + 0x44) != (undefined4 *)0x0) {
      bea_vcall<uint32_t>(*(undefined4 **)((int)this_ + 0x44), 0x0, 1);
      *(undefined4 *)((int)this_ + 0x44) = 0;
    }
  }
  if (*(void **)((int)this_ + 0x4c) != (void *)0x0) {
    if (*(char *)((int)this_ + 0x2c) != '\0') {
      FUN_004883f0(bea_arg(*(void **)((int)this_ + 0x4c)));
      *(undefined4 *)((int)this_ + 0x3c) = 0;
      *(undefined1 *)((int)this_ + 0x2c) = 0;
    }
    if (*(undefined4 **)((int)this_ + 0x4c) != (undefined4 *)0x0) {
      bea_vcall<uint32_t>(*(undefined4 **)((int)this_ + 0x4c), 0x0, 1);
      *(undefined4 *)((int)this_ + 0x4c) = 0;
    }
  }
  if (DAT_00854e00 != this_) {
    pvVar4 = *(void **)((int)DAT_00854e00 + 0x58);
    pvVar3 = DAT_00854e00;
    while (BEA_LOOP_GUARD((pvVar2 = pvVar4, pvVar2 != this_))) {
      pvVar3 = pvVar2;
      pvVar4 = *(void **)((int)pvVar2 + 0x58);
    }
    *(undefined4 *)((int)pvVar3 + 0x58) = *(undefined4 *)((int)this_ + 0x58);
    return;
  }
  DAT_00854e00 = (void *)*(undefined4 *)((int)this_ + 0x58);
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00500460, ap_00500460));
