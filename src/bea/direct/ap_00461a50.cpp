// auto-ported from 00461a50_FUN_00461a50.c (FUN_00461a50, 245 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_008a1374 GLOBAL_AT(int, 0x008a1374)
#define DAT_00660620 GLOBAL_AT(int, 0x00660620)
typedef int (BEA_THISCALL* FUN_0041b8f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0041b8f0_t> FUN_0041b8f0 = {(FUN_0041b8f0_t)0x0041b8f0};
typedef void * (BEA_THISCALL* FUN_0041b9f0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0041b9f0_t> FUN_0041b9f0 = {(FUN_0041b9f0_t)0x0041b9f0};
typedef bool (BEA_THISCALL* FUN_00465490_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00465490_t> FUN_00465490 = {(FUN_00465490_t)0x00465490};
typedef uint32_t (BEA_THISCALL* FUN_004e5c60_t)(uint32_t);
static const bea_guard<FUN_004e5c60_t> FUN_004e5c60 = {(FUN_004e5c60_t)0x004e5c60};

static undefined4 BEA_STDCALL ap_00461a50(int param_1)
{
  int iVar1;
  void *this_local;
  int *piVar2;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  undefined4 * (&local_1c)[2] = *reinterpret_cast<undefined4 * (*)[2]>(bea_frame_ + 0x20 - 0x1c);
  undefined4 * &local_14 = *reinterpret_cast<undefined4 * *>(bea_frame_ + 0x20 - 0x14);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x20 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x4);
  iVar1 = FUN_00465490(bea_arg(&DAT_008a1374), bea_arg(1));
  if (iVar1 != 0) {
    return 1;
  }
  if (param_1 == 100) {
    return 1;
  }
  this_local = (void *)FUN_0041b8f0(bea_arg(&DAT_00660620), bea_arg(param_1));
  if (this_local != (void *)0x0) {
    FUN_0041b9f0(bea_arg(this_local), bea_arg(local_1c));
    local_14 = local_1c[0];
    if (local_1c[0] == (undefined4 *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)*local_1c[0];
    }
    while (BEA_LOOP_GUARD((piVar2 != (int *)0x0))) {
      if (*piVar2 == 1) {
        FUN_004e5c60(bea_arg(local_1c));
        return 1;
      }
      local_14 = (undefined4 *)local_14[1];
      if (local_14 == (undefined4 *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = (int *)*local_14;
      }
    }
    FUN_004e5c60(bea_arg(local_1c));
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00461a50, ap_00461a50));
