// auto-ported from 004cae50_FUN_004cae50.c (FUN_004cae50, 115 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_004c0560_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004c0560_t> FUN_004c0560 = {(FUN_004c0560_t)0x004c0560};
typedef undefined4 (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static int BEA_THISCALL ap_004cae50(void * this_)
{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)((int)this_ + 0x88) != 0) {
    if (*(int **)((int)this_ + 0x5c) != (int *)0x0) {
      iVar1 = bea_vcall<uint32_t>(*(int **)((int)this_ + 0x5c), 0x38, this_);
      iVar2 = 0;
      if (iVar1 == 0) goto LAB_004cae7f;
    }
    iVar2 = FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(undefined4 *)((int)this_ + 0x88)));
  }
LAB_004cae7f:
  if (*(void **)((int)this_ + 0x5c) != (void *)0x0) {
    if ((*(int *)this_ == 0) || (*(int *)((int)this_ + 4) == 0)) {
      iVar2 = FUN_004c0560(bea_arg(*(void **)((int)this_ + 0x5c)), bea_arg(this_));
    }
    else {
      *(int *)(*(int *)this_ + 4) = *(int *)((int)this_ + 4);
      **(undefined4 **)((int)this_ + 4) = *(undefined4 *)this_;
      iVar2 = *(int *)((int)this_ + 0x5c);
      *(undefined4 *)this_ = 0;
      *(undefined4 *)((int)this_ + 4) = 0;
      if (*(void **)(iVar2 + 0x58) == this_) {
        *(undefined4 *)(iVar2 + 0x58) = 0;
        return iVar2;
      }
    }
  }
  return iVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004cae50, ap_004cae50));
