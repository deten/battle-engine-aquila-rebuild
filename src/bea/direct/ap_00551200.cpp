// auto-ported from 00551200_FUN_00551200.c (FUN_00551200, 239 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x70: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00888a50 GLOBAL_AT(undefined4*, 0x00888a50)

static uint32_t BEA_THISCALL ap_00551200(void * this_, int param_1, int param_2)
{
  int iVar1;
  int *piVar2;
  alignas(16) uint8_t bea_frame_[0x70] = {};   // the original stack frame (emulate_frame)
  int (&local_68)[5] = *reinterpret_cast<int (*)[5]>(bea_frame_ + 0x70 - 0x68);
  int &local_54 = *reinterpret_cast<int *>(bea_frame_ + 0x70 - 0x54);
  int &local_50 = *reinterpret_cast<int *>(bea_frame_ + 0x70 - 0x50);
  int &local_4c = *reinterpret_cast<int *>(bea_frame_ + 0x70 - 0x4c);
  int &local_44 = *reinterpret_cast<int *>(bea_frame_ + 0x70 - 0x44);
  int &local_40 = *reinterpret_cast<int *>(bea_frame_ + 0x70 - 0x40);
  int &local_3c = *reinterpret_cast<int *>(bea_frame_ + 0x70 - 0x3c);
  int &local_34 = *reinterpret_cast<int *>(bea_frame_ + 0x70 - 0x34);
  int &local_30 = *reinterpret_cast<int *>(bea_frame_ + 0x70 - 0x30);
  int &local_2c = *reinterpret_cast<int *>(bea_frame_ + 0x70 - 0x2c);
  int &local_28 = *reinterpret_cast<int *>(bea_frame_ + 0x70 - 0x28);
  int &local_24 = *reinterpret_cast<int *>(bea_frame_ + 0x70 - 0x24);
  int &local_20 = *reinterpret_cast<int *>(bea_frame_ + 0x70 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0x1c);
  float &local_c = *reinterpret_cast<float *>(bea_frame_ + 0x70 - 0xc);
  piVar2 = local_68;
  for (iVar1 = 0x1a; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  piVar2 = (int *)((int)this_ + param_1 * 0x5c);
  iVar1 = *piVar2;
  if ((iVar1 == 0) || ((iVar1 != 1 && (iVar1 == 2)))) {
    local_68[0] = 3;
  }
  else {
    local_68[0] = 1;
  }
  local_34 = piVar2[1];
  local_30 = piVar2[2];
  local_2c = piVar2[3];
  local_28 = piVar2[5];
  local_24 = piVar2[6];
  local_20 = piVar2[7];
  local_68[1] = piVar2[9];
  local_68[2] = piVar2[10];
  local_68[3] = piVar2[0xb];
  local_1c = bea_fcast<float>(piVar2[0xc]);
  local_54 = piVar2[9];
  local_50 = piVar2[10];
  local_4c = piVar2[0xb];
  local_c = 1.0f / (local_1c * local_1c * 0.05f);
  if (param_2 == 1) {
    local_44 = piVar2[9];
    local_40 = piVar2[10];
    local_3c = piVar2[0xb];
  }
  return bea_vcall<uint32_t>(DAT_00888a50, 0xcc, DAT_00888a50,param_1,local_68);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00551200, ap_00551200));
