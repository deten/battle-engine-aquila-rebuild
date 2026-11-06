// auto-ported from 004a4450_vslot5.c (CScaleMenuItem::vslot5, 44 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CScaleMenuItem;
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
typedef uint32_t (BEA_THISCALL* FUN_00515a70_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00515a70_t> FUN_00515a70 = {(FUN_00515a70_t)0x00515a70};
typedef undefined4 (BEA_THISCALL* FUN_00540680_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00540680_t> FUN_00540680 = {(FUN_00540680_t)0x00540680};

static int BEA_THISCALL ap_004a4450(CScaleMenuItem * this_)
{
  undefined4 uVar1;
  void *this_00;
  int *piVar2;

  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  int (&aiStack_8)[2] = *reinterpret_cast<int (*)[2]>(bea_frame_ + 0x10 - 0x8);
  piVar2 = aiStack_8;
  uVar1 = bea_vcall<uint32_t>(this_, 0x8);
  this_00 = (void *)FUN_00515a70(bea_arg(&DAT_0088a0a8), bea_arg(1));
  FUN_00540680(bea_arg(this_00), bea_arg(uVar1), bea_arg(piVar2));
  return aiStack_8[0] + 0x6a;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004a4450, ap_004a4450));
