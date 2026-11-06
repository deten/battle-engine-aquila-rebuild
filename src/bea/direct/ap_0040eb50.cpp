// auto-ported from 0040eb50_FUN_0040eb50.c (FUN_0040eb50, 147 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008a9a98 GLOBAL_AT(int, 0x008a9a98)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
typedef int (BEA_THISCALL* FUN_004725d0_t)(uint32_t);
static const bea_guard<FUN_004725d0_t> FUN_004725d0 = {(FUN_004725d0_t)0x004725d0};
typedef uint32_t (BEA_THISCALL* FUN_004cb0b0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004cb0b0_t> FUN_004cb0b0 = {(FUN_004cb0b0_t)0x004cb0b0};
typedef uint32_t (BEA_THISCALL* FUN_004e1260_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e1260_t> FUN_004e1260 = {(FUN_004e1260_t)0x004e1260};
typedef int * (BEA_THISCALL* FUN_004e1880_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e1880_t> FUN_004e1880 = {(FUN_004e1880_t)0x004e1880};

static void BEA_THISCALL ap_0040eb50(void * this_)
{
  undefined4 *puVar1;
  int iVar2;
  void *this_00;
  
  if (*(int *)((int)this_ + 0x1e4) != 0) {
    iVar2 = FUN_004725d0(bea_arg(&DAT_008a9a98));
    if (iVar2 != 0) {
      puVar1 = *(undefined4 **)((int)this_ + 0x1d4);
      if (puVar1 == (undefined4 *)0x0) {
        this_00 = (void *)0x0;
      }
      else {
        this_00 = (void *)*puVar1;
      }
      while (BEA_LOOP_GUARD((this_00 != (void *)0x0))) {
        FUN_004cb0b0(bea_arg(this_00), bea_arg(0));
        puVar1 = (undefined4 *)puVar1[1];
        if (puVar1 == (undefined4 *)0x0) {
          this_00 = (void *)0x0;
        }
        else {
          this_00 = (void *)*puVar1;
        }
      }
    }
    iVar2 = FUN_004e1880(bea_arg(&DAT_00896988), bea_arg(*(int *)((int)this_ + 0x59c) + 0x40), bea_arg(this_));
    if ((iVar2 != 0) && (*(int *)((int)this_ + 0x260) == 2)) {
      FUN_004e1260(bea_arg(&DAT_00896988), bea_arg(*(undefined4 *)(iVar2 + 0xc)), bea_arg(0), bea_arg(0x3ca3d70a), bea_arg(this_));
    }
    *(undefined4 *)((int)this_ + 0x1e4) = 0;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0040eb50, ap_0040eb50));
