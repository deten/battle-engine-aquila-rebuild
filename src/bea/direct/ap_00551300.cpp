// auto-ported from 00551300_FUN_00551300.c (FUN_00551300, 196 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0xe0: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
#define DAT_00888a40 GLOBAL_AT(float, 0x00888a40)
typedef void * (BEA_STDCALL* FUN_00576286_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00576286_t> FUN_00576286 = {(FUN_00576286_t)0x00576286};

static void BEA_THISCALL ap_00551300(void * this_, int param_1, undefined4 param_2, undefined4 *param_3)
{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;

  alignas(16) uint8_t bea_frame_[0xe0] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_d8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0xd8);
  undefined4 &local_d4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0xd4);
  undefined4 &local_d0 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0xd0);
  undefined4 &local_cc = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0xcc);
  undefined4 &local_c8 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0xc8);
  undefined4 &local_c4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0xe0 - 0xc4);
  undefined4 (&local_c0)[16] = *reinterpret_cast<undefined4 (*)[16]>(bea_frame_ + 0xe0 - 0xc0);
  undefined4 (&local_80)[16] = *reinterpret_cast<undefined4 (*)[16]>(bea_frame_ + 0xe0 - 0x80);
  undefined4 (&local_40)[16] = *reinterpret_cast<undefined4 (*)[16]>(bea_frame_ + 0xe0 - 0x40);
  local_cc = param_3[1];
  local_c4 = param_3[5];
  local_c8 = param_3[4];
  local_d8 = param_3[2];
  local_d0 = *param_3;
  puVar2 = (undefined4 *)((int)this_ + 0x354);
  puVar3 = local_c0;
  for (iVar1 = 0x10; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_d4 = param_3[3];
  puVar2 = (undefined4 *)((int)this_ + 0x394);
  puVar3 = local_80;
  for (iVar1 = 0x10; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)((int)this_ + 0x3d4);
  puVar3 = local_40;
  for (iVar1 = 0x10; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00576286(bea_arg(param_1), bea_arg(param_2), bea_arg(&local_d8), bea_arg(local_40), bea_arg(local_80), bea_arg(local_c0));
  *(float *)(param_1 + 4) =
       (*(float *)(param_1 + 4) - (float)(int)param_3[1] * 0.5f) * DAT_00888a40 +
       (float)(int)param_3[1] * 0.5f;
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00551300, ap_00551300));
