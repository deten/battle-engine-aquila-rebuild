// auto-ported from 00492860_FUN_00492860.c (FUN_00492860, 233 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x60: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef char _2_2_;
#define DAT_007042d0 GLOBAL_AT(undefined4, 0x007042d0)
#define DAT_0089ce88 GLOBAL_AT(int, 0x0089ce88)
typedef uint32_t (BEA_STDCALL* FUN_0053d760_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0053d760_t> FUN_0053d760 = {(FUN_0053d760_t)0x0053d760};

static uint32_t BEA_THISCALL ap_00492860(void * this_, undefined4 param_1, int param_2)
{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  alignas(16) uint8_t bea_frame_[0x60] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_60 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x60);
  undefined4 &local_5c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x5c);
  undefined4 &local_58 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x58);
  undefined4 &local_54 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x54);
  undefined4 &local_50 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x50);
  undefined4 &local_4c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x4c);
  undefined4 &local_48 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x48);
  undefined4 &local_44 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x44);
  undefined4 &local_40 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x40);
  undefined4 &local_3c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x3c);
  undefined4 &local_38 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x38);
  undefined4 &local_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x34);
  undefined4 uVar5;
  float &local_20 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x20);
  float &local_1c = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x1c);
  undefined4 &local_18 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x60 - 0x18);
  float &local_10 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x10);
  float &local_c = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0xc);
  float &local_8 = *reinterpret_cast<float *>(bea_frame_ + 0x60 - 0x8);
  local_18 = 0;
  iVar1 = 1 << ((byte)*(undefined4 *)((int)this_ + param_2 * 4 + 0x94) & 0x1f);
  local_10 = (float)iVar1 * 0.5f;
  local_20 = (float)((short)param_1 * iVar1) + local_10;
  local_1c = (float)((*(uint16_t*)((char*)&param_1 + 2)) * iVar1) + local_10;
  local_8 = local_10 * 15.0f;
  if (param_2 == 0) {
    iVar2 = -0xff00e0;
  }
  else if (param_2 == 1) {
    iVar2 = -0xffb0;
  }
  else if (param_2 == 2) {
    iVar2 = -0xdfff01;
  }
  else if (param_2 == 3) {
    iVar2 = -0xcf6fd0;
  }
  else if (param_2 == 4) {
    iVar2 = -0xff0001;
  }
  else {
    iVar2 = -0xff01;
    if (param_2 != 5) {
      iVar2 = (*(uint16_t*)((char*)&param_1 + 2)) * iVar1;
    }
  }
  puVar3 = &DAT_007042d0;
  puVar4 = (undefined4 *)&local_60;
  uVar5 = DAT_0089ce88;
  local_c = local_10;
  for (iVar1 = 0xc; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return FUN_0053d760(bea_arg(iVar2), bea_arg(&local_10), bea_arg(&local_20), bea_arg(local_60), bea_arg(local_5c), bea_arg(local_58), bea_arg(local_54), bea_arg(local_50), bea_arg(local_4c), bea_arg(local_48), bea_arg(local_44), bea_arg(local_40), bea_arg(local_3c), bea_arg(local_38), bea_arg(local_34), bea_arg(uVar5));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00492860, ap_00492860));
