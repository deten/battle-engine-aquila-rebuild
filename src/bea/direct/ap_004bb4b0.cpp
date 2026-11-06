// auto-ported from 004bb4b0_FUN_004bb4b0.c (FUN_004bb4b0, 118 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef uint32_t (BEA_THISCALL* FUN_004bb7e0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004bb7e0_t> FUN_004bb7e0 = {(FUN_004bb7e0_t)0x004bb7e0};

static void BEA_THISCALL ap_004bb4b0(void * this_)
{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(char *)((int)this_ + 0x38) != '\0') {
    iVar1 = *(int *)((int)this_ + 0x28);
    uVar2 = *(int *)((int)this_ + 0x34) - iVar1;
    uVar3 = (int)uVar2 >> 0x1f;
    if ((int)((uVar2 ^ uVar3) - uVar3) < 10) {
      *(int *)((int)this_ + 0x34) = iVar1;
    }
    if (*(int *)((int)this_ + 0x34) < iVar1) {
      *(int *)((int)this_ + 0x34) = *(int *)((int)this_ + 0x34) + 5;
    }
    if (iVar1 < *(int *)((int)this_ + 0x34)) {
      *(int *)((int)this_ + 0x34) = *(int *)((int)this_ + 0x34) + -5;
    }
    if ((*(int *)((int)this_ + 0x34) == 0) && (*(int *)((int)this_ + 0x30) != 0)) {
      bea_vcall<uint32_t>(this_, 0x14, 0);
      FUN_004bb7e0(bea_arg(this_), bea_arg(*(undefined4 *)((int)this_ + 0x30)), bea_arg(0));
      *(undefined4 *)((int)this_ + 0x30) = 0;
    }
    if (*(int *)((int)this_ + 0x34) == *(int *)((int)this_ + 0x28)) {
      *(undefined4 *)((int)this_ + 0x28) = *(undefined4 *)((int)this_ + 0x2c);
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004bb4b0, ap_004bb4b0));
