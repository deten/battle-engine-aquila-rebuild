// auto-ported from 0044ca30_vslot9.c (CFeature::vslot9, 425 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x430: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_STDCALL;
typedef char BEA_THISCALL;
typedef char CActor;
typedef char CFeature;
#define DAT_006fbdfc GLOBAL_AT(float, 0x006fbdfc)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
typedef int (BEA_THISCALL* CActor__vslot9_t)(uint32_t, uint32_t);
static const bea_guard<CActor__vslot9_t> CActor__vslot9 = {(CActor__vslot9_t)0x004011e0};
typedef uint32_t (BEA_THISCALL* FUN_004e1940_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004e1940_t> FUN_004e1940 = {(FUN_004e1940_t)0x004e1940};
typedef uint32_t (BEA_STDCALL* FUN_0050b010_t)(uint32_t);
static const bea_guard<FUN_0050b010_t> FUN_0050b010 = {(FUN_0050b010_t)0x0050b010};
typedef undefined4 * (BEA_CDECL* FUN_00516580_t)(undefined4, ...);
static const bea_guard<FUN_00516580_t> FUN_00516580 = {(FUN_00516580_t)0x00516580};
typedef uint32_t (BEA_STDCALL* FUN_0055db0a_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055db0a_t> FUN_0055db0a = {(FUN_0055db0a_t)0x0055db0a};
typedef uint32_t (BEA_STDCALL* FUN_0055dc20_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0055dc20_t> FUN_0055dc20 = {(FUN_0055dc20_t)0x0055dc20};

static uint32_t BEA_THISCALL ap_0044ca30(CFeature * this_, int param_1)
{
  char cVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  alignas(16) uint8_t bea_frame_[0x430] = {};   // the original stack frame (emulate_frame)
  char (&local_42c)[1024] = *reinterpret_cast<char (*)[1024]>(bea_frame_ + 0x430 - 0x42c);
  CFeature * &local_2c = *reinterpret_cast<CFeature * *>(bea_frame_ + 0x430 - 0x2c);
  undefined4 &local_10 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x430 - 0x10);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x430 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x430 - 0x4);
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x20;
  *(undefined4 *)(param_1 + 0x7c) = 2;
  *(undefined4 *)(param_1 + 0x80) = 2;
  *(undefined4 *)(this_ + 0xe4) = *(undefined4 *)(param_1 + 0x3bc);
  FUN_0055dc20(bea_arg(local_42c), bea_arg(0x41c), bea_arg(1), bea_arg(((void*)0x00403f40)), bea_arg(((void*)0x00403f80)));
  if (this_ == (CFeature *)0x0) {
    local_2c = (CFeature *)0x0;
  }
  else {
    local_2c = this_ + 8;
  }
  if ((char *)**(undefined4 **)(this_ + 0xe4) != (char *)0x0) {
    uVar3 = 0xffffffff;
    pcVar5 = (char *)**(undefined4 **)(this_ + 0xe4);
    do {
      pcVar6 = pcVar5;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (BEA_LOOP_GUARD((cVar1 != '\0')));
    uVar3 = ~uVar3;
    pcVar5 = pcVar6 + -uVar3;
    pcVar6 = local_42c;
    for (uVar4 = uVar3 >> 2; BEA_LOOP_GUARD((uVar4 != 0)); uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar3 = uVar3 & 3; BEA_LOOP_GUARD((uVar3 != 0)); uVar3 = uVar3 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  piVar2 = (int *)FUN_00516580(1);
  *(int **)(this_ + 0x30) = piVar2;
  if (piVar2 != (int *)0x0) {
    bea_vcall<uint32_t>(piVar2, 0x4, local_42c);
  }
  CActor__vslot9(bea_arg((CActor *)this_), bea_arg(param_1));
  *(undefined4 *)(this_ + 0xf0) = 0;
  *(undefined4 *)(this_ + 0xec) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(this_ + 0xe0) = *(undefined4 *)(*(int *)(this_ + 0xe4) + 0x18);
  FUN_0050b010(bea_arg(this_));
  if (DAT_006fbdfc <= *(float *)(this_ + 0x24)) {
    *(undefined4 *)(this_ + 0xe8) = 0;
  }
  else {
    *(undefined4 *)(this_ + 0xe8) = 1;
  }
  if (*(int *)(*(int *)(this_ + 0xe4) + 4) != 0) {
    FUN_004e1940(bea_arg(&DAT_00896988), bea_arg(*(int *)(*(int *)(this_ + 0xe4) + 4)), bea_arg(this_), bea_arg(0x3f333333), bea_arg(2), bea_arg(1), bea_arg(0), bea_arg(0), bea_arg(0xbf800000), bea_arg(1), bea_arg(0x3f800000), bea_arg(1), bea_arg(0));
  }
  return FUN_0055db0a(bea_arg(local_42c), bea_arg(0x41c), bea_arg(1), bea_arg(((void*)0x00403f80)));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0044ca30, ap_0044ca30));
