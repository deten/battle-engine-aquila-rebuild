// auto-ported from 00550be0_FUN_00550be0.c (FUN_00550be0, 190 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x80: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (6 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_STDCALL;
typedef void * (BEA_STDCALL* FUN_00576dfd_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00576dfd_t> FUN_00576dfd = {(FUN_00576dfd_t)0x00576dfd};

static void BEA_THISCALL ap_00550be0(void * this_, undefined4 *param_1, undefined4 *param_2)
{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;

  alignas(16) uint8_t bea_frame_[0x80] = {};   // the original stack frame (emulate_frame)
  undefined4 &local_80 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x80);
  undefined4 &local_7c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x7c);
  undefined4 &local_78 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x78);
  undefined4 &local_74 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x74);
  undefined4 &local_70 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x70);
  undefined4 &local_6c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x6c);
  undefined4 &local_68 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x68);
  undefined4 &local_64 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x64);
  undefined4 &local_60 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x60);
  undefined4 &local_5c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x5c);
  undefined4 &local_58 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x58);
  undefined4 &local_54 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x54);
  undefined4 &local_50 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x80 - 0x50);
  undefined4 (&local_4c)[3] = *reinterpret_cast<undefined4 (*)[3]>(bea_frame_ + 0x80 - 0x4c);
  undefined1 (&local_40)[64] = *reinterpret_cast<undefined1 (*)[64]>(bea_frame_ + 0x80 - 0x40);
  local_80 = *param_1;
  local_7c = param_1[1];
  local_78 = param_1[2];
  local_70 = param_1[4];
  local_6c = param_1[5];
  local_68 = param_1[6];
  local_60 = param_1[8];
  local_5c = param_1[9];
  local_58 = param_1[10];
  local_74 = 0;
  local_50 = *param_2;
  local_4c[0] = param_2[1];
  local_4c[1] = param_2[2];
  local_64 = 0;
  local_54 = 0;
  local_4c[2] = 0x3f800000;
  FUN_00576dfd(bea_arg(local_40), bea_arg(0), bea_arg(&local_80));
  *(undefined1 *)((int)this_ + 0xe29) = 1;
  puVar2 = local_4c;
  puVar3 = (undefined4 *)((int)this_ + 0x394);
  for (iVar1 = 0x10; BEA_LOOP_GUARD((iVar1 != 0)); iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00550be0, ap_00550be0));
