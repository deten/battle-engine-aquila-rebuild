// auto-ported from 004a0130_vslot90.c (CMech::vslot90, 184 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CMech;
#define DAT_0062e0d8 GLOBAL_AT(int, 0x0062e0d8)
typedef undefined4 (BEA_THISCALL* FUN_004aa8a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004aa8a0_t> FUN_004aa8a0 = {(FUN_004aa8a0_t)0x004aa8a0};
typedef uint32_t (BEA_THISCALL* FUN_004b0fb0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004b0fb0_t> FUN_004b0fb0 = {(FUN_004b0fb0_t)0x004b0fb0};

static undefined4 BEA_THISCALL ap_004a0130(CMech * this_, undefined4 *param_1)
{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  CMech *pCVar4;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  undefined1 (&auStack_40)[8] = *reinterpret_cast<undefined1 (*)[8]>(bea_frame_ + 0x40 - 0x40);
  undefined4 &uStack_38 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x38);
  undefined1 (&auStack_30)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0x40 - 0x30);
  if (*(int **)(this_ + 0x30) != (int *)0x0) {
    iVar1 = bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
    if (iVar1 != 0) {
      if (*(int **)(this_ + 0x30) == (int *)0x0) {
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = (void *)bea_vcall<uint32_t>(*(int **)(this_ + 0x30), 0x24);
      }
      pvVar2 = (void *)FUN_004aa8a0(bea_arg(pvVar2), bea_arg(&DAT_0062e0d8));
      if (pvVar2 != (void *)0x0) {
        *param_1 = *(undefined4 *)(this_ + 0x1c);
        param_1[1] = *(undefined4 *)(this_ + 0x20);
        param_1[2] = *(undefined4 *)(this_ + 0x24);
        param_1[3] = *(undefined4 *)(this_ + 0x28);
        if (this_ == (CMech *)0x0) {
          pCVar4 = (CMech *)0x0;
        }
        else {
          pCVar4 = this_ + 8;
        }
        uVar3 = FUN_004b0fb0(bea_arg(pvVar2), bea_arg(0), bea_arg(0), bea_arg(0), bea_arg(pCVar4), bea_arg(auStack_30), bea_arg(auStack_40), bea_arg(0), bea_arg(0), bea_arg(0));
        param_1[2] = uStack_38;
        return uVar3;
      }
    }
  }
  *param_1 = *(undefined4 *)(this_ + 0x1c);
  param_1[1] = *(undefined4 *)(this_ + 0x20);
  param_1[2] = *(undefined4 *)(this_ + 0x24);
  param_1[3] = *(undefined4 *)(this_ + 0x28);
  return param_1;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a0130, ap_004a0130));
