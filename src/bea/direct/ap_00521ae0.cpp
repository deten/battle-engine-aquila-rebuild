// auto-ported from 00521ae0_vslot9.c (CFEPWingmen::vslot9, 415 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x20: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CFEPWingmen;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_FEPWingmen_cpp_0063fd4c ((char*)0x0063fd4c)
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static uint32_t BEA_THISCALL ap_00521ae0(CFEPWingmen * this_, void *param_1)
{
  void *this_00;
  int iVar1;
  int *piVar2;
  int iVar3;
  alignas(16) uint8_t bea_frame_[0x20] = {};   // the original stack frame (emulate_frame)
  int &local_20 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x20);
  int &local_1c = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x1c);
  int &local_18 = *reinterpret_cast<int *>(bea_frame_ + 0x20 - 0x18);
  CFEPWingmen * &local_14 = *reinterpret_cast<CFEPWingmen * *>(bea_frame_ + 0x20 - 0x14);
  undefined1 (&local_10)[4] = *reinterpret_cast<undefined1 (*)[4]>(bea_frame_ + 0x20 - 0x10);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x20 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x20 - 0x4);
  local_14 = this_;
  local_20 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x24), bea_arg(0x80), bea_arg(s_C__dev_ONSLAUGHT2_FEPWingmen_cpp_0063fd4c), bea_arg(0xd3));
  iVar3 = 0;
  if (local_20 == 0) {
    local_20 = 0;
  }
  else {
    FUN_004e5840(bea_arg((void *)(local_20 + 0x14)));
  }
  this_00 = param_1;
  FUN_00548570(bea_arg(param_1), bea_arg(&local_18), bea_arg(4));
  FUN_00548570(bea_arg(this_00), bea_arg(local_10), bea_arg(4));
  FUN_00548570(bea_arg(this_00), bea_arg(local_20), bea_arg(4));
  FUN_00548570(bea_arg(this_00), bea_arg(&local_1c), bea_arg(4));
  if (0 < local_1c) {
    do {
      FUN_00548570(bea_arg(this_00), bea_arg(&param_1), bea_arg(1));
      iVar1 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg((char)param_1 + 1), bea_arg(0x80), bea_arg(s_C__dev_ONSLAUGHT2_FEPWingmen_cpp_0063fd4c), bea_arg(0xe7));
      FUN_00548570(bea_arg(this_00), bea_arg(iVar1), bea_arg((int)(char)param_1));
      *(undefined1 *)((char)param_1 + iVar1) = 0;
      piVar2 = (int *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(4), bea_arg(0x80), bea_arg(s_C__dev_ONSLAUGHT2_FEPWingmen_cpp_0063fd4c), bea_arg(0xeb));
      *piVar2 = iVar1;
      FUN_004e5b20(bea_arg((void *)(local_20 + 0x14)), bea_arg(piVar2));
      iVar3 = iVar3 + 1;
    } while (BEA_LOOP_GUARD((iVar3 < local_1c)));
  }
  if (local_18 < 2) {
    *(undefined4 *)(local_20 + 4) = 1;
    *(undefined4 *)(local_20 + 8) = 0;
    *(undefined4 *)(local_20 + 0xc) = 0;
  }
  else {
    FUN_00548570(bea_arg(this_00), bea_arg(local_20 + 4), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(local_20 + 8), bea_arg(4));
    FUN_00548570(bea_arg(this_00), bea_arg(local_20 + 0xc), bea_arg(4));
  }
  if (local_18 < 3) {
    *(undefined4 *)(local_20 + 0x10) = 0;
  }
  else {
    FUN_00548570(bea_arg(this_00), bea_arg(local_20 + 0x10), bea_arg(4));
  }
  return FUN_004e5b20(bea_arg(local_14 + 0x28), bea_arg(local_20));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00521ae0, ap_00521ae0));
