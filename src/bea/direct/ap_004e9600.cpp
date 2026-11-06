// auto-ported from 004e9600_vslot20.c (CNormalSquad::vslot20, 227 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x40: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (0 direct caller(s) overwrite EAX before reading it; virtual slot siblings are void)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_FASTCALL;
typedef char BEA_THISCALL;
typedef char CNormalSquad;
typedef char CThing;
typedef char Vec3;
#define DAT_006fadc8 GLOBAL_AT(int, 0x006fadc8)
typedef uint32_t (BEA_THISCALL* CThing__vslot20_t)(uint32_t, uint32_t);
static const bea_guard<CThing__vslot20_t> CThing__vslot20 = {(CThing__vslot20_t)0x004f3ce0};
typedef Vec3* (BEA_THISCALL* FUN_00401ee0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00401ee0_t> FUN_00401ee0 = {(FUN_00401ee0_t)0x00401ee0};
typedef Vec3* (BEA_THISCALL* FUN_0040d2c0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040d2c0_t> FUN_0040d2c0 = {(FUN_0040d2c0_t)0x0040d2c0};
typedef float10 (BEA_FASTCALL* FUN_0047eb80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0047eb80_t> FUN_0047eb80 = {(FUN_0047eb80_t)0x0047eb80};

static void BEA_THISCALL ap_004e9600(CNormalSquad * this_, undefined4 param_1)
{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  float10 fVar5;

  alignas(16) uint8_t bea_frame_[0x40] = {};   // the original stack frame (emulate_frame)
  undefined4 &uStack_40 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x40);
  undefined4 &uStack_3c = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x3c);
  float &fStack_38 = *reinterpret_cast<float *>(bea_frame_ + 0x40 - 0x38);
  undefined4 &uStack_34 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x34);
  int &local_30 = *reinterpret_cast<int *>(bea_frame_ + 0x40 - 0x30);
  int &local_2c = *reinterpret_cast<int *>(bea_frame_ + 0x40 - 0x2c);
  undefined4 &local_28 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x40 - 0x28);
  undefined1 (&local_20)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x40 - 0x20);
  undefined1 (&local_10)[16] = *reinterpret_cast<undefined1 (*)[16]>(bea_frame_ + 0x40 - 0x10);
  CThing__vslot20(bea_arg((CThing *)this_), bea_arg(param_1));
  puVar1 = *(undefined4 **)(this_ + 0xa4);
  if (puVar1 == (undefined4 *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)*puVar1;
  }
  while (BEA_LOOP_GUARD((piVar4 != (int *)0x0))) {
    if (*piVar4 != 0) {
      local_30 = piVar4[1];
      iVar2 = piVar4[4];
      local_2c = piVar4[2];
      local_28 = 0;
      uVar3 = FUN_0040d2c0(bea_arg((void *)(iVar2 + 0x3c)), bea_arg(local_10), bea_arg(&local_30));
      FUN_00401ee0(bea_arg((void *)(iVar2 + 0x1c)), bea_arg(local_20), bea_arg(uVar3));
      bea_vcall<uint32_t>(*piVar4, 0x50, local_20);
      iVar2 = *piVar4;
      uStack_40 = *(undefined4 *)(iVar2 + 0x1c);
      uStack_3c = *(undefined4 *)(iVar2 + 0x20);
      fStack_38 = *(float *)(iVar2 + 0x24);
      uStack_34 = *(undefined4 *)(iVar2 + 0x28);
      fVar5 = bea_fcast<float10>(FUN_0047eb80(bea_arg(&DAT_006fadc8), bea_arg(&uStack_40)));
      fStack_38 = bea_fcast<float>(fVar5);
      if (fVar5 < bea_fcast<float10>(*(float *)(piVar4[4] + 0x24))) {
        bea_vcall<uint32_t>(*piVar4, 0x50, &uStack_40);
      }
    }
    puVar1 = (undefined4 *)puVar1[1];
    if (puVar1 == (undefined4 *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)*puVar1;
    }
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004e9600, ap_004e9600));
