// auto-ported from 004b7b80_FUN_004b7b80.c (FUN_004b7b80, 282 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (3 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
#define DAT_008a9ac0 GLOBAL_AT(int, 0x008a9ac0)
#define DAT_00672fd0 GLOBAL_AT(float, 0x00672fd0)
#define _DAT_008a9bb0 GLOBAL_AT(float, 0x008a9bb0)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
typedef uint32_t (BEA_STDCALL* CFEPBEConfig__vslot7_t)(uint32_t);
static const bea_guard<CFEPBEConfig__vslot7_t> CFEPBEConfig__vslot7 = {(CFEPBEConfig__vslot7_t)0x00452b60};
typedef uint32_t (BEA_THISCALL* FUN_0044b2d0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0044b2d0_t> FUN_0044b2d0 = {(FUN_0044b2d0_t)0x0044b2d0};
typedef int (BEA_THISCALL* FUN_004b7ab0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004b7ab0_t> FUN_004b7ab0 = {(FUN_004b7ab0_t)0x004b7ab0};
typedef uint32_t (BEA_THISCALL* FUN_004e5bd0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5bd0_t> FUN_004e5bd0 = {(FUN_004e5bd0_t)0x004e5bd0};

static void BEA_THISCALL ap_004b7b80(void * this_)
{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  void * &pvStack_4 = *reinterpret_cast<void * *>(bea_frame_ + 0x10 - 0x4);
  iVar2 = *(int *)((int)this_ + 0x18);
  pvStack_4 = this_;
  while(BEA_LOOP_GUARD(( true ))) {
    if (iVar2 == 0) {
      return;
    }
    if (*(int *)((int)this_ + 8) != 0) {
      return;
    }
    if (*(int *)((int)this_ + 0x30) == 0) {
      return;
    }
    if (*(int *)((int)this_ + 0x2c0) == 0) break;
    if (3 < DAT_008a9ac0) {
      return;
    }
    puVar1 = *(undefined4 **)((int)this_ + 0xc);
    *(undefined4 **)((int)this_ + 0x14) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)*puVar1;
    }
    if ((piVar3[0xe] == 0) || ((piVar3[0xc] != 0 && ((*(byte *)(piVar3[0xc] + 0x2c) & 4) == 0)))) {
      *(int **)((int)this_ + 8) = piVar3;
      *(float *)((int)this_ + 0x1c) = DAT_00672fd0;
      *(undefined4 *)((int)this_ + 0x30) = 0;
      *(undefined4 *)((int)this_ + 0x20) = 0x3f800000;
      *(undefined1 *)((int)this_ + 0x1c0) = 0;
      *(undefined4 *)((int)this_ + 0x24) = 0;
      if (piVar3[0xc] != 0) {
        CFEPBEConfig__vslot7(bea_arg(piVar3 + 0xc));
      }
      iVar2 = FUN_004b7ab0(bea_arg(this_), bea_arg(*(undefined4 *)(*(int *)((int)this_ + 8) + 0x18)));
      *(int *)((int)this_ + 0x1a8) = iVar2;
      *(undefined4 *)((int)this_ + 0x1ac) = 0;
      *(undefined4 *)((int)this_ + 0x1b0) = *(undefined4 *)((int)this_ + iVar2 * 0x18 + 0x34);
      *(float *)((int)this_ + 0x1b4) = DAT_00672fd0;
      *(float *)(*(int *)((int)this_ + 8) + 0x24) = _DAT_008a9bb0 + DAT_00672fd0;
      pvStack_4 = (void *)0x3e4ccccd;
      FUN_0044b2d0(bea_arg(&DAT_00672fc8), bea_arg(&pvStack_4), bea_arg(0xbbc), bea_arg(this_), bea_arg(0), bea_arg(0), bea_arg(0));
      return;
    }
    FUN_004e5bd0(bea_arg((void *)((int)this_ + 0xc)), bea_arg(piVar3));
    if (piVar3 != (int *)0x0) {
      bea_vcall<uint32_t>(piVar3, 0x4, 1);
    }
    iVar2 = *(int *)((int)this_ + 0x18);
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004b7b80, ap_004b7b80));
