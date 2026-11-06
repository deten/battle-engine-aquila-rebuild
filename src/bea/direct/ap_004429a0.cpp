// auto-ported from 004429a0_FUN_004429a0.c (FUN_004429a0, 218 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_THISCALL* FUN_0044b370_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b370_t> FUN_0044b370 = {(FUN_0044b370_t)0x0044b370};
typedef int (BEA_CDECL* _rand_t)(void);
static const bea_guard<_rand_t> _rand = {(_rand_t)0x0055dbfe};

static void BEA_THISCALL ap_004429a0(void * this_)
{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  void * &pvStack_4 = *reinterpret_cast<void * *>(bea_frame_ + 0x10 - 0x4);
  puVar1 = *(undefined4 **)((int)this_ + 0x24);
  pvStack_4 = this_;
  if (puVar1 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)*puVar1;
  }
  while (BEA_LOOP_GUARD((piVar4 != (int *)0x0))) {
    iVar2 = bea_vcall<uint32_t>(this_, 0x14);
    if (iVar2 == 0) {
      bea_vcall<uint32_t>(piVar4, 0x20);
    }
    else {
      iVar2 = bea_vcall<uint32_t>(this_, 0x14);
      if (iVar2 == 1) {
        uVar3 = _rand();
        pvStack_4 = (void *)(uintptr_t)bea_piece32(((float)(int)((uVar3 & 0xff) - 0x80) * 0.00390625f + 0.5f + DAT_00672fd0));
      }
      else {
        uVar3 = _rand();
        pvStack_4 = (void *)(uintptr_t)bea_piece32(((float)(int)((uVar3 & 0xff) - 0x80) * 0.00078125f + 0.1f + DAT_00672fd0));
      }
      FUN_0044b370(bea_arg(&DAT_00672fc8), bea_arg(3000), bea_arg(piVar4), bea_arg(&pvStack_4), bea_arg(0), bea_arg(0), bea_arg(0));
    }
    puVar1 = (undefined4 *)puVar1[1];
    if (puVar1 == (undefined4 *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)*puVar1;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004429a0, ap_004429a0));
