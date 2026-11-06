// auto-ported from 0053bda0_FUN_0053bda0.c (FUN_0053bda0, 148 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
typedef uint32_t (BEA_THISCALL* FUN_00418480_t)(uint32_t);
static const bea_guard<FUN_00418480_t> FUN_00418480 = {(FUN_00418480_t)0x00418480};
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};

static void BEA_THISCALL ap_0053bda0(void * this_)
{
  void *this_00;
  int iVar1;
  int *piVar2;
  
  iVar1 = 2;
  piVar2 = (int *)((int)this_ + 0x3f04);
  do {
    if (piVar2[-0xc1] != 0) {
      FUN_004f27e0(bea_arg((void *)(piVar2[-0xc1] + 8)));
      piVar2[-0xc1] = 0;
    }
    if (*piVar2 != 0) {
      FUN_004f27e0(bea_arg((void *)(*piVar2 + 8)));
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (BEA_LOOP_GUARD((iVar1 != 0)));
  if (*(undefined4 **)((int)this_ + 0x3f0c) != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(*(undefined4 **)((int)this_ + 0x3f0c), 0x0, 1);
    *(undefined4 *)((int)this_ + 0x3f0c) = 0;
  }
  this_00 = *(void **)((int)this_ + 0x3c08);
  if (this_00 != (void *)0x0) {
    FUN_00418480(bea_arg(this_00));
    FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_00));
    *(undefined4 *)((int)this_ + 0x3c08) = 0;
  }
  if (*(undefined4 **)((int)this_ + 0x3f10) != (undefined4 *)0x0) {
    bea_vcall<uint32_t>(*(undefined4 **)((int)this_ + 0x3f10), 0x0, 1);
    *(undefined4 *)((int)this_ + 0x3f10) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0053bda0, ap_0053bda0));
