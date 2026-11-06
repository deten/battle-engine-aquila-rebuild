// auto-ported from 0045cd10_FUN_0045cd10.c (FUN_0045cd10, 205 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (4 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0083d998 GLOBAL_AT(char, 0x0083d998)
typedef uint32_t (BEA_THISCALL* FUN_004a50b0_t)(uint32_t);
static const bea_guard<FUN_004a50b0_t> FUN_004a50b0 = {(FUN_004a50b0_t)0x004a50b0};
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};
typedef uint32_t (BEA_THISCALL* FUN_00549220_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00549220_t> FUN_00549220 = {(FUN_00549220_t)0x00549220};
typedef uint32_t (BEA_THISCALL* FUN_00556f50_t)(uint32_t);
static const bea_guard<FUN_00556f50_t> FUN_00556f50 = {(FUN_00556f50_t)0x00556f50};
typedef uint32_t (BEA_THISCALL* FUN_00556f80_t)(uint32_t);
static const bea_guard<FUN_00556f80_t> FUN_00556f80 = {(FUN_00556f80_t)0x00556f80};

static void BEA_THISCALL ap_0045cd10(void * this_)
{
  void *this_00;
  int iVar1;
  
  iVar1 = *(int *)((int)this_ + 0x148);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x170) = *(int *)(iVar1 + 0x170) + -1;
    this_00 = *(void **)((int)this_ + 0x148);
    if (this_00 != (void *)0x0) {
      FUN_004a50b0(bea_arg(this_00));
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(this_00));
    }
    *(undefined4 *)((int)this_ + 0x148) = 0;
  }
  if (*(int *)((int)this_ + 0x144) != 0) {
    iVar1 = 0;
    if (0 < *(int *)((int)this_ + 0x14c)) {
      do {
        FUN_004f27e0(bea_arg((void *)(*(int *)(*(int *)((int)this_ + 0x144) + iVar1 * 4) + 8)));
        FUN_00556f80(bea_arg(*(void **)(*(int *)((int)this_ + 0x144) + iVar1 * 4)));
        DAT_0083d998 = 1;
        FUN_00556f50(bea_arg(*(void **)(*(int *)((int)this_ + 0x144) + iVar1 * 4)));
        DAT_0083d998 = 0;
        *(undefined4 *)(*(int *)((int)this_ + 0x144) + iVar1 * 4) = 0;
        iVar1 = iVar1 + 1;
      } while (BEA_LOOP_GUARD((iVar1 < *(int *)((int)this_ + 0x14c))));
    }
    if (*(int *)((int)this_ + 0x144) != 0) {
      FUN_00549220(bea_arg(&DAT_009c3df0), bea_arg(*(int *)((int)this_ + 0x144)));
      *(undefined4 *)((int)this_ + 0x144) = 0;
    }
    *(undefined4 *)((int)this_ + 0x14c) = 0;
  }
  *(undefined4 *)((int)this_ + 0x1d8) = 0;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0045cd10, ap_0045cd10));
