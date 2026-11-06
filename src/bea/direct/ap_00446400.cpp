// auto-ported from 00446400_FUN_00446400.c (FUN_00446400, 122 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (1 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008a9d9c GLOBAL_AT(int, 0x008a9d9c)
typedef uint32_t (BEA_THISCALL* FUN_00445570_t)(uint32_t);
static const bea_guard<FUN_00445570_t> FUN_00445570 = {(FUN_00445570_t)0x00445570};
typedef int32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};
typedef uint32_t (BEA_THISCALL* FUN_004fcec0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fcec0_t> FUN_004fcec0 = {(FUN_004fcec0_t)0x004fcec0};

static void BEA_THISCALL ap_00446400(void * this_)
{
  int iVar1;
  uint uVar2;
  
  if (*(int *)((int)this_ + 0x68) == 0) {
    *(undefined4 *)((int)this_ + 0x68) = 1;
    uVar2 = FUN_004de8d0(bea_arg(DAT_008a9d9c));
    uVar2 = uVar2 & 0x8000ffff;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xffff0000) + 1;
    }
    *(float *)((int)this_ + 0x70) = (float)(int)uVar2 * 3.8146973e-05f + 15.0f;
    FUN_00445570(bea_arg(*(void **)((int)this_ + 8)));
  }
  iVar1 = *(int *)((int)this_ + 0xc);
  if (iVar1 != 0) {
    FUN_004fcec0(bea_arg(*(void **)((int)this_ + 8)), bea_arg(*(undefined4 *)(iVar1 + 0x1c)), bea_arg(*(undefined4 *)(iVar1 + 0x20)), bea_arg(*(undefined4 *)(iVar1 + 0x24)), bea_arg(*(undefined4 *)(iVar1 + 0x28)));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00446400, ap_00446400));
