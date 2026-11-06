// auto-ported from 00445070_FUN_00445070.c (FUN_00445070, 235 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
typedef uint32_t (BEA_CDECL* FUN_004b4de0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004b4de0_t> FUN_004b4de0 = {(FUN_004b4de0_t)0x004b4de0};
typedef uint32_t (BEA_THISCALL* FUN_004f3ac0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004f3ac0_t> FUN_004f3ac0 = {(FUN_004f3ac0_t)0x004f3ac0};

static uint32_t BEA_THISCALL ap_00445070(void * this_, undefined4 param_1)
{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  int &iStack_3c = *reinterpret_cast<int *>(bea_frame_ + 0x40 - 0x3c);
  int &iStack_38 = *reinterpret_cast<int *>(bea_frame_ + 0x40 - 0x38);
  undefined1 (&auStack_30)[48] = *reinterpret_cast<undefined1 (*)[48]>(bea_frame_ + 0x40 - 0x30);
  piVar1 = *(int **)(*(int *)((int)this_ + 0x10) + 0x30);
  iVar4 = bea_vcall<uint32_t>(piVar1, 0x24);
  iVar6 = 0;
  iStack_3c = 0;
  iStack_38 = 0;
  if (0 < *(int *)(iVar4 + 0x15c)) {
    do {
      iVar2 = *(int *)(*(int *)(iVar4 + 0x160) + iVar6 * 4);
      if ((((iVar2 != 0) &&
           (piVar3 = *(int **)(*(int *)((int)this_ + 4) + *(int *)(iVar2 + 0x88) * 4),
           piVar3 != (int *)0x0)) && (iVar5 = bea_vcall<uint32_t>(piVar3, 0x14), iVar5 == 0)) &&
         ((0.0f < bea_fcast<float>(piVar3[3]) && (iStack_3c < piVar3[0x10])))) {
        iStack_3c = piVar3[0x10];
        iStack_38 = iVar2;
      }
      iVar6 = iVar6 + 1;
    } while (((iVar6 < *(int *)(iVar4 + 0x15c))));
    if (iStack_38 != 0) {
      if (*(int *)((int)this_ + 0x10) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)((int)this_ + 0x10) + 8;
      }
      return FUN_004b4de0(bea_arg(piVar1), bea_arg(iVar4), bea_arg(iStack_38), bea_arg(param_1), bea_arg(auStack_30), bea_arg(0), bea_arg(0));
    }
  }
  return FUN_004f3ac0(bea_arg(*(void **)((int)this_ + 0x10)), bea_arg(param_1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00445070, ap_00445070));
