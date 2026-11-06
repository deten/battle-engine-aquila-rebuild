// auto-ported from 00534b80_FUN_00534b80.c (FUN_00534b80, 140 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_MissionScript__0064fa40 ((char*)0x0064fa40)
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 * BEA_STDCALL ap_00534b80(undefined4 *param_1, undefined4 param_2, undefined4 *param_3)
{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;

  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  undefined1 (&local_1c)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x20 - 0x1c);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x20 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x4);
  puVar2 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064fa40), bea_arg(0x2f3));
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)bea_vcall<uint32_t>(*param_1, 0x44, local_1c);
    uVar1 = *puVar3;
    *puVar2 = ((void*)0x005e4ea4);
    puVar2[1] = uVar1;
    *param_3 = puVar2;
    return (undefined4 *)(puVar3);
  }
  *param_3 = 0;
  return (undefined4 *)((undefined4 *)0);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00534b80, ap_00534b80));
