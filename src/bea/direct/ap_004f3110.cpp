// auto-ported from 004f3110_FUN_004f3110.c (FUN_004f3110, 266 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_0063316c GLOBAL_AT(int, 0x0063316c)
typedef void * (BEA_CDECL* FUN_0055e490_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0055e490_t> FUN_0055e490 = {(FUN_0055e490_t)0x0055e490};
typedef int (BEA_CDECL* FUN_0055e4a3_t)(uint32_t);
static const bea_guard<FUN_0055e4a3_t> FUN_0055e4a3 = {(FUN_0055e4a3_t)0x0055e4a3};
typedef unsigned int (BEA_CDECL* FUN_0055f16e_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055f16e_t> FUN_0055f16e = {(FUN_0055f16e_t)0x0055f16e};

static undefined4 BEA_CDECL ap_004f3110(int param_1, int param_2, int param_3, int param_4, int param_5)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  undefined1 &local_14 = *reinterpret_cast<undefined1 *>(bea_frame_ + 0x20 - 0x14);
  undefined1 &local_13 = *reinterpret_cast<undefined1 *>(bea_frame_ + 0x20 - 0x13);
  undefined1 &local_12 = *reinterpret_cast<undefined1 *>(bea_frame_ + 0x20 - 0x12);
  undefined2 &local_c = *reinterpret_cast<undefined2 *>(bea_frame_ + 0x20 - 0xc);
  undefined2 &local_a = *reinterpret_cast<undefined2 *>(bea_frame_ + 0x20 - 0xa);
  undefined2 &local_8 = *reinterpret_cast<undefined2 *>(bea_frame_ + 0x20 - 0x8);
  undefined2 &local_6 = *reinterpret_cast<undefined2 *>(bea_frame_ + 0x20 - 0x6);
  undefined1 &local_4 = *reinterpret_cast<undefined1 *>(bea_frame_ + 0x20 - 0x4);
  undefined1 &local_3 = *reinterpret_cast<undefined1 *>(bea_frame_ + 0x20 - 0x3);
  local_14 = 0;
  local_13 = 0;
  local_12 = 2;
  local_c = 0;
  local_a = 0;
  local_8 = (undefined2)param_3;
  local_6 = (undefined2)param_4;
  local_4 = 0x18;
  local_3 = 0;
  iVar1 = FUN_0055e490(bea_arg(param_1), bea_arg(&DAT_0063316c));
  if (iVar1 != 0) {
    FUN_0055f16e(bea_arg(&local_14), bea_arg(0x12), bea_arg(1), bea_arg(iVar1));
    iVar2 = (int)(param_5 + (param_5 >> 0x1f & 3U)) >> 2;
    if (0 < param_4) {
      param_1 = param_4;
      param_4 = (param_4 * 4 + -4) * iVar2 + 2 + param_2;
      do {
        iVar3 = param_3;
        iVar4 = param_4;
        if (0 < param_3) {
          do {
            FUN_0055f16e(bea_arg(iVar4 + -2), bea_arg(1), bea_arg(1), bea_arg(iVar1));
            FUN_0055f16e(bea_arg(iVar4 + -1), bea_arg(1), bea_arg(1), bea_arg(iVar1));
            FUN_0055f16e(bea_arg(iVar4), bea_arg(1), bea_arg(1), bea_arg(iVar1));
            iVar3 = iVar3 + -1;
            iVar4 = iVar4 + 4;
          } while (BEA_LOOP_GUARD((iVar3 != 0)));
        }
        param_4 = param_4 + iVar2 * -4;
        param_1 = param_1 + -1;
      } while (BEA_LOOP_GUARD((param_1 != 0)));
    }
    FUN_0055e4a3(bea_arg(iVar1));
    return 1;
  }
  return 0;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f3110, ap_004f3110));
