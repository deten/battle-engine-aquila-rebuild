// auto-ported from 004198d0_FUN_004198d0.c (FUN_004198d0, 327 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-uninit local_10: never written by the original (stack garbage is copied out); the port stores 0
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00672fd0 GLOBAL_AT(int, 0x00672fd0)
#define DAT_00660588 GLOBAL_AT(undefined4, 0x00660588)
#define s_C__dev_ONSLAUGHT2_Monitor_h_00622b80 ((char*)0x00622b80)
typedef uint32_t (BEA_THISCALL* FUN_00419b00_t)(uint32_t);
static const bea_guard<FUN_00419b00_t> FUN_00419b00 = {(FUN_00419b00_t)0x00419b00};
typedef undefined4 * (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5a80_t> FUN_004e5a80 = {(FUN_004e5a80_t)0x004e5a80};
typedef void * (BEA_THISCALL* FUN_00505d00_t)(uint32_t);
static const bea_guard<FUN_00505d00_t> FUN_00505d00 = {(FUN_00505d00_t)0x00505d00};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void * BEA_THISCALL ap_004198d0(void * this_, int param_1, undefined4 param_2, undefined4 param_3)
{
  undefined3 uVar1;
  void *this_00;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_10 = 0;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  *(undefined ***)this_ = ((void*)0x005d9260);
  *(undefined ***)((int)this_ + 4) = ((void*)0x005d92d4);
  *(undefined4 *)((int)this_ + 8) = 0;
  uStack_3 = 0;
  uVar1 = uStack_3;
  local_4 = 2;
  uStack_3 = 0;
  *(int *)((int)this_ + 0xc) = param_1;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) == 0) {
      this_00 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(0x5e), bea_arg(s_C__dev_ONSLAUGHT2_Monitor_h_00622b80), bea_arg(0x18));
      local_4 = 3;
      if (this_00 == (void *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_00505d00(bea_arg(this_00));
      }
      *(undefined4 *)(param_1 + 4) = uVar2;
      uVar1 = uStack_3;
    }
    uStack_3 = uVar1;
    local_4 = 2;
    FUN_004e5a80(bea_arg(*(void **)(param_1 + 4)), bea_arg((int *)((int)this_ + 0xc)));
    uVar1 = uStack_3;
  }
  uStack_3 = uVar1;
  *(undefined4 *)((int)this_ + 0x10) = param_2;
  *(undefined4 *)((int)this_ + 0x14) = DAT_00672fd0;
  *(undefined4 *)((int)this_ + 0x18) = param_3;
  *(undefined4 *)((int)this_ + 0x1c) = 0;
  *(undefined4 *)((int)this_ + 0x20) = 0;
  *(undefined ***)this_ = ((void*)0x005d92a8);
  *(undefined4 *)((int)this_ + 0x24) = 0;
  *(undefined ***)((int)this_ + 4) = ((void*)0x005d9298);
  (*(uint32_t*)((char*)&local_4)) = CONCAT31(uStack_3,4);
  *(undefined4 *)((int)this_ + 0x28) = local_10;
  puVar4 = &DAT_00660588;
  puVar5 = (undefined4 *)((int)this_ + 0x3c);
  for (iVar3 = 0xc; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_00419b00(bea_arg(this_));
  *(undefined4 *)((int)this_ + 0x2c) = *(undefined4 *)((int)this_ + 0x1c);
  *(undefined4 *)((int)this_ + 0x30) = *(undefined4 *)((int)this_ + 0x20);
  uVar2 = *(undefined4 *)((int)this_ + 0x28);
  *(undefined4 *)((int)this_ + 0x34) = *(undefined4 *)((int)this_ + 0x24);
  puVar4 = (undefined4 *)((int)this_ + 0x3c);
  puVar5 = (undefined4 *)((int)this_ + 0x6c);
  for (iVar3 = 0xc; BEA_LOOP_GUARD((iVar3 != 0)); iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)((int)this_ + 0x38) = uVar2;
  return (void *)(this_);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004198d0, ap_004198d0));
